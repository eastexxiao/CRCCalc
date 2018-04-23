#pragma once
#ifndef crc_h
#define crc_h

#include <stdio.h>
#include <inttypes.h>

typedef enum _CRCTYPE {
	CRC_5_BTM,
	CRC_4_ITU,
	CRC_5_EPC,
	CRC_5_ITU,
	CRC_5_USB,
	CRC_6_ITU,
	CRC_7_MMC,
	CRC_8,
	CRC_8_ITU,
	CRC_8_ROHC,
	CRC_8_MAXIM,
	CRC_16_IBM,
	CRC_16_MAXIM,
	CRC_16_USB,
	CRC_16_MODBUS,
	CRC_16_CCITT,
	CRC_16_CCITT_FALSE,
	CRC_16_BTM,
	CRC_16_X25,
	CRC_16_XMODEM,
	CRC_16_DNP,
	CRC_32,
	CRC_32_MPEG_2,
	CRC_32_BTM

}CRC_TYPE_E;

int DoCRCCalc(const uint8_t* in, const uint8_t* out, size_t length, const CRC_TYPE_E type);

#endif /* crc_h */