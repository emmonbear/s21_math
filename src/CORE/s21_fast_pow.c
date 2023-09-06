#include "../s21_math.h"

double s21_fast_pow(double base, int exp) {
    double result = 1.0;
    double current = base;
    int abs_exp = (exp < 0) ? -exp : exp;
    while (abs_exp > 0) {
        if (abs_exp % 2 == 1)
            result *= current;
        current *= current;
        abs_exp /= 2;
    }
    return result;
    
}