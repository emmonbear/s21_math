/**
 * @file s21_test_pow.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_pow test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_POW_H_
#define S21_TESTS_POW_H_

#include "./../common.h"

void s21_test_pow(double base, double exp);
void s21_test_pow_nan(double base, double exp);
void s21_test_pow_inf(double base, double exp);
void s21_test_pow_print(long double original_func, long double implementation);

Suite *s21_pow_first_case(void);

#endif  // S21_TESTS_POW_H_
