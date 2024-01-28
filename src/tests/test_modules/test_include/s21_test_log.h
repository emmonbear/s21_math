/**
 * @file s21_test_log.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_log test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_LOG_H_
#define S21_TESTS_LOG_H_

#include "./../common.h"
#include "./../../debug/debug.h"

Suite *s21_log_first_case(void);

void s21_test_log_nan(double x);
void s21_test_log(double x);
void s21_test_log_inf(double x);
void s21_test_log_print(long double original_func, long double implementation);

#endif  // S21_TESTS_LOG_H_
