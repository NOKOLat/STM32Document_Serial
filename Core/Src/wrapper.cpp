/*
 * wrapper.cpp
 *
 *  Created on: Oct 24, 2023
 *      Author: ohya
 */

#include "wrapper.hpp"

#include "usart.h"
#include <string>


void init(){
	uint8_t str[] = "Hello World";
	HAL_UART_Transmit(&huart2, str,11,100);
}

void loop(){
	static uint16_t count = 0;
	std::string str = "count:"+std::to_string(count++)+"\n";
	HAL_UART_Transmit(&huart2, (uint8_t *)str.c_str(),str.length(),100);
}
