/**
 * @file s21_test_atan.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_atan
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_atan.h"

START_TEST(s21_atan_1)
{

}

START_TEST(s21_atan_2)
{

}

START_TEST(s21_atan_3)
{

}

START_TEST(s21_atan_4)
{

}

START_TEST(s21_atan_5)
{

}

START_TEST(s21_atan_6)
{

}

START_TEST(s21_atan_7)
{

}

START_TEST(s21_atan_8)
{

}

START_TEST(s21_atan_9)
{

}

START_TEST(s21_atan_10)
{

}

Suite *s21_atan_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_atan first case)");

    TCase *tc_atan = tcase_create("test_atan");
    tcase_add_test(tc_atan, s21_atan_1);
    tcase_add_test(tc_atan, s21_atan_2);
    tcase_add_test(tc_atan, s21_atan_3);
    tcase_add_test(tc_atan, s21_atan_4);
    tcase_add_test(tc_atan, s21_atan_5);
    tcase_add_test(tc_atan, s21_atan_6);
    tcase_add_test(tc_atan, s21_atan_7);
    tcase_add_test(tc_atan, s21_atan_8);
    tcase_add_test(tc_atan, s21_atan_9);
    tcase_add_test(tc_atan, s21_atan_10);
    suite_add_tcase(math, tc_atan);

    return math;
}
