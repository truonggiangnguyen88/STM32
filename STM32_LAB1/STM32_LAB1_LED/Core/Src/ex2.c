/*
 * ex2.c
 *
 *  Created on: Sep 19, 2024
 *      Author: ASUS
 */



#include "ex2.h"

void ex2_run(void){
	static int led_status = 0;
	static int count = 0;
	count++;
	 switch(led_status){
		        case 0:
		            HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);
		            HAL_GPIO_WritePin(LED_Y_GPIO_Port, LED_Y_Pin, GPIO_PIN_RESET);
		            HAL_GPIO_WritePin(LED_GR_GPIO_Port, LED_GR_Pin, GPIO_PIN_SET);
		            if(count >= 5){
		                led_status = 1;
		                count = 0;
		            }
		            break;
		        case 1:
		            HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
		            HAL_GPIO_WritePin(LED_Y_GPIO_Port, LED_Y_Pin, GPIO_PIN_SET);
		            HAL_GPIO_WritePin(LED_GR_GPIO_Port, LED_GR_Pin, GPIO_PIN_SET);
		            if(count >= 2){
		                led_status = 2;
		                count = 0;
		            }
		            break;
		        case 2:
		        	HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
		        	HAL_GPIO_WritePin(LED_Y_GPIO_Port, LED_Y_Pin, GPIO_PIN_RESET);
		            HAL_GPIO_WritePin(LED_GR_GPIO_Port, LED_GR_Pin, GPIO_PIN_RESET);
		            if(count >= 3){
		            	led_status = 0;
		            	count = 0;
		            }
		            break;
		        default:
		        	break;

	}

}
