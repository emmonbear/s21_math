/**
 * @file s21_test_cos.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_cos
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./test_include/s21_test_cos.h"

// START_TEST(s21_cos_1)
// {

// }

// START_TEST(s21_cos_2)
// {

// }

// START_TEST(s21_cos_3)
// {

// }

// START_TEST(s21_cos_4)
// {

// }

// START_TEST(s21_cos_5)
// {

// }

// START_TEST(s21_cos_6)
// {

// }

// START_TEST(s21_cos_7)
// {

// }

// START_TEST(s21_cos_8)
// {

// }

// START_TEST(s21_cos_9)
// {

// }

// START_TEST(s21_cos_10)
// {

// }

/**
 * @brief First set of tests.
 *
 * @return Suite*
 */
Suite *s21_cos_first_case(void) {
  Suite *math = suite_create("s21_math (s21_cos first case)");

  TCase *tc_cos = tcase_create("test_cos");
  // tcase_add_test(tc_cos, s21_cos_1);
  // tcase_add_test(tc_cos, s21_cos_2);
  // tcase_add_test(tc_cos, s21_cos_3);
  // tcase_add_test(tc_cos, s21_cos_4);
  // tcase_add_test(tc_cos, s21_cos_5);
  // tcase_add_test(tc_cos, s21_cos_6);
  // tcase_add_test(tc_cos, s21_cos_7);
  // tcase_add_test(tc_cos, s21_cos_8);
  // tcase_add_test(tc_cos, s21_cos_9);
  // tcase_add_test(tc_cos, s21_cos_10);
  suite_add_tcase(math, tc_cos);

  return math;
}
