/**
 * @file s21_test_sin.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_sin
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_sin.h"

START_TEST(s21_sin_1)
{

}

START_TEST(s21_sin_2)
{

}

START_TEST(s21_sin_3)
{

}

START_TEST(s21_sin_4)
{

}

START_TEST(s21_sin_5)
{

}

START_TEST(s21_sin_6)
{

}

START_TEST(s21_sin_7)
{

}

START_TEST(s21_sin_8)
{

}

START_TEST(s21_sin_9)
{

}

START_TEST(s21_sin_10)
{

}

Suite *s21_sin_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_sin first case)");

    TCase *tc_sin = tcase_create("test_sin");
    tcase_add_test(tc_sin, s21_sin_1);
    tcase_add_test(tc_sin, s21_sin_2);
    tcase_add_test(tc_sin, s21_sin_3);
    tcase_add_test(tc_sin, s21_sin_4);
    tcase_add_test(tc_sin, s21_sin_5);
    tcase_add_test(tc_sin, s21_sin_6);
    tcase_add_test(tc_sin, s21_sin_7);
    tcase_add_test(tc_sin, s21_sin_8);
    tcase_add_test(tc_sin, s21_sin_9);
    tcase_add_test(tc_sin, s21_sin_10);
    suite_add_tcase(math, tc_sin);

    return math;
}
