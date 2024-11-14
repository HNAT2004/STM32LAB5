/*
 * command_parser.h
 *
 *  Created on: Nov 14, 2024
 *      Author: ADMIN
 */

#ifndef INC_COMMAND_PARSER_H_
#define INC_COMMAND_PARSER_H_

#include "main.h"

#define MAX_BUFFER_SIZE		30

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void command_parser_fsm(void);

#endif /* INC_COMMAND_PARSER_H_ */
