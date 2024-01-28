/**
 * @file s21_test_fmod.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_fmod
 * @version 1.0
 * @date 2024-01-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "./test_include/s21_test_fmod.h"

// START_TEST(s21_fmod_1)
// {

// }

// START_TEST(s21_fmod_2)
// {

// }

// START_TEST(s21_fmod_3)
// {

// }

// START_TEST(s21_fmod_4)
// {

// }

// START_TEST(s21_fmod_5)
// {

// }

// START_TEST(s21_fmod_6)
// {

// }

// START_TEST(s21_fmod_7)
// {

// }

// START_TEST(s21_fmod_8)
// {

// }

// START_TEST(s21_fmod_9)
// {

// }

// START_TEST(s21_fmod_10)
// {

// }

/**
 * @brief First set of tests.
 * 
 * @return Suite* 
 */
Suite *s21_fmod_first_case(void)
{
    Suite *math = suite_create("s21_math (s21_fmod first case)");

    TCase *tc_fmod = tcase_create("test_fmod");
    // tcase_add_test(tc_fmod, s21_fmod_1);
    // tcase_add_test(tc_fmod, s21_fmod_2);
    // tcase_add_test(tc_fmod, s21_fmod_3);
    // tcase_add_test(tc_fmod, s21_fmod_4);
    // tcase_add_test(tc_fmod, s21_fmod_5);
    // tcase_add_test(tc_fmod, s21_fmod_6);
    // tcase_add_test(tc_fmod, s21_fmod_7);
    // tcase_add_test(tc_fmod, s21_fmod_8);
    // tcase_add_test(tc_fmod, s21_fmod_9);
    // tcase_add_test(tc_fmod, s21_fmod_10);
    suite_add_tcase(math, tc_fmod);

    return math;
}
