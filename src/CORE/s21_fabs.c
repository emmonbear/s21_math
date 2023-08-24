#include "../s21_math.h"

long double s21_fabs(double x) {
  if (S21_IS_NAN(x)) x = S21_NAN * (-1);
  else if (x == S21_NULL_NEG)
    x = (long int)x * (-1);
  return (x < 0) ? -x : x;
}