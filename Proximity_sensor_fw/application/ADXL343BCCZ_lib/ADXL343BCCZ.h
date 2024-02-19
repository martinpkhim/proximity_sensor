/*
 * ADXL343BCCZ.h
 *
 *  Created on: Feb 17, 2024
 *      Author: papai
 */

#ifndef ADXL343BCCZ_LIB_ADXL343BCCZ_H_
#define ADXL343BCCZ_LIB_ADXL343BCCZ_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct ADXL343BCCZ_IO
{
	bool (*fp_spi_write)(uint8_t * wdata, uint32_t size);
	bool (*fp_spi_read)(uint8_t * wdata, uint8_t * rdata, uint32_t wsize, uint32_t rsize);
	bool (*fp_set_cs)(bool state);
	void (*fp_delay)(uint32_t delay);
}ADXL343BCCZ_IO;


bool ADXL343BCCZ_IO_init(ADXL343BCCZ_IO * io_struct);
bool ADXL343BCCZ_init();

#endif /* ADXL343BCCZ_LIB_ADXL343BCCZ_H_ */
