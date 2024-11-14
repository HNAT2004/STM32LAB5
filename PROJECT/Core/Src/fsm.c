/*
 * fsm.c
 *
 *  Created on: Nov 10, 2024
 *      Author: ADMIN
 */
#include "fsm.h"
//
//UART_HandleTypeDef huart2;
//char rx_buffer[10];
//char tx_buffer[20];
//uint16_t ADC_value = 1234;
//
//void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
//    if (huart->Instance == USART2){
//        if (strcmp(rx_buffer, "!RST#") == 0){
//            sprintf(tx_buffer, "!ADC=%d#", ADC_value);
//            HAL_UART_Transmit(&huart2,(uint8_t*)tx_buffer, strlen(tx_buffer), HAL_MAX_DELAY);
//        }else if (strcmp(rx_buffer, "!OK#") == 0){
//            HAL_UART_Transmit(&huart2, (uint8_t*)"Communication Ended#", 20, HAL_MAX_DELAY);
//        }
//        HAL_UART_Receive_IT(&huart2, (uint8_t*)rx_buffer, sizeof(rx_buffer) - 1);
//    }
//}
//
//uint32_t timeout_start = 0;
//uint8_t wait_for_ok = 0;
//
//void check_timeout(void){
//    if (wait_for_ok && (HAL_GetTick() - timeout_start > 3000)){
//        HAL_UART_Transmit(&huart2, (uint8_t*)tx_buffer, strlen(tx_buffer), HAL_MAX_DELAY);
//        timeout_start = HAL_GetTick();
//    }
//}
