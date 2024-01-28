/**
 * @file s21_test_floor.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_floor test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_FLOOR_H_
#define S21_TESTS_FLOOR_H_

#include "./../common.h"

void s21_test_floor(double x);
void s21_test_floor_print(long double original_func, long double implementation);

Suite *s21_floor_first_case(void);
Suite *s21_floor_second_case(void);
Suite *s21_floor_edge_case(void);

#endif  // S21_TESTS_FLOOR_H_
