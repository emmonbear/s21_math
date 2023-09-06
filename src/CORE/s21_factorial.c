#include "../s21_math.h"

long double s21_factorial(double n) {
  long double result = 1;
  for (int i = 1; i <= n; ++i) result *= i;
  return result;
}