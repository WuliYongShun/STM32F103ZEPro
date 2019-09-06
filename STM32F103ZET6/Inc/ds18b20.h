/*
 * ds18b20.h
 *
 *  Created on: 2019年9月4日
 *      Author: YSHUN
 */

#ifndef DS18B20_H_
#define DS18B20_H_

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private defines -----------------------------------------------------------*/
/*  DS18B20时钟端口、引脚定义 */
#define DS18B20_PORT 			GPIOG
#define DS18B20_PIN 			(GPIO_Pin_11)
#define DS18B20_PORT_RCC		RCC_APB2Periph_GPIOG

/* IO口操作 */
#define	DS18B20_DQ_OUT PGout(11) //数据端口	PG11
#define	DS18B20_DQ_IN  PGin(11)  //数据端口	PG11

/** @addtogroup DS18B20_Exported_Functions_Group
  * @{
  */
//u8 DS18B20_Init(void);			    /* 初始化DS18B20 */
//float DS18B20_GetTemperture(void);	/* 获取温度数据 */
//void DS18B20_Start(void);		    /* 开始转换温度 */
//void DS18B20_Write_Byte(u8 dat);    /* 写一个字节 */
//u8 DS18B20_Read_Byte(void);		    /* 读一个字节 */
//u8 DS18B20_Read_Bit(void);		    /* 读出一个位 */
//u8 DS18B20_Check(void);			    /* 检测DS18B20是否存在 */
//void DS18B20_Reset(void);			/*复位DS18B20*/

#endif /* DS18B20_H_ */
