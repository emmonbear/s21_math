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

#define DEBUG  ///< Uncomment to display the bits.

#include <ieee754.h>
#include <stdio.h>

#define S21_IS_NAN(x) (x != x)  ///< Check value is Not a Number (NaN).
#define S21_IS_INF(x) (x == S21_INF || x == -S21_INF)  ///< Check value for inf.

void print_bits_double(double x);
void print_bits(unsigned int x, int size);
void s21_test_print(long double original_func, long double implementation);

#endif  // S21_DEBUG_H_