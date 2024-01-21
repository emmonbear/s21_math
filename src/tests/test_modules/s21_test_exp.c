/**
 * @file s21_test_exp.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_exp.
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_exp.h"

START_TEST(s21_exp_1)
{

}

START_TEST(s21_exp_2)
{

}

START_TEST(s21_exp_3)
{

}

START_TEST(s21_exp_4)
{

}

START_TEST(s21_exp_5)
{

}

START_TEST(s21_exp_6)
{

}

START_TEST(s21_exp_7)
{

}

START_TEST(s21_exp_8)
{

}

START_TEST(s21_exp_9)
{

}

START_TEST(s21_exp_10)
{

}

Suite *s21_exp_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_exp first case)");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_1);
    tcase_add_test(tc_exp, s21_exp_2);
    tcase_add_test(tc_exp, s21_exp_3);
    tcase_add_test(tc_exp, s21_exp_4);
    tcase_add_test(tc_exp, s21_exp_5);
    tcase_add_test(tc_exp, s21_exp_6);
    tcase_add_test(tc_exp, s21_exp_7);
    tcase_add_test(tc_exp, s21_exp_8);
    tcase_add_test(tc_exp, s21_exp_9);
    tcase_add_test(tc_exp, s21_exp_10);
    suite_add_tcase(math, tc_exp);

    return math;
}
