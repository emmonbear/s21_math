#include "../s21_math.h"
#define ITERATIONS 1000000

long double s21_log(double x) {
  long double result = 0;
  if (x == 0)
    result = S21_INF_NEG;
  else if (x == S21_INF_POS)
    result = S21_INF_POS;
  else if (x < 0)
    result = S21_NAN;
  else {
    long double term = (x - 1) / (x + 1);
    long double term_squared = term * term;
    long double multiplier = 1;
    for (int i = 1; i < ITERATIONS; i += 2) {
      result += multiplier * term / i;
      multiplier *= term_squared;
    }
  }
  return 2 * result;
}