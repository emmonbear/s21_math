/**
 * @file s21_test_log.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_log.
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_log.h"

START_TEST(s21_log_1)
{

}

START_TEST(s21_log_2)
{

}

START_TEST(s21_log_3)
{

}

START_TEST(s21_log_4)
{

}

START_TEST(s21_log_5)
{

}

START_TEST(s21_log_6)
{

}

START_TEST(s21_log_7)
{

}

START_TEST(s21_log_8)
{

}

START_TEST(s21_log_9)
{

}

START_TEST(s21_log_10)
{

}

Suite *s21_log_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_log first case)");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_1);
    tcase_add_test(tc_log, s21_log_2);
    tcase_add_test(tc_log, s21_log_3);
    tcase_add_test(tc_log, s21_log_4);
    tcase_add_test(tc_log, s21_log_5);
    tcase_add_test(tc_log, s21_log_6);
    tcase_add_test(tc_log, s21_log_7);
    tcase_add_test(tc_log, s21_log_8);
    tcase_add_test(tc_log, s21_log_9);
    tcase_add_test(tc_log, s21_log_10);
    suite_add_tcase(math, tc_log);

    return math;
}
