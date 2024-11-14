/*
 * command_parser.h
 *
 *  Created on: Nov 14, 2024
 *      Author: ADMIN
 */

#ifndef INC_COMMAND_PARSER_H_
#define INC_COMMAND_PARSER_H_

#include "main.h"
#include "string.h"
#include "software_timer.h"
#include "stdio.h"

#define MAX_BUFFER_SIZE		30

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

void command_parser_fsm(void);
void uart_communication_fsm(void);
void clear_buffer(void);

#endif /* INC_COMMAND_PARSER_H_ */
