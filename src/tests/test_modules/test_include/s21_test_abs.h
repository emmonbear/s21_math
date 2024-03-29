/**
 * @file s21_test_abs.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_abs test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_ABS_H_
#define S21_TESTS_ABS_H_

#include "./common.h"

void s21_test_abs(int value);
void s21_test_abs_print(int original_func, int implementation);

Suite *s21_abs_first_case(void);
Suite *s21_abs_second_case(void);

#endif  // S21_TESTS_ABS_H_
