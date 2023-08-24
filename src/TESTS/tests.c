#include <math.h>

#include "../s21_math.h"

START_TEST(test_abs) {
  int FAIL = 0;
  int SUCCESS = 0;
  int number[] = {-2147483648, -214748364, -21474836, -2147483 - 214748,
                  -21474,      -2147,      -214,      -21,
                  -2,          -1,         0,         1,
                  21,          214,        2147,      21474,
                  214748,      2147483,    21474836,  214748364,
                  2147483647};
  int count = sizeof(number) / sizeof(number[0]);
  for (int i = 0; i < count; i++) {
    int result = s21_abs(number[i]);
    int expected = abs(number[i]);
    if (result == expected) {
      SUCCESS++;
      // printf("\033[43m%d\033[0m\n", number[i]);
      // printf("my_func = %d\n", result);
      // printf("orig_func = %d\n", expected);
    } else {
      FAIL++;
      printf("\033[43m%d\033[0m\n", number[i]);
      printf("my_func = %d\n", result);
      printf("orig_func = %d\n", expected);
    }
    ck_assert_int_eq(result, expected);
  }
  printf("\033[43mtest_abs\033[0m\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n", SUCCESS);
}
END_TEST

START_TEST(test_fabs) {
  int FAIL = 0;
  int SUCCESS = 0;
  double number[] = {-1265454848484848.458754,
                     -126545484848484.458752,
                     -12654548484848.458754,
                     -126545484848.4587545,
                     -12654548484.4587544,
                     -12654548484.458754,
                     -126545484.4587544,
                     -12654548.4587546,
                     -126545484.45875,
                     -12654548.45875,
                     -1265454.45875,
                     -126545.45875,
                     -12654.85875,
                     -12654.4587,
                     -1265.4587,
                     -126.4587,
                     -12.4587,
                     -1.4587,
                     -0.958,
                     -0.95,
                     -0.9,
                     -0.0,
                     0.0,
                     0.9,
                     1.45,
                     12.48,
                     126.458754456,
                     1265.458754456,
                     12654.458754456,
                     126545.458754456,
                     1265454.458754456,
                     12654548.458754456,
                     126545484.458754456,
                     12654548.458754456,
                     126545484.458754456,
                     126545484.458754456,
                     126545484.458754456,
                     12654548.458754456,
                     126545484.458754456,
                     1265454848.458754456,
                     12654548484.458754,
                     126545484848.458754,
                     1265454848484.45875454,
                     12654548484848.458754,
                     126545484848484.458752,
                     1265454848484848.458754,
                     S21_INF_NEG,
                     S21_INF_POS,
                     S21_NAN};
  int count = sizeof(number) / sizeof(number[0]);
  for (int i = 0; i < count; i++) {
    double expected = fabs(number[i]);
    double result = s21_fabs(number[i]);
    if (isnan(number[i])) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("\033[43m%f\033[0m\n", number[i]);
        // printf("my_func = %f\n", result);
        // printf("orig_func = %f\n", expected);
      } else {
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("\033[43m%f\033[0m\n", number[i]);
        // printf("my_func = %f\n", result);
        // printf("orig_func = %f\n", expected);
      } else {
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
      ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("\033[43mtest_fabs\033[0m\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n", SUCCESS);
}
END_TEST

START_TEST(test_ceil) {
  int FAIL = 0;
  int SUCCESS = 0;
  double number[] = {-1265454848484848.458754,
                     -126545484848484.458752,
                     -12654548484848.458754,
                     -126545484848.4587545,
                     -12654548484.4587544,
                     -12654548484.458754,
                     -126545484.4587544,
                     -12654548.4587546,
                     -126545484.45875,
                     -12654548.45875,
                     -1265454.45875,
                     -126545.45875,
                     -12654.85875,
                     -12654.4587,
                     -1265.4587,
                     -126.4587,
                     -12.4587,
                     -1.4587,
                     -0.958,
                     -0.95,
                     -0.9,
                     -0.0,
                     0.0,
                     0.9,
                     1.45,
                     12.48,
                     126.458754456,
                     1265.458754456,
                     12654.458754456,
                     126545.458754456,
                     1265454.458754456,
                     12654548.458754456,
                     126545484.458754456,
                     12654548.458754456,
                     126545484.458754456,
                     126545484.458754456,
                     126545484.458754456,
                     12654548.458754456,
                     126545484.458754456,
                     1265454848.458754456,
                     12654548484.458754,
                     126545484848.458754,
                     1265454848484.45875454,
                     12654548484848.458754,
                     126545484848484.458752,
                     1265454848484848.458754,
                     S21_INF_NEG,
                     S21_INF_POS,
                     S21_NAN};
  int count = sizeof(number) / sizeof(number[0]);
  for (int i = 0; i < count; i++) {
    double expected = ceil(number[i]);
    double result = s21_ceil(number[i]);
    if (isnan(number[i])) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
      ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("\033[43mtest_ceil\033[0m\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n", SUCCESS);
}
END_TEST

START_TEST(test_exp) {
  int FAIL = 0;
  int SUCCESS = 0;
  double start = -10.0;
  double end = 10.0;
  double step = 0.1;
  int array_size = (int)((end - start) / step);
  double number[array_size];
  double current = start;
  for (int i = 0; i < array_size; i++) {
    number[i] = current;
    current += step;
  }
  for (int i = 0; i < array_size; i++) {
    double expected = round(exp(number[i]) * 1e6) / 1e6;
    double result = round(s21_exp(number[i]) * 1e6) / 1e6;
    if (expected >= 999999999999999.0) break;
    if (isnan(number[i])) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        // printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      }
      ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("\033[43mtest_exp\033[0m\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n", SUCCESS);
}
END_TEST

Suite *s21_math_suite(void) {
  Suite *suite = suite_create("s21_string");

  TCase *tc_abs = tcase_create("s21_abs");
  tcase_add_test(tc_abs, test_abs);
  suite_add_tcase(suite, tc_abs);

  TCase *tc_fabs = tcase_create("s21_fabs");
  tcase_add_test(tc_abs, test_fabs);
  suite_add_tcase(suite, tc_fabs);

  TCase *tc_ceil = tcase_create("s21_ceil");
  tcase_add_test(tc_abs, test_ceil);
  suite_add_tcase(suite, tc_ceil);

  TCase *tc_exp = tcase_create("s21_exp");
  tcase_add_test(tc_abs, test_exp);
  suite_add_tcase(suite, tc_exp);
  return suite;
}

int main(void) {
  Suite *suite = s21_math_suite();
  SRunner *suite_runner = srunner_create(suite);
  srunner_set_fork_status(suite_runner, CK_NOFORK);
  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);
  if (failed_count != 0) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
