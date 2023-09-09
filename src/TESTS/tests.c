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
      // printf("%d\n", number[i]);
      // printf("my_func = %d\n", result);
      // printf("orig_func = %d\n", expected);
    } else {
      FAIL++;
      printf("%d\n", number[i]);
      printf("my_func = %d\n", result);
      printf("orig_func = %d\n", expected);
    }
    ck_assert_int_eq(result, expected);
  }
  printf("test_abs\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
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
        // printf("%f\n", number[i]);
        // printf("my_func = %f\n", result);
        // printf("orig_func = %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("%f\n", number[i]);
        // printf("my_func = %f\n", result);
        // printf("orig_func = %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
      ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_fabs\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
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
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
      // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_ceil\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_floor) {
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
    double expected = floor(number[i]);
    double result = s21_floor(number[i]);
    if (isnan(number[i])) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
      // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_floor\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_exp) {  // не обработаны значения 0.0 / 0.0, +inf, -inf
  int FAIL = 0;
  int SUCCESS = 0;
  double start = 5.0;
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
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      }
      // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_exp\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_pow) {
  int FAIL = 0;
  int SUCCESS = 0;
  double start = 0.0;
  double end = 10.0;
  double step = 1.0;
  double start_exp = 1.0;
  double end_exp = 10.0;
  double step_exp = 1.0;
  int array_size = (int)((end - start) / step);
  int array_size_exp = (int)((end_exp - start_exp) / step_exp);
  double number[array_size];
  double exponent[array_size_exp];
  double current = start;
  double current_exp = start_exp;
  for (int i = 0; i < array_size; i++) {
    number[i] = current;
    current += step;
  }
  for (int i = 0; i < array_size_exp; i++) {
    exponent[i] = current_exp;
    current_exp += step_exp;
  }
  for (int i = 0; i < array_size; i++) {
    for (int j = 0; j < array_size_exp; j++) {
      double expected = round(pow(number[i], exponent[j]) * 1e6) / 1e6;
      double result = round(s21_pow(number[i], exponent[j]) * 1e6) / 1e6;
      if (expected >= 999999999999999.0) break;
      if (isnan(number[i])) {
        if (isnan(result) && isnan(expected)) {
          SUCCESS++;
          // printf("number[%d] = %f\n", i, number[i]);
          // printf("result: %f\n", result);
          // printf("expected: %f\n", expected);
        } else {
          printf("pow(%f, %f)\n", number[i], exponent[j]);
          printf("result: %f\n", result);
          printf("expected: %f\n", expected);
          FAIL++;
        }
        // ck_assert_ldouble_nan(result);
      } else if (isinf(number[i])) {
        if (isinf(result) && isinf(expected)) {
          SUCCESS++;
          // printf("number[%d] = %f\n", i, number[i]);
          // printf("result: %f\n", result);
          // printf("expected: %f\n", expected);
        } else {
          // printf("number[%d] = %f\n", i, number[i]);
          // printf("result: %f\n", result);
          // printf("expected: %f\n", expected);
          FAIL++;
        }
        // ck_assert_ldouble_infinite(result);
      } else {
        if (result == expected) {
          SUCCESS++;
          // printf("number[%d] = %f\n", i, number[i]);
          // printf("result: %f\n", result);
          // printf("expected: %f\n", expected);
        } else {
          FAIL++;
          printf("pow(%f, %f)\n", number[i], exponent[i]);
          printf("result: %f\n", result);
          printf("expected: %f\n", expected);
        }
        // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
      }
    }
  }
  printf("test_pow\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_fmod) {
  int FAIL = 0;
  int SUCCESS = 0;
  double start = -10.0;
  double end = 10.0;
  double step = 1.0;
  double start_exp = -10.0;
  double end_exp = 10.0;
  double step_exp = 1.0;
  int array_size = (int)((end - start) / step);
  int array_size_exp = (int)((end_exp - start_exp) / step_exp);
  double number[array_size];
  double exponent[array_size_exp];
  double current = start;
  double current_exp = start_exp;
  for (int i = 0; i < array_size; i++) {
    number[i] = current;
    current += step;
  }
  for (int i = 0; i < array_size_exp; i++) {
    exponent[i] = current_exp;
    current_exp += step_exp;
  }
  for (int i = 0; i < array_size; i++) {
    for (int j = 0; j < array_size_exp; j++) {
      double expected = round(fmod(number[i], exponent[j]) * 1e6) / 1e6;
      double result = round(s21_fmod(number[i], exponent[j]) * 1e6) / 1e6;
      if (expected >= 999999999999999.0) break;
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("fmod(%f, %f)\n", number[i], exponent[j]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
      // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_fmod\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_fmod_1) {
  int FAIL = 0;
  int SUCCESS = 0;
  double number[] = {12.35, S21_INF_NEG, S21_INF_POS, S21_NAN};
  int count = sizeof(number) / sizeof(number[0]);
  double exponent[] = {S21_INF_NEG, S21_INF_POS, S21_NAN};
  int count_exp = sizeof(exponent) / sizeof(exponent[0]);
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count_exp; j++) {
      double expected = round(fmod(number[i], exponent[j]) * 1e6) / 1e6;
      double result = round(s21_fmod(number[i], exponent[j]) * 1e6) / 1e6;
      if ((isnan(number[i])) || (isnan(exponent[j])) || (isinf(number[i]))) {
        if (isnan(result) && isnan(expected)) {
          SUCCESS++;
          // printf("fmod(%f, %f)\n", number[i], exponent[j]);
          // printf("result: %f\n", result);
          // printf("expected: %f\n", expected);
        } else {
          printf("fmod(%f, %f)\n", number[i], exponent[j]);
          printf("result: %f\n", result);
          printf("expected: %f\n", expected);
          FAIL++;
        }
        ck_assert_ldouble_nan(result);
      } else {
        if (result == expected) {
          SUCCESS++;
          // printf("fmod(%f, %f)\n", number[i], exponent[j]);
          // printf("result: %f\n", result);
          // printf("expected: %f\n", expected);
        } else {
          FAIL++;
          printf("fmod(%f, %f)\n", number[i], exponent[j]);
          printf("result: %f\n", result);
          printf("expected: %f\n", expected);
        }
      }
    }
  }
  printf("test_fmod_1\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_sin) {
  int FAIL = 0;
  int SUCCESS = 0;
  double start = -1.0;
  double end = 1.0;
  double step = 0.00001;
  int array_size = (int)((end - start) / step);
  double number[array_size];
  double current = start;
  for (int i = 0; i < array_size; i++) {
    number[i] = current;
    current += step;
  }
  for (int i = 0; i < array_size; i++) {
    double expected = round(sin(number[i]) * 1e6) / 1e6;
    double result = round(s21_sin(number[i]) * 1e6) / 1e6;
    if (expected >= 999999999999999.0) break;
    if (isnan(number[i])) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      }
      // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_sin\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_cos) {
  int FAIL = 0;
  int SUCCESS = 0;
  double start = -1.0;
  double end = 1.0;
  double step = 0.00001;
  int array_size = (int)((end - start) / step);
  double number[array_size];
  double current = start;
  for (int i = 0; i < array_size; i++) {
    number[i] = current;
    current += step;
  }
  for (int i = 0; i < array_size; i++) {
    double expected = round(cos(number[i]) * 1e6) / 1e6;
    double result = round(s21_cos(number[i]) * 1e6) / 1e6;
    if (expected >= 999999999999999.0) break;
    if (isnan(number[i])) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      }
      // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_cos\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_tan) {
  int FAIL = 0;
  int SUCCESS = 0;
  double start = -1.0;
  double end = 1.0;
  double step = 0.00001;
  int array_size = (int)((end - start) / step);
  double number[array_size];
  double current = start;
  for (int i = 0; i < array_size; i++) {
    number[i] = current;
    current += step;
  }
  for (int i = 0; i < array_size; i++) {
    double expected = round(tan(number[i]) * 1e6) / 1e6;
    double result = round(s21_tan(number[i]) * 1e6) / 1e6;
    if (expected >= 999999999999999.0) break;
    if (isnan(number[i])) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      }
      // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_tan\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_sqrt) {
  int FAIL = 0;
  int SUCCESS = 0;
  double start = -10.0;
  double end = 10.0;
  double step = 0.01;
  int array_size = (int)((end - start) / step);
  double number[array_size];
  double current = start;
  for (int i = 0; i < array_size; i++) {
    number[i] = current;
    current += step;
  }
  for (int i = 0; i < array_size; i++) {
    double expected = round(sqrt(number[i]) * 1e6) / 1e6;
    double result = round(s21_sqrt(number[i]) * 1e6) / 1e6;
    if (expected >= 999999999999999.0) break;
    if (isnan(number[i]) || number[i] < 0) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
        FAIL++;
      }
      // ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
      // ck_assert_ldouble_eq_tol(result, expected, 1e-10);
    }
  }
  printf("test_sqrt\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_log) {
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
    double expected = round(log(number[i]) * 1e6) / 1e6;
    double result = round(s21_log(number[i]) * 1e6) / 1e6;
    if (expected >= 999999999999999.0) break;
    if (number[i] < 0) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
    } else if (number[i] == 0) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
    } else {
      if ((result == expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
    }
  }
  printf("test_log\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_asin) {
  int FAIL = 0;
  int SUCCESS = 0;
  double start = -1.0;
  double end = 1.0;
  double step = 0.1;
  int array_size = (int)((end - start) / step);
  double number[array_size];
  double current = start;
  for (int i = 0; i < array_size; i++) {
    number[i] = current;
    current += step;
  }
  for (int i = 0; i < array_size; i++) {
    double expected = round(asin(number[i]) * 1e6) / 1e6;
    double result = round(s21_asin(number[i]) * 1e6) / 1e6;
    // double expected = asin(number[i]);
    // double result = s21_asin(number[i]);
    if (expected >= 999999999999999.0) break;
    if (number[i] < 0) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
    } else if (number[i] == 0) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
    } else {
      if ((result == expected)) {
        SUCCESS++;
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
    }
  }
  printf("test_asin\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST

START_TEST(test_log_1) {
  int FAIL = 0;
  int SUCCESS = 0;
  double number[] = {0, S21_INF_NEG, S21_INF_POS, S21_NAN};
  int count = sizeof(number) / sizeof(number[0]);
  for (int i = 0; i < count; i++) {
    double expected = round(log(number[i]) * 1e6) / 1e6;
    double result = round(s21_log(number[i]) * 1e6) / 1e6;
    if (expected >= 999999999999999.0) break;
    if (number[i] < 0) {
      if (isnan(result) && isnan(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
    } else if (number[i] == 0) {
      if (isinf(result) && isinf(expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
    } else {
      if ((result == expected)) {
        SUCCESS++;
        // printf("number[%d] = %f\n", i, number[i]);
        // printf("result: %f\n", result);
        // printf("expected: %f\n", expected);
      } else {
        FAIL++;
        printf("number[%d] = %f\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
      }
    }
  }
  printf("test_log\n");
  printf("FAIL: %d\n", FAIL);
  printf("SUCCESS: %d\n\n", SUCCESS);
}
END_TEST



Suite *s21_math_suite(void) {
  Suite *suite = suite_create("s21_string");

  TCase *tc_abs = tcase_create("s21_abs");
  tcase_add_test(tc_abs, test_abs);
  suite_add_tcase(suite, tc_abs);

  TCase *tc_fabs = tcase_create("s21_fabs");
  tcase_add_test(tc_fabs, test_fabs);
  suite_add_tcase(suite, tc_fabs);

  TCase *tc_ceil = tcase_create("s21_ceil");
  tcase_add_test(tc_ceil, test_ceil);
  suite_add_tcase(suite, tc_ceil);

  TCase *tc_exp = tcase_create("s21_exp");
  tcase_add_test(tc_exp, test_exp);
  suite_add_tcase(suite, tc_exp);

  TCase *tc_pow = tcase_create("s21_pow");
  tcase_add_test(tc_pow, test_pow);
  suite_add_tcase(suite, tc_pow);

  TCase *tc_floor = tcase_create("s21_floor");
  tcase_add_test(tc_floor, test_floor);
  suite_add_tcase(suite, tc_floor);

  TCase *tc_fmod = tcase_create("s21_fmod");
  tcase_add_test(tc_fmod, test_fmod);
  tcase_add_test(tc_fmod, test_fmod_1);
  suite_add_tcase(suite, tc_fmod);

  TCase *tc_sin = tcase_create("s21_sin");
  tcase_add_test(tc_sin, test_sin);
  suite_add_tcase(suite, tc_sin);

  TCase *tc_cos = tcase_create("s21_cos");
  tcase_add_test(tc_cos, test_cos);
  suite_add_tcase(suite, tc_cos);

  TCase *tc_tan = tcase_create("s21_tan");
  tcase_add_test(tc_tan, test_tan);
  suite_add_tcase(suite, tc_tan);

  TCase *tc_sqrt = tcase_create("s21_sqrt");
  tcase_add_test(tc_sqrt, test_sqrt);
  suite_add_tcase(suite, tc_sqrt);

  TCase *tc_log = tcase_create("s21_log");
  tcase_add_test(tc_log, test_log);
  tcase_add_test(tc_log, test_log_1);
  suite_add_tcase(suite, tc_log);

  TCase *tc_asin = tcase_create("s21_asin");
  tcase_add_test(tc_asin, test_asin);
  suite_add_tcase(suite, tc_asin);

  return suite;
}

int main(void) {
  Suite *suite = s21_math_suite();
  SRunner *suite_runner = srunner_create(suite);
  srunner_set_fork_status(suite_runner, CK_FORK);
  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);
  if (failed_count != 0) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
