/*
 * ds18b20.h
 *
 *  Created on: 2019��9��4��
 *      Author: YSHUN
 */

#ifndef DS18B20_H_
#define DS18B20_H_

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private defines -----------------------------------------------------------*/
/*  DS18B20ʱ�Ӷ˿ڡ����Ŷ��� */
#define DS18B20_PORT 			GPIOG
#define DS18B20_PIN 			(GPIO_Pin_11)
#define DS18B20_PORT_RCC		RCC_APB2Periph_GPIOG

/* IO�ڲ��� */
#define	DS18B20_DQ_OUT PGout(11) //���ݶ˿�	PG11
#define	DS18B20_DQ_IN  PGin(11)  //���ݶ˿�	PG11

/** @addtogroup DS18B20_Exported_Functions_Group
  * @{
  */
//u8 DS18B20_Init(void);			    /* ��ʼ��DS18B20 */
//float DS18B20_GetTemperture(void);	/* ��ȡ�¶����� */
//void DS18B20_Start(void);		    /* ��ʼת���¶� */
//void DS18B20_Write_Byte(u8 dat);    /* дһ���ֽ� */
//u8 DS18B20_Read_Byte(void);		    /* ��һ���ֽ� */
//u8 DS18B20_Read_Bit(void);		    /* ����һ��λ */
//u8 DS18B20_Check(void);			    /* ���DS18B20�Ƿ���� */
//void DS18B20_Reset(void);			/*��λDS18B20*/

#endif /* DS18B20_H_ */
