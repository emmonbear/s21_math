/**
 * @file s21_test_ceil.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_ceil test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_CEIL_H_
#define S21_TESTS_CEIL_H_

#include "./../common.h"

void s21_test_ceil(double x);
void s21_test_ceil_nan(double x);
void s21_test_ceil_inf(double x);
void s21_test_ceil_print(long double original_func, long double implementation);

Suite *s21_ceil_first_case(void);
Suite *s21_ceil_second_case(void);
Suite *s21_ceil_edge_case(void);

#endif  // S21_TESTS_CEIL_H_
