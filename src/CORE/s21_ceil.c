#include "../s21_math.h"

long double s21_ceil(double x) {
  if (S21_IS_NAN(x))
    x = S21_NAN;
  else if (x == S21_INF_POS)
    x = S21_INF_POS;
  else if (x == S21_INF_NEG)
    x = S21_INF_NEG;
  else {
    if (x > 0)
      x = (long int)x + 1;
    else
      x = (long int)x;
  }
  return (long double)x;
}