/**
 * @file s21_test_exp.h
 * @author kossadda (https://github.com/kossadda)
 * @brief Header file for s21_exp test test module
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef S21_TESTS_EXP_H_
#define S21_TESTS_EXP_H_

#include "./../common.h"

void s21_test_exp(double x);

Suite *s21_exp_first_case(void);
Suite *s21_exp_second_case(void);
Suite *s21_exp_third_case(void);
Suite *s21_exp_fourth_case(void);
Suite *s21_exp_fifth_case(void);
Suite *s21_exp_edge_case(void);

#endif  // S21_TESTS_EXP_H_
