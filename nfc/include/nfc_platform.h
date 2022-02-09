/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef NFC_PLATFORM_H__
#define NFC_PLATFORM_H__

/** @file
 *
 * @addtogroup nfc_api
 *
 * @defgroup nfc_platform Platform-specific module for NFC
 * @{
 * @ingroup nfc_api
 * @brief Platform-specific module for Near Field Communication Tag (NFCT).
 *
 * This module is used to set up platform-specific components that are required for NFC, and to
 * activate NFCT peripheral when all necessary conditions are fulfilled.
 *
 * @note Before the NFCT peripheral enters the ACTIVATED state, the HFXO must be running. To fulfill
 *       this requirement, this module uses the clock management module.
 *
 */

#include <stdbool.h>
#include "nrfx_nfct.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Callback resolution function pointer.
 *
 * The function pointed to by the pointer resolves the input context and passes
 * the resolved data to the user callback function.
 *
 * @param[in] p_ctx Pointer to context data for the callback.
 * @param[in] p_data Pointer to data passed to the callback.
 */
typedef void (* nfc_lib_cb_resolve_t)(const void * p_ctx, const uint8_t * p_data);

/**
 * @brief Function for initializing platform-specific modules required by NFC.
 *
 * This function sets up clock managing interface, interrupts, callback
 * and other platform-specific components that are required for NFC.
 * The function should save the nfc_lib_cb_call function pointer.
 *
 * @param[in] nfc_lib_cb_call Pointer to the callback resolution function.
 *
 * @retval NRFX_SUCCESS If the NFC module is initialized successfully. If one
 *                      of the arguments is invalid, an error code is returned.
 */
nrfx_err_t nfc_platform_setup(nfc_lib_cb_resolve_t nfc_lib_cb_resolve);


/**
 * @brief Function for getting default bytes for NFCID1.
 *
 * @param[in,out] p_nfcid1_buff    In:  empty buffer for data;
 *                                 Out: buffer with the NFCID1 default data. These values
 *                                      can be used to fill the Type 2 Tag Internal Bytes.
 * @param[in]     nfcid1_buff_len  Length of the NFCID1 buffer.
 *
 * @retval NRFX_SUCCESS              The operation was successful.
 * @retval NRFX_ERROR_INVALID_LENGTH Length of the NFCID buffer is different than
 *                                   @ref NRFX_NFCT_NFCID1_SINGLE_SIZE,
 *                                   @ref NRFX_NFCT_NFCID1_DOUBLE_SIZE, or
 *                                   @ref NRFX_NFCT_NFCID1_TRIPLE_SIZE.
 */
nrfx_err_t nfc_platform_nfcid1_default_bytes_get(uint8_t * const p_nfcid1_buff,
                                                 uint32_t        nfcid1_buff_len);


/**
 * @brief Function for handling NFCT events that require platform-specific actions.
 *
 * This function is used by the NFC platform module to observe NFC events. This event flow is
 * necessary to track in order to determine when HFXO must be running and when the NFCT peripheral must
 * be activated.
 *
 * @param[in] p_event NFCT driver event.
 */
void nfc_platform_event_handler(nrfx_nfct_evt_t const * p_event);


/**
 * @brief Function for requesting NFC callback.
 *
 * This function requests for a NFC callback. The function can call the callback
 * directly or perform platform-specific tasks before calling the callback.
 *
 * In case of a direct call to callback resolution function, the ctx_len and data_len
 * parameters can be ignored.
 *
 * @param[in] p_ctx Pointer to context data for the callback.
 * @param[in] ctx_len Length of the context.
 * @param[in] p_data Pointer to data passed to the callback.
 * @param[in] data_len Length of the data.
 * @param[in] copy_data Boolean value indicating whether or not to copy data to a buffer.
 */
void nfc_platform_cb_request(const void    * p_ctx,
                             size_t          ctx_len,
                             const uint8_t * p_data,
                             size_t          data_len,
                             bool            copy_data);

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* NFC_PLATFORM_H__ */
