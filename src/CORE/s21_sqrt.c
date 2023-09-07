#include "../s21_math.h"

long double s21_sqrt(double x) {
  long double begin = x;
  long double previous = 0;
  if (x < 0 || S21_IS_NAN(x)) begin = S21_NAN;
  while (s21_fabs(begin - previous) > S21_EPS) {
    previous = begin;
    begin = (x / previous + previous) / 2;
  }
  return begin;
}