#include "../s21_math.h"
#include <math.h>

//abs tests

START_TEST(test_abs_0) {
    int FAIL = 0;
    int SUCCESS = 0;
    int number [] = {
        -2147483648, -214748364, -21474836, -2147483 -214748, -21474,
        -2147, -214, -21, -2, -1, 0, 1, 21, 214, 2147, 21474, 214748,
        2147483, 21474836, 214748364, 2147483647
    };
    int count = sizeof(number) / sizeof(number[0]);
    for(int i = 0; i < count; i++){
        int result = s21_abs(number[i]);
        int expected = abs(number[i]);
        if(result == expected)
            SUCCESS++;
        else {
            FAIL++;
            printf("\033[43m%d\033[0m\n", number[i]);
        }
        ck_assert_int_eq(result, expected);
    }
    printf("test_abs_0\n");
    printf("FAIL: %d\n", FAIL);
    printf("SUCCESS: %d\n", SUCCESS);
}
END_TEST


Suite *s21_math_suite(void) {
  Suite *suite = suite_create("s21_string");

  TCase *tc_abs = tcase_create("s21_abs");
  tcase_add_test(tc_abs, test_abs_0);
  suite_add_tcase(suite, tc_abs);

  return suite;
}

int main(void) {
  Suite *suite = s21_math_suite();
  SRunner *suite_runner = srunner_create(suite);
  // srunner_set_fork_status(suite_runner, CK_NOFORK);
  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);
  if (failed_count != 0) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
