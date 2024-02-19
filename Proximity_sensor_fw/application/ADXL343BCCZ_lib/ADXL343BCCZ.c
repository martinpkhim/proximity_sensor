/*
 * ADXL343BCCZ.c
 *
 *  Created on: Feb 17, 2024
 *      Author: papai
 */

#include "ADXL343BCCZ.h"

#define	ADXL343BCCZ_REG_DEVID		(0x00)


ADXL343BCCZ_IO * local_fps = NULL;

/**
 * @brief
 *
 * @param io_struct
 * @return
 */
bool ADXL343BCCZ_IO_init(ADXL343BCCZ_IO * io_struct)
{
	bool result = true;

	if(io_struct != NULL)
		local_fps = io_struct;
	else
		result = false;

	return result;
}

/**
 * @brief
 *
 * @return
 */
bool ADXL343BCCZ_init()
{
	bool result = true;

	uint8_t write_buffer[4] = {ADXL343BCCZ_REG_DEVID};
	uint8_t read_buffer[4]	= {0};

	local_fps->fp_set_cs(false);
	local_fps->fp_spi_read(write_buffer, read_buffer, 1, 1);
	local_fps->fp_set_cs(true);

	return result;
}
