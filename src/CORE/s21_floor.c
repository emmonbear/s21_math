#include "../s21_math.h"

long double s21_floor(double x) {
    if (S21_IS_NAN(x))
    x = S21_NAN;
  else if (x == S21_INF_POS)
    x = S21_INF_POS;
  else if ((x >= -1) && (x <= -0.0) && (signbit(x)))
    x = -0.0;
  else if (x == S21_INF_NEG)
    x = S21_INF_NEG;
  else if (x == 0.0)
    x = 0.0;
  else
    x = (x > 0) ? (long int)x : (long int)x - 1;
  return (long double)x;
}