#include "../s21_math.h"

long double s21_fabs(double x) {
  x = (S21_IS_NAN(x)) ? S21_NAN * (-1) : (x == -0.0) ? (long int)x * (-1) : x;
  return (x < 0) ? -x : x;
}