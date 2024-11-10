/*
 * fsm.h
 *
 *  Created on: Nov 10, 2024
 *      Author: ADMIN
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#define MAX_BUFFER_SIZE	30
extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

#endif /* INC_FSM_H_ */
