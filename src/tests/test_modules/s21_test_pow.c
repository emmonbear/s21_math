/**
 * @file s21_test_pow.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_pow.
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_pow.h"

START_TEST(s21_pow_1)
{

}

START_TEST(s21_pow_2)
{

}

START_TEST(s21_pow_3)
{

}

START_TEST(s21_pow_4)
{

}

START_TEST(s21_pow_5)
{

}

START_TEST(s21_pow_6)
{

}

START_TEST(s21_pow_7)
{

}

START_TEST(s21_pow_8)
{

}

START_TEST(s21_pow_9)
{

}

START_TEST(s21_pow_10)
{

}

Suite *s21_pow_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_pow first case)");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_1);
    tcase_add_test(tc_pow, s21_pow_2);
    tcase_add_test(tc_pow, s21_pow_3);
    tcase_add_test(tc_pow, s21_pow_4);
    tcase_add_test(tc_pow, s21_pow_5);
    tcase_add_test(tc_pow, s21_pow_6);
    tcase_add_test(tc_pow, s21_pow_7);
    tcase_add_test(tc_pow, s21_pow_8);
    tcase_add_test(tc_pow, s21_pow_9);
    tcase_add_test(tc_pow, s21_pow_10);
    suite_add_tcase(math, tc_pow);

    return math;
}
