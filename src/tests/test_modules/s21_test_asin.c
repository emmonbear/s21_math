/**
 * @file s21_test_asin.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_asin
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_asin.h"

START_TEST(s21_asin_1)
{

}

START_TEST(s21_asin_2)
{

}

START_TEST(s21_asin_3)
{

}

START_TEST(s21_asin_4)
{

}

START_TEST(s21_asin_5)
{

}

START_TEST(s21_asin_6)
{

}

START_TEST(s21_asin_7)
{

}

START_TEST(s21_asin_8)
{

}

START_TEST(s21_asin_9)
{

}

START_TEST(s21_asin_10)
{

}

Suite *s21_asin_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_asin first case)");

    TCase *tc_asin = tcase_create("test_asin");
    tcase_add_test(tc_asin, s21_asin_1);
    tcase_add_test(tc_asin, s21_asin_2);
    tcase_add_test(tc_asin, s21_asin_3);
    tcase_add_test(tc_asin, s21_asin_4);
    tcase_add_test(tc_asin, s21_asin_5);
    tcase_add_test(tc_asin, s21_asin_6);
    tcase_add_test(tc_asin, s21_asin_7);
    tcase_add_test(tc_asin, s21_asin_8);
    tcase_add_test(tc_asin, s21_asin_9);
    tcase_add_test(tc_asin, s21_asin_10);
    suite_add_tcase(math, tc_asin);

    return math;
}
