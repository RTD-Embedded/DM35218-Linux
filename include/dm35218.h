/**
    @file

    @brief
        Defines for the DM35218 (Device-specific values)

    @verbatim
    --------------------------------------------------------------------------
    This file and its contents are copyright (C) RTD Embedded Technologies,
    Inc.  All Rights Reserved.

    This software is licensed as described in the RTD End-User Software License
    Agreement.  For a copy of this agreement, refer to the file LICENSE.TXT
    (which should be included with this software) or contact RTD Embedded
    Technologies, Inc.
    --------------------------------------------------------------------------
    @endverbatim

    $Id: dm35218.h 96214 2016-01-21 20:33:26Z rgroner $
*/

#ifndef __DM35218_H__
#define __DM35218_H__

/**
 * @brief
 * DM35218 PCI vendor ID
 */

#define DM35218_PCI_VENDOR_ID	0x1435

/**
 * @brief
 *     DM35218 PCI device ID
 */
#define DM35218_PCI_DEVICE_ID	0x5218

/**
 * @brief
 *     Number of ADC on the DM35218
 */
#define DM35218_NUM_ADC_ON_BOARD 	4

/**
 * @brief
 *     Number of DAC on the DM35218
 */
#define DM35218_NUM_DAC_ON_BOARD 	4

/**
 * @brief
 *     Number of channels per ADC
 */
#define DM35218_NUM_ADC_DMA_CHANNELS	1

/**
 * @brief
 *     Number of buffers per ADC DMA channel
 */
#define DM35218_NUM_ADC_DMA_BUFFERS		7

/**
 * @brief
 *     Number of channels per DAC
 */
#define DM35218_NUM_DAC_DMA_CHANNELS	1

/**
 * @brief
 *     Number of buffers per DAC DMA channel
 */
#define DM35218_NUM_DAC_DMA_BUFFERS		7

/**
 * @brief
 *     Bit Mask for the gain bits of the FE Config
 */
#define DM35218_DAC_FE_CONFIG_GAIN_MASK		0x03

/**
 * @brief
 *     Sample size of the FIFO
 */
#define DM35218_FIFO_SAMPLE_SIZE		511

/**
 * @brief
 *     Max value of the DAC
 */
#define DM35218_DAC_MAX_VALUE	32767

/**
 * @brief
 *     Min value of the DAC
 */
#define DM35218_DAC_MIN_VALUE	-32768

#endif
