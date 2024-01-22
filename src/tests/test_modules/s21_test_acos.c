/**
 * @file s21_test_acos.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_acos
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_acos.h"

START_TEST(s21_acos_1)
{

}

START_TEST(s21_acos_2)
{

}

START_TEST(s21_acos_3)
{

}

START_TEST(s21_acos_4)
{

}

START_TEST(s21_acos_5)
{

}

START_TEST(s21_acos_6)
{

}

START_TEST(s21_acos_7)
{

}

START_TEST(s21_acos_8)
{

}

START_TEST(s21_acos_9)
{

}

START_TEST(s21_acos_10)
{

}

Suite *s21_acos_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_acos first case)");

    TCase *tc_acos = tcase_create("test_acos");
    tcase_add_test(tc_acos, s21_acos_1);
    tcase_add_test(tc_acos, s21_acos_2);
    tcase_add_test(tc_acos, s21_acos_3);
    tcase_add_test(tc_acos, s21_acos_4);
    tcase_add_test(tc_acos, s21_acos_5);
    tcase_add_test(tc_acos, s21_acos_6);
    tcase_add_test(tc_acos, s21_acos_7);
    tcase_add_test(tc_acos, s21_acos_8);
    tcase_add_test(tc_acos, s21_acos_9);
    tcase_add_test(tc_acos, s21_acos_10);
    suite_add_tcase(math, tc_acos);

    return math;
}
