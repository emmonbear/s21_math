#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = 0;
  int trigger = 0;
  if ((S21_IS_NAN(x)) || (S21_IS_NAN(y)) || (S21_IS_INF(x)) || y == 0.0)
    result = S21_NAN;
  else if (S21_IS_INF(y))
    result = x;
  else if ((x == 0.0) && (y != 0.0))
    result = 0.0;
  else {
    if ((x < 0.0) || (y < 0.0))
      result = -s21_abs(x / y);
    else
      result = s21_abs(x / y);
    if ((x < 0.0) && (y < 0.0)) {
      trigger = 1;
      x *= -1;
    }
    result = (x - (result * y));
    if (trigger == 1) result *= -1;
  }
  return result;
}