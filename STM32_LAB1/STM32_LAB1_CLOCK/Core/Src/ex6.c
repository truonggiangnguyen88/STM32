/*
 * ex6.c
 *
 *  Created on: Sep 20, 2024
 *      Author: ASUS
 */



#include "ex6.h"

void ex6_run(void){
	static int status = 1;
	GPIO_TypeDef* LED_Ports[] = {LED_12_GPIO_Port, LED_1_GPIO_Port, LED_2_GPIO_Port, LED_3_GPIO_Port, LED_4_GPIO_Port,
	                             LED_5_GPIO_Port, LED_6_GPIO_Port, LED_7_GPIO_Port, LED_8_GPIO_Port,
	                             LED_9_GPIO_Port, LED_10_GPIO_Port, LED_11_GPIO_Port};
	uint16_t LED_Pins[] = {LED_12_Pin, LED_1_Pin, LED_2_Pin, LED_3_Pin, LED_4_Pin,
	                       LED_5_Pin, LED_6_Pin, LED_7_Pin, LED_8_Pin,
	                       LED_9_Pin, LED_10_Pin, LED_11_Pin};

	for(int i = 0; i < 12; i++){
		HAL_GPIO_WritePin(LED_Ports[i], LED_Pins[i], GPIO_PIN_RESET);
	}

	HAL_GPIO_WritePin(LED_Ports[status - 1], LED_Pins[status - 1], GPIO_PIN_SET);

	status++;
	if(status > 12) status = 1;
}
