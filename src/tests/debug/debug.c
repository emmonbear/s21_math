/**
 * @file debug.c
 * @author emmonbea (moskaleviluak@icloud.com)
 * @brief Debugging functions
 * @version 1.0
 * @date 2024-01-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "./debug.h"

/**
 * @brief Print double bits
 * 
 * @param[in] x double whose bits are output
 */
void print_bits_double(double x)
{
    union ieee754_double bits = {x};
    unsigned int sign = bits.ieee.negative;
    unsigned int exponent = bits.ieee.exponent;
    unsigned int mantissa_0 = bits.ieee.mantissa1;
    unsigned int mantissa_1 = bits.ieee.mantissa0;
    
    print_bits(sign, 0);
    print_bits(exponent, 10);
    print_bits(mantissa_1, 19);
    print_bits(mantissa_0, 31);
    putchar('\n');
}

/**
 * @brief Print uint bits
 * 
 * @param[in] x uint whose bits are output
 * @param[in] size count bits __LITTLE_ENDIAN
 */
void print_bits(unsigned int x, int size)
{
   unsigned int byte;
    for(int i = size; i >= 0; i--) {
        byte = x & (1U << i);
        if (byte) {
            printf("1");
        } else {
            printf("0");
        }
    }
    putchar(' ');
}

/**
 * @brief Function for printing the obtained results.
 * 
 * @param[in] original_func result of calculating the original function.
 * @param[in] implementation result of calculating the implementation function.
 */
void s21_test_print(long double original_func, long double implementation)
{
    printf(" original func = %Lf | binary: ", original_func);
    print_bits_double(original_func);
    printf("implementation = %Lf | binary: ", implementation);
    print_bits_double(implementation);
    printf("\033[0;33m----------------------------------------------------------------------------------------\033[0m\n");
}
