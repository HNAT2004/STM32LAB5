/*
 * fsm.h
 *
 *  Created on: Nov 10, 2024
 *      Author: ADMIN
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#include "main.h"

#define MAX_BUFFER_SIZE	30
extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern char rx_buffer[10];
extern char tx_buffer[20];
extern uint32_t timeout_start;
extern uint8_t wait_for_ok;

UART_HandleTypeDef huart2;
extern uint16_t ADC_value;

//void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void check_timeout(void);

#endif /* INC_FSM_H_ */
