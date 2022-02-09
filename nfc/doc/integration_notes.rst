.. _nfc_integration_notes:

Integration notes
#################

.. contents::
   :local:
   :depth: 2

When integrating the NFC libraries in your application, there are a few things to be aware of.
See the following notes:

* The libraries require the NFCT driver that is a part of the `nrfx`_ repository.

  The NFCT driver uses one Timer peripheral to work correctly.
  By default, it uses TIMER4 on nRF52 devices and TIMER2 on nRF5340.
  You can override the default configuration by changing ``NRFX_NFCT_CONFIG_TIMER_INSTANCE_ID`` in the :file:`nrfx_config.h` header.
  You cannot use this timer instance in other parts of your application.

* To use the libraries in your runtime environment, you must implement an NFC Platform software module.
  See :ref:`nfc_platform` for more information.

  The |NCS| provides an implementation of this module (see :ref:`nfc_platform_ncs`).

* Each library must be the only user of each of the following peripherals:

  * NFCT
  * Chosen TIMER instance

.. _nfc_platform:

NFC Platform module
*******************

The NFC Platform module allows the NFC libraries to operate in different runtime environments.

This module is responsible for activating the NFCT driver when the following conditions are fulfilled:

  * NFC field is present.
  * HFCLK is running.

The module must implement the following functions:

* :c:func:`nfc_platform_setup`
  This function is called by the NFC libraries at initialization.
  It sets up the clock interface and connects NFCT and the chosen TIMER IRQs with their respective IRQ handler functions from nrfx.
  This function is also responsible for saving callback calling function from the library.

* :c:func:`nfc_platform_nfcid1_default_bytes_get`
  This function is used to fetch default bytes for NFCID1 that are stored in FICR registers.
  Access to FICR registers differs between secure and non-secure environments.

* :c:func:`nfc_platform_event_handler`
  This event handler is called by the NFC libraries to forward NFC events received from the NFCT driver.
  It is necessary to track this event flow in order to determine when HFCLK must be running and when it can be stopped.
  The NFCT peripheral can be activated only when HFCLK is running.

  It is recommended to request HFCLK asynchronously with a notification when the clock has been started, and activate the NFCT peripheral after receiving this notification.

* :c:func:`nfc_platform_cb_request`
  This functions is used to call callback calling function from the library.
  The function can call the function directly or schedule its execution using OS specific functions.
  In case of scheduled execution the function should ensure that data passed by NFC library is stored.
  The simplest implementation of this function uses the direct call to callback calling function from library:

  .. code-block:: c

    void nfc_platform_cb_request(void          * ctx,
                                 size_t          ctx_len,
                                 const uint8_t * data,
                                 size_t          data_len,
                                 bool            copy_data);
    {
        nfc_cb_call(ctx, data);
    }

  The parameters ``ctx_len``, ``data_len`` and ``copy_data`` are used when the callback is scheduled for later execution.

  The function can schedule callback execution if the RTOS supports this.
  The algorithm used for scheduling should copy all context data.
  If ``copy_data`` is true the data at pointer ``data`` should be copied and the pointer to the copied data should be passed to the callback.
  Otherwise the original pointer should be passed to the callback.
  The following function is the template for scheduled callback request:

.. code-block:: c

  void nfc_platform_cb_request(void          * ctx,
                               size_t          ctx_len,
                               const uint8_t * data,
                               size_t          data_len,
                               bool            copy_data);
  {
      struct callback_data cb_data;

      cb_data.ctx = malloc(ctx_len);

      memcpy(cb_data.ctx, ctx, ctx_len);

      if (copy_data) {
          cb_data.data = malloc(data_len);
          memcpy(cb_data.data, data, data_len);
      } else {
          cb_data.data = data;
      }

      nfc_fifo_put(cb_data);
      sem_give(nfc_cb_sem);
  }

.. note::
   Some RTOSes restrict the use of kernel functions inside interrupt context.

.. _nfc_platform_ncs:

|NCS| implementation
====================

In the |NCS|, an implementation of the NFC Platform module for the Zephyr environment is provided in the :file:`subsys/nfc/lib/platform.c` file.

The NFC Platform module for the Zephyr environment starts the HFCLK crystal oscillator when it has received the NFC field detect event, and stops it after receiving the field lost event.
HFCLK is activated only for the time when NFC field is present.
The |NCS| implementation allows for the callback to be scheduled for execution as a thread in order to improve interrupt response.

Api documentation
=================

.. doxygengroup:: nfc_platform
   :project: nrfxlib
   :members:
