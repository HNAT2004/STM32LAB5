/*
 * fsm.c
 *
 *  Created on: Nov 10, 2024
 *      Author: ADMIN
 */
#include "fsm.h"

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
	if(huart->Instance == USART2){
		if(rx_idx == 0){
			for (int i = 0; i < 100; i++){
				rx_buffer[i] = 0;
			}
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
		}
		if (rx_data[0] != 13){
			rx_buffer[rx_idx++] = rx_data[0];
		}else{
			rx_idx = 0;
			transfer_cplt = 1;
			HAL_UART_Transmit(&huart2, "\n\r", 2, 100);
			if (!strcmp(rx_buffer, "LED ON")){
				HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
			}
		}

		HAL_UART_Receive_IT(&huart2, rx_data, 1);
		HAL_UART_Transmit(&huart2, rx_data, strlen(rx_data), 100);
	}
}
