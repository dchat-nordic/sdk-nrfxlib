.. _crypto_changelog_nrf_cc3xx_mbedcrypto:

Changelog - nrf_cc3xx_mbedcrypto
################################

.. contents::
   :local:
   :depth: 2

All notable changes to this project are documented in this file.

nrf_cc3xx_mbedcrypto - 0.9.15
*****************************

New version of the runtime library with the following bug fixes and improvements:

* Improved parameter-testing for invalid or empty inputs/outputs.
* Changed the API for PSA Cipher for nrf_cc3xx PSA Crypto driver (now includes ``iv`` and ``iv_length`` parameters).
* Corrected invalid return-codes being reported for some PSA crypto driver APIs.
* Fixed PSA Crypto driver APIs for AES CCM, so it supports multiple calls to add AAD.
* Fixed PSA Crypto driver APIs for ECDH using Montgomery curves, so they support 255-bit curves (from 256-bit curves before).
* Other minor bug fixes.

Library built against Mbed TLS version 3.1.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants
  * ``crypto/nrf_cc312_mbedcrypto/lib/cortex-m33/**/libnrf_cc312_psa_crypto_0.9.15.a``
  * ``crypto/nrf_cc312_mbedcrypto/lib/cortex-m33/**/libnrf_cc312_legacy_crypto_0.9.15.a``
  * ``crypto/nrf_cc312_mbedcrypto/lib/cortex-m33/**/libnrf_cc312_core_0.9.15.a``

* nrf_cc310_mbedcrypto, nRF9160 variants
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m33/**/libnrf_cc310_psa_crypto_0.9.15.a``
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m33/**/libnrf_cc310_legacy_crypto_0.9.15.a``
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m33/**/libnrf_cc310_core_0.9.15.a``

* nrf_cc310_mbedcrypto, nRF52840 variants
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m4/**/libnrf_cc310_psa_crypto_0.9.15.a``
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m4/**/libnrf_cc310_legacy_crypto_0.9.15.a``
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m4/**/libnrf_cc310_core_0.9.15.a``

nrf_cc3xx_mbedcrypto - 0.9.14
*****************************

New version of the runtime library with the following changes:

* Renamed libraries to distinguish between libraries providing PSA crypto APIs or legacy Mbed TLS APIs.
  New library names are ``nrf_cc3xx_psa_crypto`` and ``nrf_cc3xx_legacy_crypto``.
* Added library ``nrf_cc3xx_core`` that holds proprietary and internal APIs.
  The libraries ``nrf_cc3xx_psa_crypto`` and ``nrf_cc3xx_legacy_crypto`` depend on the core library to run.

Library built against Mbed TLS version 3.0.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.


Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants
  * ``crypto/nrf_cc312_mbedcrypto/lib/cortex-m33/**/libnrf_cc312_psa_crypto_0.9.14.a``
  * ``crypto/nrf_cc312_mbedcrypto/lib/cortex-m33/**/libnrf_cc312_legacy_crypto_0.9.14.a``
  * ``crypto/nrf_cc312_mbedcrypto/lib/cortex-m33/**/libnrf_cc312_core_0.9.14.a``

* nrf_cc310_mbedcrypto, nRF9160 variants
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m33/**/libnrf_cc310_psa_crypto_0.9.14.a``
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m33/**/libnrf_cc310_legacy_crypto_0.9.14.a``
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m33/**/libnrf_cc310_core_0.9.14.a``

* nrf_cc310_mbedcrypto, nRF52840 variants
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m4/**/libnrf_cc310_psa_crypto_0.9.14.a``
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m4/**/libnrf_cc310_legacy_crypto_0.9.14.a``
  * ``crypto/nrf_cc310_mbedcrypto/lib/cortex-m4/**/libnrf_cc310_core_0.9.14.a``


nrf_cc3xx_mbedcrypto - 0.9.13
*****************************

New version of the runtime library with the following :

* Added compatibility with Mbed TLS 3.0.0.
* The library now also supports PSA APIs.
* The Mbed TLS SHA-256 API now supports data directly from the flash (only for data <= 128 bytes).

Library built against Mbed TLS version 3.0.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.13.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.13.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.13.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.13.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.13.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.13.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.13.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.13.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.9.13.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.13.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.13.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.13.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.13.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.13.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.13.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.13.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.13.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.13.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.13.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.13.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.13.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.13.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.13.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.13.a``

nrf_cc3xx_mbedcrypto - 0.9.12
*****************************

New version of the runtime library with the following fix:

* Corrected the internal size of mbedtls_cmac_context_t.
  Note that this size was never used by any code.
  This fix is only for consistency.


Library built against Mbed TLS version 2.26.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.12.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.12.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.12.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.12.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.12.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.12.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.12.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.12.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.9.12.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.12.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.12.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.12.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.12.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.12.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.12.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.12.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.12.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.12.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.12.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.12.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.12.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.12.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.12.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.12.a``


nrf_cc3xx_mbedcrypto - 0.9.11
*****************************

New version of the runtime library with the following bug fix:

* Fixed an issue with the locking of mutex in the CTR_DRBG reseed
  and random number generator functions.

Library built against Mbed TLS version 2.26.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.11.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.11.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.11.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.11.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.11.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.11.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.11.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.11.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.9.11.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.11.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.11.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.11.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.11.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.11.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.11.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.11.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.11.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.11.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.11.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.11.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.11.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.11.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.11.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.11.a``


nrf_cc3xx_mbedcrypto - 0.9.10
*****************************

New version of the runtime library with a bugfix:

* Fixed configuration issue that only selected 128-bit keys for CTR_DRBG

Library built against Mbed TLS version 2.26.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.10.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.10.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.10.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.10.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.10.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.10.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.10.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.10.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.10.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.10.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.10.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.10.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.10.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.10.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.10.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.10.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.10.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.10.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.10.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.10.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.10.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.10.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.10.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.10.a``


nrf_cc3xx_mbedcrypto - 0.9.9
****************************

New version of the runtime library with new features:

* Added support for verifying the RSA key length is supported on nRF52840 and nRF9160

Library built against Mbed TLS version 2.25.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.9.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.9.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.9.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.9.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.9.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.9.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.9.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.9.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.9.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.9.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.9.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.9.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.9.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.9.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.9.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.9.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.9.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.9.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.9.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.9.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.9.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.9.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.9.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.9.a``


nrf_cc3xx_mbedcrypto - 0.9.8
****************************

New version of the runtime library with new features:

* Added support for verifying that the input comes from a DMA addressable address for cryptographic functionality that requires this for nRF52840 and nRF9160
  Affected algorithms: AES, ChaCha Poly and SHA.

Library built against Mbed TLS version 2.24.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.8.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.8.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.8.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.8.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.8.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.8.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.8.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.8.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.8.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.8.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.8.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.8.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.8.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.8.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.8.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.8.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.8.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.8.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.8.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.8.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.8.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.8.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.8.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.8.a``


nrf_cc3xx_mbedcrypto - 0.9.7
****************************

New version of the runtime library with bug fixes:

* Fixed issues where `mbedtls_rsa_complete` was not able to deduce missing parameters.
* Fixed an issue with calculating the correct salt length for certain combinations of RSA key and digest sizes.
* Adding missing function `mbedtls_ecp_write_key`.

Library built against Mbed TLS version 2.24.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.7.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.7.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.7.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.7.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.7.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.7.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.7.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.7.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.7.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.7.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.7.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.7.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.7.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.7.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.7.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.7.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.7.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.7.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.7.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.7.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.7.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.7.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.7.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.7.a``


nrf_cc3xx_mbedcrypto - 0.9.6
****************************

New version of the runtime library fixing a regression in derived keys for ECB, CCM, and GCM
Library built against Mbed TLS version 2.24.0.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.6.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.6.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.6.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.6.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.6.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.6.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.6.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.6.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.6.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.6.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.6.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.6.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.6.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.6.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.6.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.6.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.6.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.6.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.6.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.6.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.6.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.6.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.6.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.6.a``


nrf_cc3xx_mbedcrypto - 0.9.5
****************************

New version built against nrf_cc3xx_platform adding correct TRNG categorization for nRF5340 devices.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nRF_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.5.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.5.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.5.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.5.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.5.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.5.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.5.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.5.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.5.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.5.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.5.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.5.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.5.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.5.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.5.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.5.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.5.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.5.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.5.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.5.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.5.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.5.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.5.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.5.a``



nrf_cc3xx_mbedcrypto - 0.9.4
****************************

Fixed bugs in KDR/KMU key derivation functions exposed in mbedtls/cc3xx_kmu.h.

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.


Added
=====

Added a new build of nrf_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.4.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.4.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.4.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.4.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.4.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.4.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.4.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.4.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.4.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.4.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.4.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.4.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.4.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.4.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.4.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.4.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.4.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.4.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.4.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.4.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.4.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.4.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.4.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.4.a``


nrf_cc3xx_mbedcrypto - 0.9.3
****************************

Added experimental support for devices with Arm CryptoCell CC312 (nRF5340).

Added APIs for key derivation of keys stored in the KMU peripheral (nRF9160, nRF5340).
See :file:`include/mbedlts/cc3xx_kmu.h`.

Added APIs for direct usage of keys stored in the KMU peripheral (nRF9160, nRF5340).
See :file:`include/mbedtls/cc3xx_kmu.h`.

Added APIs for key derivation from KDR key loaded into CryptoCell on boot (nRF52840, nRF9160).
See :file:`include/mbedtls/cc3xx_kmu.h`.

Added new version of libraries nrf_cc310_mbedcrypto/nrf_cc312_mbedcrypto built with Mbed TLS version 2.23.0.

This version also adds experimental support for interrupts in selected versions of the library  (the libraries that do not support interrupts can be found in the ``no-interrupts`` folders).

This version is dependent on the nrf_cc310_platform or nrf_cc312_platform library for low-level initialization of the system and proper RTOS integration.


Added
=====

Added a new build of nrf_cc3xx_mbedcrypto libraries for nRF9160, nRF52840, and nRF5340.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc312_mbedcrypto, nRF5340 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.3.a``
  * ``cortex-m33/soft-float/libnrf_cc312_mbedcrypto_0.9.3.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.3.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc312_mbedcrypto_0.9.3.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.3.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc312_mbedcrypto_0.9.3.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.3.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc312_mbedcrypto_0.9.3.a``


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc312_mbedcrypto_0.9.3.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.3.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.3.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.3.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.3.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.3.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.3.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.3.a``


* nrf_cc310_mbedcrypto, nRF52840 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.3.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.3.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.3.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.3.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.3.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.3.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.3.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.3.a``


nrf_cc310_mbedcrypto - 0.9.2
****************************

New experimental version of nrf_cc310_mbedcrypto with fixes for power management issues with pending interrupts.

This version also adds experimental support for interrupts in selected versions of the library  (the libraries that do not support interrupts can be found in the ``no-interrupts`` folders).

This version is dependent on the nrf_cc310_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nrf_cc310_mbedcrypto library for nRF9160 and nRF52 architectures.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.9.2.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.2.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.2.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.2.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.2.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.2.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.2.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.2.a``

* nrf_cc310_mbedcrypto, nRF52 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.2.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.2.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.2.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.2.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.2.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.2.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.2.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.2.a``


nrf_cc310_mbedcrypto - 0.9.1
****************************

New experimental version of nrf_cc310_mbedcrypto with general bug fixes.

This version is dependent on the nrf_cc310_platform library for low-level initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nrf_cc310_mbedcrypto library for nRF9160 and nRF52 architectures.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.9.1.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.1.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.1.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.1.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.1.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.1.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.1.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.1.a``

* nrf_cc310_mbedcrypto, nRF52 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.1.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.1.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.1.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.1.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.1.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.1.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.1.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.1.a``


nrf_cc310_mbedcrypto - 0.9.0
****************************

New experimental version of nrf_cc310_mbedcrypto with general bug fixes.

This version is dependent on the newly added nrf_cc310_platform library for low-level  initialization of the system and proper RTOS integration.

Added
=====

Added a new build of nrf_cc310_mbedcrypto library for nRF9160 and nRF52 architectures.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.9.0.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.9.0.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.0.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.0.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.0.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.0.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.0.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.0.a``

* nrf_cc310_mbedcrypto, nRF52 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.9.0.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.9.0.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.0.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.9.0.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.0.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.9.0.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.0.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.9.0.a``


nrf_cc310_mbedcrypto - 0.8.1
****************************

New experimental version of nrf_cc310_mbedcrypto with general bug fixes.

.. note::
  This version should be used for nRF9160 devices. Use of earlier versions may lead to
  undefined behavior on some nRF9160 devices.

Added
=====

Added a new build of nrf_cc310_mbedcrypto library for nRF9160 and nRF52 architectures.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.8.1.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.8.1.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.8.1.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.8.1.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.8.1.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.8.1.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.8.1.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.8.1.a``

* nrf_cc310_mbedcrypto, nRF52 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.8.1.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.8.1.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.8.1.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.8.1.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.8.1.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.8.1.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.8.1.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.8.1.a``


nrf_cc310_mbedcrypto - 0.8.0
****************************

New experimental version of nrf_cc310_mbedcrypto with changes to platform initialization and general bug fixes.

.. note::
   This version may lead to undefined behavior on some nRF9160 devices.
   Hence, use a newer version.

Added
=====

Added a new build of nrf_cc310_mbedcrypto library for nRF9160 and nRF52 architectures.

.. note::

   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.

* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.8.0.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.8.0.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.8.0.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.8.0.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.8.0.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.8.0.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.8.0.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.8.0.a``

* nrf_cc310_mbedcrypto, nRF52 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.8.0.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.8.0.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.8.0.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.8.0.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.8.0.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.8.0.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.8.0.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.8.0.a``


nrf_cc310_mbedcrypto - 0.7.0
****************************

Initial release.

Added
=====

Added the following nrf_cc310_mbedcrypto libraries for nRF9160 and nRF52 architectures.

.. note::
   The *short-wchar* libraries are compiled with a wchar_t size of 16 bits.


* nrf_cc310_mbedcrypto, nRF9160 variants

  * ``cortex-m33/hard-float/libnrf_cc310_mbedcrypto_0.7.0.a``
  * ``cortex-m33/soft-float/libnrf_cc310_mbedcrypto_0.7.0.a``

  * No interrupts

    * ``cortex-m33/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.7.0.a``
    * ``cortex-m33/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.7.0.a``

  * short-wchar

    * ``cortex-m33/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.7.0.a``
    * ``cortex-m33/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.7.0.a``

  * short-wchar, no interrupts

    * ``cortex-m33/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.7.0.a``
    * ``cortex-m33/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.7.0.a``

* nrf_cc310_mbedcrypto, nRF52 variants

  * ``cortex-m4/soft-float/libnrf_cc310_mbedcrypto_0.7.0.a``
  * ``cortex-m4/hard-float/libnrf_cc310_mbedcrypto_0.7.0.a``

  * No interrupts

    * ``cortex-m4/hard-float/no-interrupts/libnrf_cc310_mbedcrypto_0.7.0.a``
    * ``cortex-m4/soft-float/no-interrupts/libnrf_cc310_mbedcrypto_0.7.0.a``

  * short-wchar

    * ``cortex-m4/soft-float/short-wchar/libnrf_cc310_mbedcrypto_0.7.0.a``
    * ``cortex-m4/hard-float/short-wchar/libnrf_cc310_mbedcrypto_0.7.0.a``

  * short-wchar, no interrupts

    * ``cortex-m4/soft-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.7.0.a``
    * ``cortex-m4/hard-float/short-wchar/no-interrupts/libnrf_cc310_mbedcrypto_0.7.0.a``
