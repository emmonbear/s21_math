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

START_TEST(s21_fmod_0)
{
  double x = -99.9;
  double y = 5.23;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_1)
{
  double x = -0.4349;
  double y = 0.1123;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_2)
{
  double x = 4325.5435;
  double y = 115.23;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_3)
{
  double x = 0.543;
  double y = 1.6547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_4)
{
  double x = 5.231478243;
  double y = 0.09453757;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_5)
{
  double x = -1.543;
  double y = -0.6547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_6)
{
  double x = 3425345345.12423;
  double y = 0.465447;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_7)
{
  double x = 10.543;
  double y = -11.6547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_8)
{
  double x = -0.543;
  double y = 1.6547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_9)
{
  double x = 999999.99999;
  double y = 9.99999;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_10)
{
  double x = 1111.543;
  double y = 111.1116547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_11)
{
  double x = 1111.543;
  double y = 0;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_12)
{
  double x = 0;
  double y = 111.1116547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_13)
{
  double x = S21_NAN;
  double y = 111.1116547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_14)
{
  double x = 1111.543;
  double y = S21_NAN;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_15)
{
  double x = S21_NAN;
  double y = S21_NAN;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_16)
{
  double x = S21_INF;
  double y = 111.1116547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_17)
{
  double x = 1111.543;
  double y = S21_INF;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_18)
{
  double x = S21_INF;
  double y = S21_INF;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_19)
{
  double x = -S21_INF;
  double y = 111.1116547;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_20)
{
  double x = 1111.543;
  double y = -S21_INF;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_21)
{
  double x = -S21_INF;
  double y = -S21_INF;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_22)
{
  double x = S21_INF;
  double y = 0;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_23)
{
  double x = -S21_INF;
  double y = 0;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_24)
{
  double x = S21_INF;
  double y = -43234.222;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_25)
{
  double x = -43234.222;
  double y = S21_INF;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_26)
{
  double x = S21_NAN;
  double y = S21_INF;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_27)
{
  double x = S21_INF;
  double y = S21_NAN;

  s21_test_fmod(x, y);
}

START_TEST(s21_fmod_28)
{
  double x = 0.0000234;
  double y = 0.000003424;

  s21_test_fmod(x, y);
}

/**
 * @brief First set of tests.
 *
 * @return Suite*
 */
Suite *s21_fmod_first_case(void) {
  Suite *math = suite_create("s21_math (s21_fmod first case)");

  TCase *tc_fmod = tcase_create("test_fmod");
  tcase_add_test(tc_fmod, s21_fmod_0);
  tcase_add_test(tc_fmod, s21_fmod_1);
  tcase_add_test(tc_fmod, s21_fmod_2);
  tcase_add_test(tc_fmod, s21_fmod_3);
  tcase_add_test(tc_fmod, s21_fmod_4);
  tcase_add_test(tc_fmod, s21_fmod_5);
  tcase_add_test(tc_fmod, s21_fmod_6);
  tcase_add_test(tc_fmod, s21_fmod_7);
  tcase_add_test(tc_fmod, s21_fmod_8);
  tcase_add_test(tc_fmod, s21_fmod_9);
  tcase_add_test(tc_fmod, s21_fmod_10);
  tcase_add_test(tc_fmod, s21_fmod_11);
  tcase_add_test(tc_fmod, s21_fmod_12);
  tcase_add_test(tc_fmod, s21_fmod_13);
  tcase_add_test(tc_fmod, s21_fmod_14);
  tcase_add_test(tc_fmod, s21_fmod_15);
  tcase_add_test(tc_fmod, s21_fmod_16);
  tcase_add_test(tc_fmod, s21_fmod_17);
  tcase_add_test(tc_fmod, s21_fmod_18);
  tcase_add_test(tc_fmod, s21_fmod_19);
  tcase_add_test(tc_fmod, s21_fmod_20);
  tcase_add_test(tc_fmod, s21_fmod_21);
  tcase_add_test(tc_fmod, s21_fmod_22);
  tcase_add_test(tc_fmod, s21_fmod_23);
  tcase_add_test(tc_fmod, s21_fmod_24);
  tcase_add_test(tc_fmod, s21_fmod_25);
  tcase_add_test(tc_fmod, s21_fmod_26);
  tcase_add_test(tc_fmod, s21_fmod_27);
  tcase_add_test(tc_fmod, s21_fmod_28);
  suite_add_tcase(math, tc_fmod);

  return math;
}

/**
 * @brief Quickly check the functionality of the module s21_fmod.
 *
 * @param[in] x number whose remainder needs to be found.
 * @param[in] y number from which you need to find the remainder.
 * base of e.
 */
void s21_test_fmod(double x, double y) {
  long double original_func = fmod(x, y);
  long double implementation = s21_fmod(x, y);

  printf("Input value: %lf mod %lf\n", x, y);

  long double first = 0;
  long double second = 0;

  if (S21_IS_INF(original_func)) {
    first = S21_IS_INF(original_func);
    second = S21_IS_INF(implementation);
  } else if (S21_IS_NAN(original_func)) {
    first = S21_IS_NAN(original_func);
    second = S21_IS_NAN(implementation);
  } else {
    first = original_func;
    second = implementation;
  }

  if (fabsl(first - second) > COMPARE_ACCURACY) {
    printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n");
  } else {
    printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
  }

#ifdef DEBUG
  s21_test_print(original_func, implementation);
#endif

  ck_assert_double_eq_tol(first, second, COMPARE_ACCURACY);
}

