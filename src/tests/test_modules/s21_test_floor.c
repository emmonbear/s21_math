/**
 * @file s21_test_floor.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_floor.
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "test_include/s21_test_floor.h"

START_TEST(s21_floor_1)
{

}

START_TEST(s21_floor_2)
{

}

START_TEST(s21_floor_3)
{

}

START_TEST(s21_floor_4)
{

}

START_TEST(s21_floor_5)
{

}

START_TEST(s21_floor_6)
{

}

START_TEST(s21_floor_7)
{

}

START_TEST(s21_floor_8)
{

}

START_TEST(s21_floor_9)
{

}

START_TEST(s21_floor_10)
{

}

Suite *s21_floor_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_floor first case)");

    TCase *tc_floor = tcase_create("test_floor");
    tcase_add_test(tc_floor, s21_floor_1);
    tcase_add_test(tc_floor, s21_floor_2);
    tcase_add_test(tc_floor, s21_floor_3);
    tcase_add_test(tc_floor, s21_floor_4);
    tcase_add_test(tc_floor, s21_floor_5);
    tcase_add_test(tc_floor, s21_floor_6);
    tcase_add_test(tc_floor, s21_floor_7);
    tcase_add_test(tc_floor, s21_floor_8);
    tcase_add_test(tc_floor, s21_floor_9);
    tcase_add_test(tc_floor, s21_floor_10);
    suite_add_tcase(math, tc_floor);

    return math;
}
