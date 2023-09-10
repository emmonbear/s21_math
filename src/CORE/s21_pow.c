#include "../s21_math.h"
long double s21_pow(double base, double exp) {
  long double res = 0;
  if (base == 1 || exp == 0) {
    res = 1;
  } else if (S21_IS_NAN(base) || S21_IS_NAN(exp)) {
    res = S21_NAN;
  } else if (exp == S21_INF_NEG && base == 0) {
    res = S21_INF_POS;
  } else if (exp == S21_INF_NEG || base == 0) {
    res = 0;
  } else if (exp == S21_INF_POS) {
    res = S21_INF_POS;
  } else if (base == S21_INF_POS) {
    res = base;
  } else if (base == S21_INF_NEG) {
    if (fmod(exp, 2) == 0) {
      res = S21_INF_POS;
    } else {
      res = S21_INF_NEG;
    }
  } else if (base < 0) {
    if (s21_fabs(exp - (int)exp) > 0.0000000001) {
      res = S21_NAN;
    } else {
      base = -base;
      int flag = exp < 0;
      if (exp < 0) {
        exp = -exp;
      }
      res = s21_exp(exp * log(base));
      if (fmod(exp, 2) != 0) {
        res = -res;
      }
      if (flag) {
        res = 1. / res;
      }
    }
  } else {
    res = s21_exp(exp * log(base));
  }
  return res;
}
