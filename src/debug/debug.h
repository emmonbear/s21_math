/**
 * @file debug.h
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief debug header
 * @version 1.0
 * @date 2024-01-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef S21_DEBUG_H_
#define S21_DEBUG_H_

#include <ieee754.h>
#include <stdio.h>

void print_bits_double(double x);
void print_bits(unsigned int x, int size);

#endif // S21_DEBUG_H_