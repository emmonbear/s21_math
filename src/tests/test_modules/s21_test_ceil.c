/**
 * @file s21_test_ceil.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_ceil
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_ceil.h"

START_TEST(s21_ceil_1)
{

}

START_TEST(s21_ceil_2)
{

}

START_TEST(s21_ceil_3)
{

}

START_TEST(s21_ceil_4)
{

}

START_TEST(s21_ceil_5)
{

}

START_TEST(s21_ceil_6)
{

}

START_TEST(s21_ceil_7)
{

}

START_TEST(s21_ceil_8)
{

}

START_TEST(s21_ceil_9)
{

}

START_TEST(s21_ceil_10)
{

}

Suite *s21_ceil_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_ceil first case)");

    TCase *tc_ceil = tcase_create("test_ceil");
    tcase_add_test(tc_ceil, s21_ceil_1);
    tcase_add_test(tc_ceil, s21_ceil_2);
    tcase_add_test(tc_ceil, s21_ceil_3);
    tcase_add_test(tc_ceil, s21_ceil_4);
    tcase_add_test(tc_ceil, s21_ceil_5);
    tcase_add_test(tc_ceil, s21_ceil_6);
    tcase_add_test(tc_ceil, s21_ceil_7);
    tcase_add_test(tc_ceil, s21_ceil_8);
    tcase_add_test(tc_ceil, s21_ceil_9);
    tcase_add_test(tc_ceil, s21_ceil_10);
    suite_add_tcase(math, tc_ceil);

    return math;
}
