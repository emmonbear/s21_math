#include "../s21_math.h"

long double s21_asin(double x) {
  if (x > 1 || x < -1) {
    return S21_NAN * (-1);
  } else if (S21_IS_INF(x) || S21_IS_NAN(x)) {
    return S21_NAN;
  }
  long double res = x;
  long double temp = x;
  long double num_den = 1.0;
  if (x == 1)
    res = S21_PI / 2;
  else if (x == -1.0)
    res = S21_PI / -2;
  else {
    for (long double expon = 3, num = 1, denom = 2; s21_fabs(temp) > S21_EPS;
         expon += 2, num += 2, denom += 2) {
      num_den *= num / denom;
      temp = num_den * (s21_fast_pow(x, (int)expon) / expon);
      res += temp;
      if (num > 100000) {
        temp = S21_EPS / 10;
      }
    }
  }
  return res;
}