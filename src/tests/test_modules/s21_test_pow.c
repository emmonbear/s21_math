/**
 * @file s21_test_pow.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_pow
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./test_include/s21_test_pow.h"

/// @brief \f[ pow(2.0, 1.0) = 2.000000 \f]
START_TEST(s21_pow_0)
{
    double base = 2.0;
    double exp = 1.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 1.3) = 2.462289 \f]
START_TEST(s21_pow_1)
{
    double base = 2.0;
    double exp = 1.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 1.6) = 3.031433 \f]
START_TEST(s21_pow_2)
{
    double base = 2.0;
    double exp = 1.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 1.9) = 3.732132 \f]
START_TEST(s21_pow_3)
{
    double base = 2.0;
    double exp = 1.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 2.2) = 4.594793 \f]
START_TEST(s21_pow_4)
{
    double base = 2.0;
    double exp = 2.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 2.5) = 5.656854 \f]
START_TEST(s21_pow_5)
{
    double base = 2.0;
    double exp = 2.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 2.8) = 6.964405 \f]
START_TEST(s21_pow_6)
{
    double base = 2.0;
    double exp = 2.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 3.1) = 8.574188 \f]
START_TEST(s21_pow_7)
{
    double base = 2.0;
    double exp = 3.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 3.4) = 10.556063 \f]
START_TEST(s21_pow_8)
{
    double base = 2.0;
    double exp = 3.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 3.7) = 12.996038 \f]
START_TEST(s21_pow_9)
{
    double base = 2.0;
    double exp = 3.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 4.0) = 16.000000 \f]
START_TEST(s21_pow_10)
{
    double base = 2.0;
    double exp = 4.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 4.3) = 19.698311 \f]
START_TEST(s21_pow_11)
{
    double base = 2.0;
    double exp = 4.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 4.6) = 24.251465 \f]
START_TEST(s21_pow_12)
{
    double base = 2.0;
    double exp = 4.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 4.9) = 29.857056 \f]
START_TEST(s21_pow_13)
{
    double base = 2.0;
    double exp = 4.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 5.2) = 36.758347 \f]
START_TEST(s21_pow_14)
{
    double base = 2.0;
    double exp = 5.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 5.5) = 45.254834 \f]
START_TEST(s21_pow_15)
{
    double base = 2.0;
    double exp = 5.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 5.8) = 55.715236 \f]
START_TEST(s21_pow_16)
{
    double base = 2.0;
    double exp = 5.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 6.1) = 68.593502 \f]
START_TEST(s21_pow_17)
{
    double base = 2.0;
    double exp = 6.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 6.4) = 84.448506 \f]
START_TEST(s21_pow_18)
{
    double base = 2.0;
    double exp = 6.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 6.7) = 103.968307 \f]
START_TEST(s21_pow_19)
{
    double base = 2.0;
    double exp = 6.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 7.0) = 128.000000 \f]
START_TEST(s21_pow_20)
{
    double base = 2.0;
    double exp = 7.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 7.3) = 157.586485 \f]
START_TEST(s21_pow_21)
{
    double base = 2.0;
    double exp = 7.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 7.6) = 194.011721 \f]
START_TEST(s21_pow_22)
{
    double base = 2.0;
    double exp = 7.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 7.9) = 238.856446 \f]
START_TEST(s21_pow_23)
{
    double base = 2.0;
    double exp = 7.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 8.2) = 294.066779 \f]
START_TEST(s21_pow_24)
{
    double base = 2.0;
    double exp = 8.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 8.5) = 362.038672 \f]
START_TEST(s21_pow_25)
{
    double base = 2.0;
    double exp = 8.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 8.8) = 445.721888 \f]
START_TEST(s21_pow_26)
{
    double base = 2.0;
    double exp = 8.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 9.1) = 548.748013 \f]
START_TEST(s21_pow_27)
{
    double base = 2.0;
    double exp = 9.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 9.4) = 675.588050 \f]
START_TEST(s21_pow_28)
{
    double base = 2.0;
    double exp = 9.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 9.7) = 831.746454 \f]
START_TEST(s21_pow_29)
{
    double base = 2.0;
    double exp = 9.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 10.0) = 1024.000000 \f]
START_TEST(s21_pow_30)
{
    double base = 2.0;
    double exp = 10.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 10.3) = 1260.691879 \f]
START_TEST(s21_pow_31)
{
    double base = 2.0;
    double exp = 10.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 10.6) = 1552.093764 \f]
START_TEST(s21_pow_32)
{
    double base = 2.0;
    double exp = 10.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 10.9) = 1910.851567 \f]
START_TEST(s21_pow_33)
{
    double base = 2.0;
    double exp = 10.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 11.2) = 2352.534231 \f]
START_TEST(s21_pow_34)
{
    double base = 2.0;
    double exp = 11.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 11.5) = 2896.309376 \f]
START_TEST(s21_pow_35)
{
    double base = 2.0;
    double exp = 11.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 11.8) = 3565.775107 \f]
START_TEST(s21_pow_36)
{
    double base = 2.0;
    double exp = 11.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 12.1) = 4389.984103 \f]
START_TEST(s21_pow_37)
{
    double base = 2.0;
    double exp = 12.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 12.4) = 5404.704403 \f]
START_TEST(s21_pow_38)
{
    double base = 2.0;
    double exp = 12.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 12.7) = 6653.971631 \f]
START_TEST(s21_pow_39)
{
    double base = 2.0;
    double exp = 12.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 13.0) = 8192.000000 \f]
START_TEST(s21_pow_40)
{
    double base = 2.0;
    double exp = 13.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 13.3) = 10085.535034 \f]
START_TEST(s21_pow_41)
{
    double base = 2.0;
    double exp = 13.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 13.6) = 12416.750113 \f]
START_TEST(s21_pow_42)
{
    double base = 2.0;
    double exp = 13.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 13.9) = 15286.812533 \f]
START_TEST(s21_pow_43)
{
    double base = 2.0;
    double exp = 13.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 14.2) = 18820.273848 \f]
START_TEST(s21_pow_44)
{
    double base = 2.0;
    double exp = 14.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 14.5) = 23170.475006 \f]
START_TEST(s21_pow_45)
{
    double base = 2.0;
    double exp = 14.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 14.8) = 28526.200858 \f]
START_TEST(s21_pow_46)
{
    double base = 2.0;
    double exp = 14.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 15.1) = 35119.872820 \f]
START_TEST(s21_pow_47)
{
    double base = 2.0;
    double exp = 15.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 15.4) = 43237.635220 \f]
START_TEST(s21_pow_48)
{
    double base = 2.0;
    double exp = 15.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 15.7) = 53231.773048 \f]
START_TEST(s21_pow_49)
{
    double base = 2.0;
    double exp = 15.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 16.0) = 65536.000000 \f]
START_TEST(s21_pow_50)
{
    double base = 2.0;
    double exp = 16.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 16.3) = 80684.280273 \f]
START_TEST(s21_pow_51)
{
    double base = 2.0;
    double exp = 16.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 16.6) = 99334.000903 \f]
START_TEST(s21_pow_52)
{
    double base = 2.0;
    double exp = 16.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 16.9) = 122294.500267 \f]
START_TEST(s21_pow_53)
{
    double base = 2.0;
    double exp = 16.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 17.2) = 150562.190786 \f]
START_TEST(s21_pow_54)
{
    double base = 2.0;
    double exp = 17.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 17.5) = 185363.800047 \f]
START_TEST(s21_pow_55)
{
    double base = 2.0;
    double exp = 17.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 17.8) = 228209.606865 \f]
START_TEST(s21_pow_56)
{
    double base = 2.0;
    double exp = 17.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 18.1) = 280958.982563 \f]
START_TEST(s21_pow_57)
{
    double base = 2.0;
    double exp = 18.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 18.4) = 345901.081762 \f]
START_TEST(s21_pow_58)
{
    double base = 2.0;
    double exp = 18.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 18.7) = 425854.184381 \f]
START_TEST(s21_pow_59)
{
    double base = 2.0;
    double exp = 18.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 19.0) = 524288.000000 \f]
START_TEST(s21_pow_60)
{
    double base = 2.0;
    double exp = 19.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 19.3) = 645474.242184 \f]
START_TEST(s21_pow_61)
{
    double base = 2.0;
    double exp = 19.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 19.6) = 794672.007223 \f]
START_TEST(s21_pow_62)
{
    double base = 2.0;
    double exp = 19.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 19.9) = 978356.002134 \f]
START_TEST(s21_pow_63)
{
    double base = 2.0;
    double exp = 19.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 20.2) = 1204497.526289 \f]
START_TEST(s21_pow_64)
{
    double base = 2.0;
    double exp = 20.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 20.5) = 1482910.400379 \f]
START_TEST(s21_pow_65)
{
    double base = 2.0;
    double exp = 20.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 20.8) = 1825676.854918 \f]
START_TEST(s21_pow_66)
{
    double base = 2.0;
    double exp = 20.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 21.1) = 2247671.860505 \f]
START_TEST(s21_pow_67)
{
    double base = 2.0;
    double exp = 21.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 21.4) = 2767208.654093 \f]
START_TEST(s21_pow_68)
{
    double base = 2.0;
    double exp = 21.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 21.7) = 3406833.475047 \f]
START_TEST(s21_pow_69)
{
    double base = 2.0;
    double exp = 21.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 22.0) = 4194304.000000 \f]
START_TEST(s21_pow_70)
{
    double base = 2.0;
    double exp = 22.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 22.3) = 5163793.937470 \f]
START_TEST(s21_pow_71)
{
    double base = 2.0;
    double exp = 22.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 22.6) = 6357376.057781 \f]
START_TEST(s21_pow_72)
{
    double base = 2.0;
    double exp = 22.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 22.9) = 7826848.017070 \f]
START_TEST(s21_pow_73)
{
    double base = 2.0;
    double exp = 22.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 23.2) = 9635980.210315 \f]
START_TEST(s21_pow_74)
{
    double base = 2.0;
    double exp = 23.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 23.5) = 11863283.203031 \f]
START_TEST(s21_pow_75)
{
    double base = 2.0;
    double exp = 23.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 23.8) = 14605414.839341 \f]
START_TEST(s21_pow_76)
{
    double base = 2.0;
    double exp = 23.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 24.1) = 17981374.884039 \f]
START_TEST(s21_pow_77)
{
    double base = 2.0;
    double exp = 24.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 24.4) = 22137669.232746 \f]
START_TEST(s21_pow_78)
{
    double base = 2.0;
    double exp = 24.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 24.7) = 27254667.800372 \f]
START_TEST(s21_pow_79)
{
    double base = 2.0;
    double exp = 24.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 25.0) = 33554432.000000 \f]
START_TEST(s21_pow_80)
{
    double base = 2.0;
    double exp = 25.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 25.3) = 41310351.499762 \f]
START_TEST(s21_pow_81)
{
    double base = 2.0;
    double exp = 25.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 25.6) = 50859008.462247 \f]
START_TEST(s21_pow_82)
{
    double base = 2.0;
    double exp = 25.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 25.9) = 62614784.136557 \f]
START_TEST(s21_pow_83)
{
    double base = 2.0;
    double exp = 25.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 26.2) = 77087841.682520 \f]
START_TEST(s21_pow_84)
{
    double base = 2.0;
    double exp = 26.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 26.5) = 94906265.624252 \f]
START_TEST(s21_pow_85)
{
    double base = 2.0;
    double exp = 26.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 26.8) = 116843318.714726 \f]
START_TEST(s21_pow_86)
{
    double base = 2.0;
    double exp = 26.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 27.1) = 143850999.072315 \f]
START_TEST(s21_pow_87)
{
    double base = 2.0;
    double exp = 27.1;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 27.4) = 177101353.861964 \f]
START_TEST(s21_pow_88)
{
    double base = 2.0;
    double exp = 27.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 27.7) = 218037342.402979 \f]
START_TEST(s21_pow_89)
{
    double base = 2.0;
    double exp = 27.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 28.0) = 268435456.000000 \f]
START_TEST(s21_pow_90)
{
    double base = 2.0;
    double exp = 28.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 28.3) = 330482811.998095 \f]
START_TEST(s21_pow_91)
{
    double base = 2.0;
    double exp = 28.3;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 28.6) = 406872067.697973 \f]
START_TEST(s21_pow_92)
{
    double base = 2.0;
    double exp = 28.6;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 28.9) = 500918273.092454 \f]
START_TEST(s21_pow_93)
{
    double base = 2.0;
    double exp = 28.9;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 29.2) = 616702733.460158 \f]
START_TEST(s21_pow_94)
{
    double base = 2.0;
    double exp = 29.2;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 19.5) = 741455.200189 \f]
START_TEST(s21_pow_95)
{
    double base = 2.0;
    double exp = 19.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 29.8) = 934746549.717808 \f]
START_TEST(s21_pow_96)
{
    double base = 2.0;
    double exp = 29.8;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 30.1) = 1073741824.000000 \f]
START_TEST(s21_pow_97)
{
    double base = 2.0;
    double exp = 30.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 30.4) = 1416810830.895715 \f]
START_TEST(s21_pow_98)
{
    double base = 2.0;
    double exp = 30.4;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 25.7) = 54509335.600745 \f]
START_TEST(s21_pow_99)
{
    double base = 2.0;
    double exp = 25.7;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003124) = 1.005115 \f]
START_TEST(s21_pow_100)
{
    double base = 12384123.2134;
    double exp = 0.0003124;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003147) = 1.005153 \f]
START_TEST(s21_pow_101)
{
    double base = 12384123.2134;
    double exp = 0.0003147;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003170) = 1.005191 \f]
START_TEST(s21_pow_102)
{
    double base = 12384123.2134;
    double exp = 0.0003170;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003193) = 1.005228 \f]
START_TEST(s21_pow_103)
{
    double base = 12384123.2134;
    double exp = 0.0003193;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003216) = 1.005266 \f]
START_TEST(s21_pow_104)
{
    double base = 12384123.2134;
    double exp = 0.0003216;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003239) = 1.005304 \f]
START_TEST(s21_pow_105)
{
    double base = 12384123.2134;
    double exp = 0.0003239;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003262) = 1.005342 \f]
START_TEST(s21_pow_106)
{
    double base = 12384123.2134;
    double exp = 0.0003262;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003285) = 1.005379 \f]
START_TEST(s21_pow_107)
{
    double base = 12384123.2134;
    double exp = 0.0003285;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003308) = 1.005417 \f]
START_TEST(s21_pow_108)
{
    double base = 12384123.2134;
    double exp = 0.0003308;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003331) = 1.005455 \f]
START_TEST(s21_pow_109)
{
    double base = 12384123.2134;
    double exp = 0.0003331;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003354) = 1.005493 \f]
START_TEST(s21_pow_110)
{
    double base = 12384123.2134;
    double exp = 0.0003354;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003377) = 1.005531 \f]
START_TEST(s21_pow_111)
{
    double base = 12384123.2134;
    double exp = 0.0003377;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003400) = 1.005568 \f]
START_TEST(s21_pow_112)
{
    double base = 12384123.2134;
    double exp = 0.0003400;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003423) = 1.005606 \f]
START_TEST(s21_pow_113)
{
    double base = 12384123.2134;
    double exp = 0.0003423;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003446) = 1.005644 \f]
START_TEST(s21_pow_114)
{
    double base = 12384123.2134;
    double exp = 0.0003446;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003469) = 1.005682 \f]
START_TEST(s21_pow_115)
{
    double base = 12384123.2134;
    double exp = 0.0003469;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003492) = 1.005719 \f]
START_TEST(s21_pow_116)
{
    double base = 12384123.2134;
    double exp = 0.0003492;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003515) = 1.005757 \f]
START_TEST(s21_pow_117)
{
    double base = 12384123.2134;
    double exp = 0.0003515;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003538) = 1.005795 \f]
START_TEST(s21_pow_118)
{
    double base = 12384123.2134;
    double exp = 0.0003538;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003561) = 1.005833 \f]
START_TEST(s21_pow_119)
{
    double base = 12384123.2134;
    double exp = 0.0003561;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003584) = 1.005871 \f]
START_TEST(s21_pow_120)
{
    double base = 12384123.2134;
    double exp = 0.0003584;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003607) = 1.005908 \f]
START_TEST(s21_pow_121)
{
    double base = 12384123.2134;
    double exp = 0.0003607;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003630) = 1.005946 \f]
START_TEST(s21_pow_122)
{
    double base = 12384123.2134;
    double exp = 0.0003630;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003653) = 1.005984 \f]
START_TEST(s21_pow_123)
{
    double base = 12384123.2134;
    double exp = 0.0003653;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003676) = 1.006022 \f]
START_TEST(s21_pow_124)
{
    double base = 12384123.2134;
    double exp = 0.0003676;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003699) = 1.006059 \f]
START_TEST(s21_pow_125)
{
    double base = 12384123.2134;
    double exp = 0.0003699;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003722) = 1.006097 \f]
START_TEST(s21_pow_126)
{
    double base = 12384123.2134;
    double exp = 0.0003722;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003745) = 1.006135 \f]
START_TEST(s21_pow_127)
{
    double base = 12384123.2134;
    double exp = 0.0003745;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003768) = 1.006173 \f]
START_TEST(s21_pow_128)
{
    double base = 12384123.2134;
    double exp = 0.0003768;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003791) = 1.006211 \f]
START_TEST(s21_pow_129)
{
    double base = 12384123.2134;
    double exp = 0.0003791;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003814) = 1.006248 \f]
START_TEST(s21_pow_130)
{
    double base = 12384123.2134;
    double exp = 0.0003814;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003837) = 1.006286 \f]
START_TEST(s21_pow_131)
{
    double base = 12384123.2134;
    double exp = 0.0003837;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003860) = 1.006324 \f]
START_TEST(s21_pow_132)
{
    double base = 12384123.2134;
    double exp = 0.0003860;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003883) = 1.006362 \f]
START_TEST(s21_pow_133)
{
    double base = 12384123.2134;
    double exp = 0.0003883;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003906) = 1.006400 \f]
START_TEST(s21_pow_134)
{
    double base = 12384123.2134;
    double exp = 0.0003906;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003929) = 1.006437 \f]
START_TEST(s21_pow_135)
{
    double base = 12384123.2134;
    double exp = 0.0003929;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003952) = 1.006475 \f]
START_TEST(s21_pow_136)
{
    double base = 12384123.2134;
    double exp = 0.0003952;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003975) = 1.006513 \f]
START_TEST(s21_pow_137)
{
    double base = 12384123.2134;
    double exp = 0.0003975;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0003998) = 1.006551 \f]
START_TEST(s21_pow_138)
{
    double base = 12384123.2134;
    double exp = 0.0003998;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004021) = 1.006589 \f]
START_TEST(s21_pow_139)
{
    double base = 12384123.2134;
    double exp = 0.0004021;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004044) = 1.006626 \f]
START_TEST(s21_pow_140)
{
    double base = 12384123.2134;
    double exp = 0.0004044;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004067) = 1.006664 \f]
START_TEST(s21_pow_141)
{
    double base = 12384123.2134;
    double exp = 0.0004067;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004090) = 1.006702 \f]
START_TEST(s21_pow_142)
{
    double base = 12384123.2134;
    double exp = 0.0004090;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004113) = 1.006740 \f]
START_TEST(s21_pow_143)
{
    double base = 12384123.2134;
    double exp = 0.0004113;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004136) = 1.006778 \f]
START_TEST(s21_pow_144)
{
    double base = 12384123.2134;
    double exp = 0.0004136;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004159) = 1.006816 \f]
START_TEST(s21_pow_145)
{
    double base = 12384123.2134;
    double exp = 0.0004159;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004182) = 1.006853 \f]
START_TEST(s21_pow_146)
{
    double base = 12384123.2134;
    double exp = 0.0004182;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004205) = 1.006891 \f]
START_TEST(s21_pow_147)
{
    double base = 12384123.2134;
    double exp = 0.0004205;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004228) = 1.006929 \f]
START_TEST(s21_pow_148)
{
    double base = 12384123.2134;
    double exp = 0.0004228;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004251) = 1.006967 \f]
START_TEST(s21_pow_149)
{
    double base = 12384123.2134;
    double exp = 0.0004251;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004274) = 1.007005 \f]
START_TEST(s21_pow_150)
{
    double base = 12384123.2134;
    double exp = 0.0004274;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004297) = 1.007043 \f]
START_TEST(s21_pow_151)
{
    double base = 12384123.2134;
    double exp = 0.0004297;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004320) = 1.007080 \f]
START_TEST(s21_pow_152)
{
    double base = 12384123.2134;
    double exp = 0.0004320;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004343) = 1.007118 \f]
START_TEST(s21_pow_153)
{
    double base = 12384123.2134;
    double exp = 0.0004343;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004366) = 1.007156 \f]
START_TEST(s21_pow_154)
{
    double base = 12384123.2134;
    double exp = 0.0004366;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004389) = 1.007194 \f]
START_TEST(s21_pow_155)
{
    double base = 12384123.2134;
    double exp = 0.0004389;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004412) = 1.007232 \f]
START_TEST(s21_pow_156)
{
    double base = 12384123.2134;
    double exp = 0.0004412;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004435) = 1.007270 \f]
START_TEST(s21_pow_157)
{
    double base = 12384123.2134;
    double exp = 0.0004435;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004458) = 1.007307 \f]
START_TEST(s21_pow_158)
{
    double base = 12384123.2134;
    double exp = 0.0004458;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004481) = 1.007345 \f]
START_TEST(s21_pow_159)
{
    double base = 12384123.2134;
    double exp = 0.0004481;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004504) = 1.007383 \f]
START_TEST(s21_pow_160)
{
    double base = 12384123.2134;
    double exp = 0.0004504;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004527) = 1.007421 \f]
START_TEST(s21_pow_161)
{
    double base = 12384123.2134;
    double exp = 0.0004527;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004550) = 1.007459 \f]
START_TEST(s21_pow_162)
{
    double base = 12384123.2134;
    double exp = 0.0004550;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004573) = 1.007497 \f]
START_TEST(s21_pow_163)
{
    double base = 12384123.2134;
    double exp = 0.0004573;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004596) = 1.007534 \f]
START_TEST(s21_pow_164)
{
    double base = 12384123.2134;
    double exp = 0.0004596;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004619) = 1.007572 \f]
START_TEST(s21_pow_165)
{
    double base = 12384123.2134;
    double exp = 0.0004619;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004642) = 1.007610 \f]
START_TEST(s21_pow_166)
{
    double base = 12384123.2134;
    double exp = 0.0004642;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004665) = 1.007648 \f]
START_TEST(s21_pow_167)
{
    double base = 12384123.2134;
    double exp = 0.0004665;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004688) = 1.007686 \f]
START_TEST(s21_pow_168)
{
    double base = 12384123.2134;
    double exp = 0.0004688;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004711) = 1.007724 \f]
START_TEST(s21_pow_169)
{
    double base = 12384123.2134;
    double exp = 0.0004711;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004734) = 1.007761 \f]
START_TEST(s21_pow_170)
{
    double base = 12384123.2134;
    double exp = 0.0004734;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004757) = 1.007799 \f]
START_TEST(s21_pow_171)
{
    double base = 12384123.2134;
    double exp = 0.0004757;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004780) = 1.007837 \f]
START_TEST(s21_pow_172)
{
    double base = 12384123.2134;
    double exp = 0.0004780;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004803) = 1.007875 \f]
START_TEST(s21_pow_173)
{
    double base = 12384123.2134;
    double exp = 0.0004803;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004826) = 1.007913 \f]
START_TEST(s21_pow_174)
{
    double base = 12384123.2134;
    double exp = 0.0004826;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004849) = 1.007951 \f]
START_TEST(s21_pow_175)
{
    double base = 12384123.2134;
    double exp = 0.0004849;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004872) = 1.007989 \f]
START_TEST(s21_pow_176)
{
    double base = 12384123.2134;
    double exp = 0.0004872;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004895) = 1.008027 \f]
START_TEST(s21_pow_177)
{
    double base = 12384123.2134;
    double exp = 0.0004895;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004918) = 1.008064 \f]
START_TEST(s21_pow_178)
{
    double base = 12384123.2134;
    double exp = 0.0004918;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004941) = 1.008102 \f]
START_TEST(s21_pow_179)
{
    double base = 12384123.2134;
    double exp = 0.0004941;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004964) = 1.008140 \f]
START_TEST(s21_pow_180)
{
    double base = 12384123.2134;
    double exp = 0.0004964;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0004987) = 1.008178 \f]
START_TEST(s21_pow_181)
{
    double base = 12384123.2134;
    double exp = 0.0004987;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005010) = 1.008216 \f]
START_TEST(s21_pow_182)
{
    double base = 12384123.2134;
    double exp = 0.0005010;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005033) = 1.008254 \f]
START_TEST(s21_pow_183)
{
    double base = 12384123.2134;
    double exp = 0.0005033;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005056) = 1.008292 \f]
START_TEST(s21_pow_184)
{
    double base = 12384123.2134;
    double exp = 0.0005056;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005079) = 1.008329 \f]
START_TEST(s21_pow_185)
{
    double base = 12384123.2134;
    double exp = 0.0005079;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005102) = 1.008367 \f]
START_TEST(s21_pow_186)
{
    double base = 12384123.2134;
    double exp = 0.0005102;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005125) = 1.008405 \f]
START_TEST(s21_pow_187)
{
    double base = 12384123.2134;
    double exp = 0.0005125;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005148) = 1.008443 \f]
START_TEST(s21_pow_188)
{
    double base = 12384123.2134;
    double exp = 0.0005148;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005171) = 1.008481 \f]
START_TEST(s21_pow_189)
{
    double base = 12384123.2134;
    double exp = 0.0005171;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005194) = 1.008519 \f]
START_TEST(s21_pow_190)
{
    double base = 12384123.2134;
    double exp = 0.0005194;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005217) = 1.008557 \f]
START_TEST(s21_pow_191)
{
    double base = 12384123.2134;
    double exp = 0.0005217;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005240) = 1.008595 \f]
START_TEST(s21_pow_192)
{
    double base = 12384123.2134;
    double exp = 0.0005240;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005263) = 1.008633 \f]
START_TEST(s21_pow_193)
{
    double base = 12384123.2134;
    double exp = 0.0005263;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005286) = 1.008670 \f]
START_TEST(s21_pow_194)
{
    double base = 12384123.2134;
    double exp = 0.0005286;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005309) = 1.008708 \f]
START_TEST(s21_pow_195)
{
    double base = 12384123.2134;
    double exp = 0.0005309;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005332) = 1.008746 \f]
START_TEST(s21_pow_196)
{
    double base = 12384123.2134;
    double exp = 0.0005332;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005355) = 1.008784 \f]
START_TEST(s21_pow_197)
{
    double base = 12384123.2134;
    double exp = 0.0005355;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005378) = 1.008822 \f]
START_TEST(s21_pow_198)
{
    double base = 12384123.2134;
    double exp = 0.0005378;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(12384123.2134, 0.0005401) = 1.008860 \f]
START_TEST(s21_pow_199)
{
    double base = 12384123.2134;
    double exp = 0.0005401;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -28.21) = 0.000000 \f]
START_TEST(s21_pow_200)
{
    double base = 2.1;
    double exp = -28.21;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -27.8087) = 0.000000 \f]
START_TEST(s21_pow_201)
{
    double base = 2.1;
    double exp = -27.8087;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -27.4074) = 0.000000 \f]
START_TEST(s21_pow_202)
{
    double base = 2.1;
    double exp = -27.4074;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -27.0061) = 0.000000 \f]
START_TEST(s21_pow_203)
{
    double base = 2.1;
    double exp = -27.0061;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -26.6048) = 0.000000 \f]
START_TEST(s21_pow_204)
{
    double base = 2.1;
    double exp = -26.6048;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -26.2035) = 0.000000 \f]
START_TEST(s21_pow_205)
{
    double base = 2.1;
    double exp = -26.2035;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -25.8022) = 0.000000 \f]
START_TEST(s21_pow_206)
{
    double base = 2.1;
    double exp = -25.8022;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -25.4009) = 0.000000 \f]
START_TEST(s21_pow_207)
{
    double base = 2.1;
    double exp = -25.4009;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -24.9996) = 0.000000 \f]
START_TEST(s21_pow_208)
{
    double base = 2.1;
    double exp = -24.9996;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -24.5983) = 0.000000 \f]
START_TEST(s21_pow_209)
{
    double base = 2.1;
    double exp = -24.5983;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -24.1970) = 0.000000 \f]
START_TEST(s21_pow_210)
{
    double base = 2.1;
    double exp = -24.1970;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -23.7957) = 0.000000 \f]
START_TEST(s21_pow_211)
{
    double base = 2.1;
    double exp = -23.7957;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -23.3944) = 0.000000 \f]
START_TEST(s21_pow_212)
{
    double base = 2.1;
    double exp = -23.3944;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -22.9931) = 0.000000 \f]
START_TEST(s21_pow_213)
{
    double base = 2.1;
    double exp = -22.9931;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -22.5918) = 0.000000 \f]
START_TEST(s21_pow_214)
{
    double base = 2.1;
    double exp = -22.5918;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -22.1905) = 0.000000 \f]
START_TEST(s21_pow_215)
{
    double base = 2.1;
    double exp = -22.1905;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -21.7892) = 0.000000 \f]
START_TEST(s21_pow_216)
{
    double base = 2.1;
    double exp = -21.7892;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -21.3879) = 0.000000 \f]
START_TEST(s21_pow_217)
{
    double base = 2.1;
    double exp = -21.3879;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -20.9866) = 0.000000 \f]
START_TEST(s21_pow_218)
{
    double base = 2.1;
    double exp = -20.9866;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -20.5853) = 0.000000 \f]
START_TEST(s21_pow_219)
{
    double base = 2.1;
    double exp = -20.5853;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -20.1840) = 0.000000 \f]
START_TEST(s21_pow_220)
{
    double base = 2.1;
    double exp = -20.1840;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -19.7827) = 0.000000 \f]
START_TEST(s21_pow_221)
{
    double base = 2.1;
    double exp = -19.7827;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -19.3814) = 0.000001 \f]
START_TEST(s21_pow_222)
{
    double base = 2.1;
    double exp = -19.3814;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -18.9801) = 0.000001 \f]
START_TEST(s21_pow_223)
{
    double base = 2.1;
    double exp = -18.9801;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -18.5788) = 0.000001 \f]
START_TEST(s21_pow_224)
{
    double base = 2.1;
    double exp = -18.5788;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -18.1775) = 0.000001 \f]
START_TEST(s21_pow_225)
{
    double base = 2.1;
    double exp = -18.1775;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -17.7762) = 0.000002 \f]
START_TEST(s21_pow_226)
{
    double base = 2.1;
    double exp = -17.7762;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -17.3749) = 0.000003 \f]
START_TEST(s21_pow_227)
{
    double base = 2.1;
    double exp = -17.3749;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -16.9736) = 0.000003 \f]
START_TEST(s21_pow_228)
{
    double base = 2.1;
    double exp = -16.9736;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -16.5723) = 0.000005 \f]
START_TEST(s21_pow_229)
{
    double base = 2.1;
    double exp = -16.5723;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -16.1710) = 0.000006 \f]
START_TEST(s21_pow_230)
{
    double base = 2.1;
    double exp = -16.1710;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -15.7697) = 0.000008 \f]
START_TEST(s21_pow_231)
{
    double base = 2.1;
    double exp = -15.7697;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -15.3684) = 0.000011 \f]
START_TEST(s21_pow_232)
{
    double base = 2.1;
    double exp = -15.3684;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -14.9671) = 0.000015 \f]
START_TEST(s21_pow_233)
{
    double base = 2.1;
    double exp = -14.9671;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -14.5658) = 0.000020 \f]
START_TEST(s21_pow_234)
{
    double base = 2.1;
    double exp = -14.5658;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -14.1645) = 0.000027 \f]
START_TEST(s21_pow_235)
{
    double base = 2.1;
    double exp = -14.1645;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -13.7632) = 0.000037 \f]
START_TEST(s21_pow_236)
{
    double base = 2.1;
    double exp = -13.7632;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -13.3619) = 0.000049 \f]
START_TEST(s21_pow_237)
{
    double base = 2.1;
    double exp = -13.3619;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -12.9606) = 0.000067 \f]
START_TEST(s21_pow_238)
{
    double base = 2.1;
    double exp = -12.9606;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -12.5593) = 0.000090 \f]
START_TEST(s21_pow_239)
{
    double base = 2.1;
    double exp = -12.5593;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -12.1580) = 0.000121 \f]
START_TEST(s21_pow_240)
{
    double base = 2.1;
    double exp = -12.1580;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -11.7567) = 0.000163 \f]
START_TEST(s21_pow_241)
{
    double base = 2.1;
    double exp = -11.7567;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -11.3554) = 0.000219 \f]
START_TEST(s21_pow_242)
{
    double base = 2.1;
    double exp = -11.3554;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -10.9541) = 0.000295 \f]
START_TEST(s21_pow_243)
{
    double base = 2.1;
    double exp = -10.9541;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -10.5528) = 0.000398 \f]
START_TEST(s21_pow_244)
{
    double base = 2.1;
    double exp = -10.5528;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -10.1515) = 0.000536 \f]
START_TEST(s21_pow_245)
{
    double base = 2.1;
    double exp = -10.1515;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -9.7502) = 0.000722 \f]
START_TEST(s21_pow_246)
{
    double base = 2.1;
    double exp = -9.7502;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -9.3489) = 0.000972 \f]
START_TEST(s21_pow_247)
{
    double base = 2.1;
    double exp = -9.3489;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -8.9476) = 0.001309 \f]
START_TEST(s21_pow_248)
{
    double base = 2.1;
    double exp = -8.9476;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -8.5463) = 0.001763 \f]
START_TEST(s21_pow_249)
{
    double base = 2.1;
    double exp = -8.5463;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -8.1450) = 0.002374 \f]
START_TEST(s21_pow_250)
{
    double base = 2.1;
    double exp = -8.1450;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -7.7437) = 0.003198 \f]
START_TEST(s21_pow_251)
{
    double base = 2.1;
    double exp = -7.7437;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -7.3424) = 0.004307 \f]
START_TEST(s21_pow_252)
{
    double base = 2.1;
    double exp = -7.3424;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -6.9411) = 0.005800 \f]
START_TEST(s21_pow_253)
{
    double base = 2.1;
    double exp = -6.9411;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -6.5398) = 0.007812 \f]
START_TEST(s21_pow_254)
{
    double base = 2.1;
    double exp = -6.5398;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -6.1385) = 0.010521 \f]
START_TEST(s21_pow_255)
{
    double base = 2.1;
    double exp = -6.1385;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -5.7372) = 0.014170 \f]
START_TEST(s21_pow_256)
{
    double base = 2.1;
    double exp = -5.7372;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -5.3359) = 0.019084 \f]
START_TEST(s21_pow_257)
{
    double base = 2.1;
    double exp = -5.3359;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -4.9346) = 0.025703 \f]
START_TEST(s21_pow_258)
{
    double base = 2.1;
    double exp = -4.9346;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -4.5333) = 0.034617 \f]
START_TEST(s21_pow_259)
{
    double base = 2.1;
    double exp = -4.5333;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -4.1320) = 0.046622 \f]
START_TEST(s21_pow_260)
{
    double base = 2.1;
    double exp = -4.1320;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -3.7307) = 0.062791 \f]
START_TEST(s21_pow_261)
{
    double base = 2.1;
    double exp = -3.7307;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -3.3294) = 0.084567 \f]
START_TEST(s21_pow_262)
{
    double base = 2.1;
    double exp = -3.3294;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -2.9281) = 0.113896 \f]
START_TEST(s21_pow_263)
{
    double base = 2.1;
    double exp = -2.9281;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -2.5268) = 0.153397 \f]
START_TEST(s21_pow_264)
{
    double base = 2.1;
    double exp = -2.5268;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -2.1255) = 0.206596 \f]
START_TEST(s21_pow_265)
{
    double base = 2.1;
    double exp = -2.1255;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -1.7242) = 0.278246 \f]
START_TEST(s21_pow_266)
{
    double base = 2.1;
    double exp = -1.7242;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -1.3229) = 0.374745 \f]
START_TEST(s21_pow_267)
{
    double base = 2.1;
    double exp = -1.3229;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -0.9216) = 0.504711 \f]
START_TEST(s21_pow_268)
{
    double base = 2.1;
    double exp = -0.9216;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -0.5203) = 0.679750 \f]
START_TEST(s21_pow_269)
{
    double base = 2.1;
    double exp = -0.5203;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, -0.1190) = 0.915495 \f]
START_TEST(s21_pow_270)
{
    double base = 2.1;
    double exp = -0.1190;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 0.2823) = 1.232998 \f]
START_TEST(s21_pow_271)
{
    double base = 2.1;
    double exp = 0.2823;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 0.6836) = 1.660616 \f]
START_TEST(s21_pow_272)
{
    double base = 2.1;
    double exp = 0.6836;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 1.0849) = 2.236535 \f]
START_TEST(s21_pow_273)
{
    double base = 2.1;
    double exp = 1.0849;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 1.4862) = 3.012190 \f]
START_TEST(s21_pow_274)
{
    double base = 2.1;
    double exp = 1.4862;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 1.8875) = 4.056850 \f]
START_TEST(s21_pow_275)
{
    double base = 2.1;
    double exp = 1.8875;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 2.2888) = 5.463809 \f]
START_TEST(s21_pow_276)
{
    double base = 2.1;
    double exp = 2.2888;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 2.6901) = 7.358717 \f]
START_TEST(s21_pow_277)
{
    double base = 2.1;
    double exp = 2.6901;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 3.0914) = 9.910800 \f]
START_TEST(s21_pow_278)
{
    double base = 2.1;
    double exp = 3.0914;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 3.4927) = 13.347973 \f]
START_TEST(s21_pow_279)
{
    double base = 2.1;
    double exp = 3.4927;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 3.8940) = 17.977195 \f]
START_TEST(s21_pow_280)
{
    double base = 2.1;
    double exp = 3.8940;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 4.2953) = 24.211881 \f]
START_TEST(s21_pow_281)
{
    double base = 2.1;
    double exp = 4.2953;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 4.6966) = 32.608824 \f]
START_TEST(s21_pow_282)
{
    double base = 2.1;
    double exp = 4.6966;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 5.0979) = 43.917918 \f]
START_TEST(s21_pow_283)
{
    double base = 2.1;
    double exp = 5.0979;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 5.4992) = 59.149128 \f]
START_TEST(s21_pow_284)
{
    double base = 2.1;
    double exp = 5.4992;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 5.9005) = 79.662687 \f]
START_TEST(s21_pow_285)
{
    double base = 2.1;
    double exp = 5.9005;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 6.3018) = 107.290570 \f]
START_TEST(s21_pow_286)
{
    double base = 2.1;
    double exp = 6.3018;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 6.7031) = 144.500102 \f]
START_TEST(s21_pow_287)
{
    double base = 2.1;
    double exp = 6.7031;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 7.1044) = 194.614304 \f]
START_TEST(s21_pow_288)
{
    double base = 2.1;
    double exp = 7.1044;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 7.5057) = 262.108654 \f]
START_TEST(s21_pow_289)
{
    double base = 2.1;
    double exp = 7.5057;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 7.9070) = 353.010776 \f]
START_TEST(s21_pow_290)
{
    double base = 2.1;
    double exp = 7.9070;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 8.3083) = 475.438740 \f]
START_TEST(s21_pow_291)
{
    double base = 2.1;
    double exp = 8.3083;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 8.7096) = 640.326049 \f]
START_TEST(s21_pow_292)
{
    double base = 2.1;
    double exp = 8.7096;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 9.1109) = 862.398063 \f]
START_TEST(s21_pow_293)
{
    double base = 2.1;
    double exp = 9.1109;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 9.5122) = 1161.487059 \f]
START_TEST(s21_pow_294)
{
    double base = 2.1;
    double exp = 9.5122;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 9.9135) = 1564.303361 \f]
START_TEST(s21_pow_295)
{
    double base = 2.1;
    double exp = 9.9135;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 10.3148) = 2106.820722 \f]
START_TEST(s21_pow_296)
{
    double base = 2.1;
    double exp = 10.3148;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 10.7161) = 2837.488985 \f]
START_TEST(s21_pow_297)
{
    double base = 2.1;
    double exp = 10.7161;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 11.1174) = 3821.560921 \f]
START_TEST(s21_pow_298)
{
    double base = 2.1;
    double exp = 11.1174;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.1, 11.5187) = 5146.919672 \f]
START_TEST(s21_pow_299)
{
    double base = 2.1;
    double exp = 11.5187;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(2.0, 2.0) = 6.250000 \f]
START_TEST(s21_pow_300)
{
    double base = 2.0;
    double exp = 2.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.901) = -nan \f]
START_TEST(s21_pow_301)
{
    double base = -2.5;
    double exp = 1.901;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.802) = -nan \f]
START_TEST(s21_pow_302)
{
    double base = -2.5;
    double exp = 1.802;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.703) = -nan \f]
START_TEST(s21_pow_303)
{
    double base = -2.5;
    double exp = 1.703;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.604) = -nan \f]
START_TEST(s21_pow_304)
{
    double base = -2.5;
    double exp = 1.604;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.505) = -nan \f]
START_TEST(s21_pow_305)
{
    double base = -2.5;
    double exp = 1.505;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.406) = -nan \f]
START_TEST(s21_pow_306)
{
    double base = -2.5;
    double exp = 1.406;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.307) = -nan \f]
START_TEST(s21_pow_307)
{
    double base = -2.5;
    double exp = 1.307;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.208) = -nan \f]
START_TEST(s21_pow_308)
{
    double base = -2.5;
    double exp = 1.208;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.109) = -nan \f]
START_TEST(s21_pow_309)
{
    double base = -2.5;
    double exp = 1.109;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 1.010) = -nan \f]
START_TEST(s21_pow_310)
{
    double base = -2.5;
    double exp = 1.010;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.911) = -nan \f]
START_TEST(s21_pow_311)
{
    double base = -2.5;
    double exp = 0.911;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.812) = -nan \f]
START_TEST(s21_pow_312)
{
    double base = -2.5;
    double exp = 0.812;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.713) = -nan \f]
START_TEST(s21_pow_313)
{
    double base = -2.5;
    double exp = 0.713;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.614) = -nan \f]
START_TEST(s21_pow_314)
{
    double base = -2.5;
    double exp = 0.614;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.515) = -nan \f]
START_TEST(s21_pow_315)
{
    double base = -2.5;
    double exp = 0.515;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.416) = -nan \f]
START_TEST(s21_pow_316)
{
    double base = -2.5;
    double exp = 0.416;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.317) = -nan \f]
START_TEST(s21_pow_317)
{
    double base = -2.5;
    double exp = 0.317;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.218) = -nan \f]
START_TEST(s21_pow_318)
{
    double base = -2.5;
    double exp = 0.218;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.119) = -nan \f]
START_TEST(s21_pow_319)
{
    double base = -2.5;
    double exp = 0.119;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, 0.020) = -nan \f]
START_TEST(s21_pow_320)
{
    double base = -2.5;
    double exp = 0.020;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.079) = -nan \f]
START_TEST(s21_pow_321)
{
    double base = -2.5;
    double exp = -0.079;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.178) = -nan \f]
START_TEST(s21_pow_322)
{
    double base = -2.5;
    double exp = -0.178;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.277) = -nan \f]
START_TEST(s21_pow_323)
{
    double base = -2.5;
    double exp = -0.277;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.376) = -nan \f]
START_TEST(s21_pow_324)
{
    double base = -2.5;
    double exp = -0.376;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.475) = -nan \f]
START_TEST(s21_pow_325)
{
    double base = -2.5;
    double exp = -0.475;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.574) = -nan \f]
START_TEST(s21_pow_326)
{
    double base = -2.5;
    double exp = -0.574;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.673) = -nan \f]
START_TEST(s21_pow_327)
{
    double base = -2.5;
    double exp = -0.673;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.772) = -nan \f]
START_TEST(s21_pow_328)
{
    double base = -2.5;
    double exp = -0.772;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.871) = -nan \f]
START_TEST(s21_pow_329)
{
    double base = -2.5;
    double exp = -0.871;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -0.970) = -nan \f]
START_TEST(s21_pow_330)
{
    double base = -2.5;
    double exp = -0.970;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.069) = -nan \f]
START_TEST(s21_pow_331)
{
    double base = -2.5;
    double exp = -1.069;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.168) = -nan \f]
START_TEST(s21_pow_332)
{
    double base = -2.5;
    double exp = -1.168;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.267) = -nan \f]
START_TEST(s21_pow_333)
{
    double base = -2.5;
    double exp = -1.267;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.366) = -nan \f]
START_TEST(s21_pow_334)
{
    double base = -2.5;
    double exp = -1.366;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.465) = -nan \f]
START_TEST(s21_pow_335)
{
    double base = -2.5;
    double exp = -1.465;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.564) = -nan \f]
START_TEST(s21_pow_336)
{
    double base = -2.5;
    double exp = -1.564;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.663) = -nan \f]
START_TEST(s21_pow_337)
{
    double base = -2.5;
    double exp = -1.663;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.762) = -nan \f]
START_TEST(s21_pow_338)
{
    double base = -2.5;
    double exp = -1.762;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.861) = -nan \f]
START_TEST(s21_pow_339)
{
    double base = -2.5;
    double exp = -1.861;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -1.960) = -nan \f]
START_TEST(s21_pow_340)
{
    double base = -2.5;
    double exp = -1.960;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.059) = -nan \f]
START_TEST(s21_pow_341)
{
    double base = -2.5;
    double exp = -2.059;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.158) = -nan \f]
START_TEST(s21_pow_342)
{
    double base = -2.5;
    double exp = -2.158;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.257) = -nan \f]
START_TEST(s21_pow_343)
{
    double base = -2.5;
    double exp = -2.257;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.356) = -nan \f]
START_TEST(s21_pow_344)
{
    double base = -2.5;
    double exp = -2.356;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.455) = -nan \f]
START_TEST(s21_pow_345)
{
    double base = -2.5;
    double exp = -2.455;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.554) = -nan \f]
START_TEST(s21_pow_346)
{
    double base = -2.5;
    double exp = -2.554;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.653) = -nan \f]
START_TEST(s21_pow_347)
{
    double base = -2.5;
    double exp = -2.653;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.752) = -nan \f]
START_TEST(s21_pow_348)
{
    double base = -2.5;
    double exp = -2.752;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.851) = -nan \f]
START_TEST(s21_pow_349)
{
    double base = -2.5;
    double exp = -2.851;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -2.950) = -nan \f]
START_TEST(s21_pow_350)
{
    double base = -2.5;
    double exp = -2.950;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.049) = -nan \f]
START_TEST(s21_pow_351)
{
    double base = -2.5;
    double exp = -3.049;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.148) = -nan \f]
START_TEST(s21_pow_352)
{
    double base = -2.5;
    double exp = -3.148;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.247) = -nan \f]
START_TEST(s21_pow_353)
{
    double base = -2.5;
    double exp = -3.247;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.346) = -nan \f]
START_TEST(s21_pow_354)
{
    double base = -2.5;
    double exp = -3.346;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.445) = -nan \f]
START_TEST(s21_pow_355)
{
    double base = -2.5;
    double exp = -3.445;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.544) = -nan \f]
START_TEST(s21_pow_356)
{
    double base = -2.5;
    double exp = -3.544;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.643) = -nan \f]
START_TEST(s21_pow_357)
{
    double base = -2.5;
    double exp = -3.643;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.742) = -nan \f]
START_TEST(s21_pow_358)
{
    double base = -2.5;
    double exp = -3.742;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.841) = -nan \f]
START_TEST(s21_pow_359)
{
    double base = -2.5;
    double exp = -3.841;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -3.940) = -nan \f]
START_TEST(s21_pow_360)
{
    double base = -2.5;
    double exp = -3.940;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.039) = -nan \f]
START_TEST(s21_pow_361)
{
    double base = -2.5;
    double exp = -4.039;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.138) = -nan \f]
START_TEST(s21_pow_362)
{
    double base = -2.5;
    double exp = -4.138;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.237) = -nan \f]
START_TEST(s21_pow_363)
{
    double base = -2.5;
    double exp = -4.237;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.336) = -nan \f]
START_TEST(s21_pow_364)
{
    double base = -2.5;
    double exp = -4.336;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.435) = -nan \f]
START_TEST(s21_pow_365)
{
    double base = -2.5;
    double exp = -4.435;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.534) = -nan \f]
START_TEST(s21_pow_366)
{
    double base = -2.5;
    double exp = -4.534;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.633) = -nan \f]
START_TEST(s21_pow_367)
{
    double base = -2.5;
    double exp = -4.633;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.732) = -nan \f]
START_TEST(s21_pow_368)
{
    double base = -2.5;
    double exp = -4.732;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.831) = -nan \f]
START_TEST(s21_pow_369)
{
    double base = -2.5;
    double exp = -4.831;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -4.930) = -nan \f]
START_TEST(s21_pow_370)
{
    double base = -2.5;
    double exp = -4.930;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.029) = -nan \f]
START_TEST(s21_pow_371)
{
    double base = -2.5;
    double exp = -5.029;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.128) = -nan \f]
START_TEST(s21_pow_372)
{
    double base = -2.5;
    double exp = -5.128;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.227) = -nan \f]
START_TEST(s21_pow_373)
{
    double base = -2.5;
    double exp = -5.227;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.326) = -nan \f]
START_TEST(s21_pow_374)
{
    double base = -2.5;
    double exp = -5.326;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.425) = -nan \f]
START_TEST(s21_pow_375)
{
    double base = -2.5;
    double exp = -5.425;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.524) = -nan \f]
START_TEST(s21_pow_376)
{
    double base = -2.5;
    double exp = -5.524;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.623) = -nan \f]
START_TEST(s21_pow_377)
{
    double base = -2.5;
    double exp = -5.623;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.722) = -nan \f]
START_TEST(s21_pow_378)
{
    double base = -2.5;
    double exp = -5.722;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.821) = -nan \f]
START_TEST(s21_pow_379)
{
    double base = -2.5;
    double exp = -5.821;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -5.920) = -nan \f]
START_TEST(s21_pow_380)
{
    double base = -2.5;
    double exp = -5.920;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.019) = -nan \f]
START_TEST(s21_pow_381)
{
    double base = -2.5;
    double exp = -6.019;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.118) = -nan \f]
START_TEST(s21_pow_382)
{
    double base = -2.5;
    double exp = -6.118;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.217) = -nan \f]
START_TEST(s21_pow_383)
{
    double base = -2.5;
    double exp = -6.217;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.316) = -nan \f]
START_TEST(s21_pow_384)
{
    double base = -2.5;
    double exp = -6.316;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.415) = -nan \f]
START_TEST(s21_pow_385)
{
    double base = -2.5;
    double exp = -6.415;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.514) = -nan \f]
START_TEST(s21_pow_386)
{
    double base = -2.5;
    double exp = -6.514;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.613) = -nan \f]
START_TEST(s21_pow_387)
{
    double base = -2.5;
    double exp = -6.613;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.712) = -nan \f]
START_TEST(s21_pow_388)
{
    double base = -2.5;
    double exp = -6.712;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.811) = -nan \f]
START_TEST(s21_pow_389)
{
    double base = -2.5;
    double exp = -6.811;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -6.910) = -nan \f]
START_TEST(s21_pow_390)
{
    double base = -2.5;
    double exp = -6.910;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.009) = -nan \f]
START_TEST(s21_pow_391)
{
    double base = -2.5;
    double exp = -7.009;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.108) = -nan \f]
START_TEST(s21_pow_392)
{
    double base = -2.5;
    double exp = -7.108;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.207) = -nan \f]
START_TEST(s21_pow_393)
{
    double base = -2.5;
    double exp = -7.207;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.306) = -nan \f]
START_TEST(s21_pow_394)
{
    double base = -2.5;
    double exp = -7.306;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.405) = -nan \f]
START_TEST(s21_pow_395)
{
    double base = -2.5;
    double exp = -7.405;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.504) = -nan \f]
START_TEST(s21_pow_396)
{
    double base = -2.5;
    double exp = -7.504;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.603) = -nan \f]
START_TEST(s21_pow_397)
{
    double base = -2.5;
    double exp = -7.603;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.702) = -nan \f]
START_TEST(s21_pow_398)
{
    double base = -2.5;
    double exp = -7.702;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-2.5, -7.801) = -nan \f]
START_TEST(s21_pow_399)
{
    double base = -2.5;
    double exp = -7.801;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.0) = 1.000000 \f]
START_TEST(s21_pow_400)
{
    double base = 432.123;
    double exp = 0.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.12) = 2.071443 \f]
START_TEST(s21_pow_401)
{
    double base = 432.123;
    double exp = 0.12;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.24) = 4.290874 \f]
START_TEST(s21_pow_402)
{
    double base = 432.123;
    double exp = 0.24;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.36) = 8.888299 \f]
START_TEST(s21_pow_403)
{
    double base = 432.123;
    double exp = 0.36;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.48) = 18.411601 \f]
START_TEST(s21_pow_404)
{
    double base = 432.123;
    double exp = 0.48;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.60) = 38.138572 \f]
START_TEST(s21_pow_405)
{
    double base = 432.123;
    double exp = 0.60;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.72) = 79.001860 \f]
START_TEST(s21_pow_406)
{
    double base = 432.123;
    double exp = 0.72;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.84) = 163.647811 \f]
START_TEST(s21_pow_407)
{
    double base = 432.123;
    double exp = 0.84;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 0.96) = 338.987034 \f]
START_TEST(s21_pow_408)
{
    double base = 432.123;
    double exp = 0.96;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 1.08) = 702.192155 \f]
START_TEST(s21_pow_409)
{
    double base = 432.123;
    double exp = 1.08;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 1.20) = 1454.550684 \f]
START_TEST(s21_pow_410)
{
    double base = 432.123;
    double exp = 1.20;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 1.32) = 3013.018130 \f]
START_TEST(s21_pow_411)
{
    double base = 432.123;
    double exp = 1.32;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 1.44) = 6241.293857 \f]
START_TEST(s21_pow_412)
{
    double base = 432.123;
    double exp = 1.44;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 1.56) = 12928.481452 \f]
START_TEST(s21_pow_413)
{
    double base = 432.123;
    double exp = 1.56;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 1.68) = 26780.606152 \f]
START_TEST(s21_pow_414)
{
    double base = 432.123;
    double exp = 1.68;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 1.80) = 55474.486198 \f]
START_TEST(s21_pow_415)
{
    double base = 432.123;
    double exp = 1.80;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 1.92) = 114912.209285 \f]
START_TEST(s21_pow_416)
{
    double base = 432.123;
    double exp = 1.92;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 2.04) = 238034.035964 \f]
START_TEST(s21_pow_417)
{
    double base = 432.123;
    double exp = 2.04;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 2.16) = 493073.822440 \f]
START_TEST(s21_pow_418)
{
    double base = 432.123;
    double exp = 2.16;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 2.28) = 1021374.079514 \f]
START_TEST(s21_pow_419)
{
    double base = 432.123;
    double exp = 2.28;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 2.40) = 2115717.693432 \f]
START_TEST(s21_pow_420)
{
    double base = 432.123;
    double exp = 2.40;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 2.52) = 4382587.582828 \f]
START_TEST(s21_pow_421)
{
    double base = 432.123;
    double exp = 2.52;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 2.64) = 9078278.250818 \f]
START_TEST(s21_pow_422)
{
    double base = 432.123;
    double exp = 2.64;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 2.76) = 18805131.544249 \f]
START_TEST(s21_pow_423)
{
    double base = 432.123;
    double exp = 2.76;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 2.88) = 38953749.006829 \f]
START_TEST(s21_pow_424)
{
    double base = 432.123;
    double exp = 2.88;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.00) = 80690451.865045 \f]
START_TEST(s21_pow_425)
{
    double base = 432.123;
    double exp = 3.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.12) = 167145632.658968 \f]
START_TEST(s21_pow_426)
{
    double base = 432.123;
    double exp = 3.12;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.24) = 346232569.916607 \f]
START_TEST(s21_pow_427)
{
    double base = 432.123;
    double exp = 3.24;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.36) = 717200865.879913 \f]
START_TEST(s21_pow_428)
{
    double base = 432.123;
    double exp = 3.36;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.48) = 1485640366.366429 \f]
START_TEST(s21_pow_429)
{
    double base = 432.123;
    double exp = 3.48;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.60) = 3077418618.938107 \f]
START_TEST(s21_pow_430)
{
    double base = 432.123;
    double exp = 3.60;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.72) = 6374695767.960209 \f]
START_TEST(s21_pow_431)
{
    double base = 432.123;
    double exp = 3.72;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.84) = 13204815842.724634 \f]
START_TEST(s21_pow_432)
{
    double base = 432.123;
    double exp = 3.84;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 3.96) = 27353016957.555359 \f]
START_TEST(s21_pow_433)
{
    double base = 432.123;
    double exp = 3.96;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 4.08) = 56660202277.075661 \f]
START_TEST(s21_pow_434)
{
    double base = 432.123;
    double exp = 4.08;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 4.20) = 117368351983.285324 \f]
START_TEST(s21_pow_435)
{
    double base = 432.123;
    double exp = 4.20;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 4.32) = 243121794375.339935 \f]
START_TEST(s21_pow_436)
{
    double base = 432.123;
    double exp = 4.32;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 4.44) = 503612821527.074036 \f]
START_TEST(s21_pow_437)
{
    double base = 432.123;
    double exp = 4.44;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 4.56) = 1043205010304.023315 \f]
START_TEST(s21_pow_438)
{
    double base = 432.123;
    double exp = 4.56;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 4.68) = 2160939211641.810547 \f]
START_TEST(s21_pow_439)
{
    double base = 432.123;
    double exp = 4.68;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 4.80) = 4476261358302.182617 \f]
START_TEST(s21_pow_440)
{
    double base = 432.123;
    double exp = 4.80;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 4.92) = 9272318092004.962891 \f]
START_TEST(s21_pow_441)
{
    double base = 432.123;
    double exp = 4.92;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 5.04) = 19207073921155.636719 \f]
START_TEST(s21_pow_442)
{
    double base = 432.123;
    double exp = 5.04;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 5.16) = 39786349535487.820312 \f]
START_TEST(s21_pow_443)
{
    double base = 432.123;
    double exp = 5.16;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 5.28) = 82415135999266.765625 \f]
START_TEST(s21_pow_444)
{
    double base = 432.123;
    double exp = 5.28;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 5.40) = 170718216701917.312500 \f]
START_TEST(s21_pow_445)
{
    double base = 432.123;
    double exp = 5.40;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 5.52) = 353632972396501.750000 \f]
START_TEST(s21_pow_446)
{
    double base = 432.123;
    double exp = 5.52;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 5.64) = 732530374215074.375000 \f]
START_TEST(s21_pow_447)
{
    double base = 432.123;
    double exp = 5.64;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 5.76) = 1517394561687045.500000 \f]
START_TEST(s21_pow_448)
{
    double base = 432.123;
    double exp = 5.76;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 5.88) = 3143195609198589.500000 \f]
START_TEST(s21_pow_449)
{
    double base = 432.123;
    double exp = 5.88;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.00) = 6510949022185122.000000 \f]
START_TEST(s21_pow_450)
{
    double base = 432.123;
    double exp = 6.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.12) = 13487056626520952.000000 \f]
START_TEST(s21_pow_451)
{
    double base = 432.123;
    double exp = 6.12;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.24) = 27937662516966768.000000 \f]
START_TEST(s21_pow_452)
{
    double base = 432.123;
    double exp = 6.24;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.36) = 57871261945851776.000000 \f]
START_TEST(s21_pow_453)
{
    double base = 432.123;
    double exp = 6.36;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.48) = 119876992471058256.000000 \f]
START_TEST(s21_pow_454)
{
    double base = 432.123;
    double exp = 6.48;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.60) = 248318298940017504.000000 \f]
START_TEST(s21_pow_455)
{
    double base = 432.123;
    double exp = 6.60;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.72) = 514377082018897024.000000 \f]
START_TEST(s21_pow_456)
{
    double base = 432.123;
    double exp = 6.72;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.84) = 1065502557144153984.000000 \f]
START_TEST(s21_pow_457)
{
    double base = 432.123;
    double exp = 6.84;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 6.96) = 2207127298177376768.000000 \f]
START_TEST(s21_pow_458)
{
    double base = 432.123;
    double exp = 6.96;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 7.08) = 4571937324502078976.000000 \f]
START_TEST(s21_pow_459)
{
    double base = 432.123;
    double exp = 7.08;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 7.20) = 9470505356186927104.000000 \f]
START_TEST(s21_pow_460)
{
    double base = 432.123;
    double exp = 7.20;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 7.32) = 19617607446386700288.000000 \f]
START_TEST(s21_pow_461)
{
    double base = 432.123;
    double exp = 7.32;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 7.44) = 40636746134049792000.000000 \f]
START_TEST(s21_pow_462)
{
    double base = 432.123;
    double exp = 7.44;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 7.56) = 84176683669310423040.000000 \f]
START_TEST(s21_pow_463)
{
    double base = 432.123;
    double exp = 7.56;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 7.68) = 174367161440271499264.000000 \f]
START_TEST(s21_pow_464)
{
    double base = 432.123;
    double exp = 7.68;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 7.80) = 361191551667442614272.000000 \f]
START_TEST(s21_pow_465)
{
    double base = 432.123;
    double exp = 7.80;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 7.92) = 748187536680311062528.000000 \f]
START_TEST(s21_pow_466)
{
    double base = 432.123;
    double exp = 7.92;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 8.04) = 1549827473703358955520.000000 \f]
START_TEST(s21_pow_467)
{
    double base = 432.123;
    double exp = 8.04;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 8.16) = 3210378522079130025984.000000 \f]
START_TEST(s21_pow_468)
{
    double base = 432.123;
    double exp = 8.16;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 8.28) = 6650114564299924963328.000000 \f]
START_TEST(s21_pow_469)
{
    double base = 432.123;
    double exp = 8.28;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 8.40) = 13775330047272356413440.000000 \f]
START_TEST(s21_pow_470)
{
    double base = 432.123;
    double exp = 8.40;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 8.52) = 28534804337052662890496.000000 \f]
START_TEST(s21_pow_471)
{
    double base = 432.123;
    double exp = 8.52;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 8.64) = 59108206900285076930560.000000 \f]
START_TEST(s21_pow_472)
{
    double base = 432.123;
    double exp = 8.64;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 8.76) = 122439252840089393299456.000000 \f]
START_TEST(s21_pow_473)
{
    double base = 432.123;
    double exp = 8.76;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 8.88) = 253625874006460487172096.000000 \f]
START_TEST(s21_pow_474)
{
    double base = 432.123;
    double exp = 8.88;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.00) = 525371418670389497167872.000000 \f]
START_TEST(s21_pow_475)
{
    double base = 432.123;
    double exp = 9.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.12) = 1088276693523417377275904.000000 \f]
START_TEST(s21_pow_476)
{
    double base = 432.123;
    double exp = 9.12;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.24) = 2254302612547175222083584.000000 \f]
START_TEST(s21_pow_477)
{
    double base = 432.123;
    double exp = 9.24;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.36) = 4669658276411130087735296.000000 \f]
START_TEST(s21_pow_478)
{
    double base = 432.123;
    double exp = 9.36;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.48) = 9672928690712271092973568.000000 \f]
START_TEST(s21_pow_479)
{
    double base = 432.123;
    double exp = 9.48;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.60) = 20036915747829302415065088.000000 \f]
START_TEST(s21_pow_480)
{
    double base = 432.123;
    double exp = 9.60;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.72) = 41505319177128262932365312.000000 \f]
START_TEST(s21_pow_481)
{
    double base = 432.123;
    double exp = 9.72;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.84) = 85975882799322567773519872.000000 \f]
START_TEST(s21_pow_482)
{
    double base = 432.123;
    double exp = 9.84;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 9.96) = 178094099013609087389663232.000000 \f]
START_TEST(s21_pow_483)
{
    double base = 432.123;
    double exp = 9.96;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 10.08) = 368911688612736954334707712.000000 \f]
START_TEST(s21_pow_484)
{
    double base = 432.123;
    double exp = 10.08;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 10.20) = 764179356581046695363608576.000000 \f]
START_TEST(s21_pow_485)
{
    double base = 432.123;
    double exp = 10.20;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 10.32) = 1582953609360011769893879808.000000 \f]
START_TEST(s21_pow_486)
{
    double base = 432.123;
    double exp = 10.32;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 10.44) = 3278997407881575234596241408.000000 \f]
START_TEST(s21_pow_487)
{
    double base = 432.123;
    double exp = 10.44;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 10.56) = 6792254641777636468341080064.000000 \f]
START_TEST(s21_pow_488)
{
    double base = 432.123;
    double exp = 10.56;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 10.68) = 14069765047040733989182636032.000000 \f]
START_TEST(s21_pow_489)
{
    double base = 432.123;
    double exp = 10.68;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 10.80) = 29144709513882798346165288960.000000 \f]
START_TEST(s21_pow_490)
{
    double base = 432.123;
    double exp = 10.80;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 10.92) = 60371590414529129841262854144.000000 \f]
START_TEST(s21_pow_491)
{
    double base = 432.123;
    double exp = 10.92;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 11.04) = 125056279165984979723399200768.000000 \f]
START_TEST(s21_pow_492)
{
    double base = 432.123;
    double exp = 11.04;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 11.16) = 259046893604399893022561533952.000000 \f]
START_TEST(s21_pow_493)
{
    double base = 432.123;
    double exp = 11.16;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 11.28) = 536600749147676910431384895488.000000 \f]
START_TEST(s21_pow_494)
{
    double base = 432.123;
    double exp = 11.28;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 11.40) = 1111537606104536216244892729344.000000 \f]
START_TEST(s21_pow_495)
{
    double base = 432.123;
    double exp = 11.40;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 11.52) = 2302486255837421191805257383936.000000 \f]
START_TEST(s21_pow_496)
{
    double base = 432.123;
    double exp = 11.52;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 11.64) = 4769467923716565400780114231296.000000 \f]
START_TEST(s21_pow_497)
{
    double base = 432.123;
    double exp = 11.64;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 11.76) = 9879678637685291133331247726592.000000 \f]
START_TEST(s21_pow_498)
{
    double base = 432.123;
    double exp = 11.76;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(432.123, 11.88) = 20465186378248231937810634899456.000000 \f]
START_TEST(s21_pow_499)
{
    double base = 432.123;
    double exp = 11.88;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.003) = 179787.627264 \f]
START_TEST(s21_pow_500)
{
    double base = 56.213;
    double exp = 3.003;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0033) = 180005.075947 \f]
START_TEST(s21_pow_501)
{
    double base = 56.213;
    double exp = 3.0033;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0036) = 180222.787630 \f]
START_TEST(s21_pow_502)
{
    double base = 56.213;
    double exp = 3.0036;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0039) = 180440.762629 \f]
START_TEST(s21_pow_503)
{
    double base = 56.213;
    double exp = 3.0039;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0042) = 180659.001264 \f]
START_TEST(s21_pow_504)
{
    double base = 56.213;
    double exp = 3.0042;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0045) = 180877.503853 \f]
START_TEST(s21_pow_505)
{
    double base = 56.213;
    double exp = 3.0045;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0048) = 181096.270715 \f]
START_TEST(s21_pow_506)
{
    double base = 56.213;
    double exp = 3.0048;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0051) = 181315.302171 \f]
START_TEST(s21_pow_507)
{
    double base = 56.213;
    double exp = 3.0051;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0054) = 181534.598539 \f]
START_TEST(s21_pow_508)
{
    double base = 56.213;
    double exp = 3.0054;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0057) = 181754.160141 \f]
START_TEST(s21_pow_509)
{
    double base = 56.213;
    double exp = 3.0057;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0060) = 181973.987298 \f]
START_TEST(s21_pow_510)
{
    double base = 56.213;
    double exp = 3.0060;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0063) = 182194.080330 \f]
START_TEST(s21_pow_511)
{
    double base = 56.213;
    double exp = 3.0063;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0066) = 182414.439559 \f]
START_TEST(s21_pow_512)
{
    double base = 56.213;
    double exp = 3.0066;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0069) = 182635.065307 \f]
START_TEST(s21_pow_513)
{
    double base = 56.213;
    double exp = 3.0069;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0072) = 182855.957896 \f]
START_TEST(s21_pow_514)
{
    double base = 56.213;
    double exp = 3.0072;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0075) = 183077.117650 \f]
START_TEST(s21_pow_515)
{
    double base = 56.213;
    double exp = 3.0075;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0078) = 183298.544891 \f]
START_TEST(s21_pow_516)
{
    double base = 56.213;
    double exp = 3.0078;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0081) = 183520.239942 \f]
START_TEST(s21_pow_517)
{
    double base = 56.213;
    double exp = 3.0081;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0084) = 183742.203129 \f]
START_TEST(s21_pow_518)
{
    double base = 56.213;
    double exp = 3.0084;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0087) = 183964.434774 \f]
START_TEST(s21_pow_519)
{
    double base = 56.213;
    double exp = 3.0087;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0090) = 184186.935203 \f]
START_TEST(s21_pow_520)
{
    double base = 56.213;
    double exp = 3.0090;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0093) = 184409.704740 \f]
START_TEST(s21_pow_521)
{
    double base = 56.213;
    double exp = 3.0093;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0096) = 184632.743712 \f]
START_TEST(s21_pow_522)
{
    double base = 56.213;
    double exp = 3.0096;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0099) = 184856.052444 \f]
START_TEST(s21_pow_523)
{
    double base = 56.213;
    double exp = 3.0099;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0102) = 185079.631263 \f]
START_TEST(s21_pow_524)
{
    double base = 56.213;
    double exp = 3.0102;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0105) = 185303.480494 \f]
START_TEST(s21_pow_525)
{
    double base = 56.213;
    double exp = 3.0105;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0108) = 185527.600466 \f]
START_TEST(s21_pow_526)
{
    double base = 56.213;
    double exp = 3.0108;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0111) = 185751.991505 \f]
START_TEST(s21_pow_527)
{
    double base = 56.213;
    double exp = 3.0111;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0114) = 185976.653939 \f]
START_TEST(s21_pow_528)
{
    double base = 56.213;
    double exp = 3.0114;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0117) = 186201.588098 \f]
START_TEST(s21_pow_529)
{
    double base = 56.213;
    double exp = 3.0117;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0120) = 186426.794308 \f]
START_TEST(s21_pow_530)
{
    double base = 56.213;
    double exp = 3.0120;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0123) = 186652.272900 \f]
START_TEST(s21_pow_531)
{
    double base = 56.213;
    double exp = 3.0123;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0126) = 186878.024202 \f]
START_TEST(s21_pow_532)
{
    double base = 56.213;
    double exp = 3.0126;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0129) = 187104.048546 \f]
START_TEST(s21_pow_533)
{
    double base = 56.213;
    double exp = 3.0129;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0132) = 187330.346260 \f]
START_TEST(s21_pow_534)
{
    double base = 56.213;
    double exp = 3.0132;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0135) = 187556.917675 \f]
START_TEST(s21_pow_535)
{
    double base = 56.213;
    double exp = 3.0135;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0138) = 187783.763123 \f]
START_TEST(s21_pow_536)
{
    double base = 56.213;
    double exp = 3.0138;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0141) = 188010.882935 \f]
START_TEST(s21_pow_537)
{
    double base = 56.213;
    double exp = 3.0141;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0144) = 188238.277443 \f]
START_TEST(s21_pow_538)
{
    double base = 56.213;
    double exp = 3.0144;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0147) = 188465.946979 \f]
START_TEST(s21_pow_539)
{
    double base = 56.213;
    double exp = 3.0147;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0150) = 188693.891875 \f]
START_TEST(s21_pow_540)
{
    double base = 56.213;
    double exp = 3.0150;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0153) = 188922.112465 \f]
START_TEST(s21_pow_541)
{
    double base = 56.213;
    double exp = 3.0153;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0156) = 189150.609083 \f]
START_TEST(s21_pow_542)
{
    double base = 56.213;
    double exp = 3.0156;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0159) = 189379.382061 \f]
START_TEST(s21_pow_543)
{
    double base = 56.213;
    double exp = 3.0159;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0162) = 189608.431734 \f]
START_TEST(s21_pow_544)
{
    double base = 56.213;
    double exp = 3.0162;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0165) = 189837.758438 \f]
START_TEST(s21_pow_545)
{
    double base = 56.213;
    double exp = 3.0165;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0168) = 190067.362506 \f]
START_TEST(s21_pow_546)
{
    double base = 56.213;
    double exp = 3.0168;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0171) = 190297.244275 \f]
START_TEST(s21_pow_547)
{
    double base = 56.213;
    double exp = 3.0171;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0174) = 190527.404080 \f]
START_TEST(s21_pow_548)
{
    double base = 56.213;
    double exp = 3.0174;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0177) = 190757.842258 \f]
START_TEST(s21_pow_549)
{
    double base = 56.213;
    double exp = 3.0177;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0180) = 190988.559145 \f]
START_TEST(s21_pow_550)
{
    double base = 56.213;
    double exp = 3.0180;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0183) = 191219.555079 \f]
START_TEST(s21_pow_551)
{
    double base = 56.213;
    double exp = 3.0183;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0186) = 191450.830396 \f]
START_TEST(s21_pow_552)
{
    double base = 56.213;
    double exp = 3.0186;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0189) = 191682.385435 \f]
START_TEST(s21_pow_553)
{
    double base = 56.213;
    double exp = 3.0189;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0192) = 191914.220534 \f]
START_TEST(s21_pow_554)
{
    double base = 56.213;
    double exp = 3.0192;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0195) = 192146.336032 \f]
START_TEST(s21_pow_555)
{
    double base = 56.213;
    double exp = 3.0195;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0198) = 192378.732268 \f]
START_TEST(s21_pow_556)
{
    double base = 56.213;
    double exp = 3.0198;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0201) = 192611.409581 \f]
START_TEST(s21_pow_557)
{
    double base = 56.213;
    double exp = 3.0201;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0204) = 192844.368312 \f]
START_TEST(s21_pow_558)
{
    double base = 56.213;
    double exp = 3.0204;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0207) = 193077.608801 \f]
START_TEST(s21_pow_559)
{
    double base = 56.213;
    double exp = 3.0207;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0210) = 193311.131388 \f]
START_TEST(s21_pow_560)
{
    double base = 56.213;
    double exp = 3.0210;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0213) = 193544.936415 \f]
START_TEST(s21_pow_561)
{
    double base = 56.213;
    double exp = 3.0213;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0216) = 193779.024224 \f]
START_TEST(s21_pow_562)
{
    double base = 56.213;
    double exp = 3.0216;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0219) = 194013.395155 \f]
START_TEST(s21_pow_563)
{
    double base = 56.213;
    double exp = 3.0219;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0222) = 194248.049553 \f]
START_TEST(s21_pow_564)
{
    double base = 56.213;
    double exp = 3.0222;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0225) = 194482.987759 \f]
START_TEST(s21_pow_565)
{
    double base = 56.213;
    double exp = 3.0225;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0228) = 194718.210118 \f]
START_TEST(s21_pow_566)
{
    double base = 56.213;
    double exp = 3.0228;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0231) = 194953.716972 \f]
START_TEST(s21_pow_567)
{
    double base = 56.213;
    double exp = 3.0231;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0234) = 195189.508665 \f]
START_TEST(s21_pow_568)
{
    double base = 56.213;
    double exp = 3.0234;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0237) = 195425.585543 \f]
START_TEST(s21_pow_569)
{
    double base = 56.213;
    double exp = 3.0237;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0240) = 195661.947950 \f]
START_TEST(s21_pow_570)
{
    double base = 56.213;
    double exp = 3.0240;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0243) = 195898.596232 \f]
START_TEST(s21_pow_571)
{
    double base = 56.213;
    double exp = 3.0243;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0246) = 196135.530733 \f]
START_TEST(s21_pow_572)
{
    double base = 56.213;
    double exp = 3.0246;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0249) = 196372.751801 \f]
START_TEST(s21_pow_573)
{
    double base = 56.213;
    double exp = 3.0249;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0252) = 196610.259783 \f]
START_TEST(s21_pow_574)
{
    double base = 56.213;
    double exp = 3.0252;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0255) = 196848.055024 \f]
START_TEST(s21_pow_575)
{
    double base = 56.213;
    double exp = 3.0255;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0258) = 197086.137872 \f]
START_TEST(s21_pow_576)
{
    double base = 56.213;
    double exp = 3.0258;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0261) = 197324.508676 \f]
START_TEST(s21_pow_577)
{
    double base = 56.213;
    double exp = 3.0261;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0264) = 197563.167784 \f]
START_TEST(s21_pow_578)
{
    double base = 56.213;
    double exp = 3.0264;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0267) = 197802.115543 \f]
START_TEST(s21_pow_579)
{
    double base = 56.213;
    double exp = 3.0267;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0270) = 198041.352305 \f]
START_TEST(s21_pow_580)
{
    double base = 56.213;
    double exp = 3.0270;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0273) = 198280.878417 \f]
START_TEST(s21_pow_581)
{
    double base = 56.213;
    double exp = 3.0273;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0276) = 198520.694230 \f]
START_TEST(s21_pow_582)
{
    double base = 56.213;
    double exp = 3.0276;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0279) = 198760.800094 \f]
START_TEST(s21_pow_583)
{
    double base = 56.213;
    double exp = 3.0279;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0282) = 199001.196360 \f]
START_TEST(s21_pow_584)
{
    double base = 56.213;
    double exp = 3.0282;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0285) = 199241.883380 \f]
START_TEST(s21_pow_585)
{
    double base = 56.213;
    double exp = 3.0285;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0288) = 199482.861505 \f]
START_TEST(s21_pow_586)
{
    double base = 56.213;
    double exp = 3.0288;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0291) = 199724.131087 \f]
START_TEST(s21_pow_587)
{
    double base = 56.213;
    double exp = 3.0291;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0294) = 199965.692478 \f]
START_TEST(s21_pow_588)
{
    double base = 56.213;
    double exp = 3.0294;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0297) = 200207.546032 \f]
START_TEST(s21_pow_589)
{
    double base = 56.213;
    double exp = 3.0297;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0300) = 200449.692102 \f]
START_TEST(s21_pow_590)
{
    double base = 56.213;
    double exp = 3.0300;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0303) = 200692.131041 \f]
START_TEST(s21_pow_591)
{
    double base = 56.213;
    double exp = 3.0303;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0306) = 200934.863205 \f]
START_TEST(s21_pow_592)
{
    double base = 56.213;
    double exp = 3.0306;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0309) = 201177.888946 \f]
START_TEST(s21_pow_593)
{
    double base = 56.213;
    double exp = 3.0309;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0312) = 201421.208622 \f]
START_TEST(s21_pow_594)
{
    double base = 56.213;
    double exp = 3.0312;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0315) = 201664.822587 \f]
START_TEST(s21_pow_595)
{
    double base = 56.213;
    double exp = 3.0315;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0318) = 201908.731196 \f]
START_TEST(s21_pow_596)
{
    double base = 56.213;
    double exp = 3.0318;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0321) = 202152.934807 \f]
START_TEST(s21_pow_597)
{
    double base = 56.213;
    double exp = 3.0321;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0324) = 202397.433777 \f]
START_TEST(s21_pow_598)
{
    double base = 56.213;
    double exp = 3.0324;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(56.213, 3.0327) = 202642.228462 \f]
START_TEST(s21_pow_599)
{
    double base = 56.213;
    double exp = 3.0327;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -12.5) = -nan \f]
START_TEST(s21_pow_600)
{
    double base = -7;
    double exp = -12.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -12.25) = -nan \f]
START_TEST(s21_pow_601)
{
    double base = -7;
    double exp = -12.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -12.00) = 0.000000 \f]
START_TEST(s21_pow_602)
{
    double base = -7;
    double exp = -12.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -11.75) = -nan \f]
START_TEST(s21_pow_603)
{
    double base = -7;
    double exp = -11.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -11.50) = -nan \f]
START_TEST(s21_pow_604)
{
    double base = -7;
    double exp = -11.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -11.25) = -nan \f]
START_TEST(s21_pow_605)
{
    double base = -7;
    double exp = -11.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -11.00) = -0.000000 \f]
START_TEST(s21_pow_606)
{
    double base = -7;
    double exp = -11.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -10.75) = -nan \f]
START_TEST(s21_pow_607)
{
    double base = -7;
    double exp = -10.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -10.50) = -nan \f]
START_TEST(s21_pow_608)
{
    double base = -7;
    double exp = -10.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -10.25) = -nan \f]
START_TEST(s21_pow_609)
{
    double base = -7;
    double exp = -10.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -10.00) = 0.000000 \f]
START_TEST(s21_pow_610)
{
    double base = -7;
    double exp = -10.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -9.75) = -nan \f]
START_TEST(s21_pow_611)
{
    double base = -7;
    double exp = -9.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -9.50) = -nan \f]
START_TEST(s21_pow_612)
{
    double base = -7;
    double exp = -9.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -9.25) = -nan \f]
START_TEST(s21_pow_613)
{
    double base = -7;
    double exp = -9.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -9.00) = -0.000000 \f]
START_TEST(s21_pow_614)
{
    double base = -7;
    double exp = -9.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -8.75) = -nan \f]
START_TEST(s21_pow_615)
{
    double base = -7;
    double exp = -8.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -8.50) = -nan \f]
START_TEST(s21_pow_616)
{
    double base = -7;
    double exp = -8.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -8.25) = -nan \f]
START_TEST(s21_pow_617)
{
    double base = -7;
    double exp = -8.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -8.00) = 0.000000 \f]
START_TEST(s21_pow_618)
{
    double base = -7;
    double exp = -8.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -7.75) = -nan \f]
START_TEST(s21_pow_619)
{
    double base = -7;
    double exp = -7.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -7.50) = -nan \f]
START_TEST(s21_pow_620)
{
    double base = -7;
    double exp = -7.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -7.25) = -nan \f]
START_TEST(s21_pow_621)
{
    double base = -7;
    double exp = -7.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -7.00) = -0.000001 \f]
START_TEST(s21_pow_622)
{
    double base = -7;
    double exp = -7.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -6.75) = -nan \f]
START_TEST(s21_pow_623)
{
    double base = -7;
    double exp = -6.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -6.50) = -nan \f]
START_TEST(s21_pow_624)
{
    double base = -7;
    double exp = -6.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -6.25) = -nan \f]
START_TEST(s21_pow_625)
{
    double base = -7;
    double exp = -6.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -6.00) = 0.000008 \f]
START_TEST(s21_pow_626)
{
    double base = -7;
    double exp = -6.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -5.75) = -nan \f]
START_TEST(s21_pow_627)
{
    double base = -7;
    double exp = -5.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -5.50) = -nan \f]
START_TEST(s21_pow_628)
{
    double base = -7;
    double exp = -5.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -5.25) = -nan \f]
START_TEST(s21_pow_629)
{
    double base = -7;
    double exp = -5.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -5.00) = -0.000059 \f]
START_TEST(s21_pow_630)
{
    double base = -7;
    double exp = -5.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -4.75) = -nan \f]
START_TEST(s21_pow_631)
{
    double base = -7;
    double exp = -4.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -4.50) = -nan \f]
START_TEST(s21_pow_632)
{
    double base = -7;
    double exp = -4.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -4.25) = -nan \f]
START_TEST(s21_pow_633)
{
    double base = -7;
    double exp = -4.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -4.00) = 0.000416 \f]
START_TEST(s21_pow_634)
{
    double base = -7;
    double exp = -4.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -3.75) = -nan \f]
START_TEST(s21_pow_635)
{
    double base = -7;
    double exp = -3.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -3.50) = -nan \f]
START_TEST(s21_pow_636)
{
    double base = -7;
    double exp = -3.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -3.25) = -nan \f]
START_TEST(s21_pow_637)
{
    double base = -7;
    double exp = -3.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -3.00) = -0.002915 \f]
START_TEST(s21_pow_638)
{
    double base = -7;
    double exp = -3.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -2.75) = -nan \f]
START_TEST(s21_pow_639)
{
    double base = -7;
    double exp = -2.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -2.50) = -nan \f]
START_TEST(s21_pow_640)
{
    double base = -7;
    double exp = -2.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -2.25) = -nan \f]
START_TEST(s21_pow_641)
{
    double base = -7;
    double exp = -2.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -2.00) = 0.020408 \f]
START_TEST(s21_pow_642)
{
    double base = -7;
    double exp = -2.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -1.75) = -nan \f]
START_TEST(s21_pow_643)
{
    double base = -7;
    double exp = -1.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -1.50) = -nan \f]
START_TEST(s21_pow_644)
{
    double base = -7;
    double exp = -1.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -1.25) = -nan \f]
START_TEST(s21_pow_645)
{
    double base = -7;
    double exp = -1.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -1.00) = -0.142857 \f]
START_TEST(s21_pow_646)
{
    double base = -7;
    double exp = -1.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -0.75) = -nan \f]
START_TEST(s21_pow_647)
{
    double base = -7;
    double exp = -0.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -0.50) = -nan \f]
START_TEST(s21_pow_648)
{
    double base = -7;
    double exp = -0.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, -0.25) = -nan \f]
START_TEST(s21_pow_649)
{
    double base = -7;
    double exp = -0.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 0) = 1.000000 \f]
START_TEST(s21_pow_650)
{
    double base = -7;
    double exp = 0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 0.25) = -nan \f]
START_TEST(s21_pow_651)
{
    double base = -7;
    double exp = 0.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 0.50) = -nan \f]
START_TEST(s21_pow_652)
{
    double base = -7;
    double exp = 0.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 0.75) = -nan \f]
START_TEST(s21_pow_653)
{
    double base = -7;
    double exp = 0.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 1.00) = -7.000000 \f]
START_TEST(s21_pow_654)
{
    double base = -7;
    double exp = 1.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 1.25) = -nan \f]
START_TEST(s21_pow_655)
{
    double base = -7;
    double exp = 1.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 1.50) = -nan \f]
START_TEST(s21_pow_656)
{
    double base = -7;
    double exp = 1.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 1.75) = -nan \f]
START_TEST(s21_pow_657)
{
    double base = -7;
    double exp = 1.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 2.00) = 49.000000 \f]
START_TEST(s21_pow_658)
{
    double base = -7;
    double exp = 2.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 2.25) = -nan \f]
START_TEST(s21_pow_659)
{
    double base = -7;
    double exp = 2.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 2.50) = -nan \f]
START_TEST(s21_pow_660)
{
    double base = -7;
    double exp = 2.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 2.75) = -nan \f]
START_TEST(s21_pow_661)
{
    double base = -7;
    double exp = 2.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 3.00) = -343.000000 \f]
START_TEST(s21_pow_662)
{
    double base = -7;
    double exp = 3.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 3.25) = -nan \f]
START_TEST(s21_pow_663)
{
    double base = -7;
    double exp = 3.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 3.50) = -nan \f]
START_TEST(s21_pow_664)
{
    double base = -7;
    double exp = 3.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 3.75) = -nan \f]
START_TEST(s21_pow_665)
{
    double base = -7;
    double exp = 3.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 4.00) = 2401.000000 \f]
START_TEST(s21_pow_666)
{
    double base = -7;
    double exp = 4.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 4.25) = -nan \f]
START_TEST(s21_pow_667)
{
    double base = -7;
    double exp = 4.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 4.50) = -nan \f]
START_TEST(s21_pow_668)
{
    double base = -7;
    double exp = 4.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 4.75) = -nan \f]
START_TEST(s21_pow_669)
{
    double base = -7;
    double exp = 4.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 5.00) = -16807.000000 \f]
START_TEST(s21_pow_670)
{
    double base = -7;
    double exp = 5.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 5.25) = -nan \f]
START_TEST(s21_pow_671)
{
    double base = -7;
    double exp = 5.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 5.50) = -nan \f]
START_TEST(s21_pow_672)
{
    double base = -7;
    double exp = 5.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 5.75) = -nan \f]
START_TEST(s21_pow_673)
{
    double base = -7;
    double exp = 5.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 6.00) = 117649.000000 \f]
START_TEST(s21_pow_674)
{
    double base = -7;
    double exp = 6.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 6.25) = -nan \f]
START_TEST(s21_pow_675)
{
    double base = -7;
    double exp = 6.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 6.50) = -nan \f]
START_TEST(s21_pow_676)
{
    double base = -7;
    double exp = 6.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 6.75) = -nan \f]
START_TEST(s21_pow_677)
{
    double base = -7;
    double exp = 6.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 7.00) = -823543.000000 \f]
START_TEST(s21_pow_678)
{
    double base = -7;
    double exp = 7.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 7.25) = -nan \f]
START_TEST(s21_pow_679)
{
    double base = -7;
    double exp = 7.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 7.50) = -nan \f]
START_TEST(s21_pow_680)
{
    double base = -7;
    double exp = 7.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 7.75) = -nan \f]
START_TEST(s21_pow_681)
{
    double base = -7;
    double exp = 7.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 8.00) = 5764801.000000 \f]
START_TEST(s21_pow_682)
{
    double base = -7;
    double exp = 8.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 8.25) = -nan \f]
START_TEST(s21_pow_683)
{
    double base = -7;
    double exp = 8.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 8.50) = -nan \f]
START_TEST(s21_pow_684)
{
    double base = -7;
    double exp = 8.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 8.75) = -nan \f]
START_TEST(s21_pow_685)
{
    double base = -7;
    double exp = 8.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 9.00) = -40353607.000000 \f]
START_TEST(s21_pow_686)
{
    double base = -7;
    double exp = 9.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 9.25) = -nan \f]
START_TEST(s21_pow_687)
{
    double base = -7;
    double exp = 9.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 9.50) = -nan \f]
START_TEST(s21_pow_688)
{
    double base = -7;
    double exp = 9.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 9.75) = -nan \f]
START_TEST(s21_pow_689)
{
    double base = -7;
    double exp = 9.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 10.00) = 282475249.000000 \f]
START_TEST(s21_pow_690)
{
    double base = -7;
    double exp = 10.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 10.25) = -nan \f]
START_TEST(s21_pow_691)
{
    double base = -7;
    double exp = 10.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 10.50) = -nan \f]
START_TEST(s21_pow_692)
{
    double base = -7;
    double exp = 10.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 10.75) = -nan \f]
START_TEST(s21_pow_693)
{
    double base = -7;
    double exp = 10.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 11.00) = -1977326743.000000 \f]
START_TEST(s21_pow_694)
{
    double base = -7;
    double exp = 11.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 11.25) = -nan \f]
START_TEST(s21_pow_695)
{
    double base = -7;
    double exp = 11.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 11.50) = -nan \f]
START_TEST(s21_pow_696)
{
    double base = -7;
    double exp = 11.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 11.75) = -nan \f]
START_TEST(s21_pow_697)
{
    double base = -7;
    double exp = 11.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 12.00) = 13841287201.000000 \f]
START_TEST(s21_pow_698)
{
    double base = -7;
    double exp = 12.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(-7, 12.25) = -nan \f]
START_TEST(s21_pow_699)
{
    double base = -7;
    double exp = 12.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -12.5) = 0.000000 \f]
START_TEST(s21_pow_700)
{
    double base = 321.956;
    double exp = -12.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -12.25) = 0.000000 \f]
START_TEST(s21_pow_701)
{
    double base = 321.956;
    double exp = -12.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -12.00) = 0.000000 \f]
START_TEST(s21_pow_702)
{
    double base = 321.956;
    double exp = -12.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -11.75) = 0.000000 \f]
START_TEST(s21_pow_703)
{
    double base = 321.956;
    double exp = -11.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -11.50) = 0.000000 \f]
START_TEST(s21_pow_704)
{
    double base = 321.956;
    double exp = -11.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -11.25) = 0.000000 \f]
START_TEST(s21_pow_705)
{
    double base = 321.956;
    double exp = -11.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -11.00) = 0.000000 \f]
START_TEST(s21_pow_706)
{
    double base = 321.956;
    double exp = -11.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -10.75) = 0.000000 \f]
START_TEST(s21_pow_707)
{
    double base = 321.956;
    double exp = -10.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -10.50) = 0.000000 \f]
START_TEST(s21_pow_708)
{
    double base = 321.956;
    double exp = -10.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -10.25) = 0.000000 \f]
START_TEST(s21_pow_709)
{
    double base = 321.956;
    double exp = -10.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -10.00) = 0.000000 \f]
START_TEST(s21_pow_710)
{
    double base = 321.956;
    double exp = -10.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -9.75) = 0.000000 \f]
START_TEST(s21_pow_711)
{
    double base = 321.956;
    double exp = -9.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -9.50) = 0.000000 \f]
START_TEST(s21_pow_712)
{
    double base = 321.956;
    double exp = -9.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -9.25) = 0.000000 \f]
START_TEST(s21_pow_713)
{
    double base = 321.956;
    double exp = -9.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -9.00) = 0.000000 \f]
START_TEST(s21_pow_714)
{
    double base = 321.956;
    double exp = -9.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -8.75) = 0.000000 \f]
START_TEST(s21_pow_715)
{
    double base = 321.956;
    double exp = -8.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -8.50) = 0.000000 \f]
START_TEST(s21_pow_716)
{
    double base = 321.956;
    double exp = -8.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -8.25) = 0.000000 \f]
START_TEST(s21_pow_717)
{
    double base = 321.956;
    double exp = -8.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -8.00) = 0.000000 \f]
START_TEST(s21_pow_718)
{
    double base = 321.956;
    double exp = -8.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -7.75) = 0.000000 \f]
START_TEST(s21_pow_719)
{
    double base = 321.956;
    double exp = -7.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -7.50) = 0.000000 \f]
START_TEST(s21_pow_720)
{
    double base = 321.956;
    double exp = -7.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -7.25) = 0.000000 \f]
START_TEST(s21_pow_721)
{
    double base = 321.956;
    double exp = -7.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -7.00) = 0.000000 \f]
START_TEST(s21_pow_722)
{
    double base = 321.956;
    double exp = -7.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -6.75) = 0.000000 \f]
START_TEST(s21_pow_723)
{
    double base = 321.956;
    double exp = -6.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -6.50) = 0.000000 \f]
START_TEST(s21_pow_724)
{
    double base = 321.956;
    double exp = -6.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -6.25) = 0.000000 \f]
START_TEST(s21_pow_725)
{
    double base = 321.956;
    double exp = -6.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -6.00) = 0.000000 \f]
START_TEST(s21_pow_726)
{
    double base = 321.956;
    double exp = -6.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -5.75) = 0.000000 \f]
START_TEST(s21_pow_727)
{
    double base = 321.956;
    double exp = -5.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -5.50) = 0.000000 \f]
START_TEST(s21_pow_728)
{
    double base = 321.956;
    double exp = -5.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -5.25) = 0.000000 \f]
START_TEST(s21_pow_729)
{
    double base = 321.956;
    double exp = -5.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -5.00) = 0.000000 \f]
START_TEST(s21_pow_730)
{
    double base = 321.956;
    double exp = -5.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -4.75) = 0.000000 \f]
START_TEST(s21_pow_731)
{
    double base = 321.956;
    double exp = -4.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -4.50) = 0.000000 \f]
START_TEST(s21_pow_732)
{
    double base = 321.956;
    double exp = -4.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -4.25) = 0.000000 \f]
START_TEST(s21_pow_733)
{
    double base = 321.956;
    double exp = -4.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -4.00) = 0.000000 \f]
START_TEST(s21_pow_734)
{
    double base = 321.956;
    double exp = -4.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -3.75) = 0.000000 \f]
START_TEST(s21_pow_735)
{
    double base = 321.956;
    double exp = -3.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -3.50) = 0.000000 \f]
START_TEST(s21_pow_736)
{
    double base = 321.956;
    double exp = -3.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -3.25) = 0.000000 \f]
START_TEST(s21_pow_737)
{
    double base = 321.956;
    double exp = -3.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -3.00) = 0.000000 \f]
START_TEST(s21_pow_738)
{
    double base = 321.956;
    double exp = -3.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -2.75) = 0.000000 \f]
START_TEST(s21_pow_739)
{
    double base = 321.956;
    double exp = -2.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -2.50) = 0.000001 \f]
START_TEST(s21_pow_740)
{
    double base = 321.956;
    double exp = -2.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -2.25) = 0.000002 \f]
START_TEST(s21_pow_741)
{
    double base = 321.956;
    double exp = -2.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -2.00) = 0.000010 \f]
START_TEST(s21_pow_742)
{
    double base = 321.956;
    double exp = -2.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -1.75) = 0.000041 \f]
START_TEST(s21_pow_743)
{
    double base = 321.956;
    double exp = -1.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -1.50) = 0.000173 \f]
START_TEST(s21_pow_744)
{
    double base = 321.956;
    double exp = -1.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -1.25) = 0.000733 \f]
START_TEST(s21_pow_745)
{
    double base = 321.956;
    double exp = -1.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -1.00) = 0.003106 \f]
START_TEST(s21_pow_746)
{
    double base = 321.956;
    double exp = -1.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -0.75) = 0.013157 \f]
START_TEST(s21_pow_747)
{
    double base = 321.956;
    double exp = -0.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -0.50) = 0.055732 \f]
START_TEST(s21_pow_748)
{
    double base = 321.956;
    double exp = -0.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, -0.25) = 0.236075 \f]
START_TEST(s21_pow_749)
{
    double base = 321.956;
    double exp = -0.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 0) = 1.000000 \f]
START_TEST(s21_pow_750)
{
    double base = 321.956;
    double exp = 0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 0.25) = 4.235933 \f]
START_TEST(s21_pow_751)
{
    double base = 321.956;
    double exp = 0.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 0.50) = 17.943132 \f]
START_TEST(s21_pow_752)
{
    double base = 321.956;
    double exp = 0.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 0.75) = 76.005915 \f]
START_TEST(s21_pow_753)
{
    double base = 321.956;
    double exp = 0.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 1.00) = 321.956000 \f]
START_TEST(s21_pow_754)
{
    double base = 321.956;
    double exp = 1.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 1.25) = 1363.784197 \f]
START_TEST(s21_pow_755)
{
    double base = 321.956;
    double exp = 1.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 1.50) = 5776.899132 \f]
START_TEST(s21_pow_756)
{
    double base = 321.956;
    double exp = 1.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 1.75) = 24470.560406 \f]
START_TEST(s21_pow_757)
{
    double base = 321.956;
    double exp = 1.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 2.00) = 103655.665936 \f]
START_TEST(s21_pow_758)
{
    double base = 321.956;
    double exp = 2.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 2.25) = 439078.505045 \f]
START_TEST(s21_pow_759)
{
    double base = 321.956;
    double exp = 2.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 2.50) = 1859907.336964 \f]
START_TEST(s21_pow_760)
{
    double base = 321.956;
    double exp = 2.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 2.75) = 7878443.746047 \f]
START_TEST(s21_pow_761)
{
    double base = 321.956;
    double exp = 2.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 3.00) = 33372563.582091 \f]
START_TEST(s21_pow_762)
{
    double base = 321.956;
    double exp = 3.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 3.25) = 141363959.170166 \f]
START_TEST(s21_pow_763)
{
    double base = 321.956;
    double exp = 3.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 3.50) = 598808326.579634 \f]
START_TEST(s21_pow_764)
{
    double base = 321.956;
    double exp = 3.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 3.75) = 2536512234.702445 \f]
START_TEST(s21_pow_765)
{
    double base = 321.956;
    double exp = 3.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 4.00) = 10744497080.635633 \f]
START_TEST(s21_pow_766)
{
    double base = 321.956;
    double exp = 4.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 4.25) = 45512974838.589844 \f]
START_TEST(s21_pow_767)
{
    double base = 321.956;
    double exp = 4.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 4.50) = 192789933592.272736 \f]
START_TEST(s21_pow_768)
{
    double base = 321.956;
    double exp = 4.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 4.75) = 816645333035.860229 \f]
START_TEST(s21_pow_769)
{
    double base = 321.956;
    double exp = 4.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 5.00) = 3459255302093.125977 \f]
START_TEST(s21_pow_770)
{
    double base = 321.956;
    double exp = 5.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 5.25) = 14653175327133.031250 \f]
START_TEST(s21_pow_771)
{
    double base = 321.956;
    double exp = 5.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 5.50) = 62069875859633.757812 \f]
START_TEST(s21_pow_772)
{
    double base = 321.956;
    double exp = 5.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 5.75) = 262923864842893.437500 \f]
START_TEST(s21_pow_773)
{
    double base = 321.956;
    double exp = 5.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 6.00) = 1113728000040694.500000 \f]
START_TEST(s21_pow_774)
{
    double base = 321.956;
    double exp = 6.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 6.25) = 4717677715622442.000000 \f]
START_TEST(s21_pow_775)
{
    double base = 321.956;
    double exp = 6.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 6.50) = 19983768952264248.000000 \f]
START_TEST(s21_pow_776)
{
    double base = 321.956;
    double exp = 6.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 6.75) = 84649915829358608.000000 \f]
START_TEST(s21_pow_777)
{
    double base = 321.956;
    double exp = 6.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 7.00) = 358571411981101888.000000 \f]
START_TEST(s21_pow_778)
{
    double base = 321.956;
    double exp = 7.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 7.25) = 1518884646610939136.000000 \f]
START_TEST(s21_pow_779)
{
    double base = 321.956;
    double exp = 7.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 7.50) = 6433894316795188224.000000 \f]
START_TEST(s21_pow_780)
{
    double base = 321.956;
    double exp = 7.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 7.75) = 27253548300756979712.000000 \f]
START_TEST(s21_pow_781)
{
    double base = 321.956;
    double exp = 7.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 8.00) = 115444217515787649024.000000 \f]
START_TEST(s21_pow_782)
{
    double base = 321.956;
    double exp = 8.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 8.25) = 489014025284271538176.000000 \f]
START_TEST(s21_pow_783)
{
    double base = 321.956;
    double exp = 8.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 8.50) = 2071430878658111995904.000000 \f]
START_TEST(s21_pow_784)
{
    double base = 321.956;
    double exp = 8.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 8.75) = 8774443396718514929664.000000 \f]
START_TEST(s21_pow_785)
{
    double base = 321.956;
    double exp = 8.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 9.00) = 37167958494512926425088.000000 \f]
START_TEST(s21_pow_786)
{
    double base = 321.956;
    double exp = 9.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 9.25) = 157440999524422945603584.000000 \f]
START_TEST(s21_pow_787)
{
    double base = 321.956;
    double exp = 9.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 9.50) = 666909599969251061399552.000000 \f]
START_TEST(s21_pow_788)
{
    double base = 321.956;
    double exp = 9.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 9.75) = 2824984698233906559713280.000000 \f]
START_TEST(s21_pow_789)
{
    double base = 321.956;
    double exp = 9.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 10.00) = 11966447245059403888459776.000000 \f]
START_TEST(s21_pow_790)
{
    double base = 321.956;
    double exp = 10.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 10.25) = 50689074442885113298550784.000000 \f]
START_TEST(s21_pow_791)
{
    double base = 321.956;
    double exp = 10.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 10.50) = 214715547167700227727556608.000000 \f]
START_TEST(s21_pow_792)
{
    double base = 321.956;
    double exp = 10.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 10.75) = 909520773504595532753928192.000000 \f]
START_TEST(s21_pow_793)
{
    double base = 321.956;
    double exp = 10.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 11.00) = 3852669489230346225425842176.000000 \f]
START_TEST(s21_pow_794)
{
    double base = 321.956;
    double exp = 11.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 11.25) = 16319651651333520420090413056.000000 \f]
START_TEST(s21_pow_795)
{
    double base = 321.956;
    double exp = 11.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 11.50) = 69128958703924098794803691520.000000 \f]
START_TEST(s21_pow_796)
{
    double base = 321.956;
    double exp = 11.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 11.75) = 292825670154445606551405199360.000000 \f]
START_TEST(s21_pow_797)
{
    double base = 321.956;
    double exp = 11.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 12.00) = 1240390058074645272820596080640.000000 \f]
START_TEST(s21_pow_798)
{
    double base = 321.956;
    double exp = 12.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(321.956, 12.25) = 5254209767056734989281537294336.000000 \f]
START_TEST(s21_pow_799)
{
    double base = 321.956;
    double exp = 12.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -12.5) = 0.000000 \f]
START_TEST(s21_pow_800)
{
    double base = 9.8432;
    double exp = -12.5;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -12.25) = 0.000000 \f]
START_TEST(s21_pow_801)
{
    double base = 9.8432;
    double exp = -12.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -12.00) = 0.000000 \f]
START_TEST(s21_pow_802)
{
    double base = 9.8432;
    double exp = -12.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -11.75) = 0.000000 \f]
START_TEST(s21_pow_803)
{
    double base = 9.8432;
    double exp = -11.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -11.50) = 0.000000 \f]
START_TEST(s21_pow_804)
{
    double base = 9.8432;
    double exp = -11.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -11.25) = 0.000000 \f]
START_TEST(s21_pow_805)
{
    double base = 9.8432;
    double exp = -11.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -11.00) = 0.000000 \f]
START_TEST(s21_pow_806)
{
    double base = 9.8432;
    double exp = -11.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -10.75) = 0.000000 \f]
START_TEST(s21_pow_807)
{
    double base = 9.8432;
    double exp = -10.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -10.50) = 0.000000 \f]
START_TEST(s21_pow_808)
{
    double base = 9.8432;
    double exp = -10.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -10.25) = 0.000000 \f]
START_TEST(s21_pow_809)
{
    double base = 9.8432;
    double exp = -10.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -10.00) = 0.000000 \f]
START_TEST(s21_pow_810)
{
    double base = 9.8432;
    double exp = -10.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -9.75) = 0.000000 \f]
START_TEST(s21_pow_811)
{
    double base = 9.8432;
    double exp = -9.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -9.50) = 0.000000 \f]
START_TEST(s21_pow_812)
{
    double base = 9.8432;
    double exp = -9.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -9.25) = 0.000000 \f]
START_TEST(s21_pow_813)
{
    double base = 9.8432;
    double exp = -9.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -9.00) = 0.000000 \f]
START_TEST(s21_pow_814)
{
    double base = 9.8432;
    double exp = -9.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -8.75) = 0.000000 \f]
START_TEST(s21_pow_815)
{
    double base = 9.8432;
    double exp = -8.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -8.50) = 0.000000 \f]
START_TEST(s21_pow_816)
{
    double base = 9.8432;
    double exp = -8.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -8.25) = 0.000000 \f]
START_TEST(s21_pow_817)
{
    double base = 9.8432;
    double exp = -8.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -8.00) = 0.000000 \f]
START_TEST(s21_pow_818)
{
    double base = 9.8432;
    double exp = -8.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -7.75) = 0.000000 \f]
START_TEST(s21_pow_819)
{
    double base = 9.8432;
    double exp = -7.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -7.50) = 0.000000 \f]
START_TEST(s21_pow_820)
{
    double base = 9.8432;
    double exp = -7.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -7.25) = 0.000000 \f]
START_TEST(s21_pow_821)
{
    double base = 9.8432;
    double exp = -7.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -7.00) = 0.000000 \f]
START_TEST(s21_pow_822)
{
    double base = 9.8432;
    double exp = -7.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -6.75) = 0.000000 \f]
START_TEST(s21_pow_823)
{
    double base = 9.8432;
    double exp = -6.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -6.50) = 0.000000 \f]
START_TEST(s21_pow_824)
{
    double base = 9.8432;
    double exp = -6.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -6.25) = 0.000001 \f]
START_TEST(s21_pow_825)
{
    double base = 9.8432;
    double exp = -6.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -6.00) = 0.000001 \f]
START_TEST(s21_pow_826)
{
    double base = 9.8432;
    double exp = -6.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -5.75) = 0.000002 \f]
START_TEST(s21_pow_827)
{
    double base = 9.8432;
    double exp = -5.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -5.50) = 0.000003 \f]
START_TEST(s21_pow_828)
{
    double base = 9.8432;
    double exp = -5.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -5.25) = 0.000006 \f]
START_TEST(s21_pow_829)
{
    double base = 9.8432;
    double exp = -5.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -5.00) = 0.000011 \f]
START_TEST(s21_pow_830)
{
    double base = 9.8432;
    double exp = -5.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -4.75) = 0.000019 \f]
START_TEST(s21_pow_831)
{
    double base = 9.8432;
    double exp = -4.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -4.50) = 0.000034 \f]
START_TEST(s21_pow_832)
{
    double base = 9.8432;
    double exp = -4.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -4.25) = 0.000060 \f]
START_TEST(s21_pow_833)
{
    double base = 9.8432;
    double exp = -4.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -4.00) = 0.000107 \f]
START_TEST(s21_pow_834)
{
    double base = 9.8432;
    double exp = -4.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -3.75) = 0.000189 \f]
START_TEST(s21_pow_835)
{
    double base = 9.8432;
    double exp = -3.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -3.50) = 0.000334 \f]
START_TEST(s21_pow_836)
{
    double base = 9.8432;
    double exp = -3.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -3.25) = 0.000592 \f]
START_TEST(s21_pow_837)
{
    double base = 9.8432;
    double exp = -3.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -3.00) = 0.001049 \f]
START_TEST(s21_pow_838)
{
    double base = 9.8432;
    double exp = -3.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -2.75) = 0.001857 \f]
START_TEST(s21_pow_839)
{
    double base = 9.8432;
    double exp = -2.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -2.50) = 0.003290 \f]
START_TEST(s21_pow_840)
{
    double base = 9.8432;
    double exp = -2.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -2.25) = 0.005827 \f]
START_TEST(s21_pow_841)
{
    double base = 9.8432;
    double exp = -2.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -2.00) = 0.010321 \f]
START_TEST(s21_pow_842)
{
    double base = 9.8432;
    double exp = -2.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -1.75) = 0.018281 \f]
START_TEST(s21_pow_843)
{
    double base = 9.8432;
    double exp = -1.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -1.50) = 0.032381 \f]
START_TEST(s21_pow_844)
{
    double base = 9.8432;
    double exp = -1.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -1.25) = 0.057356 \f]
START_TEST(s21_pow_845)
{
    double base = 9.8432;
    double exp = -1.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -1.00) = 0.101593 \f]
START_TEST(s21_pow_846)
{
    double base = 9.8432;
    double exp = -1.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -0.75) = 0.179948 \f]
START_TEST(s21_pow_847)
{
    double base = 9.8432;
    double exp = -0.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -0.50) = 0.318737 \f]
START_TEST(s21_pow_848)
{
    double base = 9.8432;
    double exp = -0.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, -0.25) = 0.564568 \f]
START_TEST(s21_pow_849)
{
    double base = 9.8432;
    double exp = -0.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 0) = 1.000000 \f]
START_TEST(s21_pow_850)
{
    double base = 9.8432;
    double exp = 0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 0.25) = 1.771267 \f]
START_TEST(s21_pow_851)
{
    double base = 9.8432;
    double exp = 0.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 0.50) = 3.137387 \f]
START_TEST(s21_pow_852)
{
    double base = 9.8432;
    double exp = 0.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 0.75) = 5.557151 \f]
START_TEST(s21_pow_853)
{
    double base = 9.8432;
    double exp = 0.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 1.00) = 9.843200 \f]
START_TEST(s21_pow_854)
{
    double base = 9.8432;
    double exp = 1.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 1.25) = 17.434937 \f]
START_TEST(s21_pow_855)
{
    double base = 9.8432;
    double exp = 1.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 1.50) = 30.881932 \f]
START_TEST(s21_pow_856)
{
    double base = 9.8432;
    double exp = 1.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 1.75) = 54.700153 \f]
START_TEST(s21_pow_857)
{
    double base = 9.8432;
    double exp = 1.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 2.00) = 96.888586 \f]
START_TEST(s21_pow_858)
{
    double base = 9.8432;
    double exp = 2.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 2.25) = 171.615574 \f]
START_TEST(s21_pow_859)
{
    double base = 9.8432;
    double exp = 2.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 2.50) = 303.977034 \f]
START_TEST(s21_pow_860)
{
    double base = 9.8432;
    double exp = 2.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 2.75) = 538.424547 \f]
START_TEST(s21_pow_861)
{
    double base = 9.8432;
    double exp = 2.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 3.00) = 953.693732 \f]
START_TEST(s21_pow_862)
{
    double base = 9.8432;
    double exp = 3.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 3.25) = 1689.246414 \f]
START_TEST(s21_pow_863)
{
    double base = 9.8432;
    double exp = 3.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 3.50) = 2992.106744 \f]
START_TEST(s21_pow_864)
{
    double base = 9.8432;
    double exp = 3.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 3.75) = 5299.820497 \f]
START_TEST(s21_pow_865)
{
    double base = 9.8432;
    double exp = 3.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 4.00) = 9387.398144 \f]
START_TEST(s21_pow_866)
{
    double base = 9.8432;
    double exp = 4.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 4.25) = 16627.590304 \f]
START_TEST(s21_pow_867)
{
    double base = 9.8432;
    double exp = 4.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 4.50) = 29451.905107 \f]
START_TEST(s21_pow_868)
{
    double base = 9.8432;
    double exp = 4.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 4.75) = 52167.193114 \f]
START_TEST(s21_pow_869)
{
    double base = 9.8432;
    double exp = 4.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 5.00) = 92402.037407 \f]
START_TEST(s21_pow_870)
{
    double base = 9.8432;
    double exp = 5.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 5.25) = 163668.696882 \f]
START_TEST(s21_pow_871)
{
    double base = 9.8432;
    double exp = 5.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 5.50) = 289900.992347 \f]
START_TEST(s21_pow_872)
{
    double base = 9.8432;
    double exp = 5.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 5.75) = 513492.115259 \f]
START_TEST(s21_pow_873)
{
    double base = 9.8432;
    double exp = 5.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 6.00) = 909531.734604 \f]
START_TEST(s21_pow_874)
{
    double base = 9.8432;
    double exp = 6.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 6.25) = 1611023.717152 \f]
START_TEST(s21_pow_875)
{
    double base = 9.8432;
    double exp = 6.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 6.50) = 2853553.447868 \f]
START_TEST(s21_pow_876)
{
    double base = 9.8432;
    double exp = 6.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 6.75) = 5054405.588913 \f]
START_TEST(s21_pow_877)
{
    double base = 9.8432;
    double exp = 6.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 7.00) = 8952702.770054 \f]
START_TEST(s21_pow_878)
{
    double base = 9.8432;
    double exp = 7.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 7.25) = 15857628.652667 \f]
START_TEST(s21_pow_879)
{
    double base = 9.8432;
    double exp = 7.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 7.50) = 28088097.298059 \f]
START_TEST(s21_pow_880)
{
    double base = 9.8432;
    double exp = 7.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 7.75) = 49751525.092784 \f]
START_TEST(s21_pow_881)
{
    double base = 9.8432;
    double exp = 7.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.0, 8.00) = 88123243.906200 \f]
START_TEST(s21_pow_882)
{
    double base = 9.0;
    double exp = 8.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 8.25) = 156089810.353934 \f]
START_TEST(s21_pow_883)
{
    double base = 9.8432;
    double exp = 8.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 8.50) = 276476759.324254 \f]
START_TEST(s21_pow_884)
{
    double base = 9.8432;
    double exp = 8.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 8.75) = 489714211.793293 \f]
START_TEST(s21_pow_885)
{
    double base = 9.8432;
    double exp = 8.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 9.00) = 867414714.417511 \f]
START_TEST(s21_pow_886)
{
    double base = 9.8432;
    double exp = 9.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 9.25) = 1536423221.275842 \f]
START_TEST(s21_pow_887)
{
    double base = 9.8432;
    double exp = 9.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 9.50) = 2721416037.380495 \f]
START_TEST(s21_pow_888)
{
    double base = 9.8432;
    double exp = 9.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 9.75) = 4820354929.523744 \f]
START_TEST(s21_pow_889)
{
    double base = 9.8432;
    double exp = 9.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 10.00) = 8538136516.954440 \f]
START_TEST(s21_pow_890)
{
    double base = 9.8432;
    double exp = 10.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 10.25) = 15123321051.662369 \f]
START_TEST(s21_pow_891)
{
    double base = 9.8432;
    double exp = 10.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 10.50) = 26787442339.143684 \f]
START_TEST(s21_pow_892)
{
    double base = 9.8432;
    double exp = 10.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 10.75) = 47447717642.288109 \f]
START_TEST(s21_pow_893)
{
    double base = 9.8432;
    double exp = 10.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 11.00) = 84042585363.685944 \f]
START_TEST(s21_pow_894)
{
    double base = 9.8432;
    double exp = 11.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 11.25) = 148861873775.723022 \f]
START_TEST(s21_pow_895)
{
    double base = 9.8432;
    double exp = 11.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 11.50) = 263674152432.659119 \f]
START_TEST(s21_pow_896)
{
    double base = 9.8432;
    double exp = 11.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 11.75) = 467037374296.570312 \f]
START_TEST(s21_pow_897)
{
    double base = 9.8432;
    double exp = 11.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 12.00) = 827247976251.833496 \f]
START_TEST(s21_pow_898)
{
    double base = 9.8432;
    double exp = 12.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(9.8432, 12.25) = 1465277195949.196777 \f]
START_TEST(s21_pow_899)
{
    double base = 9.8432;
    double exp = 12.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -25.0) = 0.000000 \f]
START_TEST(s21_pow_900)
{
    double base = 10.31;
    double exp = -25.0;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -24.75) = 0.000000 \f]
START_TEST(s21_pow_901)
{
    double base = 10.31;
    double exp = -24.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -24.50) = 0.000000 \f]
START_TEST(s21_pow_902)
{
    double base = 10.31;
    double exp = -24.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -24.25) = 0.000000 \f]
START_TEST(s21_pow_903)
{
    double base = 10.31;
    double exp = -24.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -24.00) = 0.000000 \f]
START_TEST(s21_pow_904)
{
    double base = 10.31;
    double exp = -24.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -23.75) = 0.000000 \f]
START_TEST(s21_pow_905)
{
    double base = 10.31;
    double exp = -23.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -23.50) = 0.000000 \f]
START_TEST(s21_pow_906)
{
    double base = 10.31;
    double exp = -23.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -23.25) = 0.000000 \f]
START_TEST(s21_pow_907)
{
    double base = 10.31;
    double exp = -23.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -23.00) = 0.000000 \f]
START_TEST(s21_pow_908)
{
    double base = 10.31;
    double exp = -23.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -22.75) = 0.000000 \f]
START_TEST(s21_pow_909)
{
    double base = 10.31;
    double exp = -22.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -22.50) = 0.000000 \f]
START_TEST(s21_pow_910)
{
    double base = 10.31;
    double exp = -22.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -22.25) = 0.000000 \f]
START_TEST(s21_pow_911)
{
    double base = 10.31;
    double exp = -22.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -22.00) = 0.000000 \f]
START_TEST(s21_pow_912)
{
    double base = 10.31;
    double exp = -22.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -21.75) = 0.000000 \f]
START_TEST(s21_pow_913)
{
    double base = 10.31;
    double exp = -21.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -21.50) = 0.000000 \f]
START_TEST(s21_pow_914)
{
    double base = 10.31;
    double exp = -21.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -21.25) = 0.000000 \f]
START_TEST(s21_pow_915)
{
    double base = 10.31;
    double exp = -21.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -21.00) = 0.000000 \f]
START_TEST(s21_pow_916)
{
    double base = 10.31;
    double exp = -21.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -20.75) = 0.000000 \f]
START_TEST(s21_pow_917)
{
    double base = 10.31;
    double exp = -20.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -20.50) = 0.000000 \f]
START_TEST(s21_pow_918)
{
    double base = 10.31;
    double exp = -20.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -20.25) = 0.000000 \f]
START_TEST(s21_pow_919)
{
    double base = 10.31;
    double exp = -20.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -20.00) = 0.000000 \f]
START_TEST(s21_pow_920)
{
    double base = 10.31;
    double exp = -20.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -19.75) = 0.000000 \f]
START_TEST(s21_pow_921)
{
    double base = 10.31;
    double exp = -19.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -19.50) = 0.000000 \f]
START_TEST(s21_pow_922)
{
    double base = 10.31;
    double exp = -19.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -19.25) = 0.000000 \f]
START_TEST(s21_pow_923)
{
    double base = 10.31;
    double exp = -19.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -19.00) = 0.000000 \f]
START_TEST(s21_pow_924)
{
    double base = 10.31;
    double exp = -19.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -18.75) = 0.000000 \f]
START_TEST(s21_pow_925)
{
    double base = 10.31;
    double exp = -18.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -18.50) = 0.000000 \f]
START_TEST(s21_pow_926)
{
    double base = 10.31;
    double exp = -18.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -18.25) = 0.000000 \f]
START_TEST(s21_pow_927)
{
    double base = 10.31;
    double exp = -18.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -18.00) = 0.000000 \f]
START_TEST(s21_pow_928)
{
    double base = 10.31;
    double exp = -18.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -17.75) = 0.000000 \f]
START_TEST(s21_pow_929)
{
    double base = 10.31;
    double exp = -17.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -17.50) = 0.000000 \f]
START_TEST(s21_pow_930)
{
    double base = 10.31;
    double exp = -17.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -17.25) = 0.000000 \f]
START_TEST(s21_pow_931)
{
    double base = 10.31;
    double exp = -17.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -17.00) = 0.000000 \f]
START_TEST(s21_pow_932)
{
    double base = 10.31;
    double exp = -17.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -16.75) = 0.000000 \f]
START_TEST(s21_pow_933)
{
    double base = 10.31;
    double exp = -16.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -16.50) = 0.000000 \f]
START_TEST(s21_pow_934)
{
    double base = 10.31;
    double exp = -16.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -16.25) = 0.000000 \f]
START_TEST(s21_pow_935)
{
    double base = 10.31;
    double exp = -16.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -16.00) = 0.000000 \f]
START_TEST(s21_pow_936)
{
    double base = 10.31;
    double exp = -16.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -15.75) = 0.000000 \f]
START_TEST(s21_pow_937)
{
    double base = 10.31;
    double exp = -15.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -15.50) = 0.000000 \f]
START_TEST(s21_pow_938)
{
    double base = 10.31;
    double exp = -15.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -15.25) = 0.000000 \f]
START_TEST(s21_pow_939)
{
    double base = 10.31;
    double exp = -15.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -15.00) = 0.000000 \f]
START_TEST(s21_pow_940)
{
    double base = 10.31;
    double exp = -15.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -14.75) = 0.000000 \f]
START_TEST(s21_pow_941)
{
    double base = 10.31;
    double exp = -14.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -14.50) = 0.000000 \f]
START_TEST(s21_pow_942)
{
    double base = 10.31;
    double exp = -14.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -14.25) = 0.000000 \f]
START_TEST(s21_pow_943)
{
    double base = 10.31;
    double exp = -14.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -14.00) = 0.000000 \f]
START_TEST(s21_pow_944)
{
    double base = 10.31;
    double exp = -14.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -13.75) = 0.000000 \f]
START_TEST(s21_pow_945)
{
    double base = 10.31;
    double exp = -13.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -13.50) = 0.000000 \f]
START_TEST(s21_pow_946)
{
    double base = 10.31;
    double exp = -13.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -13.25) = 0.000000 \f]
START_TEST(s21_pow_947)
{
    double base = 10.31;
    double exp = -13.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -13.00) = 0.000000 \f]
START_TEST(s21_pow_948)
{
    double base = 10.31;
    double exp = -13.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -12.75) = 0.000000 \f]
START_TEST(s21_pow_949)
{
    double base = 10.31;
    double exp = -12.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -12.50) = 0.000000 \f]
START_TEST(s21_pow_950)
{
    double base = 10.31;
    double exp = -12.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -12.25) = 0.000000 \f]
START_TEST(s21_pow_951)
{
    double base = 10.31;
    double exp = -12.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -12.00) = 0.000000 \f]
START_TEST(s21_pow_952)
{
    double base = 10.31;
    double exp = -12.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -11.75) = 0.000000 \f]
START_TEST(s21_pow_953)
{
    double base = 10.31;
    double exp = -11.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -11.50) = 0.000000 \f]
START_TEST(s21_pow_954)
{
    double base = 10.31;
    double exp = -11.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -11.25) = 0.000000 \f]
START_TEST(s21_pow_955)
{
    double base = 10.31;
    double exp = -11.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -11.00) = 0.000000 \f]
START_TEST(s21_pow_956)
{
    double base = 10.31;
    double exp = -11.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -10.75) = 0.000000 \f]
START_TEST(s21_pow_957)
{
    double base = 10.31;
    double exp = -10.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -10.50) = 0.000000 \f]
START_TEST(s21_pow_958)
{
    double base = 10.31;
    double exp = -10.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -10.25) = 0.000000 \f]
START_TEST(s21_pow_959)
{
    double base = 10.31;
    double exp = -10.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -10.00) = 0.000000 \f]
START_TEST(s21_pow_960)
{
    double base = 10.31;
    double exp = -10.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -9.75) = 0.000000 \f]
START_TEST(s21_pow_961)
{
    double base = 10.31;
    double exp = -9.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -9.50) = 0.000000 \f]
START_TEST(s21_pow_962)
{
    double base = 10.31;
    double exp = -9.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -9.25) = 0.000000 \f]
START_TEST(s21_pow_963)
{
    double base = 10.31;
    double exp = -9.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -9.00) = 0.000000 \f]
START_TEST(s21_pow_964)
{
    double base = 10.31;
    double exp = -9.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -8.75) = 0.000000 \f]
START_TEST(s21_pow_965)
{
    double base = 10.31;
    double exp = -8.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -8.50) = 0.000000 \f]
START_TEST(s21_pow_966)
{
    double base = 10.31;
    double exp = -8.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -8.25) = 0.000000 \f]
START_TEST(s21_pow_967)
{
    double base = 10.31;
    double exp = -8.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -8.00) = 0.000000 \f]
START_TEST(s21_pow_968)
{
    double base = 10.31;
    double exp = -8.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -7.75) = 0.000000 \f]
START_TEST(s21_pow_969)
{
    double base = 10.31;
    double exp = -7.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -7.50) = 0.000000 \f]
START_TEST(s21_pow_970)
{
    double base = 10.31;
    double exp = -7.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -7.25) = 0.000000 \f]
START_TEST(s21_pow_971)
{
    double base = 10.31;
    double exp = -7.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -7.00) = 0.000000 \f]
START_TEST(s21_pow_972)
{
    double base = 10.31;
    double exp = -7.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -6.75) = 0.000000 \f]
START_TEST(s21_pow_973)
{
    double base = 10.31;
    double exp = -6.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -6.50) = 0.000000 \f]
START_TEST(s21_pow_974)
{
    double base = 10.31;
    double exp = -6.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -6.25) = 0.000000 \f]
START_TEST(s21_pow_975)
{
    double base = 10.31;
    double exp = -6.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -6.00) = 0.000001 \f]
START_TEST(s21_pow_976)
{
    double base = 10.31;
    double exp = -6.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -5.75) = 0.000001 \f]
START_TEST(s21_pow_977)
{
    double base = 10.31;
    double exp = -5.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -5.50) = 0.000003 \f]
START_TEST(s21_pow_978)
{
    double base = 10.31;
    double exp = -5.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -5.25) = 0.000005 \f]
START_TEST(s21_pow_979)
{
    double base = 10.31;
    double exp = -5.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -5.00) = 0.000009 \f]
START_TEST(s21_pow_980)
{
    double base = 10.31;
    double exp = -5.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -4.75) = 0.000015 \f]
START_TEST(s21_pow_981)
{
    double base = 10.31;
    double exp = -4.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -4.50) = 0.000028 \f]
START_TEST(s21_pow_982)
{
    double base = 10.31;
    double exp = -4.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -4.25) = 0.000049 \f]
START_TEST(s21_pow_983)
{
    double base = 10.31;
    double exp = -4.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -4.00) = 0.000089 \f]
START_TEST(s21_pow_984)
{
    double base = 10.31;
    double exp = -4.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -3.75) = 0.000159 \f]
START_TEST(s21_pow_985)
{
    double base = 10.31;
    double exp = -3.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -3.50) = 0.000284 \f]
START_TEST(s21_pow_986)
{
    double base = 10.31;
    double exp = -3.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -3.25) = 0.000509 \f]
START_TEST(s21_pow_987)
{
    double base = 10.31;
    double exp = -3.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -3.00) = 0.000912 \f]
START_TEST(s21_pow_988)
{
    double base = 10.31;
    double exp = -3.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -2.75) = 0.001635 \f]
START_TEST(s21_pow_989)
{
    double base = 10.31;
    double exp = -2.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -2.50) = 0.002930 \f]
START_TEST(s21_pow_990)
{
    double base = 10.31;
    double exp = -2.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -2.25) = 0.005250 \f]
START_TEST(s21_pow_991)
{
    double base = 10.31;
    double exp = -2.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -2.00) = 0.009408 \f]
START_TEST(s21_pow_992)
{
    double base = 10.31;
    double exp = -2.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -1.75) = 0.016858 \f]
START_TEST(s21_pow_993)
{
    double base = 10.31;
    double exp = -1.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -1.50) = 0.030207 \f]
START_TEST(s21_pow_994)
{
    double base = 10.31;
    double exp = -1.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -1.25) = 0.054129 \f]
START_TEST(s21_pow_995)
{
    double base = 10.31;
    double exp = -1.25;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -1.00) = 0.096993 \f]
START_TEST(s21_pow_996)
{
    double base = 10.31;
    double exp = -1.00;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -0.75) = 0.173802 \f]
START_TEST(s21_pow_997)
{
    double base = 10.31;
    double exp = -0.75;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -0.50) = 0.311437 \f]
START_TEST(s21_pow_998)
{
    double base = 10.31;
    double exp = -0.50;

    s21_test_pow(base, exp);
}

/// @brief \f[ pow(10.31, -0.25) = 0.558066 \f]
START_TEST(s21_pow_999)
{
    double base = 10.31;
    double exp = -0.25;

    s21_test_pow(base, exp);
}


/**
 * @brief first set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_first_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow first case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_0);
    tcase_add_test(tc_pow, s21_pow_1);
    tcase_add_test(tc_pow, s21_pow_2);
    tcase_add_test(tc_pow, s21_pow_3);
    tcase_add_test(tc_pow, s21_pow_4);
    tcase_add_test(tc_pow, s21_pow_5);
    tcase_add_test(tc_pow, s21_pow_6);
    tcase_add_test(tc_pow, s21_pow_7);
    tcase_add_test(tc_pow, s21_pow_8);
    tcase_add_test(tc_pow, s21_pow_9);
    tcase_add_test(tc_pow, s21_pow_10);
    tcase_add_test(tc_pow, s21_pow_11);
    tcase_add_test(tc_pow, s21_pow_12);
    tcase_add_test(tc_pow, s21_pow_13);
    tcase_add_test(tc_pow, s21_pow_14);
    tcase_add_test(tc_pow, s21_pow_15);
    tcase_add_test(tc_pow, s21_pow_16);
    tcase_add_test(tc_pow, s21_pow_17);
    tcase_add_test(tc_pow, s21_pow_18);
    tcase_add_test(tc_pow, s21_pow_19);
    tcase_add_test(tc_pow, s21_pow_20);
    tcase_add_test(tc_pow, s21_pow_21);
    tcase_add_test(tc_pow, s21_pow_22);
    tcase_add_test(tc_pow, s21_pow_23);
    tcase_add_test(tc_pow, s21_pow_24);
    tcase_add_test(tc_pow, s21_pow_25);
    tcase_add_test(tc_pow, s21_pow_26);
    tcase_add_test(tc_pow, s21_pow_27);
    tcase_add_test(tc_pow, s21_pow_28);
    tcase_add_test(tc_pow, s21_pow_29);
    tcase_add_test(tc_pow, s21_pow_30);
    tcase_add_test(tc_pow, s21_pow_31);
    tcase_add_test(tc_pow, s21_pow_32);
    tcase_add_test(tc_pow, s21_pow_33);
    tcase_add_test(tc_pow, s21_pow_34);
    tcase_add_test(tc_pow, s21_pow_35);
    tcase_add_test(tc_pow, s21_pow_36);
    tcase_add_test(tc_pow, s21_pow_37);
    tcase_add_test(tc_pow, s21_pow_38);
    tcase_add_test(tc_pow, s21_pow_39);
    tcase_add_test(tc_pow, s21_pow_40);
    tcase_add_test(tc_pow, s21_pow_41);
    tcase_add_test(tc_pow, s21_pow_42);
    tcase_add_test(tc_pow, s21_pow_43);
    tcase_add_test(tc_pow, s21_pow_44);
    tcase_add_test(tc_pow, s21_pow_45);
    tcase_add_test(tc_pow, s21_pow_46);
    tcase_add_test(tc_pow, s21_pow_47);
    tcase_add_test(tc_pow, s21_pow_48);
    tcase_add_test(tc_pow, s21_pow_49);
    tcase_add_test(tc_pow, s21_pow_50);
    tcase_add_test(tc_pow, s21_pow_51);
    tcase_add_test(tc_pow, s21_pow_52);
    tcase_add_test(tc_pow, s21_pow_53);
    tcase_add_test(tc_pow, s21_pow_54);
    tcase_add_test(tc_pow, s21_pow_55);
    tcase_add_test(tc_pow, s21_pow_56);
    tcase_add_test(tc_pow, s21_pow_57);
    tcase_add_test(tc_pow, s21_pow_58);
    tcase_add_test(tc_pow, s21_pow_59);
    tcase_add_test(tc_pow, s21_pow_60);
    tcase_add_test(tc_pow, s21_pow_61);
    tcase_add_test(tc_pow, s21_pow_62);
    tcase_add_test(tc_pow, s21_pow_63);
    tcase_add_test(tc_pow, s21_pow_64);
    tcase_add_test(tc_pow, s21_pow_65);
    tcase_add_test(tc_pow, s21_pow_66);
    tcase_add_test(tc_pow, s21_pow_67);
    tcase_add_test(tc_pow, s21_pow_68);
    tcase_add_test(tc_pow, s21_pow_69);
    tcase_add_test(tc_pow, s21_pow_70);
    tcase_add_test(tc_pow, s21_pow_71);
    tcase_add_test(tc_pow, s21_pow_72);
    tcase_add_test(tc_pow, s21_pow_73);
    tcase_add_test(tc_pow, s21_pow_74);
    tcase_add_test(tc_pow, s21_pow_75);
    tcase_add_test(tc_pow, s21_pow_76);
    tcase_add_test(tc_pow, s21_pow_77);
    tcase_add_test(tc_pow, s21_pow_78);
    tcase_add_test(tc_pow, s21_pow_79);
    tcase_add_test(tc_pow, s21_pow_80);
    tcase_add_test(tc_pow, s21_pow_81);
    tcase_add_test(tc_pow, s21_pow_82);
    tcase_add_test(tc_pow, s21_pow_83);
    tcase_add_test(tc_pow, s21_pow_84);
    tcase_add_test(tc_pow, s21_pow_85);
    tcase_add_test(tc_pow, s21_pow_86);
    tcase_add_test(tc_pow, s21_pow_87);
    tcase_add_test(tc_pow, s21_pow_88);
    tcase_add_test(tc_pow, s21_pow_89);
    tcase_add_test(tc_pow, s21_pow_90);
    tcase_add_test(tc_pow, s21_pow_91);
    tcase_add_test(tc_pow, s21_pow_92);
    tcase_add_test(tc_pow, s21_pow_93);
    tcase_add_test(tc_pow, s21_pow_94);
    tcase_add_test(tc_pow, s21_pow_95);
    tcase_add_test(tc_pow, s21_pow_96);
    tcase_add_test(tc_pow, s21_pow_97);
    tcase_add_test(tc_pow, s21_pow_98);
    tcase_add_test(tc_pow, s21_pow_99);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief second set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_second_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow second case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_100);
    tcase_add_test(tc_pow, s21_pow_101);
    tcase_add_test(tc_pow, s21_pow_102);
    tcase_add_test(tc_pow, s21_pow_103);
    tcase_add_test(tc_pow, s21_pow_104);
    tcase_add_test(tc_pow, s21_pow_105);
    tcase_add_test(tc_pow, s21_pow_106);
    tcase_add_test(tc_pow, s21_pow_107);
    tcase_add_test(tc_pow, s21_pow_108);
    tcase_add_test(tc_pow, s21_pow_109);
    tcase_add_test(tc_pow, s21_pow_110);
    tcase_add_test(tc_pow, s21_pow_111);
    tcase_add_test(tc_pow, s21_pow_112);
    tcase_add_test(tc_pow, s21_pow_113);
    tcase_add_test(tc_pow, s21_pow_114);
    tcase_add_test(tc_pow, s21_pow_115);
    tcase_add_test(tc_pow, s21_pow_116);
    tcase_add_test(tc_pow, s21_pow_117);
    tcase_add_test(tc_pow, s21_pow_118);
    tcase_add_test(tc_pow, s21_pow_119);
    tcase_add_test(tc_pow, s21_pow_120);
    tcase_add_test(tc_pow, s21_pow_121);
    tcase_add_test(tc_pow, s21_pow_122);
    tcase_add_test(tc_pow, s21_pow_123);
    tcase_add_test(tc_pow, s21_pow_124);
    tcase_add_test(tc_pow, s21_pow_125);
    tcase_add_test(tc_pow, s21_pow_126);
    tcase_add_test(tc_pow, s21_pow_127);
    tcase_add_test(tc_pow, s21_pow_128);
    tcase_add_test(tc_pow, s21_pow_129);
    tcase_add_test(tc_pow, s21_pow_130);
    tcase_add_test(tc_pow, s21_pow_131);
    tcase_add_test(tc_pow, s21_pow_132);
    tcase_add_test(tc_pow, s21_pow_133);
    tcase_add_test(tc_pow, s21_pow_134);
    tcase_add_test(tc_pow, s21_pow_135);
    tcase_add_test(tc_pow, s21_pow_136);
    tcase_add_test(tc_pow, s21_pow_137);
    tcase_add_test(tc_pow, s21_pow_138);
    tcase_add_test(tc_pow, s21_pow_139);
    tcase_add_test(tc_pow, s21_pow_140);
    tcase_add_test(tc_pow, s21_pow_141);
    tcase_add_test(tc_pow, s21_pow_142);
    tcase_add_test(tc_pow, s21_pow_143);
    tcase_add_test(tc_pow, s21_pow_144);
    tcase_add_test(tc_pow, s21_pow_145);
    tcase_add_test(tc_pow, s21_pow_146);
    tcase_add_test(tc_pow, s21_pow_147);
    tcase_add_test(tc_pow, s21_pow_148);
    tcase_add_test(tc_pow, s21_pow_149);
    tcase_add_test(tc_pow, s21_pow_150);
    tcase_add_test(tc_pow, s21_pow_151);
    tcase_add_test(tc_pow, s21_pow_152);
    tcase_add_test(tc_pow, s21_pow_153);
    tcase_add_test(tc_pow, s21_pow_154);
    tcase_add_test(tc_pow, s21_pow_155);
    tcase_add_test(tc_pow, s21_pow_156);
    tcase_add_test(tc_pow, s21_pow_157);
    tcase_add_test(tc_pow, s21_pow_158);
    tcase_add_test(tc_pow, s21_pow_159);
    tcase_add_test(tc_pow, s21_pow_160);
    tcase_add_test(tc_pow, s21_pow_161);
    tcase_add_test(tc_pow, s21_pow_162);
    tcase_add_test(tc_pow, s21_pow_163);
    tcase_add_test(tc_pow, s21_pow_164);
    tcase_add_test(tc_pow, s21_pow_165);
    tcase_add_test(tc_pow, s21_pow_166);
    tcase_add_test(tc_pow, s21_pow_167);
    tcase_add_test(tc_pow, s21_pow_168);
    tcase_add_test(tc_pow, s21_pow_169);
    tcase_add_test(tc_pow, s21_pow_170);
    tcase_add_test(tc_pow, s21_pow_171);
    tcase_add_test(tc_pow, s21_pow_172);
    tcase_add_test(tc_pow, s21_pow_173);
    tcase_add_test(tc_pow, s21_pow_174);
    tcase_add_test(tc_pow, s21_pow_175);
    tcase_add_test(tc_pow, s21_pow_176);
    tcase_add_test(tc_pow, s21_pow_177);
    tcase_add_test(tc_pow, s21_pow_178);
    tcase_add_test(tc_pow, s21_pow_179);
    tcase_add_test(tc_pow, s21_pow_180);
    tcase_add_test(tc_pow, s21_pow_181);
    tcase_add_test(tc_pow, s21_pow_182);
    tcase_add_test(tc_pow, s21_pow_183);
    tcase_add_test(tc_pow, s21_pow_184);
    tcase_add_test(tc_pow, s21_pow_185);
    tcase_add_test(tc_pow, s21_pow_186);
    tcase_add_test(tc_pow, s21_pow_187);
    tcase_add_test(tc_pow, s21_pow_188);
    tcase_add_test(tc_pow, s21_pow_189);
    tcase_add_test(tc_pow, s21_pow_190);
    tcase_add_test(tc_pow, s21_pow_191);
    tcase_add_test(tc_pow, s21_pow_192);
    tcase_add_test(tc_pow, s21_pow_193);
    tcase_add_test(tc_pow, s21_pow_194);
    tcase_add_test(tc_pow, s21_pow_195);
    tcase_add_test(tc_pow, s21_pow_196);
    tcase_add_test(tc_pow, s21_pow_197);
    tcase_add_test(tc_pow, s21_pow_198);
    tcase_add_test(tc_pow, s21_pow_199);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief third set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_third_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow third case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_200);
    tcase_add_test(tc_pow, s21_pow_201);
    tcase_add_test(tc_pow, s21_pow_202);
    tcase_add_test(tc_pow, s21_pow_203);
    tcase_add_test(tc_pow, s21_pow_204);
    tcase_add_test(tc_pow, s21_pow_205);
    tcase_add_test(tc_pow, s21_pow_206);
    tcase_add_test(tc_pow, s21_pow_207);
    tcase_add_test(tc_pow, s21_pow_208);
    tcase_add_test(tc_pow, s21_pow_209);
    tcase_add_test(tc_pow, s21_pow_210);
    tcase_add_test(tc_pow, s21_pow_211);
    tcase_add_test(tc_pow, s21_pow_212);
    tcase_add_test(tc_pow, s21_pow_213);
    tcase_add_test(tc_pow, s21_pow_214);
    tcase_add_test(tc_pow, s21_pow_215);
    tcase_add_test(tc_pow, s21_pow_216);
    tcase_add_test(tc_pow, s21_pow_217);
    tcase_add_test(tc_pow, s21_pow_218);
    tcase_add_test(tc_pow, s21_pow_219);
    tcase_add_test(tc_pow, s21_pow_220);
    tcase_add_test(tc_pow, s21_pow_221);
    tcase_add_test(tc_pow, s21_pow_222);
    tcase_add_test(tc_pow, s21_pow_223);
    tcase_add_test(tc_pow, s21_pow_224);
    tcase_add_test(tc_pow, s21_pow_225);
    tcase_add_test(tc_pow, s21_pow_226);
    tcase_add_test(tc_pow, s21_pow_227);
    tcase_add_test(tc_pow, s21_pow_228);
    tcase_add_test(tc_pow, s21_pow_229);
    tcase_add_test(tc_pow, s21_pow_230);
    tcase_add_test(tc_pow, s21_pow_231);
    tcase_add_test(tc_pow, s21_pow_232);
    tcase_add_test(tc_pow, s21_pow_233);
    tcase_add_test(tc_pow, s21_pow_234);
    tcase_add_test(tc_pow, s21_pow_235);
    tcase_add_test(tc_pow, s21_pow_236);
    tcase_add_test(tc_pow, s21_pow_237);
    tcase_add_test(tc_pow, s21_pow_238);
    tcase_add_test(tc_pow, s21_pow_239);
    tcase_add_test(tc_pow, s21_pow_240);
    tcase_add_test(tc_pow, s21_pow_241);
    tcase_add_test(tc_pow, s21_pow_242);
    tcase_add_test(tc_pow, s21_pow_243);
    tcase_add_test(tc_pow, s21_pow_244);
    tcase_add_test(tc_pow, s21_pow_245);
    tcase_add_test(tc_pow, s21_pow_246);
    tcase_add_test(tc_pow, s21_pow_247);
    tcase_add_test(tc_pow, s21_pow_248);
    tcase_add_test(tc_pow, s21_pow_249);
    tcase_add_test(tc_pow, s21_pow_250);
    tcase_add_test(tc_pow, s21_pow_251);
    tcase_add_test(tc_pow, s21_pow_252);
    tcase_add_test(tc_pow, s21_pow_253);
    tcase_add_test(tc_pow, s21_pow_254);
    tcase_add_test(tc_pow, s21_pow_255);
    tcase_add_test(tc_pow, s21_pow_256);
    tcase_add_test(tc_pow, s21_pow_257);
    tcase_add_test(tc_pow, s21_pow_258);
    tcase_add_test(tc_pow, s21_pow_259);
    tcase_add_test(tc_pow, s21_pow_260);
    tcase_add_test(tc_pow, s21_pow_261);
    tcase_add_test(tc_pow, s21_pow_262);
    tcase_add_test(tc_pow, s21_pow_263);
    tcase_add_test(tc_pow, s21_pow_264);
    tcase_add_test(tc_pow, s21_pow_265);
    tcase_add_test(tc_pow, s21_pow_266);
    tcase_add_test(tc_pow, s21_pow_267);
    tcase_add_test(tc_pow, s21_pow_268);
    tcase_add_test(tc_pow, s21_pow_269);
    tcase_add_test(tc_pow, s21_pow_270);
    tcase_add_test(tc_pow, s21_pow_271);
    tcase_add_test(tc_pow, s21_pow_272);
    tcase_add_test(tc_pow, s21_pow_273);
    tcase_add_test(tc_pow, s21_pow_274);
    tcase_add_test(tc_pow, s21_pow_275);
    tcase_add_test(tc_pow, s21_pow_276);
    tcase_add_test(tc_pow, s21_pow_277);
    tcase_add_test(tc_pow, s21_pow_278);
    tcase_add_test(tc_pow, s21_pow_279);
    tcase_add_test(tc_pow, s21_pow_280);
    tcase_add_test(tc_pow, s21_pow_281);
    tcase_add_test(tc_pow, s21_pow_282);
    tcase_add_test(tc_pow, s21_pow_283);
    tcase_add_test(tc_pow, s21_pow_284);
    tcase_add_test(tc_pow, s21_pow_285);
    tcase_add_test(tc_pow, s21_pow_286);
    tcase_add_test(tc_pow, s21_pow_287);
    tcase_add_test(tc_pow, s21_pow_288);
    tcase_add_test(tc_pow, s21_pow_289);
    tcase_add_test(tc_pow, s21_pow_290);
    tcase_add_test(tc_pow, s21_pow_291);
    tcase_add_test(tc_pow, s21_pow_292);
    tcase_add_test(tc_pow, s21_pow_293);
    tcase_add_test(tc_pow, s21_pow_294);
    tcase_add_test(tc_pow, s21_pow_295);
    tcase_add_test(tc_pow, s21_pow_296);
    tcase_add_test(tc_pow, s21_pow_297);
    tcase_add_test(tc_pow, s21_pow_298);
    tcase_add_test(tc_pow, s21_pow_299);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief fourth set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_fourth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow fourth case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_300);
    tcase_add_test(tc_pow, s21_pow_301);
    tcase_add_test(tc_pow, s21_pow_302);
    tcase_add_test(tc_pow, s21_pow_303);
    tcase_add_test(tc_pow, s21_pow_304);
    tcase_add_test(tc_pow, s21_pow_305);
    tcase_add_test(tc_pow, s21_pow_306);
    tcase_add_test(tc_pow, s21_pow_307);
    tcase_add_test(tc_pow, s21_pow_308);
    tcase_add_test(tc_pow, s21_pow_309);
    tcase_add_test(tc_pow, s21_pow_310);
    tcase_add_test(tc_pow, s21_pow_311);
    tcase_add_test(tc_pow, s21_pow_312);
    tcase_add_test(tc_pow, s21_pow_313);
    tcase_add_test(tc_pow, s21_pow_314);
    tcase_add_test(tc_pow, s21_pow_315);
    tcase_add_test(tc_pow, s21_pow_316);
    tcase_add_test(tc_pow, s21_pow_317);
    tcase_add_test(tc_pow, s21_pow_318);
    tcase_add_test(tc_pow, s21_pow_319);
    tcase_add_test(tc_pow, s21_pow_320);
    tcase_add_test(tc_pow, s21_pow_321);
    tcase_add_test(tc_pow, s21_pow_322);
    tcase_add_test(tc_pow, s21_pow_323);
    tcase_add_test(tc_pow, s21_pow_324);
    tcase_add_test(tc_pow, s21_pow_325);
    tcase_add_test(tc_pow, s21_pow_326);
    tcase_add_test(tc_pow, s21_pow_327);
    tcase_add_test(tc_pow, s21_pow_328);
    tcase_add_test(tc_pow, s21_pow_329);
    tcase_add_test(tc_pow, s21_pow_330);
    tcase_add_test(tc_pow, s21_pow_331);
    tcase_add_test(tc_pow, s21_pow_332);
    tcase_add_test(tc_pow, s21_pow_333);
    tcase_add_test(tc_pow, s21_pow_334);
    tcase_add_test(tc_pow, s21_pow_335);
    tcase_add_test(tc_pow, s21_pow_336);
    tcase_add_test(tc_pow, s21_pow_337);
    tcase_add_test(tc_pow, s21_pow_338);
    tcase_add_test(tc_pow, s21_pow_339);
    tcase_add_test(tc_pow, s21_pow_340);
    tcase_add_test(tc_pow, s21_pow_341);
    tcase_add_test(tc_pow, s21_pow_342);
    tcase_add_test(tc_pow, s21_pow_343);
    tcase_add_test(tc_pow, s21_pow_344);
    tcase_add_test(tc_pow, s21_pow_345);
    tcase_add_test(tc_pow, s21_pow_346);
    tcase_add_test(tc_pow, s21_pow_347);
    tcase_add_test(tc_pow, s21_pow_348);
    tcase_add_test(tc_pow, s21_pow_349);
    tcase_add_test(tc_pow, s21_pow_350);
    tcase_add_test(tc_pow, s21_pow_351);
    tcase_add_test(tc_pow, s21_pow_352);
    tcase_add_test(tc_pow, s21_pow_353);
    tcase_add_test(tc_pow, s21_pow_354);
    tcase_add_test(tc_pow, s21_pow_355);
    tcase_add_test(tc_pow, s21_pow_356);
    tcase_add_test(tc_pow, s21_pow_357);
    tcase_add_test(tc_pow, s21_pow_358);
    tcase_add_test(tc_pow, s21_pow_359);
    tcase_add_test(tc_pow, s21_pow_360);
    tcase_add_test(tc_pow, s21_pow_361);
    tcase_add_test(tc_pow, s21_pow_362);
    tcase_add_test(tc_pow, s21_pow_363);
    tcase_add_test(tc_pow, s21_pow_364);
    tcase_add_test(tc_pow, s21_pow_365);
    tcase_add_test(tc_pow, s21_pow_366);
    tcase_add_test(tc_pow, s21_pow_367);
    tcase_add_test(tc_pow, s21_pow_368);
    tcase_add_test(tc_pow, s21_pow_369);
    tcase_add_test(tc_pow, s21_pow_370);
    tcase_add_test(tc_pow, s21_pow_371);
    tcase_add_test(tc_pow, s21_pow_372);
    tcase_add_test(tc_pow, s21_pow_373);
    tcase_add_test(tc_pow, s21_pow_374);
    tcase_add_test(tc_pow, s21_pow_375);
    tcase_add_test(tc_pow, s21_pow_376);
    tcase_add_test(tc_pow, s21_pow_377);
    tcase_add_test(tc_pow, s21_pow_378);
    tcase_add_test(tc_pow, s21_pow_379);
    tcase_add_test(tc_pow, s21_pow_380);
    tcase_add_test(tc_pow, s21_pow_381);
    tcase_add_test(tc_pow, s21_pow_382);
    tcase_add_test(tc_pow, s21_pow_383);
    tcase_add_test(tc_pow, s21_pow_384);
    tcase_add_test(tc_pow, s21_pow_385);
    tcase_add_test(tc_pow, s21_pow_386);
    tcase_add_test(tc_pow, s21_pow_387);
    tcase_add_test(tc_pow, s21_pow_388);
    tcase_add_test(tc_pow, s21_pow_389);
    tcase_add_test(tc_pow, s21_pow_390);
    tcase_add_test(tc_pow, s21_pow_391);
    tcase_add_test(tc_pow, s21_pow_392);
    tcase_add_test(tc_pow, s21_pow_393);
    tcase_add_test(tc_pow, s21_pow_394);
    tcase_add_test(tc_pow, s21_pow_395);
    tcase_add_test(tc_pow, s21_pow_396);
    tcase_add_test(tc_pow, s21_pow_397);
    tcase_add_test(tc_pow, s21_pow_398);
    tcase_add_test(tc_pow, s21_pow_399);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief fifth set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_fifth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow fifth case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_400);
    tcase_add_test(tc_pow, s21_pow_401);
    tcase_add_test(tc_pow, s21_pow_402);
    tcase_add_test(tc_pow, s21_pow_403);
    tcase_add_test(tc_pow, s21_pow_404);
    tcase_add_test(tc_pow, s21_pow_405);
    tcase_add_test(tc_pow, s21_pow_406);
    tcase_add_test(tc_pow, s21_pow_407);
    tcase_add_test(tc_pow, s21_pow_408);
    tcase_add_test(tc_pow, s21_pow_409);
    tcase_add_test(tc_pow, s21_pow_410);
    tcase_add_test(tc_pow, s21_pow_411);
    tcase_add_test(tc_pow, s21_pow_412);
    tcase_add_test(tc_pow, s21_pow_413);
    tcase_add_test(tc_pow, s21_pow_414);
    tcase_add_test(tc_pow, s21_pow_415);
    tcase_add_test(tc_pow, s21_pow_416);
    tcase_add_test(tc_pow, s21_pow_417);
    tcase_add_test(tc_pow, s21_pow_418);
    tcase_add_test(tc_pow, s21_pow_419);
    tcase_add_test(tc_pow, s21_pow_420);
    tcase_add_test(tc_pow, s21_pow_421);
    tcase_add_test(tc_pow, s21_pow_422);
    tcase_add_test(tc_pow, s21_pow_423);
    tcase_add_test(tc_pow, s21_pow_424);
    tcase_add_test(tc_pow, s21_pow_425);
    tcase_add_test(tc_pow, s21_pow_426);
    tcase_add_test(tc_pow, s21_pow_427);
    tcase_add_test(tc_pow, s21_pow_428);
    tcase_add_test(tc_pow, s21_pow_429);
    tcase_add_test(tc_pow, s21_pow_430);
    tcase_add_test(tc_pow, s21_pow_431);
    tcase_add_test(tc_pow, s21_pow_432);
    tcase_add_test(tc_pow, s21_pow_433);
    tcase_add_test(tc_pow, s21_pow_434);
    tcase_add_test(tc_pow, s21_pow_435);
    tcase_add_test(tc_pow, s21_pow_436);
    tcase_add_test(tc_pow, s21_pow_437);
    tcase_add_test(tc_pow, s21_pow_438);
    tcase_add_test(tc_pow, s21_pow_439);
    tcase_add_test(tc_pow, s21_pow_440);
    tcase_add_test(tc_pow, s21_pow_441);
    tcase_add_test(tc_pow, s21_pow_442);
    tcase_add_test(tc_pow, s21_pow_443);
    tcase_add_test(tc_pow, s21_pow_444);
    tcase_add_test(tc_pow, s21_pow_445);
    tcase_add_test(tc_pow, s21_pow_446);
    tcase_add_test(tc_pow, s21_pow_447);
    tcase_add_test(tc_pow, s21_pow_448);
    tcase_add_test(tc_pow, s21_pow_449);
    tcase_add_test(tc_pow, s21_pow_450);
    tcase_add_test(tc_pow, s21_pow_451);
    tcase_add_test(tc_pow, s21_pow_452);
    tcase_add_test(tc_pow, s21_pow_453);
    tcase_add_test(tc_pow, s21_pow_454);
    tcase_add_test(tc_pow, s21_pow_455);
    tcase_add_test(tc_pow, s21_pow_456);
    tcase_add_test(tc_pow, s21_pow_457);
    tcase_add_test(tc_pow, s21_pow_458);
    tcase_add_test(tc_pow, s21_pow_459);
    tcase_add_test(tc_pow, s21_pow_460);
    tcase_add_test(tc_pow, s21_pow_461);
    tcase_add_test(tc_pow, s21_pow_462);
    tcase_add_test(tc_pow, s21_pow_463);
    tcase_add_test(tc_pow, s21_pow_464);
    tcase_add_test(tc_pow, s21_pow_465);
    tcase_add_test(tc_pow, s21_pow_466);
    tcase_add_test(tc_pow, s21_pow_467);
    tcase_add_test(tc_pow, s21_pow_468);
    tcase_add_test(tc_pow, s21_pow_469);
    tcase_add_test(tc_pow, s21_pow_470);
    tcase_add_test(tc_pow, s21_pow_471);
    tcase_add_test(tc_pow, s21_pow_472);
    tcase_add_test(tc_pow, s21_pow_473);
    tcase_add_test(tc_pow, s21_pow_474);
    tcase_add_test(tc_pow, s21_pow_475);
    tcase_add_test(tc_pow, s21_pow_476);
    tcase_add_test(tc_pow, s21_pow_477);
    tcase_add_test(tc_pow, s21_pow_478);
    tcase_add_test(tc_pow, s21_pow_479);
    tcase_add_test(tc_pow, s21_pow_480);
    tcase_add_test(tc_pow, s21_pow_481);
    tcase_add_test(tc_pow, s21_pow_482);
    tcase_add_test(tc_pow, s21_pow_483);
    tcase_add_test(tc_pow, s21_pow_484);
    tcase_add_test(tc_pow, s21_pow_485);
    tcase_add_test(tc_pow, s21_pow_486);
    tcase_add_test(tc_pow, s21_pow_487);
    tcase_add_test(tc_pow, s21_pow_488);
    tcase_add_test(tc_pow, s21_pow_489);
    tcase_add_test(tc_pow, s21_pow_490);
    tcase_add_test(tc_pow, s21_pow_491);
    tcase_add_test(tc_pow, s21_pow_492);
    tcase_add_test(tc_pow, s21_pow_493);
    tcase_add_test(tc_pow, s21_pow_494);
    tcase_add_test(tc_pow, s21_pow_495);
    tcase_add_test(tc_pow, s21_pow_496);
    tcase_add_test(tc_pow, s21_pow_497);
    tcase_add_test(tc_pow, s21_pow_498);
    tcase_add_test(tc_pow, s21_pow_499);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief sixth set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_sixth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow sixth case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_500);
    tcase_add_test(tc_pow, s21_pow_501);
    tcase_add_test(tc_pow, s21_pow_502);
    tcase_add_test(tc_pow, s21_pow_503);
    tcase_add_test(tc_pow, s21_pow_504);
    tcase_add_test(tc_pow, s21_pow_505);
    tcase_add_test(tc_pow, s21_pow_506);
    tcase_add_test(tc_pow, s21_pow_507);
    tcase_add_test(tc_pow, s21_pow_508);
    tcase_add_test(tc_pow, s21_pow_509);
    tcase_add_test(tc_pow, s21_pow_510);
    tcase_add_test(tc_pow, s21_pow_511);
    tcase_add_test(tc_pow, s21_pow_512);
    tcase_add_test(tc_pow, s21_pow_513);
    tcase_add_test(tc_pow, s21_pow_514);
    tcase_add_test(tc_pow, s21_pow_515);
    tcase_add_test(tc_pow, s21_pow_516);
    tcase_add_test(tc_pow, s21_pow_517);
    tcase_add_test(tc_pow, s21_pow_518);
    tcase_add_test(tc_pow, s21_pow_519);
    tcase_add_test(tc_pow, s21_pow_520);
    tcase_add_test(tc_pow, s21_pow_521);
    tcase_add_test(tc_pow, s21_pow_522);
    tcase_add_test(tc_pow, s21_pow_523);
    tcase_add_test(tc_pow, s21_pow_524);
    tcase_add_test(tc_pow, s21_pow_525);
    tcase_add_test(tc_pow, s21_pow_526);
    tcase_add_test(tc_pow, s21_pow_527);
    tcase_add_test(tc_pow, s21_pow_528);
    tcase_add_test(tc_pow, s21_pow_529);
    tcase_add_test(tc_pow, s21_pow_530);
    tcase_add_test(tc_pow, s21_pow_531);
    tcase_add_test(tc_pow, s21_pow_532);
    tcase_add_test(tc_pow, s21_pow_533);
    tcase_add_test(tc_pow, s21_pow_534);
    tcase_add_test(tc_pow, s21_pow_535);
    tcase_add_test(tc_pow, s21_pow_536);
    tcase_add_test(tc_pow, s21_pow_537);
    tcase_add_test(tc_pow, s21_pow_538);
    tcase_add_test(tc_pow, s21_pow_539);
    tcase_add_test(tc_pow, s21_pow_540);
    tcase_add_test(tc_pow, s21_pow_541);
    tcase_add_test(tc_pow, s21_pow_542);
    tcase_add_test(tc_pow, s21_pow_543);
    tcase_add_test(tc_pow, s21_pow_544);
    tcase_add_test(tc_pow, s21_pow_545);
    tcase_add_test(tc_pow, s21_pow_546);
    tcase_add_test(tc_pow, s21_pow_547);
    tcase_add_test(tc_pow, s21_pow_548);
    tcase_add_test(tc_pow, s21_pow_549);
    tcase_add_test(tc_pow, s21_pow_550);
    tcase_add_test(tc_pow, s21_pow_551);
    tcase_add_test(tc_pow, s21_pow_552);
    tcase_add_test(tc_pow, s21_pow_553);
    tcase_add_test(tc_pow, s21_pow_554);
    tcase_add_test(tc_pow, s21_pow_555);
    tcase_add_test(tc_pow, s21_pow_556);
    tcase_add_test(tc_pow, s21_pow_557);
    tcase_add_test(tc_pow, s21_pow_558);
    tcase_add_test(tc_pow, s21_pow_559);
    tcase_add_test(tc_pow, s21_pow_560);
    tcase_add_test(tc_pow, s21_pow_561);
    tcase_add_test(tc_pow, s21_pow_562);
    tcase_add_test(tc_pow, s21_pow_563);
    tcase_add_test(tc_pow, s21_pow_564);
    tcase_add_test(tc_pow, s21_pow_565);
    tcase_add_test(tc_pow, s21_pow_566);
    tcase_add_test(tc_pow, s21_pow_567);
    tcase_add_test(tc_pow, s21_pow_568);
    tcase_add_test(tc_pow, s21_pow_569);
    tcase_add_test(tc_pow, s21_pow_570);
    tcase_add_test(tc_pow, s21_pow_571);
    tcase_add_test(tc_pow, s21_pow_572);
    tcase_add_test(tc_pow, s21_pow_573);
    tcase_add_test(tc_pow, s21_pow_574);
    tcase_add_test(tc_pow, s21_pow_575);
    tcase_add_test(tc_pow, s21_pow_576);
    tcase_add_test(tc_pow, s21_pow_577);
    tcase_add_test(tc_pow, s21_pow_578);
    tcase_add_test(tc_pow, s21_pow_579);
    tcase_add_test(tc_pow, s21_pow_580);
    tcase_add_test(tc_pow, s21_pow_581);
    tcase_add_test(tc_pow, s21_pow_582);
    tcase_add_test(tc_pow, s21_pow_583);
    tcase_add_test(tc_pow, s21_pow_584);
    tcase_add_test(tc_pow, s21_pow_585);
    tcase_add_test(tc_pow, s21_pow_586);
    tcase_add_test(tc_pow, s21_pow_587);
    tcase_add_test(tc_pow, s21_pow_588);
    tcase_add_test(tc_pow, s21_pow_589);
    tcase_add_test(tc_pow, s21_pow_590);
    tcase_add_test(tc_pow, s21_pow_591);
    tcase_add_test(tc_pow, s21_pow_592);
    tcase_add_test(tc_pow, s21_pow_593);
    tcase_add_test(tc_pow, s21_pow_594);
    tcase_add_test(tc_pow, s21_pow_595);
    tcase_add_test(tc_pow, s21_pow_596);
    tcase_add_test(tc_pow, s21_pow_597);
    tcase_add_test(tc_pow, s21_pow_598);
    tcase_add_test(tc_pow, s21_pow_599);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief seventh set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_seventh_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow seventh case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_600);
    tcase_add_test(tc_pow, s21_pow_601);
    tcase_add_test(tc_pow, s21_pow_602);
    tcase_add_test(tc_pow, s21_pow_603);
    tcase_add_test(tc_pow, s21_pow_604);
    tcase_add_test(tc_pow, s21_pow_605);
    tcase_add_test(tc_pow, s21_pow_606);
    tcase_add_test(tc_pow, s21_pow_607);
    tcase_add_test(tc_pow, s21_pow_608);
    tcase_add_test(tc_pow, s21_pow_609);
    tcase_add_test(tc_pow, s21_pow_610);
    tcase_add_test(tc_pow, s21_pow_611);
    tcase_add_test(tc_pow, s21_pow_612);
    tcase_add_test(tc_pow, s21_pow_613);
    tcase_add_test(tc_pow, s21_pow_614);
    tcase_add_test(tc_pow, s21_pow_615);
    tcase_add_test(tc_pow, s21_pow_616);
    tcase_add_test(tc_pow, s21_pow_617);
    tcase_add_test(tc_pow, s21_pow_618);
    tcase_add_test(tc_pow, s21_pow_619);
    tcase_add_test(tc_pow, s21_pow_620);
    tcase_add_test(tc_pow, s21_pow_621);
    tcase_add_test(tc_pow, s21_pow_622);
    tcase_add_test(tc_pow, s21_pow_623);
    tcase_add_test(tc_pow, s21_pow_624);
    tcase_add_test(tc_pow, s21_pow_625);
    tcase_add_test(tc_pow, s21_pow_626);
    tcase_add_test(tc_pow, s21_pow_627);
    tcase_add_test(tc_pow, s21_pow_628);
    tcase_add_test(tc_pow, s21_pow_629);
    tcase_add_test(tc_pow, s21_pow_630);
    tcase_add_test(tc_pow, s21_pow_631);
    tcase_add_test(tc_pow, s21_pow_632);
    tcase_add_test(tc_pow, s21_pow_633);
    tcase_add_test(tc_pow, s21_pow_634);
    tcase_add_test(tc_pow, s21_pow_635);
    tcase_add_test(tc_pow, s21_pow_636);
    tcase_add_test(tc_pow, s21_pow_637);
    tcase_add_test(tc_pow, s21_pow_638);
    tcase_add_test(tc_pow, s21_pow_639);
    tcase_add_test(tc_pow, s21_pow_640);
    tcase_add_test(tc_pow, s21_pow_641);
    tcase_add_test(tc_pow, s21_pow_642);
    tcase_add_test(tc_pow, s21_pow_643);
    tcase_add_test(tc_pow, s21_pow_644);
    tcase_add_test(tc_pow, s21_pow_645);
    tcase_add_test(tc_pow, s21_pow_646);
    tcase_add_test(tc_pow, s21_pow_647);
    tcase_add_test(tc_pow, s21_pow_648);
    tcase_add_test(tc_pow, s21_pow_649);
    tcase_add_test(tc_pow, s21_pow_650);
    tcase_add_test(tc_pow, s21_pow_651);
    tcase_add_test(tc_pow, s21_pow_652);
    tcase_add_test(tc_pow, s21_pow_653);
    tcase_add_test(tc_pow, s21_pow_654);
    tcase_add_test(tc_pow, s21_pow_655);
    tcase_add_test(tc_pow, s21_pow_656);
    tcase_add_test(tc_pow, s21_pow_657);
    tcase_add_test(tc_pow, s21_pow_658);
    tcase_add_test(tc_pow, s21_pow_659);
    tcase_add_test(tc_pow, s21_pow_660);
    tcase_add_test(tc_pow, s21_pow_661);
    tcase_add_test(tc_pow, s21_pow_662);
    tcase_add_test(tc_pow, s21_pow_663);
    tcase_add_test(tc_pow, s21_pow_664);
    tcase_add_test(tc_pow, s21_pow_665);
    tcase_add_test(tc_pow, s21_pow_666);
    tcase_add_test(tc_pow, s21_pow_667);
    tcase_add_test(tc_pow, s21_pow_668);
    tcase_add_test(tc_pow, s21_pow_669);
    tcase_add_test(tc_pow, s21_pow_670);
    tcase_add_test(tc_pow, s21_pow_671);
    tcase_add_test(tc_pow, s21_pow_672);
    tcase_add_test(tc_pow, s21_pow_673);
    tcase_add_test(tc_pow, s21_pow_674);
    tcase_add_test(tc_pow, s21_pow_675);
    tcase_add_test(tc_pow, s21_pow_676);
    tcase_add_test(tc_pow, s21_pow_677);
    tcase_add_test(tc_pow, s21_pow_678);
    tcase_add_test(tc_pow, s21_pow_679);
    tcase_add_test(tc_pow, s21_pow_680);
    tcase_add_test(tc_pow, s21_pow_681);
    tcase_add_test(tc_pow, s21_pow_682);
    tcase_add_test(tc_pow, s21_pow_683);
    tcase_add_test(tc_pow, s21_pow_684);
    tcase_add_test(tc_pow, s21_pow_685);
    tcase_add_test(tc_pow, s21_pow_686);
    tcase_add_test(tc_pow, s21_pow_687);
    tcase_add_test(tc_pow, s21_pow_688);
    tcase_add_test(tc_pow, s21_pow_689);
    tcase_add_test(tc_pow, s21_pow_690);
    tcase_add_test(tc_pow, s21_pow_691);
    tcase_add_test(tc_pow, s21_pow_692);
    tcase_add_test(tc_pow, s21_pow_693);
    tcase_add_test(tc_pow, s21_pow_694);
    tcase_add_test(tc_pow, s21_pow_695);
    tcase_add_test(tc_pow, s21_pow_696);
    tcase_add_test(tc_pow, s21_pow_697);
    tcase_add_test(tc_pow, s21_pow_698);
    tcase_add_test(tc_pow, s21_pow_699);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief eighth set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_eighth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow eighth case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_700);
    tcase_add_test(tc_pow, s21_pow_701);
    tcase_add_test(tc_pow, s21_pow_702);
    tcase_add_test(tc_pow, s21_pow_703);
    tcase_add_test(tc_pow, s21_pow_704);
    tcase_add_test(tc_pow, s21_pow_705);
    tcase_add_test(tc_pow, s21_pow_706);
    tcase_add_test(tc_pow, s21_pow_707);
    tcase_add_test(tc_pow, s21_pow_708);
    tcase_add_test(tc_pow, s21_pow_709);
    tcase_add_test(tc_pow, s21_pow_710);
    tcase_add_test(tc_pow, s21_pow_711);
    tcase_add_test(tc_pow, s21_pow_712);
    tcase_add_test(tc_pow, s21_pow_713);
    tcase_add_test(tc_pow, s21_pow_714);
    tcase_add_test(tc_pow, s21_pow_715);
    tcase_add_test(tc_pow, s21_pow_716);
    tcase_add_test(tc_pow, s21_pow_717);
    tcase_add_test(tc_pow, s21_pow_718);
    tcase_add_test(tc_pow, s21_pow_719);
    tcase_add_test(tc_pow, s21_pow_720);
    tcase_add_test(tc_pow, s21_pow_721);
    tcase_add_test(tc_pow, s21_pow_722);
    tcase_add_test(tc_pow, s21_pow_723);
    tcase_add_test(tc_pow, s21_pow_724);
    tcase_add_test(tc_pow, s21_pow_725);
    tcase_add_test(tc_pow, s21_pow_726);
    tcase_add_test(tc_pow, s21_pow_727);
    tcase_add_test(tc_pow, s21_pow_728);
    tcase_add_test(tc_pow, s21_pow_729);
    tcase_add_test(tc_pow, s21_pow_730);
    tcase_add_test(tc_pow, s21_pow_731);
    tcase_add_test(tc_pow, s21_pow_732);
    tcase_add_test(tc_pow, s21_pow_733);
    tcase_add_test(tc_pow, s21_pow_734);
    tcase_add_test(tc_pow, s21_pow_735);
    tcase_add_test(tc_pow, s21_pow_736);
    tcase_add_test(tc_pow, s21_pow_737);
    tcase_add_test(tc_pow, s21_pow_738);
    tcase_add_test(tc_pow, s21_pow_739);
    tcase_add_test(tc_pow, s21_pow_740);
    tcase_add_test(tc_pow, s21_pow_741);
    tcase_add_test(tc_pow, s21_pow_742);
    tcase_add_test(tc_pow, s21_pow_743);
    tcase_add_test(tc_pow, s21_pow_744);
    tcase_add_test(tc_pow, s21_pow_745);
    tcase_add_test(tc_pow, s21_pow_746);
    tcase_add_test(tc_pow, s21_pow_747);
    tcase_add_test(tc_pow, s21_pow_748);
    tcase_add_test(tc_pow, s21_pow_749);
    tcase_add_test(tc_pow, s21_pow_750);
    tcase_add_test(tc_pow, s21_pow_751);
    tcase_add_test(tc_pow, s21_pow_752);
    tcase_add_test(tc_pow, s21_pow_753);
    tcase_add_test(tc_pow, s21_pow_754);
    tcase_add_test(tc_pow, s21_pow_755);
    tcase_add_test(tc_pow, s21_pow_756);
    tcase_add_test(tc_pow, s21_pow_757);
    tcase_add_test(tc_pow, s21_pow_758);
    tcase_add_test(tc_pow, s21_pow_759);
    tcase_add_test(tc_pow, s21_pow_760);
    tcase_add_test(tc_pow, s21_pow_761);
    tcase_add_test(tc_pow, s21_pow_762);
    tcase_add_test(tc_pow, s21_pow_763);
    tcase_add_test(tc_pow, s21_pow_764);
    tcase_add_test(tc_pow, s21_pow_765);
    tcase_add_test(tc_pow, s21_pow_766);
    tcase_add_test(tc_pow, s21_pow_767);
    tcase_add_test(tc_pow, s21_pow_768);
    tcase_add_test(tc_pow, s21_pow_769);
    tcase_add_test(tc_pow, s21_pow_770);
    tcase_add_test(tc_pow, s21_pow_771);
    tcase_add_test(tc_pow, s21_pow_772);
    tcase_add_test(tc_pow, s21_pow_773);
    tcase_add_test(tc_pow, s21_pow_774);
    tcase_add_test(tc_pow, s21_pow_775);
    tcase_add_test(tc_pow, s21_pow_776);
    tcase_add_test(tc_pow, s21_pow_777);
    tcase_add_test(tc_pow, s21_pow_778);
    tcase_add_test(tc_pow, s21_pow_779);
    tcase_add_test(tc_pow, s21_pow_780);
    tcase_add_test(tc_pow, s21_pow_781);
    tcase_add_test(tc_pow, s21_pow_782);
    tcase_add_test(tc_pow, s21_pow_783);
    tcase_add_test(tc_pow, s21_pow_784);
    tcase_add_test(tc_pow, s21_pow_785);
    tcase_add_test(tc_pow, s21_pow_786);
    tcase_add_test(tc_pow, s21_pow_787);
    tcase_add_test(tc_pow, s21_pow_788);
    tcase_add_test(tc_pow, s21_pow_789);
    tcase_add_test(tc_pow, s21_pow_790);
    tcase_add_test(tc_pow, s21_pow_791);
    tcase_add_test(tc_pow, s21_pow_792);
    tcase_add_test(tc_pow, s21_pow_793);
    tcase_add_test(tc_pow, s21_pow_794);
    tcase_add_test(tc_pow, s21_pow_795);
    tcase_add_test(tc_pow, s21_pow_796);
    tcase_add_test(tc_pow, s21_pow_797);
    tcase_add_test(tc_pow, s21_pow_798);
    tcase_add_test(tc_pow, s21_pow_799);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief ninth set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_ninth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow ninth case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_800);
    tcase_add_test(tc_pow, s21_pow_801);
    tcase_add_test(tc_pow, s21_pow_802);
    tcase_add_test(tc_pow, s21_pow_803);
    tcase_add_test(tc_pow, s21_pow_804);
    tcase_add_test(tc_pow, s21_pow_805);
    tcase_add_test(tc_pow, s21_pow_806);
    tcase_add_test(tc_pow, s21_pow_807);
    tcase_add_test(tc_pow, s21_pow_808);
    tcase_add_test(tc_pow, s21_pow_809);
    tcase_add_test(tc_pow, s21_pow_810);
    tcase_add_test(tc_pow, s21_pow_811);
    tcase_add_test(tc_pow, s21_pow_812);
    tcase_add_test(tc_pow, s21_pow_813);
    tcase_add_test(tc_pow, s21_pow_814);
    tcase_add_test(tc_pow, s21_pow_815);
    tcase_add_test(tc_pow, s21_pow_816);
    tcase_add_test(tc_pow, s21_pow_817);
    tcase_add_test(tc_pow, s21_pow_818);
    tcase_add_test(tc_pow, s21_pow_819);
    tcase_add_test(tc_pow, s21_pow_820);
    tcase_add_test(tc_pow, s21_pow_821);
    tcase_add_test(tc_pow, s21_pow_822);
    tcase_add_test(tc_pow, s21_pow_823);
    tcase_add_test(tc_pow, s21_pow_824);
    tcase_add_test(tc_pow, s21_pow_825);
    tcase_add_test(tc_pow, s21_pow_826);
    tcase_add_test(tc_pow, s21_pow_827);
    tcase_add_test(tc_pow, s21_pow_828);
    tcase_add_test(tc_pow, s21_pow_829);
    tcase_add_test(tc_pow, s21_pow_830);
    tcase_add_test(tc_pow, s21_pow_831);
    tcase_add_test(tc_pow, s21_pow_832);
    tcase_add_test(tc_pow, s21_pow_833);
    tcase_add_test(tc_pow, s21_pow_834);
    tcase_add_test(tc_pow, s21_pow_835);
    tcase_add_test(tc_pow, s21_pow_836);
    tcase_add_test(tc_pow, s21_pow_837);
    tcase_add_test(tc_pow, s21_pow_838);
    tcase_add_test(tc_pow, s21_pow_839);
    tcase_add_test(tc_pow, s21_pow_840);
    tcase_add_test(tc_pow, s21_pow_841);
    tcase_add_test(tc_pow, s21_pow_842);
    tcase_add_test(tc_pow, s21_pow_843);
    tcase_add_test(tc_pow, s21_pow_844);
    tcase_add_test(tc_pow, s21_pow_845);
    tcase_add_test(tc_pow, s21_pow_846);
    tcase_add_test(tc_pow, s21_pow_847);
    tcase_add_test(tc_pow, s21_pow_848);
    tcase_add_test(tc_pow, s21_pow_849);
    tcase_add_test(tc_pow, s21_pow_850);
    tcase_add_test(tc_pow, s21_pow_851);
    tcase_add_test(tc_pow, s21_pow_852);
    tcase_add_test(tc_pow, s21_pow_853);
    tcase_add_test(tc_pow, s21_pow_854);
    tcase_add_test(tc_pow, s21_pow_855);
    tcase_add_test(tc_pow, s21_pow_856);
    tcase_add_test(tc_pow, s21_pow_857);
    tcase_add_test(tc_pow, s21_pow_858);
    tcase_add_test(tc_pow, s21_pow_859);
    tcase_add_test(tc_pow, s21_pow_860);
    tcase_add_test(tc_pow, s21_pow_861);
    tcase_add_test(tc_pow, s21_pow_862);
    tcase_add_test(tc_pow, s21_pow_863);
    tcase_add_test(tc_pow, s21_pow_864);
    tcase_add_test(tc_pow, s21_pow_865);
    tcase_add_test(tc_pow, s21_pow_866);
    tcase_add_test(tc_pow, s21_pow_867);
    tcase_add_test(tc_pow, s21_pow_868);
    tcase_add_test(tc_pow, s21_pow_869);
    tcase_add_test(tc_pow, s21_pow_870);
    tcase_add_test(tc_pow, s21_pow_871);
    tcase_add_test(tc_pow, s21_pow_872);
    tcase_add_test(tc_pow, s21_pow_873);
    tcase_add_test(tc_pow, s21_pow_874);
    tcase_add_test(tc_pow, s21_pow_875);
    tcase_add_test(tc_pow, s21_pow_876);
    tcase_add_test(tc_pow, s21_pow_877);
    tcase_add_test(tc_pow, s21_pow_878);
    tcase_add_test(tc_pow, s21_pow_879);
    tcase_add_test(tc_pow, s21_pow_880);
    tcase_add_test(tc_pow, s21_pow_881);
    tcase_add_test(tc_pow, s21_pow_882);
    tcase_add_test(tc_pow, s21_pow_883);
    tcase_add_test(tc_pow, s21_pow_884);
    tcase_add_test(tc_pow, s21_pow_885);
    tcase_add_test(tc_pow, s21_pow_886);
    tcase_add_test(tc_pow, s21_pow_887);
    tcase_add_test(tc_pow, s21_pow_888);
    tcase_add_test(tc_pow, s21_pow_889);
    tcase_add_test(tc_pow, s21_pow_890);
    tcase_add_test(tc_pow, s21_pow_891);
    tcase_add_test(tc_pow, s21_pow_892);
    tcase_add_test(tc_pow, s21_pow_893);
    tcase_add_test(tc_pow, s21_pow_894);
    tcase_add_test(tc_pow, s21_pow_895);
    tcase_add_test(tc_pow, s21_pow_896);
    tcase_add_test(tc_pow, s21_pow_897);
    tcase_add_test(tc_pow, s21_pow_898);
    tcase_add_test(tc_pow, s21_pow_899);
    suite_add_tcase(math, tc_pow);

    return math;
}

/**
 * @brief tenth set of tests
 *
 * @return Suite*
 */
Suite *s21_pow_tenth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_pow tenth case)\n");

    TCase *tc_pow = tcase_create("test_pow");
    tcase_add_test(tc_pow, s21_pow_900);
    tcase_add_test(tc_pow, s21_pow_901);
    tcase_add_test(tc_pow, s21_pow_902);
    tcase_add_test(tc_pow, s21_pow_903);
    tcase_add_test(tc_pow, s21_pow_904);
    tcase_add_test(tc_pow, s21_pow_905);
    tcase_add_test(tc_pow, s21_pow_906);
    tcase_add_test(tc_pow, s21_pow_907);
    tcase_add_test(tc_pow, s21_pow_908);
    tcase_add_test(tc_pow, s21_pow_909);
    tcase_add_test(tc_pow, s21_pow_910);
    tcase_add_test(tc_pow, s21_pow_911);
    tcase_add_test(tc_pow, s21_pow_912);
    tcase_add_test(tc_pow, s21_pow_913);
    tcase_add_test(tc_pow, s21_pow_914);
    tcase_add_test(tc_pow, s21_pow_915);
    tcase_add_test(tc_pow, s21_pow_916);
    tcase_add_test(tc_pow, s21_pow_917);
    tcase_add_test(tc_pow, s21_pow_918);
    tcase_add_test(tc_pow, s21_pow_919);
    tcase_add_test(tc_pow, s21_pow_920);
    tcase_add_test(tc_pow, s21_pow_921);
    tcase_add_test(tc_pow, s21_pow_922);
    tcase_add_test(tc_pow, s21_pow_923);
    tcase_add_test(tc_pow, s21_pow_924);
    tcase_add_test(tc_pow, s21_pow_925);
    tcase_add_test(tc_pow, s21_pow_926);
    tcase_add_test(tc_pow, s21_pow_927);
    tcase_add_test(tc_pow, s21_pow_928);
    tcase_add_test(tc_pow, s21_pow_929);
    tcase_add_test(tc_pow, s21_pow_930);
    tcase_add_test(tc_pow, s21_pow_931);
    tcase_add_test(tc_pow, s21_pow_932);
    tcase_add_test(tc_pow, s21_pow_933);
    tcase_add_test(tc_pow, s21_pow_934);
    tcase_add_test(tc_pow, s21_pow_935);
    tcase_add_test(tc_pow, s21_pow_936);
    tcase_add_test(tc_pow, s21_pow_937);
    tcase_add_test(tc_pow, s21_pow_938);
    tcase_add_test(tc_pow, s21_pow_939);
    tcase_add_test(tc_pow, s21_pow_940);
    tcase_add_test(tc_pow, s21_pow_941);
    tcase_add_test(tc_pow, s21_pow_942);
    tcase_add_test(tc_pow, s21_pow_943);
    tcase_add_test(tc_pow, s21_pow_944);
    tcase_add_test(tc_pow, s21_pow_945);
    tcase_add_test(tc_pow, s21_pow_946);
    tcase_add_test(tc_pow, s21_pow_947);
    tcase_add_test(tc_pow, s21_pow_948);
    tcase_add_test(tc_pow, s21_pow_949);
    tcase_add_test(tc_pow, s21_pow_950);
    tcase_add_test(tc_pow, s21_pow_951);
    tcase_add_test(tc_pow, s21_pow_952);
    tcase_add_test(tc_pow, s21_pow_953);
    tcase_add_test(tc_pow, s21_pow_954);
    tcase_add_test(tc_pow, s21_pow_955);
    tcase_add_test(tc_pow, s21_pow_956);
    tcase_add_test(tc_pow, s21_pow_957);
    tcase_add_test(tc_pow, s21_pow_958);
    tcase_add_test(tc_pow, s21_pow_959);
    tcase_add_test(tc_pow, s21_pow_960);
    tcase_add_test(tc_pow, s21_pow_961);
    tcase_add_test(tc_pow, s21_pow_962);
    tcase_add_test(tc_pow, s21_pow_963);
    tcase_add_test(tc_pow, s21_pow_964);
    tcase_add_test(tc_pow, s21_pow_965);
    tcase_add_test(tc_pow, s21_pow_966);
    tcase_add_test(tc_pow, s21_pow_967);
    tcase_add_test(tc_pow, s21_pow_968);
    tcase_add_test(tc_pow, s21_pow_969);
    tcase_add_test(tc_pow, s21_pow_970);
    tcase_add_test(tc_pow, s21_pow_971);
    tcase_add_test(tc_pow, s21_pow_972);
    tcase_add_test(tc_pow, s21_pow_973);
    tcase_add_test(tc_pow, s21_pow_974);
    tcase_add_test(tc_pow, s21_pow_975);
    tcase_add_test(tc_pow, s21_pow_976);
    tcase_add_test(tc_pow, s21_pow_977);
    tcase_add_test(tc_pow, s21_pow_978);
    tcase_add_test(tc_pow, s21_pow_979);
    tcase_add_test(tc_pow, s21_pow_980);
    tcase_add_test(tc_pow, s21_pow_981);
    tcase_add_test(tc_pow, s21_pow_982);
    tcase_add_test(tc_pow, s21_pow_983);
    tcase_add_test(tc_pow, s21_pow_984);
    tcase_add_test(tc_pow, s21_pow_985);
    tcase_add_test(tc_pow, s21_pow_986);
    tcase_add_test(tc_pow, s21_pow_987);
    tcase_add_test(tc_pow, s21_pow_988);
    tcase_add_test(tc_pow, s21_pow_989);
    tcase_add_test(tc_pow, s21_pow_990);
    tcase_add_test(tc_pow, s21_pow_991);
    tcase_add_test(tc_pow, s21_pow_992);
    tcase_add_test(tc_pow, s21_pow_993);
    tcase_add_test(tc_pow, s21_pow_994);
    tcase_add_test(tc_pow, s21_pow_995);
    tcase_add_test(tc_pow, s21_pow_996);
    tcase_add_test(tc_pow, s21_pow_997);
    tcase_add_test(tc_pow, s21_pow_998);
    tcase_add_test(tc_pow, s21_pow_999);
    suite_add_tcase(math, tc_pow);

    return math;
}


//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_pow.
 *
 * @param[in] base number whose absolute value must be determined.
 * @param[in] exp the degree to which it is raised base.
 */
void s21_test_pow(double base, double exp) {
  long double original_func = pow(base, exp);
  long double implementation = s21_pow(base, exp);

  printf("Input value: %lf^%lf\n", base, exp);

  long double first = 0;
  long double second = 0;

  if (S21_IS_INF(original_func)) {
    first = S21_IS_INF(original_func);
    second = S21_IS_INF(implementation);
  } else if (S21_IS_NAN(original_func)) {
    first = S21_IS_NAN(original_func);
    second = S21_IS_NAN(implementation);
  } else {
    first = original_func;
    second = implementation;
  }

  if (fabsl(first - second) > COMPARE_ACCURACY) {
    printf("Test result: \033[0;31mTEST FAILED!\033[0m\n\n");
  } else {
    printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
  }

#ifdef DEBUG
  s21_test_print(original_func, implementation);
#endif

  ck_assert_double_eq_tol(first, second, COMPARE_ACCURACY);
}
