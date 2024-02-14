/**
 * @file s21_test_abs.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief A set of tests to check the functionality of s21_abs
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./test_include/s21_test_abs.h"

/// @brief |0| = 0
START_TEST(s21_abs_1) {
  int value = 0;

  s21_test_abs(value);
}

/// @brief |1| = 1
START_TEST(s21_abs_2) {
  int value = 1;

  s21_test_abs(value);
}

/// @brief |-1| = 1
START_TEST(s21_abs_3) {
  int value = -1;

  s21_test_abs(value);
}

/// @brief |123| = 123
START_TEST(s21_abs_4) {
  int value = 123;

  s21_test_abs(value);
}

/// @brief |-123| = 123
START_TEST(s21_abs_5) {
  int value = -123;

  s21_test_abs(value);
}

/// @brief |5231| = 5231
START_TEST(s21_abs_6) {
  int value = 5231;

  s21_test_abs(value);
}

/// @brief |-5231| = 5231
START_TEST(s21_abs_7) {
  int value = -5231;

  s21_test_abs(value);
}

/// @brief |65622| = 65622
START_TEST(s21_abs_8) {
  int value = 65622;

  s21_test_abs(value);
}

/// @brief |-65622| = 65622
START_TEST(s21_abs_9) {
  int value = -65622;

  s21_test_abs(value);
}

/// @brief |1765222| = 1765222
START_TEST(s21_abs_10) {
  int value = 1765222;

  s21_test_abs(value);
}

/// @brief |-1765222| = 1765222
START_TEST(s21_abs_11) {
  int value = -1765222;

  s21_test_abs(value);
}

/// @brief |99999999| = 99999999
START_TEST(s21_abs_12) {
  int value = 99999999;

  s21_test_abs(value);
}

/// @brief |-99999999| = 99999999
START_TEST(s21_abs_13) {
  int value = -99999999;

  s21_test_abs(value);
}

/// @brief |895251111| = 895251111
START_TEST(s21_abs_14) {
  int value = 895251111;

  s21_test_abs(value);
}

/// @brief |-895251111| = 895251111
START_TEST(s21_abs_15) {
  int value = -895251111;

  s21_test_abs(value);
}

/// @brief |786256151| = 786256151
START_TEST(s21_abs_16) {
  int value = 786256151;

  s21_test_abs(value);
}

/// @brief |-786256151| = 786256151
START_TEST(s21_abs_17) {
  int value = -786256151;

  s21_test_abs(value);
}

/// @brief |-2000000000| = 2000000000
START_TEST(s21_abs_18) {
  int value = -2000000000;

  s21_test_abs(value);
}

/// @brief |2147483647| = 2147483647
START_TEST(s21_abs_19) {
  int value = INT32_MAX;

  s21_test_abs(value);
}

/// @brief |-2147483648| = 2147483648
START_TEST(s21_abs_20) {
  int value = INT32_MIN;

  s21_test_abs(value);
}

//##############################################################################
//##############################################################################
//##############################################################################

/**
 * @brief First set of tests.
 *
 * @return Suite*
 */
Suite *s21_abs_first_case(void) {
  Suite *math = suite_create("\ns21_abs first case\n");

  TCase *tc_abs = tcase_create("test_abs");
  tcase_add_test(tc_abs, s21_abs_1);
  tcase_add_test(tc_abs, s21_abs_2);
  tcase_add_test(tc_abs, s21_abs_3);
  tcase_add_test(tc_abs, s21_abs_4);
  tcase_add_test(tc_abs, s21_abs_5);
  tcase_add_test(tc_abs, s21_abs_6);
  tcase_add_test(tc_abs, s21_abs_7);
  tcase_add_test(tc_abs, s21_abs_8);
  tcase_add_test(tc_abs, s21_abs_9);
  tcase_add_test(tc_abs, s21_abs_10);
  suite_add_tcase(math, tc_abs);

  return math;
}

/**
 * @brief Second set of tests.
 *
 * @return Suite*
 */
Suite *s21_abs_second_case(void) {
  Suite *math = suite_create("\ns21_abs second case\n");

  TCase *tc_abs = tcase_create("test_abs");
  tcase_add_test(tc_abs, s21_abs_11);
  tcase_add_test(tc_abs, s21_abs_12);
  tcase_add_test(tc_abs, s21_abs_13);
  tcase_add_test(tc_abs, s21_abs_14);
  tcase_add_test(tc_abs, s21_abs_15);
  tcase_add_test(tc_abs, s21_abs_16);
  tcase_add_test(tc_abs, s21_abs_17);
  tcase_add_test(tc_abs, s21_abs_18);
  tcase_add_test(tc_abs, s21_abs_19);
  tcase_add_test(tc_abs, s21_abs_20);
  suite_add_tcase(math, tc_abs);

  return math;
}

/**
 * @brief Quickly check the functionality of the module s21_abs.
 *
 * @param[in] value number whose absolute value must be determined.
 */
void s21_test_abs(int value) {
  int original_func = abs(value);
  int implementation = s21_abs(value);

#ifdef DEBUG
  printf("Input value: %d\n", value);

  if (original_func == implementation) {
    printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
  } else {
    printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n");
  }

  s21_test_abs_print(original_func, implementation);
#endif

  ck_assert_int_eq(original_func, implementation);
}

/**
 * @brief Function for printing the obtained results.
 *
 * @param[in] original_func result of calculating the original function.
 * @param[in] implementation result of calculating the implementation function.
 */
void s21_test_abs_print(int original_func, int implementation) {
  printf(" original func = %d | binary: ", original_func);
  print_bits(original_func, 31);
  printf("\nimplementation = %d | binary: ", implementation);
  print_bits(implementation, 31);
  printf(
      "\033[0;33m\n------------------------------------------------------------"
      "----------------------------\n\033[0m");
}
