/* drivers/sharp/shdisp/data/shdisp_ae_data_pa24.h (Display Driver)
 *
 * Copyright (C) 2013 SHARP CORPORATION
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef SHDISP_AE_DATA_H
#define SHDISP_AE_DATA_H

#define SHDISP_CLMR_AE_PARAM_SIZE                       68
#define SHDISP_CLMR_FWCMD_LIGHTCTL_WRITE_SIZE_FOR_AE    3

static const unsigned char ae_param[SHDISP_CLMR_AE_PARAM_SIZE][SHDISP_CLMR_FWCMD_LIGHTCTL_WRITE_SIZE_FOR_AE] = {
    {0x5E, 0xC2, 0x00},
    {0x5F, 0xC2, 0x00},
    {0x60, 0x80, 0x00},
    {0x61, 0x00, 0x00},
    {0x62, 0x92, 0x00},
    {0x63, 0x4B, 0x57},
    {0x64, 0xAA, 0x51},
    {0x65, 0xD0, 0xC2},
    {0x66, 0xB1, 0xBD},
    {0x67, 0x3F, 0x75},
    {0x68, 0xE5, 0x70},
    {0x69, 0xFF, 0xFF},
    {0x6A, 0xFF, 0xFF},
    {0x6B, 0x03, 0x00},
    {0x6C, 0x07, 0x00},
    {0x6D, 0xAA, 0x07},
    {0x6E, 0xC6, 0x05},
    {0x6F, 0x00, 0xF8},
    {0x70, 0x00, 0x00},
    {0x71, 0x00, 0x00},
    {0x72, 0x00, 0x00},
    {0x73, 0x00, 0xF8},
    {0x74, 0x00, 0x00},
    {0x75, 0xFF, 0x00},
    {0x76, 0x01, 0x00},
    {0x77, 0xF8, 0x00},
    {0x78, 0x00, 0x00},
    {0x79, 0xCC, 0x00},
    {0x7A, 0x00, 0x00},
    {0x7B, 0x20, 0xF8},
    {0x7C, 0x01, 0x00},
    {0x7D, 0x20, 0x00},
    {0x7E, 0x00, 0x00},
    {0x7F, 0x40, 0xFF},
    {0x80, 0x01, 0x00},
    {0x81, 0xFF, 0x00},
    {0x82, 0x01, 0x00},
    {0x83, 0xFF, 0x00},
    {0x84, 0x00, 0x00},
    {0x85, 0xED, 0x00},
    {0x86, 0x00, 0x00},
    {0x87, 0x00, 0xF8},
    {0x88, 0x00, 0x00},
    {0x89, 0x00, 0x00},
    {0x8A, 0x00, 0x00},
    {0x8B, 0x00, 0xF8},
    {0x8C, 0x00, 0x00},
    {0x8D, 0xFB, 0x00},
    {0x8E, 0x00, 0x00},
    {0x8F, 0xFF, 0x00},
    {0x90, 0x01, 0x00},
    {0x91, 0xF9, 0x00},
    {0x92, 0x00, 0x00},
    {0x93, 0xA0, 0x07},
    {0x94, 0x00, 0x00},
    {0x95, 0xC0, 0x07},
    {0x96, 0x01, 0x00},
    {0x97, 0x60, 0xF8},
    {0x98, 0x01, 0x00},
    {0x99, 0xF3, 0x00},
    {0x9A, 0x00, 0x00},
    {0x9B, 0xFB, 0x00},
    {0x9C, 0x00, 0x00},
    {0x9D, 0xFF, 0x00},
    {0x9E, 0x01, 0x00},
    {0x9F, 0x05, 0x07},
    {0xA0, 0x14, 0x07},
    {0xA1, 0xD0, 0x07}
};


#endif /* SHDISP_AE_DATA_H */