#include "../s21_math.h"

long double s21_acos(double x) {
  if ((S21_IS_INF(x)) || (S21_IS_NAN(x))) return S21_NAN;
  return S21_PI / 2 - s21_asin(x);
}