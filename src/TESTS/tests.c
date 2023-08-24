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
    if (result == expected)
      SUCCESS++;
    else {
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
  double number[] = {-1.79769e+308, -1.23456e+200, -1.23456e+100, -123456.789,
                     -12345.6789,   -1234.56789,   -123.456789,   -12.3456789,
                     -1.23456789,   -0.123456789,  -0.000012345,  0.0,
                     0.000012345,   0.123456789,   1.23456789,    12.3456789,
                     123.456789,    1234.56789,    12345.6789,    123456.789,
                     1.23456e+100,  1.23456e+200,  1.79769e+308,  S21_INF_NEG,
                     S21_INF_POS,   S21_NAN};
  int count = sizeof(number) / sizeof(number[0]);
  for (int i = 0; i < count; i++) {
    double expected = fabs(number[i]);
    double result = s21_fabs(number[i]);
    if (isnan(number[i])) {
      if (isnan(result) && isnan(expected))
        SUCCESS++;
      else {
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_nan(result);
    } else if (isinf(number[i])) {
      if (isinf(result) && isinf(expected))
        SUCCESS++;
      else {
        printf("\033[43mnumber[%d] = %f\033[0m\n", i, number[i]);
        printf("result: %f\n", result);
        printf("expected: %f\n", expected);
        FAIL++;
      }
      ck_assert_ldouble_infinite(result);
    } else {
      if (result == expected)
        SUCCESS++;
      else {
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

// START_TEST(test_fabs) {
//   int FAIL = 0;
//   int SUCCESS = 0;
//   double number[] = {-1.79769e+308, -1.23456e+200, -1.23456e+100,
//   -123456.789,
//                      -12345.6789,   -1234.56789,   -123.456789, -12.3456789,
//                      -1.23456789,   -0.123456789,  -0.000012345,  0.0,
//                      0.000012345,   0.123456789,   1.23456789,    12.3456789,
//                      123.456789,    1234.56789,    12345.6789,    123456.789,
//                      1.23456e+100,  1.23456e+200,  1.79769e+308, S21_INF_NEG,
//                      S21_INF_POS,   S21_NAN};
//   int count = sizeof(number) / sizeof(number[0]);
//   for (int i = 0; i < count; i++) {
//     // int result = s21_ceil(number[i]);
//     int expected = ceil(number[i]);
//     if (result == expected)
//       SUCCESS++;
//     else {
//       FAIL++;
//       printf("\033[43m%f\033[0m\n", number[i]);
//     }
//     ck_assert_double_eq(result, expected);
//   }
//   printf("\033[43mtest_fabs\033[0m\n");
//   printf("FAIL: %d\n", FAIL);
//   printf("SUCCESS: %d\n", SUCCESS);
// }
// END_TEST

Suite *s21_math_suite(void) {
  Suite *suite = suite_create("s21_string");

  TCase *tc_abs = tcase_create("s21_abs");
  tcase_add_test(tc_abs, test_abs);
  suite_add_tcase(suite, tc_abs);

  TCase *tc_fabs = tcase_create("s21_fabs");
  tcase_add_test(tc_abs, test_fabs);
  suite_add_tcase(suite, tc_fabs);

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
