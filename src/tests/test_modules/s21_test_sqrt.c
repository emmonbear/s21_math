/**
 * @file s21_test_sqrt.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_sqrt
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_sqrt.h"

// START_TEST(s21_sqrt_1)
// {

// }

// START_TEST(s21_sqrt_2)
// {

// }

// START_TEST(s21_sqrt_3)
// {

// }

// START_TEST(s21_sqrt_4)
// {

// }

// START_TEST(s21_sqrt_5)
// {

// }

// START_TEST(s21_sqrt_6)
// {

// }

// START_TEST(s21_sqrt_7)
// {

// }

// START_TEST(s21_sqrt_8)
// {

// }

// START_TEST(s21_sqrt_9)
// {

// }

// START_TEST(s21_sqrt_10)
// {

// }

/**
 * @brief First set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_sqrt_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_sqrt first case)");

    TCase *tc_sqrt = tcase_create("test_sqrt");
    // tcase_add_test(tc_sqrt, s21_sqrt_1);
    // tcase_add_test(tc_sqrt, s21_sqrt_2);
    // tcase_add_test(tc_sqrt, s21_sqrt_3);
    // tcase_add_test(tc_sqrt, s21_sqrt_4);
    // tcase_add_test(tc_sqrt, s21_sqrt_5);
    // tcase_add_test(tc_sqrt, s21_sqrt_6);
    // tcase_add_test(tc_sqrt, s21_sqrt_7);
    // tcase_add_test(tc_sqrt, s21_sqrt_8);
    // tcase_add_test(tc_sqrt, s21_sqrt_9);
    // tcase_add_test(tc_sqrt, s21_sqrt_10);
    suite_add_tcase(math, tc_sqrt);

    return math;
}
