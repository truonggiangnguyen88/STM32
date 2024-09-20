/*
 * ex9.c
 *
 *  Created on: Sep 20, 2024
 *      Author: ASUS
 */


#include "ex9.h"
#include "ex7.h"
void clearNumberOnClock(int num){
	GPIO_TypeDef* LED_Ports[] = {LED_12_GPIO_Port, LED_1_GPIO_Port, LED_2_GPIO_Port, LED_3_GPIO_Port, LED_4_GPIO_Port,
	                             LED_5_GPIO_Port, LED_6_GPIO_Port, LED_7_GPIO_Port, LED_8_GPIO_Port,
	                             LED_9_GPIO_Port, LED_10_GPIO_Port, LED_11_GPIO_Port};
	uint16_t LED_Pins[] = {LED_12_Pin, LED_1_Pin, LED_2_Pin, LED_3_Pin, LED_4_Pin,
	                       LED_5_Pin, LED_6_Pin, LED_7_Pin, LED_8_Pin,
	                       LED_9_Pin, LED_10_Pin, LED_11_Pin};

	HAL_GPIO_WritePin(LED_Ports[num], LED_Pins[num], GPIO_PIN_RESET);
}

