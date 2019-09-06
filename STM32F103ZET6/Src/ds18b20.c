#include "ds18b20.h"


void DS18B20_IO_IN(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	GPIO_InitStructure.Pin = DS18B20_PIN;
	GPIO_InitStructure.Mode = GPIO_MODE_INPUT;
	GPIO_InitStructure.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(DS18B20_PORT, &GPIO_InitStructure);
}
