#ifndef _GC0310_CFG_H_
#define _GC0310_CFG_H_

#include "rda_sensor.h"
#include <linux/delay.h>

#ifdef BIT
#undef BIT
#endif
#define BIT	8

static const struct sensor_reg exp_gc0310[][3] =
{
	{{0xfe,0x01,BIT,0},{0x13,0x30,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x38,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x40,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x50,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x58,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x60,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x68,BIT,0},{0xfe,0x00,BIT,0}},
};

static const struct sensor_reg awb_gc0310[][4] =
{
	{{0x42,0xfd,BIT,0},{0x77,0x57,BIT,0},{0x78,0x4d,BIT,0},{0x79,0x45,BIT,0}},//OFF
	{{0x42,0xfe,BIT,0},{0x77,0x57,BIT,0},{0x78,0x4d,BIT,0},{0x79,0x45,BIT,0}},//AUTO
	{{0x42,0xfd,BIT,0},{0x77,0x48,BIT,0},{0x78,0x40,BIT,0},{0x79,0x5c,BIT,0}},//INCANDESCENT
	{{0x42,0xfd,BIT,0},{0x77,0x40,BIT,0},{0x78,0x42,BIT,0},{0x79,0x50,BIT,0}},//FLUORESCENT
	{{0x42,0xfd,BIT,0},{0x77,0x40,BIT,0},{0x78,0x54,BIT,0},{0x79,0x70,BIT,0}},//TUNGSTEN
	{{0x42,0xfd,BIT,0},{0x77,0x74,BIT,0},{0x78,0x52,BIT,0},{0x79,0x40,BIT,0}},//DAYLIGHT
	{{0x42,0xfd,BIT,0},{0x77,0x8c,BIT,0},{0x78,0x50,BIT,0},{0x79,0x40,BIT,0}},//CLOUD
};

// use this for 640x480 (VGA) capture
static const struct sensor_reg vga_gc0310[] =
{
/*
	{0xfe,0x00,BIT,0},
	//{0x59,0x11,BIT,0},
	{0x50,0x01,BIT,0},
	{0x55,0x01,BIT,0},
	{0x56,0xe0,BIT,0},
	{0x57,0x02,BIT,0},
	{0x58,0x80,BIT,0},
	{0xfe,0x03,BIT,0},
	{0x12,0x00,BIT,0},
	{0x13,0x05,BIT,0},
	{0x04,0x80,BIT,0}, //fifo_pro low 8bit
	{0x05,0x00,BIT,0},
	{0xfe,0x00,BIT,0},
*/
};

// use this for 320x240 (QVGA) capture
static const struct sensor_reg qvga_gc0310[] =
{
	{0xfe,0x00,BIT,0},
	//{0x59,0x22,BIT,0},
	{0x50,0x01,BIT,0},
	{0x55,0x00,BIT,0},
	{0x56,0xf0,BIT,0},
	{0x57,0x01,BIT,0},
	{0x58,0x40,BIT,0},
	{0xfe,0x03,BIT,0},
	{0x12,0x80,BIT,0},
	{0x13,0x02,BIT,0},
	{0x04,0x40,BIT,0}, //fifo_pro low 8bit
	{0x05,0x00,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for 160x120 (QQVGA) capture
static const struct sensor_reg qqvga_gc0310[] =
{
	{0xfe,0x00,BIT,0},
	//{0x59,0x44,BIT,0},
	{0x50,0x01,BIT,0},
	{0x55,0x00,BIT,0},
	{0x56,0x78,BIT,0},
	{0x57,0x00,BIT,0},
	{0x58,0xa0,BIT,0},
	{0xfe,0x03,BIT,0},
	{0x12,0x40,BIT,0},
	{0x13,0x01,BIT,0},
	{0x04,0x20,BIT,0}, //fifo_pro low 8bit
	{0x05,0x00,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for 176x144 (QCIF) capture
static const struct sensor_reg qcif_gc0310[] =
{
	{0xfe,0x00,BIT,0},
	//{0x59,0x22,BIT,0},
	{0x50,0x01,BIT,0},
	{0x55,0x00,BIT,0},
	{0x56,0x90,BIT,0},
	{0x57,0x00,BIT,0},
	{0x58,0xb0,BIT,0},
	{0xfe,0x03,BIT,0},
	{0x12,0x60,BIT,0},
	{0x13,0x01,BIT,0},
	{0x04,0x20,BIT,0}, //fifo_pro low 8bit
	{0x05,0x00,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for init sensor
static const struct sensor_reg init_gc0310[] =
{
	/////////////////////////////////////////////////
	/////////////////	system reg	/////////////////
	/////////////////////////////////////////////////
	{0xfe,0xf0,BIT,0},
	{0xfe,0xf0,BIT,0},
	{0xfe,0x00,BIT,0},
	{0xfc,0x0e,BIT,0},
	{0xfc,0x0e,BIT,0},
	{0xf2,0x80,BIT,0},
	{0xf3,0x00,BIT,0},
	{0xf7,0x1b,BIT,0},
	{0xf8,0x04,BIT,0}, // 0x04 0x05
	{0xf9,0x8e,BIT,0},
	{0xfa,0x11,BIT,0},
	/////////////////////////////////////////////////
	///////////////////   MIPI   ////////////////////
	/////////////////////////////////////////////////
	{0xfe,0x03,BIT,0},
	{0x40,0x08,BIT,0},
	{0x42,0x00,BIT,0},
	{0x43,0x00,BIT,0},
	{0x01,0x03,BIT,0},
	{0x10,0x84,BIT,0},

	{0x01,0x03,BIT,0},
	{0x02,0x22,BIT,0}, // 0x00
	{0x03,0x94,BIT,0},
	{0x04,0x01,BIT,0},
	{0x05,0x00,BIT,0},
	{0x06,0x80,BIT,0},
	{0x11,0x1e,BIT,0},
	{0x12,0x00,BIT,0},
	{0x13,0x05,BIT,0},
	{0x15,0x10,BIT,0},
	{0x21,0x10,BIT,0},
	{0x22,0x01,BIT,0},
	{0x23,0x10,BIT,0},
	{0x24,0x02,BIT,0},
	{0x25,0x10,BIT,0},
	{0x26,0x03,BIT,0},
	{0x29,0x02,BIT,0},
	{0x2a,0x0a,BIT,0},
	{0x2b,0x04,BIT,0},
	{0xfe,0x00,BIT,0},

	/////////////////////////////////////////////////
	/////////////////  CISCTL reg	/////////////////
	/////////////////////////////////////////////////
	{0x00,0x2f,BIT,0},
	{0x01,0x0f,BIT,0},
	{0x02,0x04,BIT,0},
	{0x03,0x03,BIT,0},
	{0x04,0x50,BIT,0},
	{0x09,0x00,BIT,0},
	{0x0a,0x00,BIT,0},
	{0x0b,0x00,BIT,0},
	{0x0c,0x04,BIT,0},
	{0x0d,0x01,BIT,0},
	{0x0e,0xe8,BIT,0},
	{0x0f,0x02,BIT,0},
	{0x10,0x88,BIT,0},
	{0x16,0x00,BIT,0},
	{0x17,0x14,BIT,0},
	{0x18,0x1a,BIT,0},
	{0x19,0x14,BIT,0},
	{0x1b,0x48,BIT,0},
	{0x1e,0x6b,BIT,0},
	{0x1f,0x28,BIT,0},
	{0x20,0x8b,BIT,0},//0x89 travis20140801
	{0x21,0x49,BIT,0},
	{0x22,0xb0,BIT,0},
	{0x23,0x04,BIT,0},
	{0x24,0x16,BIT,0},
	{0x34,0x20,BIT,0},

	/////////////////////////////////////////////////
	////////////////////   BLK	 ////////////////////
	/////////////////////////////////////////////////
	{0x26,0x23,BIT,0},
	{0x28,0xff,BIT,0},
	{0x29,0x00,BIT,0},
	{0x33,0x10,BIT,0},
	{0x37,0x20,BIT,0},
	{0x38,0x10,BIT,0},
	{0x47,0x80,BIT,0},
	{0x4e,0x66,BIT,0},
	{0xa8,0x02,BIT,0},
	{0xa9,0x80,BIT,0},

	/////////////////////////////////////////////////
	//////////////////	ISP reg   ///////////////////
	/////////////////////////////////////////////////
	{0x40,0xff,BIT,0},
	{0x41,0x21,BIT,0},
	{0x42,0xcf,BIT,0},
	{0x44,0x02,BIT,0},
	{0x45,0xa8,BIT,0},
	{0x46,0x02,BIT,0},
	{0x4a,0x11,BIT,0},
	{0x4b,0x01,BIT,0},
	{0x4c,0x20,BIT,0},
	{0x4d,0x05,BIT,0},
	{0x4f,0x01,BIT,0},
	{0x50,0x01,BIT,0},
	{0x55,0x01,BIT,0},
	{0x56,0xe0,BIT,0},
	{0x57,0x02,BIT,0},
	{0x58,0x80,BIT,0},

	/////////////////////////////////////////////////
	///////////////////   GAIN   ////////////////////
	/////////////////////////////////////////////////
	{0x70,0x70,BIT,0},
	{0x5a,0x84,BIT,0},
	{0x5b,0xc9,BIT,0},
	{0x5c,0xed,BIT,0},
	{0x77,0x74,BIT,0},
	{0x78,0x40,BIT,0},
	{0x79,0x5f,BIT,0},

	/////////////////////////////////////////////////
	///////////////////   DNDD  /////////////////////
	/////////////////////////////////////////////////
	{0x82,0x14,BIT,0},
	{0x83,0x0b,BIT,0},
	{0x89,0xf0,BIT,0},

	/////////////////////////////////////////////////
	//////////////////   EEINTP  ////////////////////
	/////////////////////////////////////////////////
	{0x8f,0xaa,BIT,0},
	{0x90,0x8c,BIT,0},
	{0x91,0x90,BIT,0},
	{0x92,0x03,BIT,0},
	{0x93,0x03,BIT,0},
	{0x94,0x05,BIT,0},
	{0x95,0x65,BIT,0},
	{0x96,0xf0,BIT,0},

	/////////////////////////////////////////////////
	/////////////////////  ASDE  ////////////////////
	/////////////////////////////////////////////////
	{0xfe,0x00,BIT,0},

	{0x9a,0x20,BIT,0},
	{0x9b,0x80,BIT,0},
	{0x9c,0x40,BIT,0},
	{0x9d,0x80,BIT,0},

	{0xa1,0x30,BIT,0},
	{0xa2,0x32,BIT,0},
	{0xa4,0x30,BIT,0},
	{0xa5,0x30,BIT,0},
	{0xaa,0x10,BIT,0},
	{0xac,0x22,BIT,0},

	/////////////////////////////////////////////////
	///////////////////   GAMMA   ///////////////////
	/////////////////////////////////////////////////
	{0xfe,0x00,BIT,0},//default
	{0xbf,0x08,BIT,0},
	{0xc0,0x16,BIT,0},
	{0xc1,0x28,BIT,0},
	{0xc2,0x41,BIT,0},
	{0xc3,0x5a,BIT,0},
	{0xc4,0x6c,BIT,0},
	{0xc5,0x7a,BIT,0},
	{0xc6,0x96,BIT,0},
	{0xc7,0xac,BIT,0},
	{0xc8,0xbc,BIT,0},
	{0xc9,0xc9,BIT,0},
	{0xca,0xd3,BIT,0},
	{0xcb,0xdd,BIT,0},
	{0xcc,0xe5,BIT,0},
	{0xcd,0xf1,BIT,0},
	{0xce,0xfa,BIT,0},
	{0xcf,0xff,BIT,0},
	/////////////////////////////////////////////////
	///////////////////   YCP  //////////////////////
	/////////////////////////////////////////////////
	{0xd0,0x40,BIT,0},
	{0xd1,0x34,BIT,0},
	{0xd2,0x34,BIT,0},
	{0xd3,0x40,BIT,0},
	{0xd6,0xf2,BIT,0},
	{0xd7,0x1b,BIT,0},
	{0xd8,0x18,BIT,0},
	{0xdd,0x03,BIT,0},

	/////////////////////////////////////////////////
	////////////////////   AEC   ////////////////////
	/////////////////////////////////////////////////
	{0xfe,0x01,BIT,0},
	{0x05,0x30,BIT,0},
	{0x06,0x75,BIT,0},
	{0x07,0x40,BIT,0},
	{0x08,0xb0,BIT,0},
	{0x0a,0xc5,BIT,0},
	{0x0b,0x11,BIT,0},
	{0x0c,0x00,BIT,0},
	{0x12,0x52,BIT,0},
	{0x13,0x38,BIT,0},
	{0x18,0x95,BIT,0},
	{0x19,0x96,BIT,0},
	{0x1f,0x20,BIT,0},
	{0x20,0xc0,BIT,0},
	{0x3e,0x40,BIT,0},
	{0x3f,0x57,BIT,0},
	{0x40,0x7d,BIT,0},
	{0x03,0x60,BIT,0},
	{0x44,0x02,BIT,0},

	/////////////////////////////////////////////////
	////////////////////   AWB   ////////////////////
	/////////////////////////////////////////////////
	{0x1c,0x91,BIT,0},
	{0x21,0x15,BIT,0},
	{0x50,0x80,BIT,0},
	{0x56,0x04,BIT,0},
	{0x59,0x08,BIT,0},
	{0x5b,0x02,BIT,0},
	{0x61,0x8d,BIT,0},
	{0x62,0xa7,BIT,0},
	{0x63,0xd0,BIT,0},
	{0x65,0x06,BIT,0},
	{0x66,0x06,BIT,0},
	{0x67,0x84,BIT,0},
	{0x69,0x08,BIT,0},
	{0x6a,0x10,BIT,0},//25
	{0x6b,0x01,BIT,0},
	{0x6c,0x00,BIT,0},
	{0x6d,0x02,BIT,0},
	{0x6e,0xf0,BIT,0},
	{0x6f,0x80,BIT,0},
	{0x76,0x80,BIT,0},
	{0x78,0xaf,BIT,0},
	{0x79,0x75,BIT,0},
	{0x7a,0x40,BIT,0},
	{0x7b,0x50,BIT,0},
	{0x7c,0x0c,BIT,0},

	/*{0xa4,0xb9,BIT,0},
	{0xa5,0xa0,BIT,0},
	{0x90,0xc9,BIT,0},
	{0x91,0xbe,BIT,0},

	{0xa6,0xb8,BIT,0},
	{0xa7,0x95,BIT,0},
	{0x92,0xe6,BIT,0},
	{0x93,0xca,BIT,0},

	{0xa9,0xbc,BIT,0},
	{0xaa,0x95,BIT,0},
	{0x95,0x23,BIT,0},
	{0x96,0xe7,BIT,0},

	{0xab,0x9d,BIT,0},
	{0xac,0x80,BIT,0},
	{0x97,0x43,BIT,0},
	{0x98,0x24,BIT,0},

	{0xae,0xb7,BIT,0},
	{0xaf,0x9e,BIT,0},
	{0x9a,0x43,BIT,0},
	{0x9b,0x24,BIT,0},

	{0xb0,0xc8,BIT,0},
	{0xb1,0x97,BIT,0},
	{0x9c,0xc4,BIT,0},
	{0x9d,0x44,BIT,0},

	{0xb3,0xb7,BIT,0},
	{0xb4,0x7f,BIT,0},
	{0x9f,0xc7,BIT,0},
	{0xa0,0xc8,BIT,0},

	{0xb5,0x00,BIT,0},
	{0xb6,0x00,BIT,0},
	{0xa1,0x00,BIT,0},
	{0xa2,0x00,BIT,0},

	{0x86,0x60,BIT,0},
	{0x87,0x08,BIT,0},
	{0x88,0x00,BIT,0},
	{0x89,0x00,BIT,0},
	{0x8b,0xde,BIT,0},
	{0x8c,0x80,BIT,0},
	{0x8d,0x00,BIT,0},
	{0x8e,0x00,BIT,0},

	{0x94,0x55,BIT,0},
	{0x99,0xa6,BIT,0},
	{0x9e,0xaa,BIT,0},
	{0xa3,0x0a,BIT,0},
	{0x8a,0x0a,BIT,0},
	{0xa8,0x55,BIT,0},
	{0xad,0x55,BIT,0},
	{0xb2,0x55,BIT,0},
	{0xb7,0x05,BIT,0},
	{0x8f,0x05,BIT,0},

	{0xb8,0xcc,BIT,0},
	{0xb9,0x9a,BIT,0},*/

	{0x90,0x00,BIT,0},
	{0x91,0x00,BIT,0},
	{0x92,0xff,BIT,0},
	{0x93,0xe6,BIT,0},
	{0x95,0x1b,BIT,0},
	{0x96,0x00,BIT,0},
	{0x97,0x3a,BIT,0},
	{0x98,0x1c,BIT,0},
	{0x9a,0x3b,BIT,0},
	{0x9b,0x1d,BIT,0},
	{0x9c,0x6a,BIT,0},
	{0x9d,0x3c,BIT,0},
	{0x9f,0x00,BIT,0},
	{0xa0,0x00,BIT,0},
	{0xa1,0x00,BIT,0},
	{0xa2,0x00,BIT,0},
	{0x86,0x00,BIT,0},
	{0x87,0x00,BIT,0},
	{0x88,0x00,BIT,0},
	{0x89,0x00,BIT,0},
	{0xa4,0x00,BIT,0},
	{0xa5,0x00,BIT,0},
	{0xa6,0xc3,BIT,0},
	{0xa7,0xa9,BIT,0},
	{0xa9,0xc7,BIT,0},
	{0xaa,0x95,BIT,0},
	{0xab,0xb1,BIT,0},
	{0xac,0x96,BIT,0},
	{0xae,0xbf,BIT,0},
	{0xaf,0xb1,BIT,0},
	{0xb0,0xc9,BIT,0},
	{0xb1,0x98,BIT,0},
	{0xb3,0x00,BIT,0},
	{0xb4,0x00,BIT,0},
	{0xb5,0x00,BIT,0},
	{0xb6,0x00,BIT,0},
	{0x8b,0x00,BIT,0},
	{0x8c,0x00,BIT,0},
	{0x8d,0x00,BIT,0},
	{0x8e,0x00,BIT,0},
	{0x94,0x50,BIT,0},
	{0x99,0xaa,BIT,0},
	{0x9e,0xaa,BIT,0},
	{0xa3,0x00,BIT,0},
	{0x8a,0x00,BIT,0},
	{0xa8,0x50,BIT,0},
	{0xad,0x55,BIT,0},
	{0xb2,0x55,BIT,0},
	{0xb7,0x00,BIT,0},
	{0x8f,0x00,BIT,0},
	{0xb8,0xdd,BIT,0},
	{0xb9,0x80,BIT,0},
	/////////////////////////////////////////////////
	////////////////////   CC    ////////////////////
	/////////////////////////////////////////////////
	{0xfe,0x01,BIT,0},

	{0xd0,0x38,BIT,0},//skin red
	{0xd1,0x00,BIT,0},
	{0xd2,0x02,BIT,0},
	{0xd3,0x04,BIT,0},
	{0xd4,0x38,BIT,0},
	{0xd5,0x12,BIT,0},

	{0xd6,0x30,BIT,0},
	{0xd7,0x00,BIT,0},
	{0xd8,0x0a,BIT,0},
	{0xd9,0x16,BIT,0},
	{0xda,0x39,BIT,0},
	{0xdb,0xf8,BIT,0},

	/////////////////////////////////////////////////
	////////////////////   LSC   ////////////////////
	/////////////////////////////////////////////////
	{0xfe,0x01,BIT,0},
	{0xc1,0x3c,BIT,0},
	{0xc2,0x50,BIT,0},
	{0xc3,0x00,BIT,0},
	{0xc4,0x40,BIT,0},
	{0xc5,0x30,BIT,0},
	{0xc6,0x30,BIT,0},
	{0xc7,0x10,BIT,0},
	{0xc8,0x00,BIT,0},
	{0xc9,0x00,BIT,0},
	{0xdc,0x20,BIT,0},
	{0xdd,0x10,BIT,0},
	{0xdf,0x00,BIT,0},
	{0xde,0x00,BIT,0},

	/////////////////////////////////////////////////
	///////////////////  Histogram	/////////////////
	/////////////////////////////////////////////////
	{0x01,0x10,BIT,0},
	{0x0b,0x31,BIT,0},
	{0x0e,0x50,BIT,0},
	{0x0f,0x0f,BIT,0},
	{0x10,0x6e,BIT,0},
	{0x12,0xa0,BIT,0},
	{0x15,0x60,BIT,0},
	{0x16,0x60,BIT,0},
	{0x17,0xe0,BIT,0},

	/////////////////////////////////////////////////
	//////////////	Measure Window	  ///////////////
	/////////////////////////////////////////////////
	{0xcc,0x0c,BIT,0},
	{0xcd,0x10,BIT,0},
	{0xce,0xa0,BIT,0},
	{0xcf,0xe6,BIT,0},

	/////////////////////////////////////////////////
	/////////////////	dark sun   //////////////////
	/////////////////////////////////////////////////
	{0x45,0xf7,BIT,0},
	{0x46,0xff,BIT,0},
	{0x47,0x15,BIT,0},
	{0x48,0x03,BIT,0},
	{0x4f,0x60,BIT,0},

	//////////////////banding//////////////////////
	{0xfe,0x00,BIT,0},
	{0x05,0x01,BIT,0},
	{0x06,0xdb,BIT,0}, //HB
	{0x07,0x00,BIT,0},
	{0x08,0x68,BIT,0}, //VB
	{0xfe,0x01,BIT,0},
	{0x25,0x00,BIT,0}, //step
	{0x26,0x8b,BIT,0},
	{0x27,0x02,BIT,0}, //25fps
	{0x28,0x2c,BIT,0},
	{0x29,0x03,BIT,0}, //15fps
	{0x2a,0xcd,BIT,0},
	{0x2b,0x05,BIT,0}, //10.6fps
	{0x2c,0x6e,BIT,0},
	{0x2d,0x07,BIT,0}, //5.55fps
	{0x2e,0x0f,BIT,0},
	{0x3c,0x20,BIT,0},
	{0xfe,0x00,BIT,0},

	/////////////////////////////////////////////////
	///////////////////   MIPI	 ////////////////////
	/////////////////////////////////////////////////
	{0xfe,0x03,BIT,0},
	{0x10,0x94,BIT,0},
	{0xfe,0x00,BIT,0},
};

static const struct sensor_reg_list gc0310_init = {
	.size = ARRAY_ROW(init_gc0310),
	.val = init_gc0310
};

static const struct sensor_reg_list gc0310_vga = {
	.size = ARRAY_ROW(vga_gc0310),
	.val = vga_gc0310
};
static const struct sensor_reg_list gc0310_qvga = {
	.size = ARRAY_ROW(qvga_gc0310),
	.val = qvga_gc0310
};
static const struct sensor_reg_list gc0310_qcif = {
	.size = ARRAY_ROW(qcif_gc0310),
	.val = qcif_gc0310
};
static const struct sensor_reg_list gc0310_qqvga = {
	.size = ARRAY_ROW(qqvga_gc0310),
	.val = qqvga_gc0310
};
static const struct sensor_win_size gc0310_win_size[] = {
	WIN_SIZE("VGA", W_VGA, H_VGA, &gc0310_vga),
	WIN_SIZE("QVGA", W_QVGA, H_QVGA, &gc0310_qvga),
	WIN_SIZE("QCIF", W_QCIF, H_QCIF, &gc0310_qcif),
	WIN_SIZE("QQVGA", W_QQVGA, H_QQVGA, &gc0310_qqvga),
};

static const struct sensor_win_cfg gc0310_win_cfg = {
	.num = ARRAY_ROW(gc0310_win_size),
	.win_size = gc0310_win_size
};

static const struct sensor_csi_cfg gc0310_csi_cfg = {
	.csi_en = true,
	.d_term_en = 5,
	.c_term_en = 5,
	.dhs_settle = 5,
	.chs_settle = 5,
};

static struct sensor_info gc0310_info = {
	.name		= "gc0310_csi",
	.chip_id	= 0xa310,
	.mclk		= 26,
	.i2c_addr	= 0x21,
	.exp_def	= 0,
	.awb_def	= 1,
	.rst_act_h	= false,
	.pdn_act_h	= true,
	.init		= &gc0310_init,
	.win_cfg	= &gc0310_win_cfg,
	.csi_cfg	= &gc0310_csi_cfg
};

extern void sensor_power_down(bool high, bool acth, int id);
extern void sensor_reset(bool rst, bool acth);
extern void sensor_clock(bool out, int mclk);
extern void sensor_read(const u16 addr, u8 *data, u8 bits);
extern void sensor_write(const u16 addr, const u8 data, u8 bits);
extern void sensor_write_group(struct sensor_reg* reg, u32 size);

static u32 gc0310_power(int id, int mclk, bool rst_h, bool pdn_h)
{
	/* set state to power off */
	sensor_power_down(true, pdn_h, 0);
	mdelay(1);
	sensor_power_down(true, pdn_h, 1);
	mdelay(1);
	sensor_reset(true, rst_h);
	mdelay(1);

	/* power on sequence */
	sensor_clock(true, mclk);
	mdelay(1);
	sensor_power_down(false, pdn_h, id);
	mdelay(1);
	sensor_reset(false, rst_h);
	mdelay(10);

	return 0;
}

static u32 gc0310_get_chipid(void)
{
	u16 chip_id = 0;
	u8 tmp;

	sensor_read(0xf0, &tmp, BIT);
	chip_id = (tmp << 8) & 0xff00;
	sensor_read(0xf1, &tmp, BIT);
	chip_id |= (tmp & 0xff);
	printk("%s   chipid = 0x%4x\n",__func__,chip_id);

	return chip_id;
}

static u32 gc0310_get_lum(void)
{
	u8 val = 0;
	u32 ret = 0;

	sensor_write(0xfe, 0x01, BIT);
	sensor_read(0x14, &val, BIT);
	sensor_write(0xfe, 0x00, BIT);

	if (val < 0x30)
		ret = 1;

	return ret;
}

#define GC0310_FLIP_BASE	0x17
#define GC0310_H_FLIP_BIT	0
#define GC0310_V_FLIP_BIT	1
static void gc0310_set_flip(int hv, int flip)
{
	u8 tmp = 0;

	sensor_read(GC0310_FLIP_BASE, &tmp, BIT);

	if (hv) {
		if (flip)
			tmp |= (0x1 << GC0310_V_FLIP_BIT);
		else
			tmp &= ~(0x1 << GC0310_V_FLIP_BIT);
	}
	else {
		if (flip)
			tmp |= (0x1 << GC0310_H_FLIP_BIT);
		else
			tmp &= ~(0x1 << GC0310_H_FLIP_BIT);
	}

	sensor_write(GC0310_FLIP_BASE, tmp, BIT);
}

#define GC0310_EXP_ROW		ARRAY_ROW(exp_gc0310)
#define GC0310_EXP_COL		ARRAY_COL(exp_gc0310)
static void gc0310_set_exp(int exp)
{
	int key = exp + (GC0310_EXP_ROW / 2);
	if ((key < 0) || (key > (GC0310_EXP_ROW - 1)))
		return;

	sensor_write_group(exp_gc0310[key], GC0310_EXP_COL);
}

#define GC0310_AWB_ROW		ARRAY_ROW(awb_gc0310)
#define GC0310_AWB_COL		ARRAY_COL(awb_gc0310)
static void gc0310_set_awb(int awb)
{
	if ((awb < 0) || (awb > (GC0310_AWB_ROW - 1)))
		return;

	sensor_write_group(awb_gc0310[awb], GC0310_AWB_COL);
}

static struct sensor_ops gc0310_ops = {
	.power		= gc0310_power,
	.get_chipid	= gc0310_get_chipid,
	.get_lum	= gc0310_get_lum,
	.set_flip	= gc0310_set_flip,
	.set_exp	= gc0310_set_exp,
	.set_awb	= gc0310_set_awb,
	.start		= NULL,
	.stop		= NULL
};

struct sensor_dev gc0310_dev = {
	.info	= &gc0310_info,
	.ops	= &gc0310_ops,
};

#undef BIT
#endif