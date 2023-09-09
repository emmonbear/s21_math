#include "../s21_math.h"

long double s21_asin(double x) {
  long double result = 0;
  long double temp = x;
  if ((x < -1) || (x > 1)) result = S21_NAN;
  x = s21_fmod(x, 2 * S21_PI);
  while (x > S21_PI) x -= 2 * S21_PI;
  while (x < -S21_PI) x += 2 * S21_PI;
  int n = 0;
  while (s21_fabs(temp) > S21_EPS) {
    temp = ((s21_factorial(2 * n)) / (s21_fast_pow(2, (2 * n)) * s21_fast_pow(s21_factorial(n), 2))) * ((s21_fast_pow(x, ((2 * n) + 1))) / ((2 * n) + 1));
    // if (n > 1000000) temp = S21_EPS / 10;
    result += temp;
    n++;
  }
  return result;
}