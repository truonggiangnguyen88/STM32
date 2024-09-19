/*
 * ex1.c
 *
 *  Created on: Sep 19, 2024
 *      Author: ASUS
 */

#include "ex1.h"
void ex1_run(void){
	static int led_status = 0;
	static int count = 0;
	count++;
	 switch(led_status){
		        case 0:
		            HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);
		            HAL_GPIO_WritePin(LED_Y_GPIO_Port, LED_Y_Pin, GPIO_PIN_RESET);
		            if(count >= 2){
		                led_status = 1;
		                count = 0;
		            }
		            break;
		        case 1:
		            HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
		            HAL_GPIO_WritePin(LED_Y_GPIO_Port, LED_Y_Pin, GPIO_PIN_SET);
		            if(count >= 2){
		                led_status = 0;
		                count = 0;
		            }
		            break;
		        default:
		        	break;
		    }


}
