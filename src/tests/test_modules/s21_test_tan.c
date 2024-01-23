/**
 * @file s21_test_tan.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_tan
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_tan.h"

START_TEST(s21_tan_1)
{

}

START_TEST(s21_tan_2)
{

}

START_TEST(s21_tan_3)
{

}

START_TEST(s21_tan_4)
{

}

START_TEST(s21_tan_5)
{

}

START_TEST(s21_tan_6)
{

}

START_TEST(s21_tan_7)
{

}

START_TEST(s21_tan_8)
{

}

START_TEST(s21_tan_9)
{

}

START_TEST(s21_tan_10)
{

}

Suite *s21_tan_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_tan first case)");

    TCase *tc_tan = tcase_create("test_tan");
    tcase_add_test(tc_tan, s21_tan_1);
    tcase_add_test(tc_tan, s21_tan_2);
    tcase_add_test(tc_tan, s21_tan_3);
    tcase_add_test(tc_tan, s21_tan_4);
    tcase_add_test(tc_tan, s21_tan_5);
    tcase_add_test(tc_tan, s21_tan_6);
    tcase_add_test(tc_tan, s21_tan_7);
    tcase_add_test(tc_tan, s21_tan_8);
    tcase_add_test(tc_tan, s21_tan_9);
    tcase_add_test(tc_tan, s21_tan_10);
    suite_add_tcase(math, tc_tan);

    return math;
}
