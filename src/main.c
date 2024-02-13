/**
 * @file main.c
 * @author emmonbea (https://github.com/emmonbear)
 * @brief Debug file
 * @version 1.0
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <math.h>
#include "s21_math.h"

/**
 * @brief Debug file
 * @author emmonbea
 * @return int 
 */
int main()
{
    double value = 66;
    double v = 2;

    long double original_func = pow(value, v);
    long double implementation = s21_pow(value, v);

    printf("original function  = %Lf\n", original_func);
    printf("our implementation = %Lf\n", implementation);
    
    return 0;
}