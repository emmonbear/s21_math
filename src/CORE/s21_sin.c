#include "../s21_math.h"

long double s21_sin(double x) {
  long double result = 0.0;
  long double temp = x;
  if ((S21_IS_INF(x)) || (S21_IS_NAN(x))) result = S21_NAN;
  x = s21_fmod(x, 2 * S21_PI);
  while (x > S21_PI) x -= 2 * S21_PI;
  while (x < -S21_PI) x += 2 * S21_PI;
  int n = 0;
  while (s21_fabs(temp) > S21_EPS) {
    temp = (s21_fast_pow(-1, n) * s21_fast_pow(x, ((2 * n) + 1))) /
           (s21_factorial(((2 * n) + 1)));
    n++;
    result += temp;
  }
  return result;
}