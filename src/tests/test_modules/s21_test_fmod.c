/**
 * @file s21_test_fmod.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_fmod
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./test_include/s21_test_fmod.h"

/// @brief \f[ fmod(999999999999999.987654321, -99999.992) = 6.416298 \f]
START_TEST(s21_fmod_0)
{
    double x = 999999999999999.987654321;
    double y = -99999.992;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -98000.9928) = 10383.397875 \f]
START_TEST(s21_fmod_1)
{
    double x = 999999999999999.987654321;
    double y = -98000.9928;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -96001.9936) = 68580.229666 \f]
START_TEST(s21_fmod_2)
{
    double x = 999999999999999.987654321;
    double y = -96001.9936;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -94002.9944) = 71582.420697 \f]
START_TEST(s21_fmod_3)
{
    double x = 999999999999999.987654321;
    double y = -94002.9944;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -92003.9952) = 18787.379362 \f]
START_TEST(s21_fmod_4)
{
    double x = 999999999999999.987654321;
    double y = -92003.9952;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -90004.9960) = 20202.429054 \f]
START_TEST(s21_fmod_5)
{
    double x = 999999999999999.987654321;
    double y = -90004.9960;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -88005.9968) = 20942.588748 \f]
START_TEST(s21_fmod_6)
{
    double x = 999999999999999.987654321;
    double y = -88005.9968;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -86006.9976) = 58266.179846 \f]
START_TEST(s21_fmod_7)
{
    double x = 999999999999999.987654321;
    double y = -86006.9976;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -84007.9984) = 50189.561724 \f]
START_TEST(s21_fmod_8)
{
    double x = 999999999999999.987654321;
    double y = -84007.9984;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -82008.9992) = 5474.913410 \f]
START_TEST(s21_fmod_9)
{
    double x = 999999999999999.987654321;
    double y = -82008.9992;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -80010.0000) = 23050.000000 \f]
START_TEST(s21_fmod_10)
{
    double x = 999999999999999.987654321;
    double y = -80010.0000;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -78011.0008) = 74894.134925 \f]
START_TEST(s21_fmod_11)
{
    double x = 999999999999999.987654321;
    double y = -78011.0008;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -76012.0016) = 43992.397423 \f]
START_TEST(s21_fmod_12)
{
    double x = 999999999999999.987654321;
    double y = -76012.0016;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -74013.0024) = 55817.242316 \f]
START_TEST(s21_fmod_13)
{
    double x = 999999999999999.987654321;
    double y = -74013.0024;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -72014.0032) = 41691.737319 \f]
START_TEST(s21_fmod_14)
{
    double x = 999999999999999.987654321;
    double y = -72014.0032;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -70015.0040) = 5873.384361 \f]
START_TEST(s21_fmod_15)
{
    double x = 999999999999999.987654321;
    double y = -70015.0040;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -68016.0048) = 49638.850402 \f]
START_TEST(s21_fmod_16)
{
    double x = 999999999999999.987654321;
    double y = -68016.0048;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -66017.0056) = 37835.573833 \f]
START_TEST(s21_fmod_17)
{
    double x = 999999999999999.987654321;
    double y = -66017.0056;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -64018.0064) = 47571.116295 \f]
START_TEST(s21_fmod_18)
{
    double x = 999999999999999.987654321;
    double y = -64018.0064;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -62019.0072) = 29050.249412 \f]
START_TEST(s21_fmod_19)
{
    double x = 999999999999999.987654321;
    double y = -62019.0072;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -60020.0080) = 36294.044845 \f]
START_TEST(s21_fmod_20)
{
    double x = 999999999999999.987654321;
    double y = -60020.0080;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -58021.0088) = 20672.738420 \f]
START_TEST(s21_fmod_21)
{
    double x = 999999999999999.987654321;
    double y = -58021.0088;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -56022.0096) = 7344.471815 \f]
START_TEST(s21_fmod_22)
{
    double x = 999999999999999.987654321;
    double y = -56022.0096;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -54023.0104) = 51154.746653 \f]
START_TEST(s21_fmod_23)
{
    double x = 999999999999999.987654321;
    double y = -54023.0104;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -52024.0112) = 28065.377712 \f]
START_TEST(s21_fmod_24)
{
    double x = 999999999999999.987654321;
    double y = -52024.0112;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -50025.0120) = 14947.527130 \f]
START_TEST(s21_fmod_25)
{
    double x = 999999999999999.987654321;
    double y = -50025.0120;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -48026.0128) = 39350.690903 \f]
START_TEST(s21_fmod_26)
{
    double x = 999999999999999.987654321;
    double y = -48026.0128;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -46027.0136) = 38821.614651 \f]
START_TEST(s21_fmod_27)
{
    double x = 999999999999999.987654321;
    double y = -46027.0136;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -44028.0144) = 24303.721071 \f]
START_TEST(s21_fmod_28)
{
    double x = 999999999999999.987654321;
    double y = -44028.0144;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -42029.0152) = 36581.063345 \f]
START_TEST(s21_fmod_29)
{
    double x = 999999999999999.987654321;
    double y = -42029.0152;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -40030.0160) = 37954.862570 \f]
START_TEST(s21_fmod_30)
{
    double x = 999999999999999.987654321;
    double y = -40030.0160;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -38031.0168) = 17699.884658 \f]
START_TEST(s21_fmod_31)
{
    double x = 999999999999999.987654321;
    double y = -38031.0168;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -36032.0176) = 187.682447 \f]
START_TEST(s21_fmod_32)
{
    double x = 999999999999999.987654321;
    double y = -36032.0176;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -34033.0184) = 7600.894571 \f]
START_TEST(s21_fmod_33)
{
    double x = 999999999999999.987654321;
    double y = -34033.0184;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -32034.0192) = 21412.660886 \f]
START_TEST(s21_fmod_34)
{
    double x = 999999999999999.987654321;
    double y = -32034.0192;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -30035.0200) = 14963.165465 \f]
START_TEST(s21_fmod_35)
{
    double x = 999999999999999.987654321;
    double y = -30035.0200;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -28036.0208) = 14827.259672 \f]
START_TEST(s21_fmod_36)
{
    double x = 999999999999999.987654321;
    double y = -28036.0208;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -26037.0216) = 11938.937059 \f]
START_TEST(s21_fmod_37)
{
    double x = 999999999999999.987654321;
    double y = -26037.0216;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -24038.0224) = 8154.625630 \f]
START_TEST(s21_fmod_38)
{
    double x = 999999999999999.987654321;
    double y = -24038.0224;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -22039.0232) = 16814.999039 \f]
START_TEST(s21_fmod_39)
{
    double x = 999999999999999.987654321;
    double y = -22039.0232;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -20040.0240) = 3043.777552 \f]
START_TEST(s21_fmod_40)
{
    double x = 999999999999999.987654321;
    double y = -20040.0240;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -18041.0248) = 6239.488989 \f]
START_TEST(s21_fmod_41)
{
    double x = 999999999999999.987654321;
    double y = -18041.0248;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -16042.0256) = 10072.436625 \f]
START_TEST(s21_fmod_42)
{
    double x = 999999999999999.987654321;
    double y = -16042.0256;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -14043.0264) = 13711.426584 \f]
START_TEST(s21_fmod_43)
{
    double x = 999999999999999.987654321;
    double y = -14043.0264;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -12044.0272) = 3245.965987 \f]
START_TEST(s21_fmod_44)
{
    double x = 999999999999999.987654321;
    double y = -12044.0272;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -10045.0280) = 1883.879373 \f]
START_TEST(s21_fmod_45)
{
    double x = 999999999999999.987654321;
    double y = -10045.0280;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -8046.0288) = 7931.693413 \f]
START_TEST(s21_fmod_46)
{
    double x = 999999999999999.987654321;
    double y = -8046.0288;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -6047.0296) = 4273.980708 \f]
START_TEST(s21_fmod_47)
{
    double x = 999999999999999.987654321;
    double y = -6047.0296;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -4048.0304) = 2430.964176 \f]
START_TEST(s21_fmod_48)
{
    double x = 999999999999999.987654321;
    double y = -4048.0304;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -2049.0312) = 1826.530158 \f]
START_TEST(s21_fmod_49)
{
    double x = 999999999999999.987654321;
    double y = -2049.0312;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, -50.0320) = 23.750441 \f]
START_TEST(s21_fmod_50)
{
    double x = 999999999999999.987654321;
    double y = -50.0320;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 1948.9672) = 660.123361 \f]
START_TEST(s21_fmod_51)
{
    double x = 999999999999999.987654321;
    double y = 1948.9672;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 3947.9664) = 401.501756 \f]
START_TEST(s21_fmod_52)
{
    double x = 999999999999999.987654321;
    double y = 3947.9664;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 5946.9656) = 3088.648389 \f]
START_TEST(s21_fmod_53)
{
    double x = 999999999999999.987654321;
    double y = 5946.9656;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 7945.9648) = 3541.536598 \f]
START_TEST(s21_fmod_54)
{
    double x = 999999999999999.987654321;
    double y = 7945.9648;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 9944.9640) = 7371.033853 \f]
START_TEST(s21_fmod_55)
{
    double x = 999999999999999.987654321;
    double y = 9944.9640;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 11943.9632) = 2592.935260 \f]
START_TEST(s21_fmod_56)
{
    double x = 999999999999999.987654321;
    double y = 11943.9632;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 13942.9624) = 5347.554569 \f]
START_TEST(s21_fmod_57)
{
    double x = 999999999999999.987654321;
    double y = 13942.9624;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 15941.9616) = 13914.173861 \f]
START_TEST(s21_fmod_58)
{
    double x = 999999999999999.987654321;
    double y = 15941.9616;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 17940.9608) = 2229.920072 \f]
START_TEST(s21_fmod_59)
{
    double x = 999999999999999.987654321;
    double y = 17940.9608;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 19939.9600) = 19438.283787 \f]
START_TEST(s21_fmod_60)
{
    double x = 999999999999999.987654321;
    double y = 19939.9600;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 21938.9592) = 9425.152533 \f]
START_TEST(s21_fmod_61)
{
    double x = 999999999999999.987654321;
    double y = 21938.9592;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 23937.9584) = 19946.682096 \f]
START_TEST(s21_fmod_62)
{
    double x = 999999999999999.987654321;
    double y = 23937.9584;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 25936.9576) = 17666.313104 \f]
START_TEST(s21_fmod_63)
{
    double x = 999999999999999.987654321;
    double y = 25936.9576;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 27935.9568) = 17375.884100 \f]
START_TEST(s21_fmod_64)
{
    double x = 999999999999999.987654321;
    double y = 27935.9568;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 29934.9560) = 9575.088390 \f]
START_TEST(s21_fmod_65)
{
    double x = 999999999999999.987654321;
    double y = 29934.9560;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 31933.9552) = 12925.861610 \f]
START_TEST(s21_fmod_66)
{
    double x = 999999999999999.987654321;
    double y = 31933.9552;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 33932.9544) = 18342.299499 \f]
START_TEST(s21_fmod_67)
{
    double x = 999999999999999.987654321;
    double y = 33932.9544;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 35931.9536) = 23727.600389 \f]
START_TEST(s21_fmod_68)
{
    double x = 999999999999999.987654321;
    double y = 35931.9536;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 37930.9528) = 24700.042525 \f]
START_TEST(s21_fmod_69)
{
    double x = 999999999999999.987654321;
    double y = 37930.9528;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 39929.9520) = 1266.558683 \f]
START_TEST(s21_fmod_70)
{
    double x = 999999999999999.987654321;
    double y = 39929.9520;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 41928.9512) = 31690.737557 \f]
START_TEST(s21_fmod_71)
{
    double x = 999999999999999.987654321;
    double y = 41928.9512;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 43927.9504) = 3493.677018 \f]
START_TEST(s21_fmod_72)
{
    double x = 999999999999999.987654321;
    double y = 43927.9504;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 45926.9496) = 20881.239374 \f]
START_TEST(s21_fmod_73)
{
    double x = 999999999999999.987654321;
    double y = 45926.9496;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 47925.9488) = 28845.510664 \f]
START_TEST(s21_fmod_74)
{
    double x = 999999999999999.987654321;
    double y = 47925.9488;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 49924.9480) = 8178.426456 \f]
START_TEST(s21_fmod_75)
{
    double x = 999999999999999.987654321;
    double y = 49924.9480;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 51923.9472) = 18957.148535 \f]
START_TEST(s21_fmod_76)
{
    double x = 999999999999999.987654321;
    double y = 51923.9472;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 53922.9464) = 48403.185015 \f]
START_TEST(s21_fmod_77)
{
    double x = 999999999999999.987654321;
    double y = 53922.9464;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 55921.9456) = 33120.195229 \f]
START_TEST(s21_fmod_78)
{
    double x = 999999999999999.987654321;
    double y = 55921.9456;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 57920.9448) = 14746.201814 \f]
START_TEST(s21_fmod_79)
{
    double x = 999999999999999.987654321;
    double y = 57920.9448;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 59919.9440) = 12712.627543 \f]
START_TEST(s21_fmod_80)
{
    double x = 999999999999999.987654321;
    double y = 59919.9440;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 61918.9432) = 33795.653770 \f]
START_TEST(s21_fmod_81)
{
    double x = 999999999999999.987654321;
    double y = 61918.9432;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 63917.9424) = 51000.372657 \f]
START_TEST(s21_fmod_82)
{
    double x = 999999999999999.987654321;
    double y = 63917.9424;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 65916.9416) = 32680.816381 \f]
START_TEST(s21_fmod_83)
{
    double x = 999999999999999.987654321;
    double y = 65916.9416;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 67915.9408) = 40337.753024 \f]
START_TEST(s21_fmod_84)
{
    double x = 999999999999999.987654321;
    double y = 67915.9408;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 69914.9400) = 65655.246698 \f]
START_TEST(s21_fmod_85)
{
    double x = 999999999999999.987654321;
    double y = 69914.9400;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 71913.9392) = 34147.483301 \f]
START_TEST(s21_fmod_86)
{
    double x = 999999999999999.987654321;
    double y = 71913.9392;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 73912.9384) = 57775.489085 \f]
START_TEST(s21_fmod_87)
{
    double x = 999999999999999.987654321;
    double y = 73912.9384;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 75911.9376) = 61205.756631 \f]
START_TEST(s21_fmod_88)
{
    double x = 999999999999999.987654321;
    double y = 75911.9376;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 77910.9368) = 49011.736394 \f]
START_TEST(s21_fmod_89)
{
    double x = 999999999999999.987654321;
    double y = 77910.9368;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 79909.9360) = 54055.021061 \f]
START_TEST(s21_fmod_90)
{
    double x = 999999999999999.987654321;
    double y = 79909.9360;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 81908.9352) = 33776.501249 \f]
START_TEST(s21_fmod_91)
{
    double x = 999999999999999.987654321;
    double y = 81908.9352;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 83907.9344) = 79330.750134 \f]
START_TEST(s21_fmod_92)
{
    double x = 999999999999999.987654321;
    double y = 83907.9344;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 85906.9336) = 10905.300597 \f]
START_TEST(s21_fmod_93)
{
    double x = 999999999999999.987654321;
    double y = 85906.9336;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 87905.9328) = 49608.773216 \f]
START_TEST(s21_fmod_94)
{
    double x = 999999999999999.987654321;
    double y = 87905.9328;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 89904.9320) = 4141.208231 \f]
START_TEST(s21_fmod_95)
{
    double x = 999999999999999.987654321;
    double y = 89904.9320;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 91903.9312) = 54842.642838 \f]
START_TEST(s21_fmod_96)
{
    double x = 999999999999999.987654321;
    double y = 91903.9312;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 93902.9304) = 36457.667826 \f]
START_TEST(s21_fmod_97)
{
    double x = 999999999999999.987654321;
    double y = 93902.9304;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 95901.9296) = 4312.274667 \f]
START_TEST(s21_fmod_98)
{
    double x = 999999999999999.987654321;
    double y = 95901.9296;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999999.987654321, 97900.9288) = 7137.586980 \f]
START_TEST(s21_fmod_99)
{
    double x = 999999999999999.987654321;
    double y = 97900.9288;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003124) = 0.000226 \f]
START_TEST(s21_fmod_100)
{
    double x = 9999999999999.987654321;
    double y = 0.0003124;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003147) = 0.000268 \f]
START_TEST(s21_fmod_101)
{
    double x = 9999999999999.987654321;
    double y = 0.0003147;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003170) = 0.000297 \f]
START_TEST(s21_fmod_102)
{
    double x = 9999999999999.987654321;
    double y = 0.0003170;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003193) = 0.000285 \f]
START_TEST(s21_fmod_103)
{
    double x = 9999999999999.987654321;
    double y = 0.0003193;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003216) = 0.000036 \f]
START_TEST(s21_fmod_104)
{
    double x = 9999999999999.987654321;
    double y = 0.0003216;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003239) = 0.000259 \f]
START_TEST(s21_fmod_105)
{
    double x = 9999999999999.987654321;
    double y = 0.0003239;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003262) = 0.000193 \f]
START_TEST(s21_fmod_106)
{
    double x = 9999999999999.987654321;
    double y = 0.0003262;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003285) = 0.000293 \f]
START_TEST(s21_fmod_107)
{
    double x = 9999999999999.987654321;
    double y = 0.0003285;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003308) = 0.000280 \f]
START_TEST(s21_fmod_108)
{
    double x = 9999999999999.987654321;
    double y = 0.0003308;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003331) = 0.000041 \f]
START_TEST(s21_fmod_109)
{
    double x = 9999999999999.987654321;
    double y = 0.0003331;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003354) = 0.000285 \f]
START_TEST(s21_fmod_110)
{
    double x = 9999999999999.987654321;
    double y = 0.0003354;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003377) = 0.000101 \f]
START_TEST(s21_fmod_111)
{
    double x = 9999999999999.987654321;
    double y = 0.0003377;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003400) = 0.000123 \f]
START_TEST(s21_fmod_112)
{
    double x = 9999999999999.987654321;
    double y = 0.0003400;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003423) = 0.000302 \f]
START_TEST(s21_fmod_113)
{
    double x = 9999999999999.987654321;
    double y = 0.0003423;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003446) = 0.000180 \f]
START_TEST(s21_fmod_114)
{
    double x = 9999999999999.987654321;
    double y = 0.0003446;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003469) = 0.000118 \f]
START_TEST(s21_fmod_115)
{
    double x = 9999999999999.987654321;
    double y = 0.0003469;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003492) = 0.000034 \f]
START_TEST(s21_fmod_116)
{
    double x = 9999999999999.987654321;
    double y = 0.0003492;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003515) = 0.000145 \f]
START_TEST(s21_fmod_117)
{
    double x = 9999999999999.987654321;
    double y = 0.0003515;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003538) = 0.000323 \f]
START_TEST(s21_fmod_118)
{
    double x = 9999999999999.987654321;
    double y = 0.0003538;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003561) = 0.000262 \f]
START_TEST(s21_fmod_119)
{
    double x = 9999999999999.987654321;
    double y = 0.0003561;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003584) = 0.000305 \f]
START_TEST(s21_fmod_120)
{
    double x = 9999999999999.987654321;
    double y = 0.0003584;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003607) = 0.000333 \f]
START_TEST(s21_fmod_121)
{
    double x = 9999999999999.987654321;
    double y = 0.0003607;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003630) = 0.000096 \f]
START_TEST(s21_fmod_122)
{
    double x = 9999999999999.987654321;
    double y = 0.0003630;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003653) = 0.000312 \f]
START_TEST(s21_fmod_123)
{
    double x = 9999999999999.987654321;
    double y = 0.0003653;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003676) = 0.000241 \f]
START_TEST(s21_fmod_124)
{
    double x = 9999999999999.987654321;
    double y = 0.0003676;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003699) = 0.000094 \f]
START_TEST(s21_fmod_125)
{
    double x = 9999999999999.987654321;
    double y = 0.0003699;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003722) = 0.000215 \f]
START_TEST(s21_fmod_126)
{
    double x = 9999999999999.987654321;
    double y = 0.0003722;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003745) = 0.000206 \f]
START_TEST(s21_fmod_127)
{
    double x = 9999999999999.987654321;
    double y = 0.0003745;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003768) = 0.000233 \f]
START_TEST(s21_fmod_128)
{
    double x = 9999999999999.987654321;
    double y = 0.0003768;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003791) = 0.000168 \f]
START_TEST(s21_fmod_129)
{
    double x = 9999999999999.987654321;
    double y = 0.0003791;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003814) = 0.000362 \f]
START_TEST(s21_fmod_130)
{
    double x = 9999999999999.987654321;
    double y = 0.0003814;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003837) = 0.000225 \f]
START_TEST(s21_fmod_131)
{
    double x = 9999999999999.987654321;
    double y = 0.0003837;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003860) = 0.000058 \f]
START_TEST(s21_fmod_132)
{
    double x = 9999999999999.987654321;
    double y = 0.0003860;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003883) = 0.000016 \f]
START_TEST(s21_fmod_133)
{
    double x = 9999999999999.987654321;
    double y = 0.0003883;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003906) = 0.000321 \f]
START_TEST(s21_fmod_134)
{
    double x = 9999999999999.987654321;
    double y = 0.0003906;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003929) = 0.000116 \f]
START_TEST(s21_fmod_135)
{
    double x = 9999999999999.987654321;
    double y = 0.0003929;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003952) = 0.000365 \f]
START_TEST(s21_fmod_136)
{
    double x = 9999999999999.987654321;
    double y = 0.0003952;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003975) = 0.000176 \f]
START_TEST(s21_fmod_137)
{
    double x = 9999999999999.987654321;
    double y = 0.0003975;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0003998) = 0.000030 \f]
START_TEST(s21_fmod_138)
{
    double x = 9999999999999.987654321;
    double y = 0.0003998;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004021) = 0.000107 \f]
START_TEST(s21_fmod_139)
{
    double x = 9999999999999.987654321;
    double y = 0.0004021;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004044) = 0.000035 \f]
START_TEST(s21_fmod_140)
{
    double x = 9999999999999.987654321;
    double y = 0.0004044;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004067) = 0.000005 \f]
START_TEST(s21_fmod_141)
{
    double x = 9999999999999.987654321;
    double y = 0.0004067;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004090) = 0.000013 \f]
START_TEST(s21_fmod_142)
{
    double x = 9999999999999.987654321;
    double y = 0.0004090;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004113) = 0.000045 \f]
START_TEST(s21_fmod_143)
{
    double x = 9999999999999.987654321;
    double y = 0.0004113;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004136) = 0.000297 \f]
START_TEST(s21_fmod_144)
{
    double x = 9999999999999.987654321;
    double y = 0.0004136;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004159) = 0.000131 \f]
START_TEST(s21_fmod_145)
{
    double x = 9999999999999.987654321;
    double y = 0.0004159;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004182) = 0.000264 \f]
START_TEST(s21_fmod_146)
{
    double x = 9999999999999.987654321;
    double y = 0.0004182;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004205) = 0.000053 \f]
START_TEST(s21_fmod_147)
{
    double x = 9999999999999.987654321;
    double y = 0.0004205;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004228) = 0.000252 \f]
START_TEST(s21_fmod_148)
{
    double x = 9999999999999.987654321;
    double y = 0.0004228;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004251) = 0.000343 \f]
START_TEST(s21_fmod_149)
{
    double x = 9999999999999.987654321;
    double y = 0.0004251;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004274) = 0.000394 \f]
START_TEST(s21_fmod_150)
{
    double x = 9999999999999.987654321;
    double y = 0.0004274;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004297) = 0.000332 \f]
START_TEST(s21_fmod_151)
{
    double x = 9999999999999.987654321;
    double y = 0.0004297;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004320) = 0.000383 \f]
START_TEST(s21_fmod_152)
{
    double x = 9999999999999.987654321;
    double y = 0.0004320;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004343) = 0.000088 \f]
START_TEST(s21_fmod_153)
{
    double x = 9999999999999.987654321;
    double y = 0.0004343;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004366) = 0.000194 \f]
START_TEST(s21_fmod_154)
{
    double x = 9999999999999.987654321;
    double y = 0.0004366;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004389) = 0.000394 \f]
START_TEST(s21_fmod_155)
{
    double x = 9999999999999.987654321;
    double y = 0.0004389;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004412) = 0.000149 \f]
START_TEST(s21_fmod_156)
{
    double x = 9999999999999.987654321;
    double y = 0.0004412;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004435) = 0.000377 \f]
START_TEST(s21_fmod_157)
{
    double x = 9999999999999.987654321;
    double y = 0.0004435;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004458) = 0.000176 \f]
START_TEST(s21_fmod_158)
{
    double x = 9999999999999.987654321;
    double y = 0.0004458;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004481) = 0.000436 \f]
START_TEST(s21_fmod_159)
{
    double x = 9999999999999.987654321;
    double y = 0.0004481;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004504) = 0.000002 \f]
START_TEST(s21_fmod_160)
{
    double x = 9999999999999.987654321;
    double y = 0.0004504;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004527) = 0.000300 \f]
START_TEST(s21_fmod_161)
{
    double x = 9999999999999.987654321;
    double y = 0.0004527;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004550) = 0.000104 \f]
START_TEST(s21_fmod_162)
{
    double x = 9999999999999.987654321;
    double y = 0.0004550;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004573) = 0.000188 \f]
START_TEST(s21_fmod_163)
{
    double x = 9999999999999.987654321;
    double y = 0.0004573;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004596) = 0.000384 \f]
START_TEST(s21_fmod_164)
{
    double x = 9999999999999.987654321;
    double y = 0.0004596;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004619) = 0.000271 \f]
START_TEST(s21_fmod_165)
{
    double x = 9999999999999.987654321;
    double y = 0.0004619;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004642) = 0.000400 \f]
START_TEST(s21_fmod_166)
{
    double x = 9999999999999.987654321;
    double y = 0.0004642;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004665) = 0.000440 \f]
START_TEST(s21_fmod_167)
{
    double x = 9999999999999.987654321;
    double y = 0.0004665;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004688) = 0.000095 \f]
START_TEST(s21_fmod_168)
{
    double x = 9999999999999.987654321;
    double y = 0.0004688;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004711) = 0.000400 \f]
START_TEST(s21_fmod_169)
{
    double x = 9999999999999.987654321;
    double y = 0.0004711;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004734) = 0.000012 \f]
START_TEST(s21_fmod_170)
{
    double x = 9999999999999.987654321;
    double y = 0.0004734;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004757) = 0.000338 \f]
START_TEST(s21_fmod_171)
{
    double x = 9999999999999.987654321;
    double y = 0.0004757;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004780) = 0.000436 \f]
START_TEST(s21_fmod_172)
{
    double x = 9999999999999.987654321;
    double y = 0.0004780;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004803) = 0.000480 \f]
START_TEST(s21_fmod_173)
{
    double x = 9999999999999.987654321;
    double y = 0.0004803;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004826) = 0.000344 \f]
START_TEST(s21_fmod_174)
{
    double x = 9999999999999.987654321;
    double y = 0.0004826;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004849) = 0.000305 \f]
START_TEST(s21_fmod_175)
{
    double x = 9999999999999.987654321;
    double y = 0.0004849;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004872) = 0.000228 \f]
START_TEST(s21_fmod_176)
{
    double x = 9999999999999.987654321;
    double y = 0.0004872;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004895) = 0.000411 \f]
START_TEST(s21_fmod_177)
{
    double x = 9999999999999.987654321;
    double y = 0.0004895;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004918) = 0.000312 \f]
START_TEST(s21_fmod_178)
{
    double x = 9999999999999.987654321;
    double y = 0.0004918;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004941) = 0.000182 \f]
START_TEST(s21_fmod_179)
{
    double x = 9999999999999.987654321;
    double y = 0.0004941;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004964) = 0.000067 \f]
START_TEST(s21_fmod_180)
{
    double x = 9999999999999.987654321;
    double y = 0.0004964;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0004987) = 0.000321 \f]
START_TEST(s21_fmod_181)
{
    double x = 9999999999999.987654321;
    double y = 0.0004987;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005010) = 0.000252 \f]
START_TEST(s21_fmod_182)
{
    double x = 9999999999999.987654321;
    double y = 0.0005010;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005033) = 0.000002 \f]
START_TEST(s21_fmod_183)
{
    double x = 9999999999999.987654321;
    double y = 0.0005033;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005056) = 0.000091 \f]
START_TEST(s21_fmod_184)
{
    double x = 9999999999999.987654321;
    double y = 0.0005056;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005079) = 0.000325 \f]
START_TEST(s21_fmod_185)
{
    double x = 9999999999999.987654321;
    double y = 0.0005079;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005102) = 0.000241 \f]
START_TEST(s21_fmod_186)
{
    double x = 9999999999999.987654321;
    double y = 0.0005102;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005125) = 0.000001 \f]
START_TEST(s21_fmod_187)
{
    double x = 9999999999999.987654321;
    double y = 0.0005125;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005148) = 0.000289 \f]
START_TEST(s21_fmod_188)
{
    double x = 9999999999999.987654321;
    double y = 0.0005148;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005171) = 0.000438 \f]
START_TEST(s21_fmod_189)
{
    double x = 9999999999999.987654321;
    double y = 0.0005171;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005194) = 0.000184 \f]
START_TEST(s21_fmod_190)
{
    double x = 9999999999999.987654321;
    double y = 0.0005194;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005217) = 0.000476 \f]
START_TEST(s21_fmod_191)
{
    double x = 9999999999999.987654321;
    double y = 0.0005217;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005240) = 0.000375 \f]
START_TEST(s21_fmod_192)
{
    double x = 9999999999999.987654321;
    double y = 0.0005240;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005263) = 0.000433 \f]
START_TEST(s21_fmod_193)
{
    double x = 9999999999999.987654321;
    double y = 0.0005263;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005286) = 0.000388 \f]
START_TEST(s21_fmod_194)
{
    double x = 9999999999999.987654321;
    double y = 0.0005286;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005309) = 0.000484 \f]
START_TEST(s21_fmod_195)
{
    double x = 9999999999999.987654321;
    double y = 0.0005309;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005332) = 0.000421 \f]
START_TEST(s21_fmod_196)
{
    double x = 9999999999999.987654321;
    double y = 0.0005332;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005355) = 0.000281 \f]
START_TEST(s21_fmod_197)
{
    double x = 9999999999999.987654321;
    double y = 0.0005355;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005378) = 0.000145 \f]
START_TEST(s21_fmod_198)
{
    double x = 9999999999999.987654321;
    double y = 0.0005378;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999999999.987654321, 0.0005401) = 0.000022 \f]
START_TEST(s21_fmod_199)
{
    double x = 9999999999999.987654321;
    double y = 0.0005401;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -28.21) = 5.537641 \f]
START_TEST(s21_fmod_200)
{
    double x = 999999999999.987654321;
    double y = -28.21;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -27.8087) = 2.938208 \f]
START_TEST(s21_fmod_201)
{
    double x = 999999999999.987654321;
    double y = -27.8087;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -27.4074) = 19.219904 \f]
START_TEST(s21_fmod_202)
{
    double x = 999999999999.987654321;
    double y = -27.4074;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -27.0061) = 5.057671 \f]
START_TEST(s21_fmod_203)
{
    double x = 999999999999.987654321;
    double y = -27.0061;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -26.6048) = 9.504437 \f]
START_TEST(s21_fmod_204)
{
    double x = 999999999999.987654321;
    double y = -26.6048;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -26.2035) = 22.844238 \f]
START_TEST(s21_fmod_205)
{
    double x = 999999999999.987654321;
    double y = -26.2035;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -25.8022) = 11.536904 \f]
START_TEST(s21_fmod_206)
{
    double x = 999999999999.987654321;
    double y = -25.8022;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -25.4009) = 20.180270 \f]
START_TEST(s21_fmod_207)
{
    double x = 999999999999.987654321;
    double y = -25.4009;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -24.9996) = 5.991634 \f]
START_TEST(s21_fmod_208)
{
    double x = 999999999999.987654321;
    double y = -24.9996;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -24.5983) = 15.770141 \f]
START_TEST(s21_fmod_209)
{
    double x = 999999999999.987654321;
    double y = -24.5983;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -24.1970) = 14.842705 \f]
START_TEST(s21_fmod_210)
{
    double x = 999999999999.987654321;
    double y = -24.1970;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -23.7957) = 6.461468 \f]
START_TEST(s21_fmod_211)
{
    double x = 999999999999.987654321;
    double y = -23.7957;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -23.3944) = 20.470829 \f]
START_TEST(s21_fmod_212)
{
    double x = 999999999999.987654321;
    double y = -23.3944;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -22.9931) = 0.995544 \f]
START_TEST(s21_fmod_213)
{
    double x = 999999999999.987654321;
    double y = -22.9931;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -22.5918) = 18.728506 \f]
START_TEST(s21_fmod_214)
{
    double x = 999999999999.987654321;
    double y = -22.5918;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -22.1905) = 2.622666 \f]
START_TEST(s21_fmod_215)
{
    double x = 999999999999.987654321;
    double y = -22.1905;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -21.7892) = 18.752424 \f]
START_TEST(s21_fmod_216)
{
    double x = 999999999999.987654321;
    double y = -21.7892;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -21.3879) = 18.602848 \f]
START_TEST(s21_fmod_217)
{
    double x = 999999999999.987654321;
    double y = -21.3879;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -20.9866) = 16.581506 \f]
START_TEST(s21_fmod_218)
{
    double x = 999999999999.987654321;
    double y = -20.9866;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -20.5853) = 16.890863 \f]
START_TEST(s21_fmod_219)
{
    double x = 999999999999.987654321;
    double y = -20.5853;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -20.1840) = 10.707619 \f]
START_TEST(s21_fmod_220)
{
    double x = 999999999999.987654321;
    double y = -20.1840;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -19.7827) = 7.326252 \f]
START_TEST(s21_fmod_221)
{
    double x = 999999999999.987654321;
    double y = -19.7827;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -19.3814) = 3.820507 \f]
START_TEST(s21_fmod_222)
{
    double x = 999999999999.987654321;
    double y = -19.3814;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -18.9801) = 8.787961 \f]
START_TEST(s21_fmod_223)
{
    double x = 999999999999.987654321;
    double y = -18.9801;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -18.5788) = 1.341612 \f]
START_TEST(s21_fmod_224)
{
    double x = 999999999999.987654321;
    double y = -18.5788;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -18.1775) = 1.455257 \f]
START_TEST(s21_fmod_225)
{
    double x = 999999999999.987654321;
    double y = -18.1775;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -17.7762) = 10.581708 \f]
START_TEST(s21_fmod_226)
{
    double x = 999999999999.987654321;
    double y = -17.7762;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -17.3749) = 4.045857 \f]
START_TEST(s21_fmod_227)
{
    double x = 999999999999.987654321;
    double y = -17.3749;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -16.9736) = 12.674804 \f]
START_TEST(s21_fmod_228)
{
    double x = 999999999999.987654321;
    double y = -16.9736;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -16.5723) = 7.969663 \f]
START_TEST(s21_fmod_229)
{
    double x = 999999999999.987654321;
    double y = -16.5723;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -16.1710) = 10.562710 \f]
START_TEST(s21_fmod_230)
{
    double x = 999999999999.987654321;
    double y = -16.1710;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -15.7697) = 7.056654 \f]
START_TEST(s21_fmod_231)
{
    double x = 999999999999.987654321;
    double y = -15.7697;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -15.3684) = 11.193710 \f]
START_TEST(s21_fmod_232)
{
    double x = 999999999999.987654321;
    double y = -15.3684;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -14.9671) = 14.087951 \f]
START_TEST(s21_fmod_233)
{
    double x = 999999999999.987654321;
    double y = -14.9671;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -14.5658) = 1.445511 \f]
START_TEST(s21_fmod_234)
{
    double x = 999999999999.987654321;
    double y = -14.5658;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -14.1645) = 3.539149 \f]
START_TEST(s21_fmod_235)
{
    double x = 999999999999.987654321;
    double y = -14.1645;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -13.7632) = 8.608512 \f]
START_TEST(s21_fmod_236)
{
    double x = 999999999999.987654321;
    double y = -13.7632;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -13.3619) = 12.559246 \f]
START_TEST(s21_fmod_237)
{
    double x = 999999999999.987654321;
    double y = -13.3619;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -12.9606) = 5.819513 \f]
START_TEST(s21_fmod_238)
{
    double x = 999999999999.987654321;
    double y = -12.9606;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -12.5593) = 11.386343 \f]
START_TEST(s21_fmod_239)
{
    double x = 999999999999.987654321;
    double y = -12.5593;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -12.1580) = 8.079714 \f]
START_TEST(s21_fmod_240)
{
    double x = 999999999999.987654321;
    double y = -12.1580;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -11.7567) = 7.338039 \f]
START_TEST(s21_fmod_241)
{
    double x = 999999999999.987654321;
    double y = -11.7567;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -11.3554) = 0.157515 \f]
START_TEST(s21_fmod_242)
{
    double x = 999999999999.987654321;
    double y = -11.3554;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -10.9541) = 2.113435 \f]
START_TEST(s21_fmod_243)
{
    double x = 999999999999.987654321;
    double y = -10.9541;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -10.5528) = 0.615717 \f]
START_TEST(s21_fmod_244)
{
    double x = 999999999999.987654321;
    double y = -10.5528;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -10.1515) = 8.619630 \f]
START_TEST(s21_fmod_245)
{
    double x = 999999999999.987654321;
    double y = -10.1515;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -9.7502) = 2.242119 \f]
START_TEST(s21_fmod_246)
{
    double x = 999999999999.987654321;
    double y = -9.7502;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -9.3489) = 3.419725 \f]
START_TEST(s21_fmod_247)
{
    double x = 999999999999.987654321;
    double y = -9.3489;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -8.9476) = 5.872921 \f]
START_TEST(s21_fmod_248)
{
    double x = 999999999999.987654321;
    double y = -8.9476;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -8.5463) = 1.172418 \f]
START_TEST(s21_fmod_249)
{
    double x = 999999999999.987654321;
    double y = -8.5463;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -8.1450) = 0.537723 \f]
START_TEST(s21_fmod_250)
{
    double x = 999999999999.987654321;
    double y = -8.1450;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -7.7437) = 5.557125 \f]
START_TEST(s21_fmod_251)
{
    double x = 999999999999.987654321;
    double y = -7.7437;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -7.3424) = 5.106126 \f]
START_TEST(s21_fmod_252)
{
    double x = 999999999999.987654321;
    double y = -7.3424;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -6.9411) = 1.691228 \f]
START_TEST(s21_fmod_253)
{
    double x = 999999999999.987654321;
    double y = -6.9411;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -6.5398) = 4.711530 \f]
START_TEST(s21_fmod_254)
{
    double x = 999999999999.987654321;
    double y = -6.5398;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -6.1385) = 3.608732 \f]
START_TEST(s21_fmod_255)
{
    double x = 999999999999.987654321;
    double y = -6.1385;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -5.7372) = 2.046135 \f]
START_TEST(s21_fmod_256)
{
    double x = 999999999999.987654321;
    double y = -5.7372;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -5.3359) = 2.146638 \f]
START_TEST(s21_fmod_257)
{
    double x = 999999999999.987654321;
    double y = -5.3359;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -4.9346) = 3.541941 \f]
START_TEST(s21_fmod_258)
{
    double x = 999999999999.987654321;
    double y = -4.9346;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -4.5333) = 1.630345 \f]
START_TEST(s21_fmod_259)
{
    double x = 999999999999.987654321;
    double y = -4.5333;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -4.1320) = 3.931750 \f]
START_TEST(s21_fmod_260)
{
    double x = 999999999999.987654321;
    double y = -4.1320;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -3.7307) = 2.991437 \f]
START_TEST(s21_fmod_261)
{
    double x = 999999999999.987654321;
    double y = -3.7307;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -3.3294) = 1.625430 \f]
START_TEST(s21_fmod_262)
{
    double x = 999999999999.987654321;
    double y = -3.3294;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -2.9281) = 0.991121 \f]
START_TEST(s21_fmod_263)
{
    double x = 999999999999.987654321;
    double y = -2.9281;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -2.5268) = 0.918809 \f]
START_TEST(s21_fmod_264)
{
    double x = 999999999999.987654321;
    double y = -2.5268;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -2.1255) = 1.514092 \f]
START_TEST(s21_fmod_265)
{
    double x = 999999999999.987654321;
    double y = -2.1255;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -1.7242) = 1.113497 \f]
START_TEST(s21_fmod_266)
{
    double x = 999999999999.987654321;
    double y = -1.7242;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -1.3229) = 0.052697 \f]
START_TEST(s21_fmod_267)
{
    double x = 999999999999.987654321;
    double y = -1.3229;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -0.9216) = 0.397298 \f]
START_TEST(s21_fmod_268)
{
    double x = 999999999999.987654321;
    double y = -0.9216;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -0.5203) = 0.309000 \f]
START_TEST(s21_fmod_269)
{
    double x = 999999999999.987654321;
    double y = -0.5203;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, -0.1190) = 0.084716 \f]
START_TEST(s21_fmod_270)
{
    double x = 999999999999.987654321;
    double y = -0.1190;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 0.2823) = 0.195387 \f]
START_TEST(s21_fmod_271)
{
    double x = 999999999999.987654321;
    double y = 0.2823;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 0.6836) = 0.361692 \f]
START_TEST(s21_fmod_272)
{
    double x = 999999999999.987654321;
    double y = 0.6836;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 1.0849) = 0.635993 \f]
START_TEST(s21_fmod_273)
{
    double x = 999999999999.987654321;
    double y = 1.0849;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 1.4862) = 0.433294 \f]
START_TEST(s21_fmod_274)
{
    double x = 999999999999.987654321;
    double y = 1.4862;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 1.8875) = 0.575194 \f]
START_TEST(s21_fmod_275)
{
    double x = 999999999999.987654321;
    double y = 1.8875;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 2.2888) = 1.789198 \f]
START_TEST(s21_fmod_276)
{
    double x = 999999999999.987654321;
    double y = 2.2888;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 2.6901) = 1.806612 \f]
START_TEST(s21_fmod_277)
{
    double x = 999999999999.987654321;
    double y = 2.6901;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 3.0914) = 1.120223 \f]
START_TEST(s21_fmod_278)
{
    double x = 999999999999.987654321;
    double y = 3.0914;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 3.4927) = 3.023831 \f]
START_TEST(s21_fmod_279)
{
    double x = 999999999999.987654321;
    double y = 3.4927;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 3.8940) = 0.393638 \f]
START_TEST(s21_fmod_280)
{
    double x = 999999999999.987654321;
    double y = 3.8940;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 4.2953) = 3.898643 \f]
START_TEST(s21_fmod_281)
{
    double x = 999999999999.987654321;
    double y = 4.2953;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 4.6966) = 3.562248 \f]
START_TEST(s21_fmod_282)
{
    double x = 999999999999.987654321;
    double y = 4.6966;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 5.0979) = 5.084452 \f]
START_TEST(s21_fmod_283)
{
    double x = 999999999999.987654321;
    double y = 5.0979;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 5.4992) = 2.544455 \f]
START_TEST(s21_fmod_284)
{
    double x = 999999999999.987654321;
    double y = 5.4992;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 5.9005) = 1.711658 \f]
START_TEST(s21_fmod_285)
{
    double x = 999999999999.987654321;
    double y = 5.9005;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 6.3018) = 0.609660 \f]
START_TEST(s21_fmod_286)
{
    double x = 999999999999.987654321;
    double y = 6.3018;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 6.7031) = 6.580362 \f]
START_TEST(s21_fmod_287)
{
    double x = 999999999999.987654321;
    double y = 6.7031;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 7.1044) = 4.959264 \f]
START_TEST(s21_fmod_288)
{
    double x = 999999999999.987654321;
    double y = 7.1044;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 7.5057) = 6.349866 \f]
START_TEST(s21_fmod_289)
{
    double x = 999999999999.987654321;
    double y = 7.5057;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 7.9070) = 0.539667 \f]
START_TEST(s21_fmod_290)
{
    double x = 999999999999.987654321;
    double y = 7.9070;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 8.3083) = 5.792576 \f]
START_TEST(s21_fmod_291)
{
    double x = 999999999999.987654321;
    double y = 8.3083;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 8.7096) = 0.147670 \f]
START_TEST(s21_fmod_292)
{
    double x = 999999999999.987654321;
    double y = 8.7096;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 9.1109) = 9.034374 \f]
START_TEST(s21_fmod_293)
{
    double x = 999999999999.987654321;
    double y = 9.1109;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 9.5122) = 3.152472 \f]
START_TEST(s21_fmod_294)
{
    double x = 999999999999.987654321;
    double y = 9.5122;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 9.9135) = 1.851583 \f]
START_TEST(s21_fmod_295)
{
    double x = 999999999999.987654321;
    double y = 9.9135;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 10.3148) = 2.444874 \f]
START_TEST(s21_fmod_296)
{
    double x = 999999999999.987654321;
    double y = 10.3148;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 10.7161) = 7.007192 \f]
START_TEST(s21_fmod_297)
{
    double x = 999999999999.987654321;
    double y = 10.7161;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 11.1174) = 8.106676 \f]
START_TEST(s21_fmod_298)
{
    double x = 999999999999.987654321;
    double y = 11.1174;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999999.987654321, 11.5187) = 10.621399 \f]
START_TEST(s21_fmod_299)
{
    double x = 999999999999.987654321;
    double y = 11.5187;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 2.0) = 1.987656 \f]
START_TEST(s21_fmod_300)
{
    double x = 99999999999.987654321;
    double y = 2.0;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.901) = 0.099654 \f]
START_TEST(s21_fmod_301)
{
    double x = 99999999999.987654321;
    double y = 1.901;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.802) = 0.845653 \f]
START_TEST(s21_fmod_302)
{
    double x = 99999999999.987654321;
    double y = 1.802;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.703) = 0.243652 \f]
START_TEST(s21_fmod_303)
{
    double x = 99999999999.987654321;
    double y = 1.703;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.604) = 1.387650 \f]
START_TEST(s21_fmod_304)
{
    double x = 99999999999.987654321;
    double y = 1.604;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.505) = 0.367663 \f]
START_TEST(s21_fmod_305)
{
    double x = 99999999999.987654321;
    double y = 1.505;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.406) = 0.383662 \f]
START_TEST(s21_fmod_306)
{
    double x = 99999999999.987654321;
    double y = 1.406;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.307) = 0.831660 \f]
START_TEST(s21_fmod_307)
{
    double x = 99999999999.987654321;
    double y = 1.307;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.208) = 0.763659 \f]
START_TEST(s21_fmod_308)
{
    double x = 99999999999.987654321;
    double y = 1.208;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.109) = 0.525657 \f]
START_TEST(s21_fmod_309)
{
    double x = 99999999999.987654321;
    double y = 1.109;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 1.010) = 0.087655 \f]
START_TEST(s21_fmod_310)
{
    double x = 99999999999.987654321;
    double y = 1.010;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.911) = 0.374652 \f]
START_TEST(s21_fmod_311)
{
    double x = 99999999999.987654321;
    double y = 0.911;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.812) = 0.479649 \f]
START_TEST(s21_fmod_312)
{
    double x = 99999999999.987654321;
    double y = 0.812;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.713) = 0.666660 \f]
START_TEST(s21_fmod_313)
{
    double x = 99999999999.987654321;
    double y = 0.713;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.614) = 0.233657 \f]
START_TEST(s21_fmod_314)
{
    double x = 99999999999.987654321;
    double y = 0.614;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.515) = 0.272653 \f]
START_TEST(s21_fmod_315)
{
    double x = 99999999999.987654321;
    double y = 0.515;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.416) = 0.243660 \f]
START_TEST(s21_fmod_316)
{
    double x = 99999999999.987654321;
    double y = 0.416;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.317) = 0.054654 \f]
START_TEST(s21_fmod_317)
{
    double x = 99999999999.987654321;
    double y = 0.317;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.218) = 0.047656 \f]
START_TEST(s21_fmod_318)
{
    double x = 99999999999.987654321;
    double y = 0.218;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.119) = 0.080660 \f]
START_TEST(s21_fmod_319)
{
    double x = 99999999999.987654321;
    double y = 0.119;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, 0.020) = 0.007654 \f]
START_TEST(s21_fmod_320)
{
    double x = 99999999999.987654321;
    double y = 0.020;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.079) = 0.076655 \f]
START_TEST(s21_fmod_321)
{
    double x = 99999999999.987654321;
    double y = -0.079;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.178) = 0.163660 \f]
START_TEST(s21_fmod_322)
{
    double x = 99999999999.987654321;
    double y = -0.178;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.277) = 0.239647 \f]
START_TEST(s21_fmod_323)
{
    double x = 99999999999.987654321;
    double y = -0.277;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.376) = 0.179655 \f]
START_TEST(s21_fmod_324)
{
    double x = 99999999999.987654321;
    double y = -0.376;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.475) = 0.212660 \f]
START_TEST(s21_fmod_325)
{
    double x = 99999999999.987654321;
    double y = -0.475;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.574) = 0.311664 \f]
START_TEST(s21_fmod_326)
{
    double x = 99999999999.987654321;
    double y = -0.574;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.673) = 0.668649 \f]
START_TEST(s21_fmod_327)
{
    double x = 99999999999.987654321;
    double y = -0.673;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.772) = 0.355653 \f]
START_TEST(s21_fmod_328)
{
    double x = 99999999999.987654321;
    double y = -0.772;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.871) = 0.646656 \f]
START_TEST(s21_fmod_329)
{
    double x = 99999999999.987654321;
    double y = -0.871;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -0.970) = 0.137658 \f]
START_TEST(s21_fmod_330)
{
    double x = 99999999999.987654321;
    double y = -0.970;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.069) = 0.211660 \f]
START_TEST(s21_fmod_331)
{
    double x = 99999999999.987654321;
    double y = -1.069;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.168) = 0.179662 \f]
START_TEST(s21_fmod_332)
{
    double x = 99999999999.987654321;
    double y = -1.168;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.267) = 0.766663 \f]
START_TEST(s21_fmod_333)
{
    double x = 99999999999.987654321;
    double y = -1.267;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.366) = 1.231648 \f]
START_TEST(s21_fmod_334)
{
    double x = 99999999999.987654321;
    double y = -1.366;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.465) = 0.762650 \f]
START_TEST(s21_fmod_335)
{
    double x = 99999999999.987654321;
    double y = -1.465;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.564) = 1.287652 \f]
START_TEST(s21_fmod_336)
{
    double x = 99999999999.987654321;
    double y = -1.564;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.663) = 0.467654 \f]
START_TEST(s21_fmod_337)
{
    double x = 99999999999.987654321;
    double y = -1.663;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.762) = 1.369655 \f]
START_TEST(s21_fmod_338)
{
    double x = 99999999999.987654321;
    double y = -1.762;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.861) = 0.911656 \f]
START_TEST(s21_fmod_339)
{
    double x = 99999999999.987654321;
    double y = -1.861;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -1.960) = 0.507657 \f]
START_TEST(s21_fmod_340)
{
    double x = 99999999999.987654321;
    double y = -1.960;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.059) = 1.929648 \f]
START_TEST(s21_fmod_341)
{
    double x = 99999999999.987654321;
    double y = -2.059;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.158) = 1.517659 \f]
START_TEST(s21_fmod_342)
{
    double x = 99999999999.987654321;
    double y = -2.158;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.257) = 1.456650 \f]
START_TEST(s21_fmod_343)
{
    double x = 99999999999.987654321;
    double y = -2.257;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.356) = 1.751661 \f]
START_TEST(s21_fmod_344)
{
    double x = 99999999999.987654321;
    double y = -2.356;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.455) = 0.007653 \f]
START_TEST(s21_fmod_345)
{
    double x = 99999999999.987654321;
    double y = -2.455;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.554) = 0.477662 \f]
START_TEST(s21_fmod_346)
{
    double x = 99999999999.987654321;
    double y = -2.554;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.653) = 2.285655 \f]
START_TEST(s21_fmod_347)
{
    double x = 99999999999.987654321;
    double y = -2.653;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.752) = 0.883664 \f]
START_TEST(s21_fmod_348)
{
    double x = 99999999999.987654321;
    double y = -2.752;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.851) = 0.251656 \f]
START_TEST(s21_fmod_349)
{
    double x = 99999999999.987654321;
    double y = -2.851;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -2.950) = 2.187650 \f]
START_TEST(s21_fmod_350)
{
    double x = 99999999999.987654321;
    double y = -2.950;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.049) = 0.057658 \f]
START_TEST(s21_fmod_351)
{
    double x = 99999999999.987654321;
    double y = -3.049;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.148) = 1.211651 \f]
START_TEST(s21_fmod_352)
{
    double x = 99999999999.987654321;
    double y = -3.148;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.247) = 2.868659 \f]
START_TEST(s21_fmod_353)
{
    double x = 99999999999.987654321;
    double y = -3.247;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.346) = 0.227653 \f]
START_TEST(s21_fmod_354)
{
    double x = 99999999999.987654321;
    double y = -3.346;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.445) = 1.322660 \f]
START_TEST(s21_fmod_355)
{
    double x = 99999999999.987654321;
    double y = -3.445;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.544) = 3.315655 \f]
START_TEST(s21_fmod_356)
{
    double x = 99999999999.987654321;
    double y = -3.544;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.643) = 1.212661 \f]
START_TEST(s21_fmod_357)
{
    double x = 99999999999.987654321;
    double y = -3.643;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.742) = 3.653656 \f]
START_TEST(s21_fmod_358)
{
    double x = 99999999999.987654321;
    double y = -3.742;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.841) = 0.919651 \f]
START_TEST(s21_fmod_359)
{
    double x = 99999999999.987654321;
    double y = -3.841;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -3.940) = 3.527657 \f]
START_TEST(s21_fmod_360)
{
    double x = 99999999999.987654321;
    double y = -3.940;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.039) = 3.041663 \f]
START_TEST(s21_fmod_361)
{
    double x = 99999999999.987654321;
    double y = -4.039;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.138) = 2.477658 \f]
START_TEST(s21_fmod_362)
{
    double x = 99999999999.987654321;
    double y = -4.138;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.237) = 0.554653 \f]
START_TEST(s21_fmod_363)
{
    double x = 99999999999.987654321;
    double y = -4.237;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.336) = 1.315649 \f]
START_TEST(s21_fmod_364)
{
    double x = 99999999999.987654321;
    double y = -4.336;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.435) = 4.092664 \f]
START_TEST(s21_fmod_365)
{
    double x = 99999999999.987654321;
    double y = -4.435;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.534) = 3.413660 \f]
START_TEST(s21_fmod_366)
{
    double x = 99999999999.987654321;
    double y = -4.534;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.633) = 1.500655 \f]
START_TEST(s21_fmod_367)
{
    double x = 99999999999.987654321;
    double y = -4.633;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.732) = 1.907651 \f]
START_TEST(s21_fmod_368)
{
    double x = 99999999999.987654321;
    double y = -4.732;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.831) = 4.732647 \f]
START_TEST(s21_fmod_369)
{
    double x = 99999999999.987654321;
    double y = -4.831;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -4.930) = 1.117661 \f]
START_TEST(s21_fmod_370)
{
    double x = 99999999999.987654321;
    double y = -4.930;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.029) = 1.307657 \f]
START_TEST(s21_fmod_371)
{
    double x = 99999999999.987654321;
    double y = -5.029;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.128) = 1.019653 \f]
START_TEST(s21_fmod_372)
{
    double x = 99999999999.987654321;
    double y = -5.128;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.227) = 1.699650 \f]
START_TEST(s21_fmod_373)
{
    double x = 99999999999.987654321;
    double y = -5.227;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.326) = 0.139663 \f]
START_TEST(s21_fmod_374)
{
    double x = 99999999999.987654321;
    double y = -5.326;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.425) = 2.712659 \f]
START_TEST(s21_fmod_375)
{
    double x = 99999999999.987654321;
    double y = -5.425;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.524) = 3.027655 \f]
START_TEST(s21_fmod_376)
{
    double x = 99999999999.987654321;
    double y = -5.524;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.623) = 3.888652 \f]
START_TEST(s21_fmod_377)
{
    double x = 99999999999.987654321;
    double y = -5.623;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.722) = 4.287648 \f]
START_TEST(s21_fmod_378)
{
    double x = 99999999999.987654321;
    double y = -5.722;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.821) = 1.452660 \f]
START_TEST(s21_fmod_379)
{
    double x = 99999999999.987654321;
    double y = -5.821;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -5.920) = 5.267657 \f]
START_TEST(s21_fmod_380)
{
    double x = 99999999999.987654321;
    double y = -5.920;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.019) = 5.677654 \f]
START_TEST(s21_fmod_381)
{
    double x = 99999999999.987654321;
    double y = -6.019;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.118) = 1.333650 \f]
START_TEST(s21_fmod_382)
{
    double x = 99999999999.987654321;
    double y = -6.118;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.217) = 0.413661 \f]
START_TEST(s21_fmod_383)
{
    double x = 99999999999.987654321;
    double y = -6.217;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.316) = 0.919658 \f]
START_TEST(s21_fmod_384)
{
    double x = 99999999999.987654321;
    double y = -6.316;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.415) = 1.547655 \f]
START_TEST(s21_fmod_385)
{
    double x = 99999999999.987654321;
    double y = -6.415;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.514) = 3.903652 \f]
START_TEST(s21_fmod_386)
{
    double x = 99999999999.987654321;
    double y = -6.514;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.613) = 5.962649 \f]
START_TEST(s21_fmod_387)
{
    double x = 99999999999.987654321;
    double y = -6.613;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.712) = 2.507659 \f]
START_TEST(s21_fmod_388)
{
    double x = 99999999999.987654321;
    double y = -6.712;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.811) = 3.692656 \f]
START_TEST(s21_fmod_389)
{
    double x = 99999999999.987654321;
    double y = -6.811;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -6.910) = 6.507654 \f]
START_TEST(s21_fmod_390)
{
    double x = 99999999999.987654321;
    double y = -6.910;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.009) = 4.280651 \f]
START_TEST(s21_fmod_391)
{
    double x = 99999999999.987654321;
    double y = -7.009;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.108) = 4.099661 \f]
START_TEST(s21_fmod_392)
{
    double x = 99999999999.987654321;
    double y = -7.108;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.207) = 5.168658 \f]
START_TEST(s21_fmod_393)
{
    double x = 99999999999.987654321;
    double y = -7.207;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.306) = 3.077655 \f]
START_TEST(s21_fmod_394)
{
    double x = 99999999999.987654321;
    double y = -7.306;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.405) = 2.957652 \f]
START_TEST(s21_fmod_395)
{
    double x = 99999999999.987654321;
    double y = -7.405;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.504) = 5.939662 \f]
START_TEST(s21_fmod_396)
{
    double x = 99999999999.987654321;
    double y = -7.504;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.603) = 3.347659 \f]
START_TEST(s21_fmod_397)
{
    double x = 99999999999.987654321;
    double y = -7.603;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.702) = 6.363656 \f]
START_TEST(s21_fmod_398)
{
    double x = 99999999999.987654321;
    double y = -7.702;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999999999.987654321, -7.801) = 5.612654 \f]
START_TEST(s21_fmod_399)
{
    double x = 99999999999.987654321;
    double y = -7.801;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.0) = -nan \f]
START_TEST(s21_fmod_400)
{
    double x = 999999999.987654321;
    double y = 0.0;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.12) = 0.027654 \f]
START_TEST(s21_fmod_401)
{
    double x = 999999999.987654321;
    double y = 0.12;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.24) = 0.147654 \f]
START_TEST(s21_fmod_402)
{
    double x = 999999999.987654321;
    double y = 0.24;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.36) = 0.267654 \f]
START_TEST(s21_fmod_403)
{
    double x = 999999999.987654321;
    double y = 0.36;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.48) = 0.147654 \f]
START_TEST(s21_fmod_404)
{
    double x = 999999999.987654321;
    double y = 0.48;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.60) = 0.387654 \f]
START_TEST(s21_fmod_405)
{
    double x = 999999999.987654321;
    double y = 0.60;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.72) = 0.627654 \f]
START_TEST(s21_fmod_406)
{
    double x = 999999999.987654321;
    double y = 0.72;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.84) = 0.387654 \f]
START_TEST(s21_fmod_407)
{
    double x = 999999999.987654321;
    double y = 0.84;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 0.96) = 0.627654 \f]
START_TEST(s21_fmod_408)
{
    double x = 999999999.987654321;
    double y = 0.96;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 1.08) = 0.987654 \f]
START_TEST(s21_fmod_409)
{
    double x = 999999999.987654321;
    double y = 1.08;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 1.20) = 0.387654 \f]
START_TEST(s21_fmod_410)
{
    double x = 999999999.987654321;
    double y = 1.20;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 1.32) = 0.747654 \f]
START_TEST(s21_fmod_411)
{
    double x = 999999999.987654321;
    double y = 1.32;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 1.44) = 0.627654 \f]
START_TEST(s21_fmod_412)
{
    double x = 999999999.987654321;
    double y = 1.44;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 1.56) = 0.027654 \f]
START_TEST(s21_fmod_413)
{
    double x = 999999999.987654321;
    double y = 1.56;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 1.68) = 0.387654 \f]
START_TEST(s21_fmod_414)
{
    double x = 999999999.987654321;
    double y = 1.68;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 1.80) = 0.987654 \f]
START_TEST(s21_fmod_415)
{
    double x = 999999999.987654321;
    double y = 1.80;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 1.92) = 0.627654 \f]
START_TEST(s21_fmod_416)
{
    double x = 999999999.987654321;
    double y = 1.92;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 2.04) = 0.867654 \f]
START_TEST(s21_fmod_417)
{
    double x = 999999999.987654321;
    double y = 2.04;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 2.16) = 2.067654 \f]
START_TEST(s21_fmod_418)
{
    double x = 999999999.987654321;
    double y = 2.16;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 2.28) = 0.507654 \f]
START_TEST(s21_fmod_419)
{
    double x = 999999999.987654321;
    double y = 2.28;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 2.40) = 1.587654 \f]
START_TEST(s21_fmod_420)
{
    double x = 999999999.987654321;
    double y = 2.40;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 2.52) = 2.067654 \f]
START_TEST(s21_fmod_421)
{
    double x = 999999999.987654321;
    double y = 2.52;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 2.64) = 2.067654 \f]
START_TEST(s21_fmod_422)
{
    double x = 999999999.987654321;
    double y = 2.64;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 2.76) = 1.587654 \f]
START_TEST(s21_fmod_423)
{
    double x = 999999999.987654321;
    double y = 2.76;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 2.88) = 0.627654 \f]
START_TEST(s21_fmod_424)
{
    double x = 999999999.987654321;
    double y = 2.88;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.00) = 0.987654 \f]
START_TEST(s21_fmod_425)
{
    double x = 999999999.987654321;
    double y = 3.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.12) = 1.587654 \f]
START_TEST(s21_fmod_426)
{
    double x = 999999999.987654321;
    double y = 3.12;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.24) = 0.987654 \f]
START_TEST(s21_fmod_427)
{
    double x = 999999999.987654321;
    double y = 3.24;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.36) = 2.067654 \f]
START_TEST(s21_fmod_428)
{
    double x = 999999999.987654321;
    double y = 3.36;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.48) = 2.907654 \f]
START_TEST(s21_fmod_429)
{
    double x = 999999999.987654321;
    double y = 3.48;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.60) = 2.787654 \f]
START_TEST(s21_fmod_430)
{
    double x = 999999999.987654321;
    double y = 3.60;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.72) = 1.107654 \f]
START_TEST(s21_fmod_431)
{
    double x = 999999999.987654321;
    double y = 3.72;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.84) = 2.547654 \f]
START_TEST(s21_fmod_432)
{
    double x = 999999999.987654321;
    double y = 3.84;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 3.96) = 2.067654 \f]
START_TEST(s21_fmod_433)
{
    double x = 999999999.987654321;
    double y = 3.96;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 4.08) = 0.867654 \f]
START_TEST(s21_fmod_434)
{
    double x = 999999999.987654321;
    double y = 4.08;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 4.20) = 0.387654 \f]
START_TEST(s21_fmod_435)
{
    double x = 999999999.987654321;
    double y = 4.20;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 4.32) = 2.067654 \f]
START_TEST(s21_fmod_436)
{
    double x = 999999999.987654321;
    double y = 4.32;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 4.44) = 0.987654 \f]
START_TEST(s21_fmod_437)
{
    double x = 999999999.987654321;
    double y = 4.44;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 4.56) = 2.787654 \f]
START_TEST(s21_fmod_438)
{
    double x = 999999999.987654321;
    double y = 4.56;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 4.68) = 3.147654 \f]
START_TEST(s21_fmod_439)
{
    double x = 999999999.987654321;
    double y = 4.68;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 4.80) = 1.587654 \f]
START_TEST(s21_fmod_440)
{
    double x = 999999999.987654321;
    double y = 4.80;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 4.92) = 2.547654 \f]
START_TEST(s21_fmod_441)
{
    double x = 999999999.987654321;
    double y = 4.92;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 5.04) = 2.067654 \f]
START_TEST(s21_fmod_442)
{
    double x = 999999999.987654321;
    double y = 5.04;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 5.16) = 3.147654 \f]
START_TEST(s21_fmod_443)
{
    double x = 999999999.987654321;
    double y = 5.16;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 5.28) = 2.067654 \f]
START_TEST(s21_fmod_444)
{
    double x = 999999999.987654321;
    double y = 5.28;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 5.40) = 0.987654 \f]
START_TEST(s21_fmod_445)
{
    double x = 999999999.987654321;
    double y = 5.40;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 5.52) = 1.587654 \f]
START_TEST(s21_fmod_446)
{
    double x = 999999999.987654321;
    double y = 5.52;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 5.64) = 3.027654 \f]
START_TEST(s21_fmod_447)
{
    double x = 999999999.987654321;
    double y = 5.64;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 5.76) = 0.627654 \f]
START_TEST(s21_fmod_448)
{
    double x = 999999999.987654321;
    double y = 5.76;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 5.88) = 1.227654 \f]
START_TEST(s21_fmod_449)
{
    double x = 999999999.987654321;
    double y = 5.88;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.00) = 3.987654 \f]
START_TEST(s21_fmod_450)
{
    double x = 999999999.987654321;
    double y = 6.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.12) = 4.947654 \f]
START_TEST(s21_fmod_451)
{
    double x = 999999999.987654321;
    double y = 6.12;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.24) = 1.587654 \f]
START_TEST(s21_fmod_452)
{
    double x = 999999999.987654321;
    double y = 6.24;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.36) = 2.547654 \f]
START_TEST(s21_fmod_453)
{
    double x = 999999999.987654321;
    double y = 6.36;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.48) = 4.227654 \f]
START_TEST(s21_fmod_454)
{
    double x = 999999999.987654321;
    double y = 6.48;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.60) = 3.387654 \f]
START_TEST(s21_fmod_455)
{
    double x = 999999999.987654321;
    double y = 6.60;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.72) = 5.427654 \f]
START_TEST(s21_fmod_456)
{
    double x = 999999999.987654321;
    double y = 6.72;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.84) = 2.787654 \f]
START_TEST(s21_fmod_457)
{
    double x = 999999999.987654321;
    double y = 6.84;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 6.96) = 6.387654 \f]
START_TEST(s21_fmod_458)
{
    double x = 999999999.987654321;
    double y = 6.96;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 7.08) = 6.027654 \f]
START_TEST(s21_fmod_459)
{
    double x = 999999999.987654321;
    double y = 7.08;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 7.20) = 6.387654 \f]
START_TEST(s21_fmod_460)
{
    double x = 999999999.987654321;
    double y = 7.20;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 7.32) = 6.267654 \f]
START_TEST(s21_fmod_461)
{
    double x = 999999999.987654321;
    double y = 7.32;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 7.44) = 1.107654 \f]
START_TEST(s21_fmod_462)
{
    double x = 999999999.987654321;
    double y = 7.44;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 7.56) = 2.067654 \f]
START_TEST(s21_fmod_463)
{
    double x = 999999999.987654321;
    double y = 7.56;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 7.68) = 2.547654 \f]
START_TEST(s21_fmod_464)
{
    double x = 999999999.987654321;
    double y = 7.68;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 7.80) = 1.587654 \f]
START_TEST(s21_fmod_465)
{
    double x = 999999999.987654321;
    double y = 7.80;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 7.92) = 2.067654 \f]
START_TEST(s21_fmod_466)
{
    double x = 999999999.987654321;
    double y = 7.92;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 8.04) = 3.627654 \f]
START_TEST(s21_fmod_467)
{
    double x = 999999999.987654321;
    double y = 8.04;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 8.16) = 4.947654 \f]
START_TEST(s21_fmod_468)
{
    double x = 999999999.987654321;
    double y = 8.16;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 8.28) = 7.107654 \f]
START_TEST(s21_fmod_469)
{
    double x = 999999999.987654321;
    double y = 8.28;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 8.40) = 0.387654 \f]
START_TEST(s21_fmod_470)
{
    double x = 999999999.987654321;
    double y = 8.40;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 8.52) = 0.147654 \f]
START_TEST(s21_fmod_471)
{
    double x = 999999999.987654321;
    double y = 8.52;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 8.64) = 6.387654 \f]
START_TEST(s21_fmod_472)
{
    double x = 999999999.987654321;
    double y = 8.64;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 8.76) = 1.227654 \f]
START_TEST(s21_fmod_473)
{
    double x = 999999999.987654321;
    double y = 8.76;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 8.88) = 5.427654 \f]
START_TEST(s21_fmod_474)
{
    double x = 999999999.987654321;
    double y = 8.88;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.00) = 0.987654 \f]
START_TEST(s21_fmod_475)
{
    double x = 999999999.987654321;
    double y = 9.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.12) = 7.347654 \f]
START_TEST(s21_fmod_476)
{
    double x = 999999999.987654321;
    double y = 9.12;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.24) = 2.067654 \f]
START_TEST(s21_fmod_477)
{
    double x = 999999999.987654321;
    double y = 9.24;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.36) = 7.827654 \f]
START_TEST(s21_fmod_478)
{
    double x = 999999999.987654321;
    double y = 9.36;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.48) = 0.627654 \f]
START_TEST(s21_fmod_479)
{
    double x = 999999999.987654321;
    double y = 9.48;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.60) = 6.387654 \f]
START_TEST(s21_fmod_480)
{
    double x = 999999999.987654321;
    double y = 9.60;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.72) = 4.227654 \f]
START_TEST(s21_fmod_481)
{
    double x = 999999999.987654321;
    double y = 9.72;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.84) = 2.547654 \f]
START_TEST(s21_fmod_482)
{
    double x = 999999999.987654321;
    double y = 9.84;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 9.96) = 4.227654 \f]
START_TEST(s21_fmod_483)
{
    double x = 999999999.987654321;
    double y = 9.96;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 10.08) = 2.067654 \f]
START_TEST(s21_fmod_484)
{
    double x = 999999999.987654321;
    double y = 10.08;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 10.20) = 6.987654 \f]
START_TEST(s21_fmod_485)
{
    double x = 999999999.987654321;
    double y = 10.20;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 10.32) = 8.307654 \f]
START_TEST(s21_fmod_486)
{
    double x = 999999999.987654321;
    double y = 10.32;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 10.44) = 6.387654 \f]
START_TEST(s21_fmod_487)
{
    double x = 999999999.987654321;
    double y = 10.44;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 10.56) = 7.347654 \f]
START_TEST(s21_fmod_488)
{
    double x = 999999999.987654321;
    double y = 10.56;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 10.68) = 8.547654 \f]
START_TEST(s21_fmod_489)
{
    double x = 999999999.987654321;
    double y = 10.68;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 10.80) = 6.387654 \f]
START_TEST(s21_fmod_490)
{
    double x = 999999999.987654321;
    double y = 10.80;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 10.92) = 6.267654 \f]
START_TEST(s21_fmod_491)
{
    double x = 999999999.987654321;
    double y = 10.92;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 11.04) = 1.587654 \f]
START_TEST(s21_fmod_492)
{
    double x = 999999999.987654321;
    double y = 11.04;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 11.16) = 8.547654 \f]
START_TEST(s21_fmod_493)
{
    double x = 999999999.987654321;
    double y = 11.16;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 11.28) = 3.027654 \f]
START_TEST(s21_fmod_494)
{
    double x = 999999999.987654321;
    double y = 11.28;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 11.40) = 2.787654 \f]
START_TEST(s21_fmod_495)
{
    double x = 999999999.987654321;
    double y = 11.40;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 11.52) = 6.387654 \f]
START_TEST(s21_fmod_496)
{
    double x = 999999999.987654321;
    double y = 11.52;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 11.64) = 10.707654 \f]
START_TEST(s21_fmod_497)
{
    double x = 999999999.987654321;
    double y = 11.64;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 11.76) = 7.107654 \f]
START_TEST(s21_fmod_498)
{
    double x = 999999999.987654321;
    double y = 11.76;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(999999999.987654321, 11.88) = 2.067654 \f]
START_TEST(s21_fmod_499)
{
    double x = 999999999.987654321;
    double y = 11.88;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.003) = 0.978654 \f]
START_TEST(s21_fmod_500)
{
    double x = 9999999.987654321;
    double y = 3.003;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0033) = 2.076654 \f]
START_TEST(s21_fmod_501)
{
    double x = 9999999.987654321;
    double y = 3.0033;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0036) = 0.370854 \f]
START_TEST(s21_fmod_502)
{
    double x = 9999999.987654321;
    double y = 3.0036;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0039) = 1.868154 \f]
START_TEST(s21_fmod_503)
{
    double x = 9999999.987654321;
    double y = 3.0039;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0042) = 0.561054 \f]
START_TEST(s21_fmod_504)
{
    double x = 9999999.987654321;
    double y = 3.0042;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0045) = 2.457654 \f]
START_TEST(s21_fmod_505)
{
    double x = 9999999.987654321;
    double y = 3.0045;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0048) = 1.549254 \f]
START_TEST(s21_fmod_506)
{
    double x = 9999999.987654321;
    double y = 3.0048;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0051) = 0.840054 \f]
START_TEST(s21_fmod_507)
{
    double x = 9999999.987654321;
    double y = 3.0051;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0054) = 0.330054 \f]
START_TEST(s21_fmod_508)
{
    double x = 9999999.987654321;
    double y = 3.0054;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0057) = 0.019254 \f]
START_TEST(s21_fmod_509)
{
    double x = 9999999.987654321;
    double y = 3.0057;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0060) = 2.913654 \f]
START_TEST(s21_fmod_510)
{
    double x = 9999999.987654321;
    double y = 3.0060;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0063) = 3.001554 \f]
START_TEST(s21_fmod_511)
{
    double x = 9999999.987654321;
    double y = 3.0063;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0066) = 0.282054 \f]
START_TEST(s21_fmod_512)
{
    double x = 9999999.987654321;
    double y = 3.0066;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0069) = 0.768054 \f]
START_TEST(s21_fmod_513)
{
    double x = 9999999.987654321;
    double y = 3.0069;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0072) = 1.453254 \f]
START_TEST(s21_fmod_514)
{
    double x = 9999999.987654321;
    double y = 3.0072;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0075) = 2.337654 \f]
START_TEST(s21_fmod_515)
{
    double x = 9999999.987654321;
    double y = 3.0075;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0078) = 0.413454 \f]
START_TEST(s21_fmod_516)
{
    double x = 9999999.987654321;
    double y = 3.0078;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0081) = 1.695954 \f]
START_TEST(s21_fmod_517)
{
    double x = 9999999.987654321;
    double y = 3.0081;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0084) = 0.169254 \f]
START_TEST(s21_fmod_518)
{
    double x = 9999999.987654321;
    double y = 3.0084;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0087) = 1.849854 \f]
START_TEST(s21_fmod_519)
{
    double x = 9999999.987654321;
    double y = 3.0087;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0090) = 0.720654 \f]
START_TEST(s21_fmod_520)
{
    double x = 9999999.987654321;
    double y = 3.0090;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0093) = 2.799354 \f]
START_TEST(s21_fmod_521)
{
    double x = 9999999.987654321;
    double y = 3.0093;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0096) = 2.067654 \f]
START_TEST(s21_fmod_522)
{
    double x = 9999999.987654321;
    double y = 3.0096;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0099) = 1.534554 \f]
START_TEST(s21_fmod_523)
{
    double x = 9999999.987654321;
    double y = 3.0099;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0102) = 1.200054 \f]
START_TEST(s21_fmod_524)
{
    double x = 9999999.987654321;
    double y = 3.0102;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0105) = 1.064154 \f]
START_TEST(s21_fmod_525)
{
    double x = 9999999.987654321;
    double y = 3.0105;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0108) = 1.126854 \f]
START_TEST(s21_fmod_526)
{
    double x = 9999999.987654321;
    double y = 3.0108;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0111) = 1.388154 \f]
START_TEST(s21_fmod_527)
{
    double x = 9999999.987654321;
    double y = 3.0111;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0114) = 1.848054 \f]
START_TEST(s21_fmod_528)
{
    double x = 9999999.987654321;
    double y = 3.0114;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0117) = 2.506554 \f]
START_TEST(s21_fmod_529)
{
    double x = 9999999.987654321;
    double y = 3.0117;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0120) = 0.351654 \f]
START_TEST(s21_fmod_530)
{
    double x = 9999999.987654321;
    double y = 3.0120;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0123) = 1.407054 \f]
START_TEST(s21_fmod_531)
{
    double x = 9999999.987654321;
    double y = 3.0123;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0126) = 2.661054 \f]
START_TEST(s21_fmod_532)
{
    double x = 9999999.987654321;
    double y = 3.0126;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0129) = 1.100754 \f]
START_TEST(s21_fmod_533)
{
    double x = 9999999.987654321;
    double y = 3.0129;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0132) = 2.751654 \f]
START_TEST(s21_fmod_534)
{
    double x = 9999999.987654321;
    double y = 3.0132;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0135) = 1.587654 \f]
START_TEST(s21_fmod_535)
{
    double x = 9999999.987654321;
    double y = 3.0135;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0138) = 0.621654 \f]
START_TEST(s21_fmod_536)
{
    double x = 9999999.987654321;
    double y = 3.0138;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0141) = 2.867754 \f]
START_TEST(s21_fmod_537)
{
    double x = 9999999.987654321;
    double y = 3.0141;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0144) = 2.298054 \f]
START_TEST(s21_fmod_538)
{
    double x = 9999999.987654321;
    double y = 3.0144;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0147) = 1.926354 \f]
START_TEST(s21_fmod_539)
{
    double x = 9999999.987654321;
    double y = 3.0147;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0150) = 1.752654 \f]
START_TEST(s21_fmod_540)
{
    double x = 9999999.987654321;
    double y = 3.0150;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0153) = 1.776954 \f]
START_TEST(s21_fmod_541)
{
    double x = 9999999.987654321;
    double y = 3.0153;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0156) = 1.999254 \f]
START_TEST(s21_fmod_542)
{
    double x = 9999999.987654321;
    double y = 3.0156;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0159) = 2.419554 \f]
START_TEST(s21_fmod_543)
{
    double x = 9999999.987654321;
    double y = 3.0159;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0162) = 0.021654 \f]
START_TEST(s21_fmod_544)
{
    double x = 9999999.987654321;
    double y = 3.0162;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0165) = 0.837654 \f]
START_TEST(s21_fmod_545)
{
    double x = 9999999.987654321;
    double y = 3.0165;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0168) = 1.851654 \f]
START_TEST(s21_fmod_546)
{
    double x = 9999999.987654321;
    double y = 3.0168;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0171) = 0.046554 \f]
START_TEST(s21_fmod_547)
{
    double x = 9999999.987654321;
    double y = 3.0171;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0174) = 1.456254 \f]
START_TEST(s21_fmod_548)
{
    double x = 9999999.987654321;
    double y = 3.0174;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0177) = 0.046254 \f]
START_TEST(s21_fmod_549)
{
    double x = 9999999.987654321;
    double y = 3.0177;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0180) = 1.851654 \f]
START_TEST(s21_fmod_550)
{
    double x = 9999999.987654321;
    double y = 3.0180;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0183) = 0.836754 \f]
START_TEST(s21_fmod_551)
{
    double x = 9999999.987654321;
    double y = 3.0183;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0186) = 0.019254 \f]
START_TEST(s21_fmod_552)
{
    double x = 9999999.987654321;
    double y = 3.0186;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0189) = 2.418054 \f]
START_TEST(s21_fmod_553)
{
    double x = 9999999.987654321;
    double y = 3.0189;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0192) = 1.995654 \f]
START_TEST(s21_fmod_554)
{
    double x = 9999999.987654321;
    double y = 3.0192;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0195) = 1.770654 \f]
START_TEST(s21_fmod_555)
{
    double x = 9999999.987654321;
    double y = 3.0195;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0198) = 1.743054 \f]
START_TEST(s21_fmod_556)
{
    double x = 9999999.987654321;
    double y = 3.0198;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0201) = 1.912854 \f]
START_TEST(s21_fmod_557)
{
    double x = 9999999.987654321;
    double y = 3.0201;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0204) = 2.280054 \f]
START_TEST(s21_fmod_558)
{
    double x = 9999999.987654321;
    double y = 3.0204;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0207) = 2.844654 \f]
START_TEST(s21_fmod_559)
{
    double x = 9999999.987654321;
    double y = 3.0207;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0210) = 0.585654 \f]
START_TEST(s21_fmod_560)
{
    double x = 9999999.987654321;
    double y = 3.0210;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0213) = 1.544754 \f]
START_TEST(s21_fmod_561)
{
    double x = 9999999.987654321;
    double y = 3.0213;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0216) = 2.701254 \f]
START_TEST(s21_fmod_562)
{
    double x = 9999999.987654321;
    double y = 3.0216;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0219) = 1.033254 \f]
START_TEST(s21_fmod_563)
{
    double x = 9999999.987654321;
    double y = 3.0219;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0222) = 2.584254 \f]
START_TEST(s21_fmod_564)
{
    double x = 9999999.987654321;
    double y = 3.0222;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0225) = 1.310154 \f]
START_TEST(s21_fmod_565)
{
    double x = 9999999.987654321;
    double y = 3.0225;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0228) = 0.232854 \f]
START_TEST(s21_fmod_566)
{
    double x = 9999999.987654321;
    double y = 3.0228;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0231) = 2.375454 \f]
START_TEST(s21_fmod_567)
{
    double x = 9999999.987654321;
    double y = 3.0231;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0234) = 1.692054 \f]
START_TEST(s21_fmod_568)
{
    double x = 9999999.987654321;
    double y = 3.0234;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0237) = 1.205454 \f]
START_TEST(s21_fmod_569)
{
    double x = 9999999.987654321;
    double y = 3.0237;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0240) = 0.915654 \f]
START_TEST(s21_fmod_570)
{
    double x = 9999999.987654321;
    double y = 3.0240;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0243) = 0.822654 \f]
START_TEST(s21_fmod_571)
{
    double x = 9999999.987654321;
    double y = 3.0243;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0246) = 0.926454 \f]
START_TEST(s21_fmod_572)
{
    double x = 9999999.987654321;
    double y = 3.0246;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0249) = 1.227054 \f]
START_TEST(s21_fmod_573)
{
    double x = 9999999.987654321;
    double y = 3.0249;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0252) = 1.724454 \f]
START_TEST(s21_fmod_574)
{
    double x = 9999999.987654321;
    double y = 3.0252;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0255) = 2.418654 \f]
START_TEST(s21_fmod_575)
{
    double x = 9999999.987654321;
    double y = 3.0255;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0258) = 0.283854 \f]
START_TEST(s21_fmod_576)
{
    double x = 9999999.987654321;
    double y = 3.0258;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0261) = 1.371354 \f]
START_TEST(s21_fmod_577)
{
    double x = 9999999.987654321;
    double y = 3.0261;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0264) = 2.655654 \f]
START_TEST(s21_fmod_578)
{
    double x = 9999999.987654321;
    double y = 3.0264;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0267) = 1.110054 \f]
START_TEST(s21_fmod_579)
{
    double x = 9999999.987654321;
    double y = 3.0267;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0270) = 2.787654 \f]
START_TEST(s21_fmod_580)
{
    double x = 9999999.987654321;
    double y = 3.0270;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0273) = 1.634754 \f]
START_TEST(s21_fmod_581)
{
    double x = 9999999.987654321;
    double y = 3.0273;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0276) = 0.678054 \f]
START_TEST(s21_fmod_582)
{
    double x = 9999999.987654321;
    double y = 3.0276;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0279) = 2.945454 \f]
START_TEST(s21_fmod_583)
{
    double x = 9999999.987654321;
    double y = 3.0279;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0282) = 2.381454 \f]
START_TEST(s21_fmod_584)
{
    double x = 9999999.987654321;
    double y = 3.0282;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0285) = 2.013654 \f]
START_TEST(s21_fmod_585)
{
    double x = 9999999.987654321;
    double y = 3.0285;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0288) = 1.842054 \f]
START_TEST(s21_fmod_586)
{
    double x = 9999999.987654321;
    double y = 3.0288;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0291) = 1.866654 \f]
START_TEST(s21_fmod_587)
{
    double x = 9999999.987654321;
    double y = 3.0291;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0294) = 2.087454 \f]
START_TEST(s21_fmod_588)
{
    double x = 9999999.987654321;
    double y = 3.0294;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0297) = 2.504454 \f]
START_TEST(s21_fmod_589)
{
    double x = 9999999.987654321;
    double y = 3.0297;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0300) = 0.087654 \f]
START_TEST(s21_fmod_590)
{
    double x = 9999999.987654321;
    double y = 3.0300;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0303) = 0.896754 \f]
START_TEST(s21_fmod_591)
{
    double x = 9999999.987654321;
    double y = 3.0303;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0306) = 1.902054 \f]
START_TEST(s21_fmod_592)
{
    double x = 9999999.987654321;
    double y = 3.0306;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0309) = 0.072654 \f]
START_TEST(s21_fmod_593)
{
    double x = 9999999.987654321;
    double y = 3.0309;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0312) = 1.470054 \f]
START_TEST(s21_fmod_594)
{
    double x = 9999999.987654321;
    double y = 3.0312;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0315) = 0.032154 \f]
START_TEST(s21_fmod_595)
{
    double x = 9999999.987654321;
    double y = 3.0315;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0318) = 1.821654 \f]
START_TEST(s21_fmod_596)
{
    double x = 9999999.987654321;
    double y = 3.0318;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0321) = 0.775254 \f]
START_TEST(s21_fmod_597)
{
    double x = 9999999.987654321;
    double y = 3.0321;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0324) = 2.956854 \f]
START_TEST(s21_fmod_598)
{
    double x = 9999999.987654321;
    double y = 3.0324;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(9999999.987654321, 3.0327) = 2.301954 \f]
START_TEST(s21_fmod_599)
{
    double x = 9999999.987654321;
    double y = 3.0327;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -12.5) = 12.487654 \f]
START_TEST(s21_fmod_600)
{
    double x = 99999.987654321;
    double y = -12.5;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -12.25) = 3.237654 \f]
START_TEST(s21_fmod_601)
{
    double x = 99999.987654321;
    double y = -12.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -12.00) = 3.987654 \f]
START_TEST(s21_fmod_602)
{
    double x = 99999.987654321;
    double y = -12.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -11.75) = 7.487654 \f]
START_TEST(s21_fmod_603)
{
    double x = 99999.987654321;
    double y = -11.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -11.50) = 7.487654 \f]
START_TEST(s21_fmod_604)
{
    double x = 99999.987654321;
    double y = -11.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -11.25) = 9.987654 \f]
START_TEST(s21_fmod_605)
{
    double x = 99999.987654321;
    double y = -11.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -11.00) = 9.987654 \f]
START_TEST(s21_fmod_606)
{
    double x = 99999.987654321;
    double y = -11.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -10.75) = 3.487654 \f]
START_TEST(s21_fmod_607)
{
    double x = 99999.987654321;
    double y = -10.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -10.50) = 8.487654 \f]
START_TEST(s21_fmod_608)
{
    double x = 99999.987654321;
    double y = -10.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -10.25) = 0.987654 \f]
START_TEST(s21_fmod_609)
{
    double x = 99999.987654321;
    double y = -10.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -10.00) = 9.987654 \f]
START_TEST(s21_fmod_610)
{
    double x = 99999.987654321;
    double y = -10.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -9.75) = 3.987654 \f]
START_TEST(s21_fmod_611)
{
    double x = 99999.987654321;
    double y = -9.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -9.50) = 2.987654 \f]
START_TEST(s21_fmod_612)
{
    double x = 99999.987654321;
    double y = -9.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -9.25) = 7.487654 \f]
START_TEST(s21_fmod_613)
{
    double x = 99999.987654321;
    double y = -9.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -9.00) = 0.987654 \f]
START_TEST(s21_fmod_614)
{
    double x = 99999.987654321;
    double y = -9.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -8.75) = 4.987654 \f]
START_TEST(s21_fmod_615)
{
    double x = 99999.987654321;
    double y = -8.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -8.50) = 5.987654 \f]
START_TEST(s21_fmod_616)
{
    double x = 99999.987654321;
    double y = -8.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -8.25) = 1.737654 \f]
START_TEST(s21_fmod_617)
{
    double x = 99999.987654321;
    double y = -8.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -8.00) = 7.987654 \f]
START_TEST(s21_fmod_618)
{
    double x = 99999.987654321;
    double y = -8.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -7.75) = 1.737654 \f]
START_TEST(s21_fmod_619)
{
    double x = 99999.987654321;
    double y = -7.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -7.50) = 2.487654 \f]
START_TEST(s21_fmod_620)
{
    double x = 99999.987654321;
    double y = -7.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -7.25) = 0.737654 \f]
START_TEST(s21_fmod_621)
{
    double x = 99999.987654321;
    double y = -7.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -7.00) = 4.987654 \f]
START_TEST(s21_fmod_622)
{
    double x = 99999.987654321;
    double y = -7.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -6.75) = 5.487654 \f]
START_TEST(s21_fmod_623)
{
    double x = 99999.987654321;
    double y = -6.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -6.50) = 3.987654 \f]
START_TEST(s21_fmod_624)
{
    double x = 99999.987654321;
    double y = -6.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -6.25) = 6.237654 \f]
START_TEST(s21_fmod_625)
{
    double x = 99999.987654321;
    double y = -6.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -6.00) = 3.987654 \f]
START_TEST(s21_fmod_626)
{
    double x = 99999.987654321;
    double y = -6.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -5.75) = 1.737654 \f]
START_TEST(s21_fmod_627)
{
    double x = 99999.987654321;
    double y = -5.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -5.50) = 4.487654 \f]
START_TEST(s21_fmod_628)
{
    double x = 99999.987654321;
    double y = -5.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -5.25) = 3.237654 \f]
START_TEST(s21_fmod_629)
{
    double x = 99999.987654321;
    double y = -5.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -5.00) = 4.987654 \f]
START_TEST(s21_fmod_630)
{
    double x = 99999.987654321;
    double y = -5.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -4.75) = 2.987654 \f]
START_TEST(s21_fmod_631)
{
    double x = 99999.987654321;
    double y = -4.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -4.50) = 0.987654 \f]
START_TEST(s21_fmod_632)
{
    double x = 99999.987654321;
    double y = -4.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -4.25) = 1.737654 \f]
START_TEST(s21_fmod_633)
{
    double x = 99999.987654321;
    double y = -4.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -4.00) = 3.987654 \f]
START_TEST(s21_fmod_634)
{
    double x = 99999.987654321;
    double y = -4.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -3.75) = 2.487654 \f]
START_TEST(s21_fmod_635)
{
    double x = 99999.987654321;
    double y = -3.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -3.50) = 1.487654 \f]
START_TEST(s21_fmod_636)
{
    double x = 99999.987654321;
    double y = -3.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -3.25) = 0.737654 \f]
START_TEST(s21_fmod_637)
{
    double x = 99999.987654321;
    double y = -3.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -3.00) = 0.987654 \f]
START_TEST(s21_fmod_638)
{
    double x = 99999.987654321;
    double y = -3.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -2.75) = 1.737654 \f]
START_TEST(s21_fmod_639)
{
    double x = 99999.987654321;
    double y = -2.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -2.50) = 2.487654 \f]
START_TEST(s21_fmod_640)
{
    double x = 99999.987654321;
    double y = -2.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -2.25) = 0.987654 \f]
START_TEST(s21_fmod_641)
{
    double x = 99999.987654321;
    double y = -2.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -2.00) = 1.987654 \f]
START_TEST(s21_fmod_642)
{
    double x = 99999.987654321;
    double y = -2.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -1.75) = 1.487654 \f]
START_TEST(s21_fmod_643)
{
    double x = 99999.987654321;
    double y = -1.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -1.50) = 0.987654 \f]
START_TEST(s21_fmod_644)
{
    double x = 99999.987654321;
    double y = -1.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -1.25) = 1.237654 \f]
START_TEST(s21_fmod_645)
{
    double x = 99999.987654321;
    double y = -1.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -1.00) = 0.987654 \f]
START_TEST(s21_fmod_646)
{
    double x = 99999.987654321;
    double y = -1.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -0.75) = 0.237654 \f]
START_TEST(s21_fmod_647)
{
    double x = 99999.987654321;
    double y = -0.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -0.50) = 0.487654 \f]
START_TEST(s21_fmod_648)
{
    double x = 99999.987654321;
    double y = -0.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, -0.25) = 0.237654 \f]
START_TEST(s21_fmod_649)
{
    double x = 99999.987654321;
    double y = -0.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 0) = -nan \f]
START_TEST(s21_fmod_650)
{
    double x = 99999.987654321;
    double y = 0;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 0.25) = 0.237654 \f]
START_TEST(s21_fmod_651)
{
    double x = 99999.987654321;
    double y = 0.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 0.50) = 0.487654 \f]
START_TEST(s21_fmod_652)
{
    double x = 99999.987654321;
    double y = 0.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 0.75) = 0.237654 \f]
START_TEST(s21_fmod_653)
{
    double x = 99999.987654321;
    double y = 0.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 1.00) = 0.987654 \f]
START_TEST(s21_fmod_654)
{
    double x = 99999.987654321;
    double y = 1.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 1.25) = 1.237654 \f]
START_TEST(s21_fmod_655)
{
    double x = 99999.987654321;
    double y = 1.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 1.50) = 0.987654 \f]
START_TEST(s21_fmod_656)
{
    double x = 99999.987654321;
    double y = 1.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 1.75) = 1.487654 \f]
START_TEST(s21_fmod_657)
{
    double x = 99999.987654321;
    double y = 1.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 2.00) = 1.987654 \f]
START_TEST(s21_fmod_658)
{
    double x = 99999.987654321;
    double y = 2.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 2.25) = 0.987654 \f]
START_TEST(s21_fmod_659)
{
    double x = 99999.987654321;
    double y = 2.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 2.50) = 2.487654 \f]
START_TEST(s21_fmod_660)
{
    double x = 99999.987654321;
    double y = 2.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 2.75) = 1.737654 \f]
START_TEST(s21_fmod_661)
{
    double x = 99999.987654321;
    double y = 2.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 3.00) = 0.987654 \f]
START_TEST(s21_fmod_662)
{
    double x = 99999.987654321;
    double y = 3.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 3.25) = 0.737654 \f]
START_TEST(s21_fmod_663)
{
    double x = 99999.987654321;
    double y = 3.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 3.50) = 1.487654 \f]
START_TEST(s21_fmod_664)
{
    double x = 99999.987654321;
    double y = 3.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 3.75) = 2.487654 \f]
START_TEST(s21_fmod_665)
{
    double x = 99999.987654321;
    double y = 3.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 4.00) = 3.987654 \f]
START_TEST(s21_fmod_666)
{
    double x = 99999.987654321;
    double y = 4.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 4.25) = 1.737654 \f]
START_TEST(s21_fmod_667)
{
    double x = 99999.987654321;
    double y = 4.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 4.50) = 0.987654 \f]
START_TEST(s21_fmod_668)
{
    double x = 99999.987654321;
    double y = 4.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 4.75) = 2.987654 \f]
START_TEST(s21_fmod_669)
{
    double x = 99999.987654321;
    double y = 4.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 5.00) = 4.987654 \f]
START_TEST(s21_fmod_670)
{
    double x = 99999.987654321;
    double y = 5.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 5.25) = 3.237654 \f]
START_TEST(s21_fmod_671)
{
    double x = 99999.987654321;
    double y = 5.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 5.50) = 4.487654 \f]
START_TEST(s21_fmod_672)
{
    double x = 99999.987654321;
    double y = 5.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 5.75) = 1.737654 \f]
START_TEST(s21_fmod_673)
{
    double x = 99999.987654321;
    double y = 5.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 6.00) = 3.987654 \f]
START_TEST(s21_fmod_674)
{
    double x = 99999.987654321;
    double y = 6.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 6.25) = 6.237654 \f]
START_TEST(s21_fmod_675)
{
    double x = 99999.987654321;
    double y = 6.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 6.50) = 3.987654 \f]
START_TEST(s21_fmod_676)
{
    double x = 99999.987654321;
    double y = 6.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 6.75) = 5.487654 \f]
START_TEST(s21_fmod_677)
{
    double x = 99999.987654321;
    double y = 6.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 7.00) = 4.987654 \f]
START_TEST(s21_fmod_678)
{
    double x = 99999.987654321;
    double y = 7.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 7.25) = 0.737654 \f]
START_TEST(s21_fmod_679)
{
    double x = 99999.987654321;
    double y = 7.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 7.50) = 2.487654 \f]
START_TEST(s21_fmod_680)
{
    double x = 99999.987654321;
    double y = 7.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 7.75) = 1.737654 \f]
START_TEST(s21_fmod_681)
{
    double x = 99999.987654321;
    double y = 7.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 8.00) = 7.987654 \f]
START_TEST(s21_fmod_682)
{
    double x = 99999.987654321;
    double y = 8.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 8.25) = 1.737654 \f]
START_TEST(s21_fmod_683)
{
    double x = 99999.987654321;
    double y = 8.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 8.50) = 5.987654 \f]
START_TEST(s21_fmod_684)
{
    double x = 99999.987654321;
    double y = 8.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 8.75) = 4.987654 \f]
START_TEST(s21_fmod_685)
{
    double x = 99999.987654321;
    double y = 8.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 9.00) = 0.987654 \f]
START_TEST(s21_fmod_686)
{
    double x = 99999.987654321;
    double y = 9.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 9.25) = 7.487654 \f]
START_TEST(s21_fmod_687)
{
    double x = 99999.987654321;
    double y = 9.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 9.50) = 2.987654 \f]
START_TEST(s21_fmod_688)
{
    double x = 99999.987654321;
    double y = 9.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 9.75) = 3.987654 \f]
START_TEST(s21_fmod_689)
{
    double x = 99999.987654321;
    double y = 9.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 10.00) = 9.987654 \f]
START_TEST(s21_fmod_690)
{
    double x = 99999.987654321;
    double y = 10.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 10.25) = 0.987654 \f]
START_TEST(s21_fmod_691)
{
    double x = 99999.987654321;
    double y = 10.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 10.50) = 8.487654 \f]
START_TEST(s21_fmod_692)
{
    double x = 99999.987654321;
    double y = 10.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 10.75) = 3.487654 \f]
START_TEST(s21_fmod_693)
{
    double x = 99999.987654321;
    double y = 10.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 11.00) = 9.987654 \f]
START_TEST(s21_fmod_694)
{
    double x = 99999.987654321;
    double y = 11.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 11.25) = 9.987654 \f]
START_TEST(s21_fmod_695)
{
    double x = 99999.987654321;
    double y = 11.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 11.50) = 7.487654 \f]
START_TEST(s21_fmod_696)
{
    double x = 99999.987654321;
    double y = 11.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 11.75) = 7.487654 \f]
START_TEST(s21_fmod_697)
{
    double x = 99999.987654321;
    double y = 11.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 12.00) = 3.987654 \f]
START_TEST(s21_fmod_698)
{
    double x = 99999.987654321;
    double y = 12.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99999.987654321, 12.25) = 3.237654 \f]
START_TEST(s21_fmod_699)
{
    double x = 99999.987654321;
    double y = 12.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, -12.5) = 12.487654 \f]
START_TEST(s21_fmod_700)
{
    double x = 99.987654321;
    double y = -12.5;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 110.75) = 99.987654 \f]
START_TEST(s21_fmod_701)
{
    double x = 99.987654321;
    double y = 110.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 234.00) = 99.987654 \f]
START_TEST(s21_fmod_702)
{
    double x = 99.987654321;
    double y = 234.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 357.25) = 99.987654 \f]
START_TEST(s21_fmod_703)
{
    double x = 99.987654321;
    double y = 357.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 480.50) = 99.987654 \f]
START_TEST(s21_fmod_704)
{
    double x = 99.987654321;
    double y = 480.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 603.75) = 99.987654 \f]
START_TEST(s21_fmod_705)
{
    double x = 99.987654321;
    double y = 603.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 727.00) = 99.987654 \f]
START_TEST(s21_fmod_706)
{
    double x = 99.987654321;
    double y = 727.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 850.25) = 99.987654 \f]
START_TEST(s21_fmod_707)
{
    double x = 99.987654321;
    double y = 850.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 973.50) = 99.987654 \f]
START_TEST(s21_fmod_708)
{
    double x = 99.987654321;
    double y = 973.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 1096.75) = 99.987654 \f]
START_TEST(s21_fmod_709)
{
    double x = 99.987654321;
    double y = 1096.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 1220.00) = 99.987654 \f]
START_TEST(s21_fmod_710)
{
    double x = 99.987654321;
    double y = 1220.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 1343.25) = 99.987654 \f]
START_TEST(s21_fmod_711)
{
    double x = 99.987654321;
    double y = 1343.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 1466.50) = 99.987654 \f]
START_TEST(s21_fmod_712)
{
    double x = 99.987654321;
    double y = 1466.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 1589.75) = 99.987654 \f]
START_TEST(s21_fmod_713)
{
    double x = 99.987654321;
    double y = 1589.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 1713.00) = 99.987654 \f]
START_TEST(s21_fmod_714)
{
    double x = 99.987654321;
    double y = 1713.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 1836.25) = 99.987654 \f]
START_TEST(s21_fmod_715)
{
    double x = 99.987654321;
    double y = 1836.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 1959.50) = 99.987654 \f]
START_TEST(s21_fmod_716)
{
    double x = 99.987654321;
    double y = 1959.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 2082.75) = 99.987654 \f]
START_TEST(s21_fmod_717)
{
    double x = 99.987654321;
    double y = 2082.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 2206.00) = 99.987654 \f]
START_TEST(s21_fmod_718)
{
    double x = 99.987654321;
    double y = 2206.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 2329.25) = 99.987654 \f]
START_TEST(s21_fmod_719)
{
    double x = 99.987654321;
    double y = 2329.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 2452.50) = 99.987654 \f]
START_TEST(s21_fmod_720)
{
    double x = 99.987654321;
    double y = 2452.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 2575.75) = 99.987654 \f]
START_TEST(s21_fmod_721)
{
    double x = 99.987654321;
    double y = 2575.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 2699.00) = 99.987654 \f]
START_TEST(s21_fmod_722)
{
    double x = 99.987654321;
    double y = 2699.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 2822.25) = 99.987654 \f]
START_TEST(s21_fmod_723)
{
    double x = 99.987654321;
    double y = 2822.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 2945.50) = 99.987654 \f]
START_TEST(s21_fmod_724)
{
    double x = 99.987654321;
    double y = 2945.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 3068.75) = 99.987654 \f]
START_TEST(s21_fmod_725)
{
    double x = 99.987654321;
    double y = 3068.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 3192.00) = 99.987654 \f]
START_TEST(s21_fmod_726)
{
    double x = 99.987654321;
    double y = 3192.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 3315.25) = 99.987654 \f]
START_TEST(s21_fmod_727)
{
    double x = 99.987654321;
    double y = 3315.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 3438.50) = 99.987654 \f]
START_TEST(s21_fmod_728)
{
    double x = 99.987654321;
    double y = 3438.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 3561.75) = 99.987654 \f]
START_TEST(s21_fmod_729)
{
    double x = 99.987654321;
    double y = 3561.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 3685.00) = 99.987654 \f]
START_TEST(s21_fmod_730)
{
    double x = 99.987654321;
    double y = 3685.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 3808.25) = 99.987654 \f]
START_TEST(s21_fmod_731)
{
    double x = 99.987654321;
    double y = 3808.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 3931.50) = 99.987654 \f]
START_TEST(s21_fmod_732)
{
    double x = 99.987654321;
    double y = 3931.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 4054.75) = 99.987654 \f]
START_TEST(s21_fmod_733)
{
    double x = 99.987654321;
    double y = 4054.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 4178.00) = 99.987654 \f]
START_TEST(s21_fmod_734)
{
    double x = 99.987654321;
    double y = 4178.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 4301.25) = 99.987654 \f]
START_TEST(s21_fmod_735)
{
    double x = 99.987654321;
    double y = 4301.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 4424.50) = 99.987654 \f]
START_TEST(s21_fmod_736)
{
    double x = 99.987654321;
    double y = 4424.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 4547.75) = 99.987654 \f]
START_TEST(s21_fmod_737)
{
    double x = 99.987654321;
    double y = 4547.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 4671.00) = 99.987654 \f]
START_TEST(s21_fmod_738)
{
    double x = 99.987654321;
    double y = 4671.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 4794.25) = 99.987654 \f]
START_TEST(s21_fmod_739)
{
    double x = 99.987654321;
    double y = 4794.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 4917.50) = 99.987654 \f]
START_TEST(s21_fmod_740)
{
    double x = 99.987654321;
    double y = 4917.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 5040.75) = 99.987654 \f]
START_TEST(s21_fmod_741)
{
    double x = 99.987654321;
    double y = 5040.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 5164.00) = 99.987654 \f]
START_TEST(s21_fmod_742)
{
    double x = 99.987654321;
    double y = 5164.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 5287.25) = 99.987654 \f]
START_TEST(s21_fmod_743)
{
    double x = 99.987654321;
    double y = 5287.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 5410.50) = 99.987654 \f]
START_TEST(s21_fmod_744)
{
    double x = 99.987654321;
    double y = 5410.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 5533.75) = 99.987654 \f]
START_TEST(s21_fmod_745)
{
    double x = 99.987654321;
    double y = 5533.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 5657.00) = 99.987654 \f]
START_TEST(s21_fmod_746)
{
    double x = 99.987654321;
    double y = 5657.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 5780.25) = 99.987654 \f]
START_TEST(s21_fmod_747)
{
    double x = 99.987654321;
    double y = 5780.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 5903.50) = 99.987654 \f]
START_TEST(s21_fmod_748)
{
    double x = 99.987654321;
    double y = 5903.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 6026.75) = 99.987654 \f]
START_TEST(s21_fmod_749)
{
    double x = 99.987654321;
    double y = 6026.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 6150.00) = 99.987654 \f]
START_TEST(s21_fmod_750)
{
    double x = 99.987654321;
    double y = 6150.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 6273.25) = 99.987654 \f]
START_TEST(s21_fmod_751)
{
    double x = 99.987654321;
    double y = 6273.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 6396.50) = 99.987654 \f]
START_TEST(s21_fmod_752)
{
    double x = 99.987654321;
    double y = 6396.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 6519.75) = 99.987654 \f]
START_TEST(s21_fmod_753)
{
    double x = 99.987654321;
    double y = 6519.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 6643.00) = 99.987654 \f]
START_TEST(s21_fmod_754)
{
    double x = 99.987654321;
    double y = 6643.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 6766.25) = 99.987654 \f]
START_TEST(s21_fmod_755)
{
    double x = 99.987654321;
    double y = 6766.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 6889.50) = 99.987654 \f]
START_TEST(s21_fmod_756)
{
    double x = 99.987654321;
    double y = 6889.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7012.75) = 99.987654 \f]
START_TEST(s21_fmod_757)
{
    double x = 99.987654321;
    double y = 7012.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7136.00) = 99.987654 \f]
START_TEST(s21_fmod_758)
{
    double x = 99.987654321;
    double y = 7136.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7259.25) = 99.987654 \f]
START_TEST(s21_fmod_759)
{
    double x = 99.987654321;
    double y = 7259.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7382.50) = 99.987654 \f]
START_TEST(s21_fmod_760)
{
    double x = 99.987654321;
    double y = 7382.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7505.75) = 99.987654 \f]
START_TEST(s21_fmod_761)
{
    double x = 99.987654321;
    double y = 7505.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7629.00) = 99.987654 \f]
START_TEST(s21_fmod_762)
{
    double x = 99.987654321;
    double y = 7629.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7752.25) = 99.987654 \f]
START_TEST(s21_fmod_763)
{
    double x = 99.987654321;
    double y = 7752.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7875.50) = 99.987654 \f]
START_TEST(s21_fmod_764)
{
    double x = 99.987654321;
    double y = 7875.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 7998.75) = 99.987654 \f]
START_TEST(s21_fmod_765)
{
    double x = 99.987654321;
    double y = 7998.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 8122.00) = 99.987654 \f]
START_TEST(s21_fmod_766)
{
    double x = 99.987654321;
    double y = 8122.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 8245.25) = 99.987654 \f]
START_TEST(s21_fmod_767)
{
    double x = 99.987654321;
    double y = 8245.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 8368.50) = 99.987654 \f]
START_TEST(s21_fmod_768)
{
    double x = 99.987654321;
    double y = 8368.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 8491.75) = 99.987654 \f]
START_TEST(s21_fmod_769)
{
    double x = 99.987654321;
    double y = 8491.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 8615.00) = 99.987654 \f]
START_TEST(s21_fmod_770)
{
    double x = 99.987654321;
    double y = 8615.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 8738.25) = 99.987654 \f]
START_TEST(s21_fmod_771)
{
    double x = 99.987654321;
    double y = 8738.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 8861.50) = 99.987654 \f]
START_TEST(s21_fmod_772)
{
    double x = 99.987654321;
    double y = 8861.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 8984.75) = 99.987654 \f]
START_TEST(s21_fmod_773)
{
    double x = 99.987654321;
    double y = 8984.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 9108.00) = 99.987654 \f]
START_TEST(s21_fmod_774)
{
    double x = 99.987654321;
    double y = 9108.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 9231.25) = 99.987654 \f]
START_TEST(s21_fmod_775)
{
    double x = 99.987654321;
    double y = 9231.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 9354.50) = 99.987654 \f]
START_TEST(s21_fmod_776)
{
    double x = 99.987654321;
    double y = 9354.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 9477.75) = 99.987654 \f]
START_TEST(s21_fmod_777)
{
    double x = 99.987654321;
    double y = 9477.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 9601.00) = 99.987654 \f]
START_TEST(s21_fmod_778)
{
    double x = 99.987654321;
    double y = 9601.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 9724.25) = 99.987654 \f]
START_TEST(s21_fmod_779)
{
    double x = 99.987654321;
    double y = 9724.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 9847.50) = 99.987654 \f]
START_TEST(s21_fmod_780)
{
    double x = 99.987654321;
    double y = 9847.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 9970.75) = 99.987654 \f]
START_TEST(s21_fmod_781)
{
    double x = 99.987654321;
    double y = 9970.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 10094.00) = 99.987654 \f]
START_TEST(s21_fmod_782)
{
    double x = 99.987654321;
    double y = 10094.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 10217.25) = 99.987654 \f]
START_TEST(s21_fmod_783)
{
    double x = 99.987654321;
    double y = 10217.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 10340.50) = 99.987654 \f]
START_TEST(s21_fmod_784)
{
    double x = 99.987654321;
    double y = 10340.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 10463.75) = 99.987654 \f]
START_TEST(s21_fmod_785)
{
    double x = 99.987654321;
    double y = 10463.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 10587.00) = 99.987654 \f]
START_TEST(s21_fmod_786)
{
    double x = 99.987654321;
    double y = 10587.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 10710.25) = 99.987654 \f]
START_TEST(s21_fmod_787)
{
    double x = 99.987654321;
    double y = 10710.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 10833.50) = 99.987654 \f]
START_TEST(s21_fmod_788)
{
    double x = 99.987654321;
    double y = 10833.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 10956.75) = 99.987654 \f]
START_TEST(s21_fmod_789)
{
    double x = 99.987654321;
    double y = 10956.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 11080.00) = 99.987654 \f]
START_TEST(s21_fmod_790)
{
    double x = 99.987654321;
    double y = 11080.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 11203.25) = 99.987654 \f]
START_TEST(s21_fmod_791)
{
    double x = 99.987654321;
    double y = 11203.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 11326.50) = 99.987654 \f]
START_TEST(s21_fmod_792)
{
    double x = 99.987654321;
    double y = 11326.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 11449.75) = 99.987654 \f]
START_TEST(s21_fmod_793)
{
    double x = 99.987654321;
    double y = 11449.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 11573.00) = 99.987654 \f]
START_TEST(s21_fmod_794)
{
    double x = 99.987654321;
    double y = 11573.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 11696.25) = 99.987654 \f]
START_TEST(s21_fmod_795)
{
    double x = 99.987654321;
    double y = 11696.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 11819.50) = 99.987654 \f]
START_TEST(s21_fmod_796)
{
    double x = 99.987654321;
    double y = 11819.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 11942.75) = 99.987654 \f]
START_TEST(s21_fmod_797)
{
    double x = 99.987654321;
    double y = 11942.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 12066.00) = 99.987654 \f]
START_TEST(s21_fmod_798)
{
    double x = 99.987654321;
    double y = 12066.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(99.987654321, 12189.25) = 99.987654 \f]
START_TEST(s21_fmod_799)
{
    double x = 99.987654321;
    double y = 12189.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, -12.5) = -0.000000 \f]
START_TEST(s21_fmod_800)
{
    double x = -999999999999999.987654321;
    double y = -12.5;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 200.75) = -40.250000 \f]
START_TEST(s21_fmod_801)
{
    double x = -999999999999999.987654321;
    double y = 200.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 414.00) = -28.000000 \f]
START_TEST(s21_fmod_802)
{
    double x = -999999999999999.987654321;
    double y = 414.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 627.25) = -109.500000 \f]
START_TEST(s21_fmod_803)
{
    double x = -999999999999999.987654321;
    double y = 627.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 840.50) = -780.000000 \f]
START_TEST(s21_fmod_804)
{
    double x = -999999999999999.987654321;
    double y = 840.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 1053.75) = -692.500000 \f]
START_TEST(s21_fmod_805)
{
    double x = -999999999999999.987654321;
    double y = 1053.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 1267.00) = -188.000000 \f]
START_TEST(s21_fmod_806)
{
    double x = -999999999999999.987654321;
    double y = 1267.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 1480.25) = -303.250000 \f]
START_TEST(s21_fmod_807)
{
    double x = -999999999999999.987654321;
    double y = 1480.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 1693.50) = -889.000000 \f]
START_TEST(s21_fmod_808)
{
    double x = -999999999999999.987654321;
    double y = 1693.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 1906.75) = -77.000000 \f]
START_TEST(s21_fmod_809)
{
    double x = -999999999999999.987654321;
    double y = 1906.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 2120.00) = -1160.000000 \f]
START_TEST(s21_fmod_810)
{
    double x = -999999999999999.987654321;
    double y = 2120.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 2333.25) = -1270.000000 \f]
START_TEST(s21_fmod_811)
{
    double x = -999999999999999.987654321;
    double y = 2333.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 2546.50) = -1803.000000 \f]
START_TEST(s21_fmod_812)
{
    double x = -999999999999999.987654321;
    double y = 2546.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 2759.75) = -692.000000 \f]
START_TEST(s21_fmod_813)
{
    double x = -999999999999999.987654321;
    double y = 2759.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 2973.00) = -580.000000 \f]
START_TEST(s21_fmod_814)
{
    double x = -999999999999999.987654321;
    double y = 2973.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 3186.25) = -2893.750000 \f]
START_TEST(s21_fmod_815)
{
    double x = -999999999999999.987654321;
    double y = 3186.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 3399.50) = -2007.500000 \f]
START_TEST(s21_fmod_816)
{
    double x = -999999999999999.987654321;
    double y = 3399.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 3612.75) = -1546.750000 \f]
START_TEST(s21_fmod_817)
{
    double x = -999999999999999.987654321;
    double y = 3612.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 3826.00) = -1094.000000 \f]
START_TEST(s21_fmod_818)
{
    double x = -999999999999999.987654321;
    double y = 3826.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 4039.25) = -2928.000000 \f]
START_TEST(s21_fmod_819)
{
    double x = -999999999999999.987654321;
    double y = 4039.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 4252.50) = -1472.500000 \f]
START_TEST(s21_fmod_820)
{
    double x = -999999999999999.987654321;
    double y = 4252.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 4465.75) = -4082.500000 \f]
START_TEST(s21_fmod_821)
{
    double x = -999999999999999.987654321;
    double y = 4465.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 4679.00) = -130.000000 \f]
START_TEST(s21_fmod_822)
{
    double x = -999999999999999.987654321;
    double y = 4679.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 4892.25) = -3524.500000 \f]
START_TEST(s21_fmod_823)
{
    double x = -999999999999999.987654321;
    double y = 4892.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 5105.50) = -96.500000 \f]
START_TEST(s21_fmod_824)
{
    double x = -999999999999999.987654321;
    double y = 5105.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 5318.75) = -3081.250000 \f]
START_TEST(s21_fmod_825)
{
    double x = -999999999999999.987654321;
    double y = 5318.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 5532.00) = -5128.000000 \f]
START_TEST(s21_fmod_826)
{
    double x = -999999999999999.987654321;
    double y = 5532.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 5745.25) = -4881.500000 \f]
START_TEST(s21_fmod_827)
{
    double x = -999999999999999.987654321;
    double y = 5745.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 5958.50) = -2315.500000 \f]
START_TEST(s21_fmod_828)
{
    double x = -999999999999999.987654321;
    double y = 5958.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 6171.75) = -3427.750000 \f]
START_TEST(s21_fmod_829)
{
    double x = -999999999999999.987654321;
    double y = 6171.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 6385.00) = -4900.000000 \f]
START_TEST(s21_fmod_830)
{
    double x = -999999999999999.987654321;
    double y = 6385.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 6598.25) = -1923.500000 \f]
START_TEST(s21_fmod_831)
{
    double x = -999999999999999.987654321;
    double y = 6598.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 6811.50) = -5746.000000 \f]
START_TEST(s21_fmod_832)
{
    double x = -999999999999999.987654321;
    double y = 6811.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 7024.75) = -4605.000000 \f]
START_TEST(s21_fmod_833)
{
    double x = -999999999999999.987654321;
    double y = 7024.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 7238.00) = -5774.000000 \f]
START_TEST(s21_fmod_834)
{
    double x = -999999999999999.987654321;
    double y = 7238.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 7451.25) = -4213.750000 \f]
START_TEST(s21_fmod_835)
{
    double x = -999999999999999.987654321;
    double y = 7451.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 7664.50) = -7236.000000 \f]
START_TEST(s21_fmod_836)
{
    double x = -999999999999999.987654321;
    double y = 7664.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 7877.75) = -3300.000000 \f]
START_TEST(s21_fmod_837)
{
    double x = -999999999999999.987654321;
    double y = 7877.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 8091.00) = -280.000000 \f]
START_TEST(s21_fmod_838)
{
    double x = -999999999999999.987654321;
    double y = 8091.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 8304.25) = -7397.500000 \f]
START_TEST(s21_fmod_839)
{
    double x = -999999999999999.987654321;
    double y = 8304.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 8517.50) = -497.500000 \f]
START_TEST(s21_fmod_840)
{
    double x = -999999999999999.987654321;
    double y = 8517.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 8730.75) = -5215.750000 \f]
START_TEST(s21_fmod_841)
{
    double x = -999999999999999.987654321;
    double y = 8730.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 8944.00) = -2768.000000 \f]
START_TEST(s21_fmod_842)
{
    double x = -999999999999999.987654321;
    double y = 8944.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 9157.25) = -4209.250000 \f]
START_TEST(s21_fmod_843)
{
    double x = -999999999999999.987654321;
    double y = 9157.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 9370.50) = -4393.000000 \f]
START_TEST(s21_fmod_844)
{
    double x = -999999999999999.987654321;
    double y = 9370.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 9583.75) = -1907.500000 \f]
START_TEST(s21_fmod_845)
{
    double x = -999999999999999.987654321;
    double y = 9583.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 9797.00) = -3828.000000 \f]
START_TEST(s21_fmod_846)
{
    double x = -999999999999999.987654321;
    double y = 9797.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 10010.25) = -9221.500000 \f]
START_TEST(s21_fmod_847)
{
    double x = -999999999999999.987654321;
    double y = 10010.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 10223.50) = -10159.500000 \f]
START_TEST(s21_fmod_848)
{
    double x = -999999999999999.987654321;
    double y = 10223.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 10436.75) = -10246.500000 \f]
START_TEST(s21_fmod_849)
{
    double x = -999999999999999.987654321;
    double y = 10436.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 10650.00) = -250.000000 \f]
START_TEST(s21_fmod_850)
{
    double x = -999999999999999.987654321;
    double y = 10650.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 10863.25) = -7232.750000 \f]
START_TEST(s21_fmod_851)
{
    double x = -999999999999999.987654321;
    double y = 10863.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 11076.50) = -546.500000 \f]
START_TEST(s21_fmod_852)
{
    double x = -999999999999999.987654321;
    double y = 11076.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 11289.75) = -11008.750000 \f]
START_TEST(s21_fmod_853)
{
    double x = -999999999999999.987654321;
    double y = 11289.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 11503.00) = -2465.000000 \f]
START_TEST(s21_fmod_854)
{
    double x = -999999999999999.987654321;
    double y = 11503.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 11716.25) = -2592.500000 \f]
START_TEST(s21_fmod_855)
{
    double x = -999999999999999.987654321;
    double y = 11716.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 11929.50) = -10603.000000 \f]
START_TEST(s21_fmod_856)
{
    double x = -999999999999999.987654321;
    double y = 11929.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 12142.75) = -5838.500000 \f]
START_TEST(s21_fmod_857)
{
    double x = -999999999999999.987654321;
    double y = 12142.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 12356.00) = -3572.000000 \f]
START_TEST(s21_fmod_858)
{
    double x = -999999999999999.987654321;
    double y = 12356.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 12569.25) = -5350.000000 \f]
START_TEST(s21_fmod_859)
{
    double x = -999999999999999.987654321;
    double y = 12569.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 12782.50) = -9495.000000 \f]
START_TEST(s21_fmod_860)
{
    double x = -999999999999999.987654321;
    double y = 12782.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 12995.75) = -2573.000000 \f]
START_TEST(s21_fmod_861)
{
    double x = -999999999999999.987654321;
    double y = 12995.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 13209.00) = -11878.000000 \f]
START_TEST(s21_fmod_862)
{
    double x = -999999999999999.987654321;
    double y = 13209.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 13422.25) = -3770.250000 \f]
START_TEST(s21_fmod_863)
{
    double x = -999999999999999.987654321;
    double y = 13422.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 13635.50) = -12879.500000 \f]
START_TEST(s21_fmod_864)
{
    double x = -999999999999999.987654321;
    double y = 13635.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 13848.75) = -1967.500000 \f]
START_TEST(s21_fmod_865)
{
    double x = -999999999999999.987654321;
    double y = 13848.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 14062.00) = -1048.000000 \f]
START_TEST(s21_fmod_866)
{
    double x = -999999999999999.987654321;
    double y = 14062.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 14275.25) = -6703.500000 \f]
START_TEST(s21_fmod_867)
{
    double x = -999999999999999.987654321;
    double y = 14275.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 14488.50) = -8117.500000 \f]
START_TEST(s21_fmod_868)
{
    double x = -999999999999999.987654321;
    double y = 14488.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 14701.75) = -12602.500000 \f]
START_TEST(s21_fmod_869)
{
    double x = -999999999999999.987654321;
    double y = 14701.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 14915.00) = -2725.000000 \f]
START_TEST(s21_fmod_870)
{
    double x = -999999999999999.987654321;
    double y = 14915.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 15128.25) = -7359.250000 \f]
START_TEST(s21_fmod_871)
{
    double x = -999999999999999.987654321;
    double y = 15128.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 15341.50) = -2032.500000 \f]
START_TEST(s21_fmod_872)
{
    double x = -999999999999999.987654321;
    double y = 15341.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 15554.75) = -11739.750000 \f]
START_TEST(s21_fmod_873)
{
    double x = -999999999999999.987654321;
    double y = 15554.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 15768.00) = -8344.000000 \f]
START_TEST(s21_fmod_874)
{
    double x = -999999999999999.987654321;
    double y = 15768.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 15981.25) = -14212.500000 \f]
START_TEST(s21_fmod_875)
{
    double x = -999999999999999.987654321;
    double y = 15981.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 16194.50) = -6425.000000 \f]
START_TEST(s21_fmod_876)
{
    double x = -999999999999999.987654321;
    double y = 16194.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 16407.75) = -11992.000000 \f]
START_TEST(s21_fmod_877)
{
    double x = -999999999999999.987654321;
    double y = 16407.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 16621.00) = -10647.000000 \f]
START_TEST(s21_fmod_878)
{
    double x = -999999999999999.987654321;
    double y = 16621.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 16834.25) = -4189.750000 \f]
START_TEST(s21_fmod_879)
{
    double x = -999999999999999.987654321;
    double y = 16834.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 17047.50) = -6227.500000 \f]
START_TEST(s21_fmod_880)
{
    double x = -999999999999999.987654321;
    double y = 17047.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 17260.75) = -8124.000000 \f]
START_TEST(s21_fmod_881)
{
    double x = -999999999999999.987654321;
    double y = 17260.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 17474.00) = -14498.000000 \f]
START_TEST(s21_fmod_882)
{
    double x = -999999999999999.987654321;
    double y = 17474.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 17687.25) = -13836.250000 \f]
START_TEST(s21_fmod_883)
{
    double x = -999999999999999.987654321;
    double y = 17687.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 17900.50) = -12335.000000 \f]
START_TEST(s21_fmod_884)
{
    double x = -999999999999999.987654321;
    double y = 17900.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 18113.75) = -5090.000000 \f]
START_TEST(s21_fmod_885)
{
    double x = -999999999999999.987654321;
    double y = 18113.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 18327.00) = -5536.000000 \f]
START_TEST(s21_fmod_886)
{
    double x = -999999999999999.987654321;
    double y = 18327.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 18540.25) = -6641.000000 \f]
START_TEST(s21_fmod_887)
{
    double x = -999999999999999.987654321;
    double y = 18540.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 18753.50) = -15027.500000 \f]
START_TEST(s21_fmod_888)
{
    double x = -999999999999999.987654321;
    double y = 18753.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 18966.75) = -5760.250000 \f]
START_TEST(s21_fmod_889)
{
    double x = -999999999999999.987654321;
    double y = 18966.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 19180.00) = -9960.000000 \f]
START_TEST(s21_fmod_890)
{
    double x = -999999999999999.987654321;
    double y = 19180.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 19393.25) = -17412.500000 \f]
START_TEST(s21_fmod_891)
{
    double x = -999999999999999.987654321;
    double y = 19393.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 19606.50) = -6296.500000 \f]
START_TEST(s21_fmod_892)
{
    double x = -999999999999999.987654321;
    double y = 19606.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 19819.75) = -15358.000000 \f]
START_TEST(s21_fmod_893)
{
    double x = -999999999999999.987654321;
    double y = 19819.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 20033.00) = -15300.000000 \f]
START_TEST(s21_fmod_894)
{
    double x = -999999999999999.987654321;
    double y = 20033.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 20246.25) = -12587.500000 \f]
START_TEST(s21_fmod_895)
{
    double x = -999999999999999.987654321;
    double y = 20246.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 20459.50) = -5630.500000 \f]
START_TEST(s21_fmod_896)
{
    double x = -999999999999999.987654321;
    double y = 20459.50;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 20672.75) = -7900.250000 \f]
START_TEST(s21_fmod_897)
{
    double x = -999999999999999.987654321;
    double y = 20672.75;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 20886.00) = -2176.000000 \f]
START_TEST(s21_fmod_898)
{
    double x = -999999999999999.987654321;
    double y = 20886.00;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-999999999999999.987654321, 21099.25) = -1490.250000 \f]
START_TEST(s21_fmod_899)
{
    double x = -999999999999999.987654321;
    double y = 21099.25;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, -25.0) = -24.987654 \f]
START_TEST(s21_fmod_900)
{
    double x = -9999999.987654321;
    double y = -25.0;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 998.214) = -890.349654 \f]
START_TEST(s21_fmod_901)
{
    double x = -9999999.987654321;
    double y = 998.214;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 2021.428) = -2017.099654 \f]
START_TEST(s21_fmod_902)
{
    double x = -9999999.987654321;
    double y = 2021.428;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 3044.642) = -1395.659654 \f]
START_TEST(s21_fmod_903)
{
    double x = -9999999.987654321;
    double y = 3044.642;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 4067.856) = -1209.939654 \f]
START_TEST(s21_fmod_904)
{
    double x = -9999999.987654321;
    double y = 4067.856;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 5091.070) = -1138.507654 \f]
START_TEST(s21_fmod_905)
{
    double x = -9999999.987654321;
    double y = 5091.070;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 6114.284) = -3145.647654 \f]
START_TEST(s21_fmod_906)
{
    double x = -9999999.987654321;
    double y = 6114.284;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 7137.498) = -365.289654 \f]
START_TEST(s21_fmod_907)
{
    double x = -9999999.987654321;
    double y = 7137.498;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 8160.712) = -3127.787654 \f]
START_TEST(s21_fmod_908)
{
    double x = -9999999.987654321;
    double y = 8160.712;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 9183.926) = -7888.499654 \f]
START_TEST(s21_fmod_909)
{
    double x = -9999999.987654321;
    double y = 9183.926;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 10207.140) = -7209.927654 \f]
START_TEST(s21_fmod_910)
{
    double x = -9999999.987654321;
    double y = 10207.140;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 11230.354) = -4984.927654 \f]
START_TEST(s21_fmod_911)
{
    double x = -9999999.987654321;
    double y = 11230.354;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 12253.568) = -1088.499654 \f]
START_TEST(s21_fmod_912)
{
    double x = -9999999.987654321;
    double y = 12253.568;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 13276.782) = -2583.141654 \f]
START_TEST(s21_fmod_913)
{
    double x = -9999999.987654321;
    double y = 13276.782;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 14299.996) = -4302.783654 \f]
START_TEST(s21_fmod_914)
{
    double x = -9999999.987654321;
    double y = 14299.996;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 15323.210) = -9267.067654 \f]
START_TEST(s21_fmod_915)
{
    double x = -9999999.987654321;
    double y = 15323.210;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 16346.424) = -12334.923654 \f]
START_TEST(s21_fmod_916)
{
    double x = -9999999.987654321;
    double y = 16346.424;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 17369.638) = -12458.137654 \f]
START_TEST(s21_fmod_917)
{
    double x = -9999999.987654321;
    double y = 17369.638;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 18392.852) = -12681.351654 \f]
START_TEST(s21_fmod_918)
{
    double x = -9999999.987654321;
    double y = 18392.852;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 19416.066) = -725.997654 \f]
START_TEST(s21_fmod_919)
{
    double x = -9999999.987654321;
    double y = 19416.066;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 20439.280) = -5192.067654 \f]
START_TEST(s21_fmod_920)
{
    double x = -9999999.987654321;
    double y = 20439.280;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 21462.494) = -19940.277654 \f]
START_TEST(s21_fmod_921)
{
    double x = -9999999.987654321;
    double y = 21462.494;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 22485.708) = -16345.635654 \f]
START_TEST(s21_fmod_922)
{
    double x = -9999999.987654321;
    double y = 22485.708;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 23508.922) = -8708.137654 \f]
START_TEST(s21_fmod_923)
{
    double x = -9999999.987654321;
    double y = 23508.922;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 24532.136) = -15420.635654 \f]
START_TEST(s21_fmod_924)
{
    double x = -9999999.987654321;
    double y = 24532.136;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 25555.350) = -7858.137654 \f]
START_TEST(s21_fmod_925)
{
    double x = -9999999.987654321;
    double y = 25555.350;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 26578.564) = -6459.923654 \f]
START_TEST(s21_fmod_926)
{
    double x = -9999999.987654321;
    double y = 26578.564;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 27601.778) = -8156.351654 \f]
START_TEST(s21_fmod_927)
{
    double x = -9999999.987654321;
    double y = 27601.778;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 28624.992) = -9877.779654 \f]
START_TEST(s21_fmod_928)
{
    double x = -9999999.987654321;
    double y = 28624.992;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 29648.206) = -8554.565654 \f]
START_TEST(s21_fmod_929)
{
    double x = -9999999.987654321;
    double y = 29648.206;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 30671.420) = -1117.067654 \f]
START_TEST(s21_fmod_930)
{
    double x = -9999999.987654321;
    double y = 30671.420;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 31694.634) = -16190.277654 \f]
START_TEST(s21_fmod_931)
{
    double x = -9999999.987654321;
    double y = 31694.634;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 32717.848) = -21056.347654 \f]
START_TEST(s21_fmod_932)
{
    double x = -9999999.987654321;
    double y = 32717.848;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 33741.062) = -12645.635654 \f]
START_TEST(s21_fmod_933)
{
    double x = -9999999.987654321;
    double y = 33741.062;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 34764.276) = -22652.775654 \f]
START_TEST(s21_fmod_934)
{
    double x = -9999999.987654321;
    double y = 34764.276;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 35787.490) = -15290.277654 \f]
START_TEST(s21_fmod_935)
{
    double x = -9999999.987654321;
    double y = 35787.490;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 36810.704) = -24299.203654 \f]
START_TEST(s21_fmod_936)
{
    double x = -9999999.987654321;
    double y = 36810.704;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 37833.918) = -11845.635654 \f]
START_TEST(s21_fmod_937)
{
    double x = -9999999.987654321;
    double y = 37833.918;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 38857.132) = -13717.063654 \f]
START_TEST(s21_fmod_938)
{
    double x = -9999999.987654321;
    double y = 38857.132;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 39880.346) = -29913.487654 \f]
START_TEST(s21_fmod_939)
{
    double x = -9999999.987654321;
    double y = 39880.346;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 40903.560) = -19531.347654 \f]
START_TEST(s21_fmod_940)
{
    double x = -9999999.987654321;
    double y = 40903.560;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 41926.774) = -21427.775654 \f]
START_TEST(s21_fmod_941)
{
    double x = -9999999.987654321;
    double y = 41926.774;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 42949.988) = -35602.771654 \f]
START_TEST(s21_fmod_942)
{
    double x = -9999999.987654321;
    double y = 42949.988;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 43973.202) = -18083.133654 \f]
START_TEST(s21_fmod_943)
{
    double x = -9999999.987654321;
    double y = 43973.202;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 44996.416) = -10795.635654 \f]
START_TEST(s21_fmod_944)
{
    double x = -9999999.987654321;
    double y = 44996.416;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 46019.630) = -13740.277654 \f]
START_TEST(s21_fmod_945)
{
    double x = -9999999.987654321;
    double y = 46019.630;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 47042.844) = -26917.059654 \f]
START_TEST(s21_fmod_946)
{
    double x = -9999999.987654321;
    double y = 47042.844;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 48066.058) = -2259.923654 \f]
START_TEST(s21_fmod_947)
{
    double x = -9999999.987654321;
    double y = 48066.058;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 49089.272) = -34877.771654 \f]
START_TEST(s21_fmod_948)
{
    double x = -9999999.987654321;
    double y = 49089.272;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 50112.486) = -27615.273654 \f]
START_TEST(s21_fmod_949)
{
    double x = -9999999.987654321;
    double y = 50112.486;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 51135.700) = -28538.487654 \f]
START_TEST(s21_fmod_950)
{
    double x = -9999999.987654321;
    double y = 51135.700;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 52158.914) = -37647.413654 \f]
START_TEST(s21_fmod_951)
{
    double x = -9999999.987654321;
    double y = 52158.914;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 53182.128) = -1759.923654 \f]
START_TEST(s21_fmod_952)
{
    double x = -9999999.987654321;
    double y = 53182.128;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 54205.342) = -26217.059654 \f]
START_TEST(s21_fmod_953)
{
    double x = -9999999.987654321;
    double y = 54205.342;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 55228.556) = -3631.351654 \f]
START_TEST(s21_fmod_954)
{
    double x = -9999999.987654321;
    double y = 55228.556;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 56251.770) = -43436.697654 \f]
START_TEST(s21_fmod_955)
{
    double x = -9999999.987654321;
    double y = 56251.770;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 57274.984) = -34152.771654 \f]
START_TEST(s21_fmod_956)
{
    double x = -9999999.987654321;
    double y = 57274.984;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 58298.198) = -31008.129654 \f]
START_TEST(s21_fmod_957)
{
    double x = -9999999.987654321;
    double y = 58298.198;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 59321.412) = -34002.771654 \f]
START_TEST(s21_fmod_958)
{
    double x = -9999999.987654321;
    double y = 59321.412;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 60344.626) = -43136.697654 \f]
START_TEST(s21_fmod_959)
{
    double x = -9999999.987654321;
    double y = 60344.626;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 61367.840) = -58409.907654 \f]
START_TEST(s21_fmod_960)
{
    double x = -9999999.987654321;
    double y = 61367.840;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 62391.054) = -17431.347654 \f]
START_TEST(s21_fmod_961)
{
    double x = -9999999.987654321;
    double y = 62391.054;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 63414.268) = -43959.911654 \f]
START_TEST(s21_fmod_962)
{
    double x = -9999999.987654321;
    double y = 63414.268;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 64437.482) = -12190.277654 \f]
START_TEST(s21_fmod_963)
{
    double x = -9999999.987654321;
    double y = 64437.482;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 65460.696) = -49974.195654 \f]
START_TEST(s21_fmod_964)
{
    double x = -9999999.987654321;
    double y = 65460.696;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 66483.910) = -27413.487654 \f]
START_TEST(s21_fmod_965)
{
    double x = -9999999.987654321;
    double y = 66483.910;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 67507.124) = -8945.635654 \f]
START_TEST(s21_fmod_966)
{
    double x = -9999999.987654321;
    double y = 67507.124;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 68530.338) = -63100.977654 \f]
START_TEST(s21_fmod_967)
{
    double x = -9999999.987654321;
    double y = 68530.338;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 69553.552) = -53842.051654 \f]
START_TEST(s21_fmod_968)
{
    double x = -9999999.987654321;
    double y = 69553.552;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 70576.766) = -48675.981654 \f]
START_TEST(s21_fmod_969)
{
    double x = -9999999.987654321;
    double y = 70576.766;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 71599.980) = -47602.767654 \f]
START_TEST(s21_fmod_970)
{
    double x = -9999999.987654321;
    double y = 71599.980;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 72623.194) = -50622.409654 \f]
START_TEST(s21_fmod_971)
{
    double x = -9999999.987654321;
    double y = 72623.194;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 73646.408) = -57734.907654 \f]
START_TEST(s21_fmod_972)
{
    double x = -9999999.987654321;
    double y = 73646.408;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 74669.622) = -68940.261654 \f]
START_TEST(s21_fmod_973)
{
    double x = -9999999.987654321;
    double y = 74669.622;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 75692.836) = -8545.635654 \f]
START_TEST(s21_fmod_974)
{
    double x = -9999999.987654321;
    double y = 75692.836;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 76716.050) = -26913.487654 \f]
START_TEST(s21_fmod_975)
{
    double x = -9999999.987654321;
    double y = 76716.050;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 77739.264) = -49374.195654 \f]
START_TEST(s21_fmod_976)
{
    double x = -9999999.987654321;
    double y = 77739.264;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 78762.478) = -75927.759654 \f]
START_TEST(s21_fmod_977)
{
    double x = -9999999.987654321;
    double y = 78762.478;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 79785.692) = -26788.487654 \f]
START_TEST(s21_fmod_978)
{
    double x = -9999999.987654321;
    double y = 79785.692;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 80808.906) = -60504.549654 \f]
START_TEST(s21_fmod_979)
{
    double x = -9999999.987654321;
    double y = 80808.906;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 81832.120) = -16481.347654 \f]
START_TEST(s21_fmod_980)
{
    double x = -9999999.987654321;
    double y = 81832.120;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 82855.334) = -57359.907654 \f]
START_TEST(s21_fmod_981)
{
    double x = -9999999.987654321;
    double y = 82855.334;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 83878.548) = -18452.775654 \f]
START_TEST(s21_fmod_982)
{
    double x = -9999999.987654321;
    double y = 83878.548;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 84901.762) = -66493.833654 \f]
START_TEST(s21_fmod_983)
{
    double x = -9999999.987654321;
    double y = 84901.762;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 85924.976) = -32702.771654 \f]
START_TEST(s21_fmod_984)
{
    double x = -9999999.987654321;
    double y = 85924.976;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 86948.190) = -958.137654 \f]
START_TEST(s21_fmod_985)
{
    double x = -9999999.987654321;
    double y = 86948.190;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 87971.404) = -59231.335654 \f]
START_TEST(s21_fmod_986)
{
    double x = -9999999.987654321;
    double y = 87971.404;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 88994.618) = -32602.771654 \f]
START_TEST(s21_fmod_987)
{
    double x = -9999999.987654321;
    double y = 88994.618;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 90017.832) = -8020.635654 \f]
START_TEST(s21_fmod_988)
{
    double x = -9999999.987654321;
    double y = 90017.832;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 91041.046) = -76525.973654 \f]
START_TEST(s21_fmod_989)
{
    double x = -9999999.987654321;
    double y = 91041.046;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 92064.260) = -57059.907654 \f]
START_TEST(s21_fmod_990)
{
    double x = -9999999.987654321;
    double y = 92064.260;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 93087.474) = -39640.269654 \f]
START_TEST(s21_fmod_991)
{
    double x = -9999999.987654321;
    double y = 93087.474;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 94110.688) = -24267.059654 \f]
START_TEST(s21_fmod_992)
{
    double x = -9999999.987654321;
    double y = 94110.688;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 95133.902) = -10940.277654 \f]
START_TEST(s21_fmod_993)
{
    double x = -9999999.987654321;
    double y = 95133.902;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 96157.116) = -95817.039654 \f]
START_TEST(s21_fmod_994)
{
    double x = -9999999.987654321;
    double y = 96157.116;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 97180.330) = -87606.327654 \f]
START_TEST(s21_fmod_995)
{
    double x = -9999999.987654321;
    double y = 97180.330;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 98203.544) = -81442.043654 \f]
START_TEST(s21_fmod_996)
{
    double x = -9999999.987654321;
    double y = 98203.544;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 99226.758) = -77324.187654 \f]
START_TEST(s21_fmod_997)
{
    double x = -9999999.987654321;
    double y = 99226.758;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 100249.972) = -75252.759654 \f]
START_TEST(s21_fmod_998)
{
    double x = -9999999.987654321;
    double y = 100249.972;

    s21_test_fmod(x, y);
}

/// @brief \f[ fmod(-9999999.987654321, 101273.186) = -75227.759654 \f]
START_TEST(s21_fmod_999)
{
    double x = -9999999.987654321;
    double y = 101273.186;

    s21_test_fmod(x, y);
}


/**
 * @brief first set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_first_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod first case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_0);
    tcase_add_test(tc_fmod, s21_fmod_1);
    tcase_add_test(tc_fmod, s21_fmod_2);
    tcase_add_test(tc_fmod, s21_fmod_3);
    tcase_add_test(tc_fmod, s21_fmod_4);
    tcase_add_test(tc_fmod, s21_fmod_5);
    tcase_add_test(tc_fmod, s21_fmod_6);
    tcase_add_test(tc_fmod, s21_fmod_7);
    tcase_add_test(tc_fmod, s21_fmod_8);
    tcase_add_test(tc_fmod, s21_fmod_9);
    tcase_add_test(tc_fmod, s21_fmod_10);
    tcase_add_test(tc_fmod, s21_fmod_11);
    tcase_add_test(tc_fmod, s21_fmod_12);
    tcase_add_test(tc_fmod, s21_fmod_13);
    tcase_add_test(tc_fmod, s21_fmod_14);
    tcase_add_test(tc_fmod, s21_fmod_15);
    tcase_add_test(tc_fmod, s21_fmod_16);
    tcase_add_test(tc_fmod, s21_fmod_17);
    tcase_add_test(tc_fmod, s21_fmod_18);
    tcase_add_test(tc_fmod, s21_fmod_19);
    tcase_add_test(tc_fmod, s21_fmod_20);
    tcase_add_test(tc_fmod, s21_fmod_21);
    tcase_add_test(tc_fmod, s21_fmod_22);
    tcase_add_test(tc_fmod, s21_fmod_23);
    tcase_add_test(tc_fmod, s21_fmod_24);
    tcase_add_test(tc_fmod, s21_fmod_25);
    tcase_add_test(tc_fmod, s21_fmod_26);
    tcase_add_test(tc_fmod, s21_fmod_27);
    tcase_add_test(tc_fmod, s21_fmod_28);
    tcase_add_test(tc_fmod, s21_fmod_29);
    tcase_add_test(tc_fmod, s21_fmod_30);
    tcase_add_test(tc_fmod, s21_fmod_31);
    tcase_add_test(tc_fmod, s21_fmod_32);
    tcase_add_test(tc_fmod, s21_fmod_33);
    tcase_add_test(tc_fmod, s21_fmod_34);
    tcase_add_test(tc_fmod, s21_fmod_35);
    tcase_add_test(tc_fmod, s21_fmod_36);
    tcase_add_test(tc_fmod, s21_fmod_37);
    tcase_add_test(tc_fmod, s21_fmod_38);
    tcase_add_test(tc_fmod, s21_fmod_39);
    tcase_add_test(tc_fmod, s21_fmod_40);
    tcase_add_test(tc_fmod, s21_fmod_41);
    tcase_add_test(tc_fmod, s21_fmod_42);
    tcase_add_test(tc_fmod, s21_fmod_43);
    tcase_add_test(tc_fmod, s21_fmod_44);
    tcase_add_test(tc_fmod, s21_fmod_45);
    tcase_add_test(tc_fmod, s21_fmod_46);
    tcase_add_test(tc_fmod, s21_fmod_47);
    tcase_add_test(tc_fmod, s21_fmod_48);
    tcase_add_test(tc_fmod, s21_fmod_49);
    tcase_add_test(tc_fmod, s21_fmod_50);
    tcase_add_test(tc_fmod, s21_fmod_51);
    tcase_add_test(tc_fmod, s21_fmod_52);
    tcase_add_test(tc_fmod, s21_fmod_53);
    tcase_add_test(tc_fmod, s21_fmod_54);
    tcase_add_test(tc_fmod, s21_fmod_55);
    tcase_add_test(tc_fmod, s21_fmod_56);
    tcase_add_test(tc_fmod, s21_fmod_57);
    tcase_add_test(tc_fmod, s21_fmod_58);
    tcase_add_test(tc_fmod, s21_fmod_59);
    tcase_add_test(tc_fmod, s21_fmod_60);
    tcase_add_test(tc_fmod, s21_fmod_61);
    tcase_add_test(tc_fmod, s21_fmod_62);
    tcase_add_test(tc_fmod, s21_fmod_63);
    tcase_add_test(tc_fmod, s21_fmod_64);
    tcase_add_test(tc_fmod, s21_fmod_65);
    tcase_add_test(tc_fmod, s21_fmod_66);
    tcase_add_test(tc_fmod, s21_fmod_67);
    tcase_add_test(tc_fmod, s21_fmod_68);
    tcase_add_test(tc_fmod, s21_fmod_69);
    tcase_add_test(tc_fmod, s21_fmod_70);
    tcase_add_test(tc_fmod, s21_fmod_71);
    tcase_add_test(tc_fmod, s21_fmod_72);
    tcase_add_test(tc_fmod, s21_fmod_73);
    tcase_add_test(tc_fmod, s21_fmod_74);
    tcase_add_test(tc_fmod, s21_fmod_75);
    tcase_add_test(tc_fmod, s21_fmod_76);
    tcase_add_test(tc_fmod, s21_fmod_77);
    tcase_add_test(tc_fmod, s21_fmod_78);
    tcase_add_test(tc_fmod, s21_fmod_79);
    tcase_add_test(tc_fmod, s21_fmod_80);
    tcase_add_test(tc_fmod, s21_fmod_81);
    tcase_add_test(tc_fmod, s21_fmod_82);
    tcase_add_test(tc_fmod, s21_fmod_83);
    tcase_add_test(tc_fmod, s21_fmod_84);
    tcase_add_test(tc_fmod, s21_fmod_85);
    tcase_add_test(tc_fmod, s21_fmod_86);
    tcase_add_test(tc_fmod, s21_fmod_87);
    tcase_add_test(tc_fmod, s21_fmod_88);
    tcase_add_test(tc_fmod, s21_fmod_89);
    tcase_add_test(tc_fmod, s21_fmod_90);
    tcase_add_test(tc_fmod, s21_fmod_91);
    tcase_add_test(tc_fmod, s21_fmod_92);
    tcase_add_test(tc_fmod, s21_fmod_93);
    tcase_add_test(tc_fmod, s21_fmod_94);
    tcase_add_test(tc_fmod, s21_fmod_95);
    tcase_add_test(tc_fmod, s21_fmod_96);
    tcase_add_test(tc_fmod, s21_fmod_97);
    tcase_add_test(tc_fmod, s21_fmod_98);
    tcase_add_test(tc_fmod, s21_fmod_99);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief second set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_second_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod second case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_100);
    tcase_add_test(tc_fmod, s21_fmod_101);
    tcase_add_test(tc_fmod, s21_fmod_102);
    tcase_add_test(tc_fmod, s21_fmod_103);
    tcase_add_test(tc_fmod, s21_fmod_104);
    tcase_add_test(tc_fmod, s21_fmod_105);
    tcase_add_test(tc_fmod, s21_fmod_106);
    tcase_add_test(tc_fmod, s21_fmod_107);
    tcase_add_test(tc_fmod, s21_fmod_108);
    tcase_add_test(tc_fmod, s21_fmod_109);
    tcase_add_test(tc_fmod, s21_fmod_110);
    tcase_add_test(tc_fmod, s21_fmod_111);
    tcase_add_test(tc_fmod, s21_fmod_112);
    tcase_add_test(tc_fmod, s21_fmod_113);
    tcase_add_test(tc_fmod, s21_fmod_114);
    tcase_add_test(tc_fmod, s21_fmod_115);
    tcase_add_test(tc_fmod, s21_fmod_116);
    tcase_add_test(tc_fmod, s21_fmod_117);
    tcase_add_test(tc_fmod, s21_fmod_118);
    tcase_add_test(tc_fmod, s21_fmod_119);
    tcase_add_test(tc_fmod, s21_fmod_120);
    tcase_add_test(tc_fmod, s21_fmod_121);
    tcase_add_test(tc_fmod, s21_fmod_122);
    tcase_add_test(tc_fmod, s21_fmod_123);
    tcase_add_test(tc_fmod, s21_fmod_124);
    tcase_add_test(tc_fmod, s21_fmod_125);
    tcase_add_test(tc_fmod, s21_fmod_126);
    tcase_add_test(tc_fmod, s21_fmod_127);
    tcase_add_test(tc_fmod, s21_fmod_128);
    tcase_add_test(tc_fmod, s21_fmod_129);
    tcase_add_test(tc_fmod, s21_fmod_130);
    tcase_add_test(tc_fmod, s21_fmod_131);
    tcase_add_test(tc_fmod, s21_fmod_132);
    tcase_add_test(tc_fmod, s21_fmod_133);
    tcase_add_test(tc_fmod, s21_fmod_134);
    tcase_add_test(tc_fmod, s21_fmod_135);
    tcase_add_test(tc_fmod, s21_fmod_136);
    tcase_add_test(tc_fmod, s21_fmod_137);
    tcase_add_test(tc_fmod, s21_fmod_138);
    tcase_add_test(tc_fmod, s21_fmod_139);
    tcase_add_test(tc_fmod, s21_fmod_140);
    tcase_add_test(tc_fmod, s21_fmod_141);
    tcase_add_test(tc_fmod, s21_fmod_142);
    tcase_add_test(tc_fmod, s21_fmod_143);
    tcase_add_test(tc_fmod, s21_fmod_144);
    tcase_add_test(tc_fmod, s21_fmod_145);
    tcase_add_test(tc_fmod, s21_fmod_146);
    tcase_add_test(tc_fmod, s21_fmod_147);
    tcase_add_test(tc_fmod, s21_fmod_148);
    tcase_add_test(tc_fmod, s21_fmod_149);
    tcase_add_test(tc_fmod, s21_fmod_150);
    tcase_add_test(tc_fmod, s21_fmod_151);
    tcase_add_test(tc_fmod, s21_fmod_152);
    tcase_add_test(tc_fmod, s21_fmod_153);
    tcase_add_test(tc_fmod, s21_fmod_154);
    tcase_add_test(tc_fmod, s21_fmod_155);
    tcase_add_test(tc_fmod, s21_fmod_156);
    tcase_add_test(tc_fmod, s21_fmod_157);
    tcase_add_test(tc_fmod, s21_fmod_158);
    tcase_add_test(tc_fmod, s21_fmod_159);
    tcase_add_test(tc_fmod, s21_fmod_160);
    tcase_add_test(tc_fmod, s21_fmod_161);
    tcase_add_test(tc_fmod, s21_fmod_162);
    tcase_add_test(tc_fmod, s21_fmod_163);
    tcase_add_test(tc_fmod, s21_fmod_164);
    tcase_add_test(tc_fmod, s21_fmod_165);
    tcase_add_test(tc_fmod, s21_fmod_166);
    tcase_add_test(tc_fmod, s21_fmod_167);
    tcase_add_test(tc_fmod, s21_fmod_168);
    tcase_add_test(tc_fmod, s21_fmod_169);
    tcase_add_test(tc_fmod, s21_fmod_170);
    tcase_add_test(tc_fmod, s21_fmod_171);
    tcase_add_test(tc_fmod, s21_fmod_172);
    tcase_add_test(tc_fmod, s21_fmod_173);
    tcase_add_test(tc_fmod, s21_fmod_174);
    tcase_add_test(tc_fmod, s21_fmod_175);
    tcase_add_test(tc_fmod, s21_fmod_176);
    tcase_add_test(tc_fmod, s21_fmod_177);
    tcase_add_test(tc_fmod, s21_fmod_178);
    tcase_add_test(tc_fmod, s21_fmod_179);
    tcase_add_test(tc_fmod, s21_fmod_180);
    tcase_add_test(tc_fmod, s21_fmod_181);
    tcase_add_test(tc_fmod, s21_fmod_182);
    tcase_add_test(tc_fmod, s21_fmod_183);
    tcase_add_test(tc_fmod, s21_fmod_184);
    tcase_add_test(tc_fmod, s21_fmod_185);
    tcase_add_test(tc_fmod, s21_fmod_186);
    tcase_add_test(tc_fmod, s21_fmod_187);
    tcase_add_test(tc_fmod, s21_fmod_188);
    tcase_add_test(tc_fmod, s21_fmod_189);
    tcase_add_test(tc_fmod, s21_fmod_190);
    tcase_add_test(tc_fmod, s21_fmod_191);
    tcase_add_test(tc_fmod, s21_fmod_192);
    tcase_add_test(tc_fmod, s21_fmod_193);
    tcase_add_test(tc_fmod, s21_fmod_194);
    tcase_add_test(tc_fmod, s21_fmod_195);
    tcase_add_test(tc_fmod, s21_fmod_196);
    tcase_add_test(tc_fmod, s21_fmod_197);
    tcase_add_test(tc_fmod, s21_fmod_198);
    tcase_add_test(tc_fmod, s21_fmod_199);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief third set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_third_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod third case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_200);
    tcase_add_test(tc_fmod, s21_fmod_201);
    tcase_add_test(tc_fmod, s21_fmod_202);
    tcase_add_test(tc_fmod, s21_fmod_203);
    tcase_add_test(tc_fmod, s21_fmod_204);
    tcase_add_test(tc_fmod, s21_fmod_205);
    tcase_add_test(tc_fmod, s21_fmod_206);
    tcase_add_test(tc_fmod, s21_fmod_207);
    tcase_add_test(tc_fmod, s21_fmod_208);
    tcase_add_test(tc_fmod, s21_fmod_209);
    tcase_add_test(tc_fmod, s21_fmod_210);
    tcase_add_test(tc_fmod, s21_fmod_211);
    tcase_add_test(tc_fmod, s21_fmod_212);
    tcase_add_test(tc_fmod, s21_fmod_213);
    tcase_add_test(tc_fmod, s21_fmod_214);
    tcase_add_test(tc_fmod, s21_fmod_215);
    tcase_add_test(tc_fmod, s21_fmod_216);
    tcase_add_test(tc_fmod, s21_fmod_217);
    tcase_add_test(tc_fmod, s21_fmod_218);
    tcase_add_test(tc_fmod, s21_fmod_219);
    tcase_add_test(tc_fmod, s21_fmod_220);
    tcase_add_test(tc_fmod, s21_fmod_221);
    tcase_add_test(tc_fmod, s21_fmod_222);
    tcase_add_test(tc_fmod, s21_fmod_223);
    tcase_add_test(tc_fmod, s21_fmod_224);
    tcase_add_test(tc_fmod, s21_fmod_225);
    tcase_add_test(tc_fmod, s21_fmod_226);
    tcase_add_test(tc_fmod, s21_fmod_227);
    tcase_add_test(tc_fmod, s21_fmod_228);
    tcase_add_test(tc_fmod, s21_fmod_229);
    tcase_add_test(tc_fmod, s21_fmod_230);
    tcase_add_test(tc_fmod, s21_fmod_231);
    tcase_add_test(tc_fmod, s21_fmod_232);
    tcase_add_test(tc_fmod, s21_fmod_233);
    tcase_add_test(tc_fmod, s21_fmod_234);
    tcase_add_test(tc_fmod, s21_fmod_235);
    tcase_add_test(tc_fmod, s21_fmod_236);
    tcase_add_test(tc_fmod, s21_fmod_237);
    tcase_add_test(tc_fmod, s21_fmod_238);
    tcase_add_test(tc_fmod, s21_fmod_239);
    tcase_add_test(tc_fmod, s21_fmod_240);
    tcase_add_test(tc_fmod, s21_fmod_241);
    tcase_add_test(tc_fmod, s21_fmod_242);
    tcase_add_test(tc_fmod, s21_fmod_243);
    tcase_add_test(tc_fmod, s21_fmod_244);
    tcase_add_test(tc_fmod, s21_fmod_245);
    tcase_add_test(tc_fmod, s21_fmod_246);
    tcase_add_test(tc_fmod, s21_fmod_247);
    tcase_add_test(tc_fmod, s21_fmod_248);
    tcase_add_test(tc_fmod, s21_fmod_249);
    tcase_add_test(tc_fmod, s21_fmod_250);
    tcase_add_test(tc_fmod, s21_fmod_251);
    tcase_add_test(tc_fmod, s21_fmod_252);
    tcase_add_test(tc_fmod, s21_fmod_253);
    tcase_add_test(tc_fmod, s21_fmod_254);
    tcase_add_test(tc_fmod, s21_fmod_255);
    tcase_add_test(tc_fmod, s21_fmod_256);
    tcase_add_test(tc_fmod, s21_fmod_257);
    tcase_add_test(tc_fmod, s21_fmod_258);
    tcase_add_test(tc_fmod, s21_fmod_259);
    tcase_add_test(tc_fmod, s21_fmod_260);
    tcase_add_test(tc_fmod, s21_fmod_261);
    tcase_add_test(tc_fmod, s21_fmod_262);
    tcase_add_test(tc_fmod, s21_fmod_263);
    tcase_add_test(tc_fmod, s21_fmod_264);
    tcase_add_test(tc_fmod, s21_fmod_265);
    tcase_add_test(tc_fmod, s21_fmod_266);
    tcase_add_test(tc_fmod, s21_fmod_267);
    tcase_add_test(tc_fmod, s21_fmod_268);
    tcase_add_test(tc_fmod, s21_fmod_269);
    tcase_add_test(tc_fmod, s21_fmod_270);
    tcase_add_test(tc_fmod, s21_fmod_271);
    tcase_add_test(tc_fmod, s21_fmod_272);
    tcase_add_test(tc_fmod, s21_fmod_273);
    tcase_add_test(tc_fmod, s21_fmod_274);
    tcase_add_test(tc_fmod, s21_fmod_275);
    tcase_add_test(tc_fmod, s21_fmod_276);
    tcase_add_test(tc_fmod, s21_fmod_277);
    tcase_add_test(tc_fmod, s21_fmod_278);
    tcase_add_test(tc_fmod, s21_fmod_279);
    tcase_add_test(tc_fmod, s21_fmod_280);
    tcase_add_test(tc_fmod, s21_fmod_281);
    tcase_add_test(tc_fmod, s21_fmod_282);
    tcase_add_test(tc_fmod, s21_fmod_283);
    tcase_add_test(tc_fmod, s21_fmod_284);
    tcase_add_test(tc_fmod, s21_fmod_285);
    tcase_add_test(tc_fmod, s21_fmod_286);
    tcase_add_test(tc_fmod, s21_fmod_287);
    tcase_add_test(tc_fmod, s21_fmod_288);
    tcase_add_test(tc_fmod, s21_fmod_289);
    tcase_add_test(tc_fmod, s21_fmod_290);
    tcase_add_test(tc_fmod, s21_fmod_291);
    tcase_add_test(tc_fmod, s21_fmod_292);
    tcase_add_test(tc_fmod, s21_fmod_293);
    tcase_add_test(tc_fmod, s21_fmod_294);
    tcase_add_test(tc_fmod, s21_fmod_295);
    tcase_add_test(tc_fmod, s21_fmod_296);
    tcase_add_test(tc_fmod, s21_fmod_297);
    tcase_add_test(tc_fmod, s21_fmod_298);
    tcase_add_test(tc_fmod, s21_fmod_299);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief fourth set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_fourth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod fourth case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_300);
    tcase_add_test(tc_fmod, s21_fmod_301);
    tcase_add_test(tc_fmod, s21_fmod_302);
    tcase_add_test(tc_fmod, s21_fmod_303);
    tcase_add_test(tc_fmod, s21_fmod_304);
    tcase_add_test(tc_fmod, s21_fmod_305);
    tcase_add_test(tc_fmod, s21_fmod_306);
    tcase_add_test(tc_fmod, s21_fmod_307);
    tcase_add_test(tc_fmod, s21_fmod_308);
    tcase_add_test(tc_fmod, s21_fmod_309);
    tcase_add_test(tc_fmod, s21_fmod_310);
    tcase_add_test(tc_fmod, s21_fmod_311);
    tcase_add_test(tc_fmod, s21_fmod_312);
    tcase_add_test(tc_fmod, s21_fmod_313);
    tcase_add_test(tc_fmod, s21_fmod_314);
    tcase_add_test(tc_fmod, s21_fmod_315);
    tcase_add_test(tc_fmod, s21_fmod_316);
    tcase_add_test(tc_fmod, s21_fmod_317);
    tcase_add_test(tc_fmod, s21_fmod_318);
    tcase_add_test(tc_fmod, s21_fmod_319);
    tcase_add_test(tc_fmod, s21_fmod_320);
    tcase_add_test(tc_fmod, s21_fmod_321);
    tcase_add_test(tc_fmod, s21_fmod_322);
    tcase_add_test(tc_fmod, s21_fmod_323);
    tcase_add_test(tc_fmod, s21_fmod_324);
    tcase_add_test(tc_fmod, s21_fmod_325);
    tcase_add_test(tc_fmod, s21_fmod_326);
    tcase_add_test(tc_fmod, s21_fmod_327);
    tcase_add_test(tc_fmod, s21_fmod_328);
    tcase_add_test(tc_fmod, s21_fmod_329);
    tcase_add_test(tc_fmod, s21_fmod_330);
    tcase_add_test(tc_fmod, s21_fmod_331);
    tcase_add_test(tc_fmod, s21_fmod_332);
    tcase_add_test(tc_fmod, s21_fmod_333);
    tcase_add_test(tc_fmod, s21_fmod_334);
    tcase_add_test(tc_fmod, s21_fmod_335);
    tcase_add_test(tc_fmod, s21_fmod_336);
    tcase_add_test(tc_fmod, s21_fmod_337);
    tcase_add_test(tc_fmod, s21_fmod_338);
    tcase_add_test(tc_fmod, s21_fmod_339);
    tcase_add_test(tc_fmod, s21_fmod_340);
    tcase_add_test(tc_fmod, s21_fmod_341);
    tcase_add_test(tc_fmod, s21_fmod_342);
    tcase_add_test(tc_fmod, s21_fmod_343);
    tcase_add_test(tc_fmod, s21_fmod_344);
    tcase_add_test(tc_fmod, s21_fmod_345);
    tcase_add_test(tc_fmod, s21_fmod_346);
    tcase_add_test(tc_fmod, s21_fmod_347);
    tcase_add_test(tc_fmod, s21_fmod_348);
    tcase_add_test(tc_fmod, s21_fmod_349);
    tcase_add_test(tc_fmod, s21_fmod_350);
    tcase_add_test(tc_fmod, s21_fmod_351);
    tcase_add_test(tc_fmod, s21_fmod_352);
    tcase_add_test(tc_fmod, s21_fmod_353);
    tcase_add_test(tc_fmod, s21_fmod_354);
    tcase_add_test(tc_fmod, s21_fmod_355);
    tcase_add_test(tc_fmod, s21_fmod_356);
    tcase_add_test(tc_fmod, s21_fmod_357);
    tcase_add_test(tc_fmod, s21_fmod_358);
    tcase_add_test(tc_fmod, s21_fmod_359);
    tcase_add_test(tc_fmod, s21_fmod_360);
    tcase_add_test(tc_fmod, s21_fmod_361);
    tcase_add_test(tc_fmod, s21_fmod_362);
    tcase_add_test(tc_fmod, s21_fmod_363);
    tcase_add_test(tc_fmod, s21_fmod_364);
    tcase_add_test(tc_fmod, s21_fmod_365);
    tcase_add_test(tc_fmod, s21_fmod_366);
    tcase_add_test(tc_fmod, s21_fmod_367);
    tcase_add_test(tc_fmod, s21_fmod_368);
    tcase_add_test(tc_fmod, s21_fmod_369);
    tcase_add_test(tc_fmod, s21_fmod_370);
    tcase_add_test(tc_fmod, s21_fmod_371);
    tcase_add_test(tc_fmod, s21_fmod_372);
    tcase_add_test(tc_fmod, s21_fmod_373);
    tcase_add_test(tc_fmod, s21_fmod_374);
    tcase_add_test(tc_fmod, s21_fmod_375);
    tcase_add_test(tc_fmod, s21_fmod_376);
    tcase_add_test(tc_fmod, s21_fmod_377);
    tcase_add_test(tc_fmod, s21_fmod_378);
    tcase_add_test(tc_fmod, s21_fmod_379);
    tcase_add_test(tc_fmod, s21_fmod_380);
    tcase_add_test(tc_fmod, s21_fmod_381);
    tcase_add_test(tc_fmod, s21_fmod_382);
    tcase_add_test(tc_fmod, s21_fmod_383);
    tcase_add_test(tc_fmod, s21_fmod_384);
    tcase_add_test(tc_fmod, s21_fmod_385);
    tcase_add_test(tc_fmod, s21_fmod_386);
    tcase_add_test(tc_fmod, s21_fmod_387);
    tcase_add_test(tc_fmod, s21_fmod_388);
    tcase_add_test(tc_fmod, s21_fmod_389);
    tcase_add_test(tc_fmod, s21_fmod_390);
    tcase_add_test(tc_fmod, s21_fmod_391);
    tcase_add_test(tc_fmod, s21_fmod_392);
    tcase_add_test(tc_fmod, s21_fmod_393);
    tcase_add_test(tc_fmod, s21_fmod_394);
    tcase_add_test(tc_fmod, s21_fmod_395);
    tcase_add_test(tc_fmod, s21_fmod_396);
    tcase_add_test(tc_fmod, s21_fmod_397);
    tcase_add_test(tc_fmod, s21_fmod_398);
    tcase_add_test(tc_fmod, s21_fmod_399);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief fifth set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_fifth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod fifth case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_400);
    tcase_add_test(tc_fmod, s21_fmod_401);
    tcase_add_test(tc_fmod, s21_fmod_402);
    tcase_add_test(tc_fmod, s21_fmod_403);
    tcase_add_test(tc_fmod, s21_fmod_404);
    tcase_add_test(tc_fmod, s21_fmod_405);
    tcase_add_test(tc_fmod, s21_fmod_406);
    tcase_add_test(tc_fmod, s21_fmod_407);
    tcase_add_test(tc_fmod, s21_fmod_408);
    tcase_add_test(tc_fmod, s21_fmod_409);
    tcase_add_test(tc_fmod, s21_fmod_410);
    tcase_add_test(tc_fmod, s21_fmod_411);
    tcase_add_test(tc_fmod, s21_fmod_412);
    tcase_add_test(tc_fmod, s21_fmod_413);
    tcase_add_test(tc_fmod, s21_fmod_414);
    tcase_add_test(tc_fmod, s21_fmod_415);
    tcase_add_test(tc_fmod, s21_fmod_416);
    tcase_add_test(tc_fmod, s21_fmod_417);
    tcase_add_test(tc_fmod, s21_fmod_418);
    tcase_add_test(tc_fmod, s21_fmod_419);
    tcase_add_test(tc_fmod, s21_fmod_420);
    tcase_add_test(tc_fmod, s21_fmod_421);
    tcase_add_test(tc_fmod, s21_fmod_422);
    tcase_add_test(tc_fmod, s21_fmod_423);
    tcase_add_test(tc_fmod, s21_fmod_424);
    tcase_add_test(tc_fmod, s21_fmod_425);
    tcase_add_test(tc_fmod, s21_fmod_426);
    tcase_add_test(tc_fmod, s21_fmod_427);
    tcase_add_test(tc_fmod, s21_fmod_428);
    tcase_add_test(tc_fmod, s21_fmod_429);
    tcase_add_test(tc_fmod, s21_fmod_430);
    tcase_add_test(tc_fmod, s21_fmod_431);
    tcase_add_test(tc_fmod, s21_fmod_432);
    tcase_add_test(tc_fmod, s21_fmod_433);
    tcase_add_test(tc_fmod, s21_fmod_434);
    tcase_add_test(tc_fmod, s21_fmod_435);
    tcase_add_test(tc_fmod, s21_fmod_436);
    tcase_add_test(tc_fmod, s21_fmod_437);
    tcase_add_test(tc_fmod, s21_fmod_438);
    tcase_add_test(tc_fmod, s21_fmod_439);
    tcase_add_test(tc_fmod, s21_fmod_440);
    tcase_add_test(tc_fmod, s21_fmod_441);
    tcase_add_test(tc_fmod, s21_fmod_442);
    tcase_add_test(tc_fmod, s21_fmod_443);
    tcase_add_test(tc_fmod, s21_fmod_444);
    tcase_add_test(tc_fmod, s21_fmod_445);
    tcase_add_test(tc_fmod, s21_fmod_446);
    tcase_add_test(tc_fmod, s21_fmod_447);
    tcase_add_test(tc_fmod, s21_fmod_448);
    tcase_add_test(tc_fmod, s21_fmod_449);
    tcase_add_test(tc_fmod, s21_fmod_450);
    tcase_add_test(tc_fmod, s21_fmod_451);
    tcase_add_test(tc_fmod, s21_fmod_452);
    tcase_add_test(tc_fmod, s21_fmod_453);
    tcase_add_test(tc_fmod, s21_fmod_454);
    tcase_add_test(tc_fmod, s21_fmod_455);
    tcase_add_test(tc_fmod, s21_fmod_456);
    tcase_add_test(tc_fmod, s21_fmod_457);
    tcase_add_test(tc_fmod, s21_fmod_458);
    tcase_add_test(tc_fmod, s21_fmod_459);
    tcase_add_test(tc_fmod, s21_fmod_460);
    tcase_add_test(tc_fmod, s21_fmod_461);
    tcase_add_test(tc_fmod, s21_fmod_462);
    tcase_add_test(tc_fmod, s21_fmod_463);
    tcase_add_test(tc_fmod, s21_fmod_464);
    tcase_add_test(tc_fmod, s21_fmod_465);
    tcase_add_test(tc_fmod, s21_fmod_466);
    tcase_add_test(tc_fmod, s21_fmod_467);
    tcase_add_test(tc_fmod, s21_fmod_468);
    tcase_add_test(tc_fmod, s21_fmod_469);
    tcase_add_test(tc_fmod, s21_fmod_470);
    tcase_add_test(tc_fmod, s21_fmod_471);
    tcase_add_test(tc_fmod, s21_fmod_472);
    tcase_add_test(tc_fmod, s21_fmod_473);
    tcase_add_test(tc_fmod, s21_fmod_474);
    tcase_add_test(tc_fmod, s21_fmod_475);
    tcase_add_test(tc_fmod, s21_fmod_476);
    tcase_add_test(tc_fmod, s21_fmod_477);
    tcase_add_test(tc_fmod, s21_fmod_478);
    tcase_add_test(tc_fmod, s21_fmod_479);
    tcase_add_test(tc_fmod, s21_fmod_480);
    tcase_add_test(tc_fmod, s21_fmod_481);
    tcase_add_test(tc_fmod, s21_fmod_482);
    tcase_add_test(tc_fmod, s21_fmod_483);
    tcase_add_test(tc_fmod, s21_fmod_484);
    tcase_add_test(tc_fmod, s21_fmod_485);
    tcase_add_test(tc_fmod, s21_fmod_486);
    tcase_add_test(tc_fmod, s21_fmod_487);
    tcase_add_test(tc_fmod, s21_fmod_488);
    tcase_add_test(tc_fmod, s21_fmod_489);
    tcase_add_test(tc_fmod, s21_fmod_490);
    tcase_add_test(tc_fmod, s21_fmod_491);
    tcase_add_test(tc_fmod, s21_fmod_492);
    tcase_add_test(tc_fmod, s21_fmod_493);
    tcase_add_test(tc_fmod, s21_fmod_494);
    tcase_add_test(tc_fmod, s21_fmod_495);
    tcase_add_test(tc_fmod, s21_fmod_496);
    tcase_add_test(tc_fmod, s21_fmod_497);
    tcase_add_test(tc_fmod, s21_fmod_498);
    tcase_add_test(tc_fmod, s21_fmod_499);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief sixth set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_sixth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod sixth case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_500);
    tcase_add_test(tc_fmod, s21_fmod_501);
    tcase_add_test(tc_fmod, s21_fmod_502);
    tcase_add_test(tc_fmod, s21_fmod_503);
    tcase_add_test(tc_fmod, s21_fmod_504);
    tcase_add_test(tc_fmod, s21_fmod_505);
    tcase_add_test(tc_fmod, s21_fmod_506);
    tcase_add_test(tc_fmod, s21_fmod_507);
    tcase_add_test(tc_fmod, s21_fmod_508);
    tcase_add_test(tc_fmod, s21_fmod_509);
    tcase_add_test(tc_fmod, s21_fmod_510);
    tcase_add_test(tc_fmod, s21_fmod_511);
    tcase_add_test(tc_fmod, s21_fmod_512);
    tcase_add_test(tc_fmod, s21_fmod_513);
    tcase_add_test(tc_fmod, s21_fmod_514);
    tcase_add_test(tc_fmod, s21_fmod_515);
    tcase_add_test(tc_fmod, s21_fmod_516);
    tcase_add_test(tc_fmod, s21_fmod_517);
    tcase_add_test(tc_fmod, s21_fmod_518);
    tcase_add_test(tc_fmod, s21_fmod_519);
    tcase_add_test(tc_fmod, s21_fmod_520);
    tcase_add_test(tc_fmod, s21_fmod_521);
    tcase_add_test(tc_fmod, s21_fmod_522);
    tcase_add_test(tc_fmod, s21_fmod_523);
    tcase_add_test(tc_fmod, s21_fmod_524);
    tcase_add_test(tc_fmod, s21_fmod_525);
    tcase_add_test(tc_fmod, s21_fmod_526);
    tcase_add_test(tc_fmod, s21_fmod_527);
    tcase_add_test(tc_fmod, s21_fmod_528);
    tcase_add_test(tc_fmod, s21_fmod_529);
    tcase_add_test(tc_fmod, s21_fmod_530);
    tcase_add_test(tc_fmod, s21_fmod_531);
    tcase_add_test(tc_fmod, s21_fmod_532);
    tcase_add_test(tc_fmod, s21_fmod_533);
    tcase_add_test(tc_fmod, s21_fmod_534);
    tcase_add_test(tc_fmod, s21_fmod_535);
    tcase_add_test(tc_fmod, s21_fmod_536);
    tcase_add_test(tc_fmod, s21_fmod_537);
    tcase_add_test(tc_fmod, s21_fmod_538);
    tcase_add_test(tc_fmod, s21_fmod_539);
    tcase_add_test(tc_fmod, s21_fmod_540);
    tcase_add_test(tc_fmod, s21_fmod_541);
    tcase_add_test(tc_fmod, s21_fmod_542);
    tcase_add_test(tc_fmod, s21_fmod_543);
    tcase_add_test(tc_fmod, s21_fmod_544);
    tcase_add_test(tc_fmod, s21_fmod_545);
    tcase_add_test(tc_fmod, s21_fmod_546);
    tcase_add_test(tc_fmod, s21_fmod_547);
    tcase_add_test(tc_fmod, s21_fmod_548);
    tcase_add_test(tc_fmod, s21_fmod_549);
    tcase_add_test(tc_fmod, s21_fmod_550);
    tcase_add_test(tc_fmod, s21_fmod_551);
    tcase_add_test(tc_fmod, s21_fmod_552);
    tcase_add_test(tc_fmod, s21_fmod_553);
    tcase_add_test(tc_fmod, s21_fmod_554);
    tcase_add_test(tc_fmod, s21_fmod_555);
    tcase_add_test(tc_fmod, s21_fmod_556);
    tcase_add_test(tc_fmod, s21_fmod_557);
    tcase_add_test(tc_fmod, s21_fmod_558);
    tcase_add_test(tc_fmod, s21_fmod_559);
    tcase_add_test(tc_fmod, s21_fmod_560);
    tcase_add_test(tc_fmod, s21_fmod_561);
    tcase_add_test(tc_fmod, s21_fmod_562);
    tcase_add_test(tc_fmod, s21_fmod_563);
    tcase_add_test(tc_fmod, s21_fmod_564);
    tcase_add_test(tc_fmod, s21_fmod_565);
    tcase_add_test(tc_fmod, s21_fmod_566);
    tcase_add_test(tc_fmod, s21_fmod_567);
    tcase_add_test(tc_fmod, s21_fmod_568);
    tcase_add_test(tc_fmod, s21_fmod_569);
    tcase_add_test(tc_fmod, s21_fmod_570);
    tcase_add_test(tc_fmod, s21_fmod_571);
    tcase_add_test(tc_fmod, s21_fmod_572);
    tcase_add_test(tc_fmod, s21_fmod_573);
    tcase_add_test(tc_fmod, s21_fmod_574);
    tcase_add_test(tc_fmod, s21_fmod_575);
    tcase_add_test(tc_fmod, s21_fmod_576);
    tcase_add_test(tc_fmod, s21_fmod_577);
    tcase_add_test(tc_fmod, s21_fmod_578);
    tcase_add_test(tc_fmod, s21_fmod_579);
    tcase_add_test(tc_fmod, s21_fmod_580);
    tcase_add_test(tc_fmod, s21_fmod_581);
    tcase_add_test(tc_fmod, s21_fmod_582);
    tcase_add_test(tc_fmod, s21_fmod_583);
    tcase_add_test(tc_fmod, s21_fmod_584);
    tcase_add_test(tc_fmod, s21_fmod_585);
    tcase_add_test(tc_fmod, s21_fmod_586);
    tcase_add_test(tc_fmod, s21_fmod_587);
    tcase_add_test(tc_fmod, s21_fmod_588);
    tcase_add_test(tc_fmod, s21_fmod_589);
    tcase_add_test(tc_fmod, s21_fmod_590);
    tcase_add_test(tc_fmod, s21_fmod_591);
    tcase_add_test(tc_fmod, s21_fmod_592);
    tcase_add_test(tc_fmod, s21_fmod_593);
    tcase_add_test(tc_fmod, s21_fmod_594);
    tcase_add_test(tc_fmod, s21_fmod_595);
    tcase_add_test(tc_fmod, s21_fmod_596);
    tcase_add_test(tc_fmod, s21_fmod_597);
    tcase_add_test(tc_fmod, s21_fmod_598);
    tcase_add_test(tc_fmod, s21_fmod_599);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief seventh set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_seventh_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod seventh case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_600);
    tcase_add_test(tc_fmod, s21_fmod_601);
    tcase_add_test(tc_fmod, s21_fmod_602);
    tcase_add_test(tc_fmod, s21_fmod_603);
    tcase_add_test(tc_fmod, s21_fmod_604);
    tcase_add_test(tc_fmod, s21_fmod_605);
    tcase_add_test(tc_fmod, s21_fmod_606);
    tcase_add_test(tc_fmod, s21_fmod_607);
    tcase_add_test(tc_fmod, s21_fmod_608);
    tcase_add_test(tc_fmod, s21_fmod_609);
    tcase_add_test(tc_fmod, s21_fmod_610);
    tcase_add_test(tc_fmod, s21_fmod_611);
    tcase_add_test(tc_fmod, s21_fmod_612);
    tcase_add_test(tc_fmod, s21_fmod_613);
    tcase_add_test(tc_fmod, s21_fmod_614);
    tcase_add_test(tc_fmod, s21_fmod_615);
    tcase_add_test(tc_fmod, s21_fmod_616);
    tcase_add_test(tc_fmod, s21_fmod_617);
    tcase_add_test(tc_fmod, s21_fmod_618);
    tcase_add_test(tc_fmod, s21_fmod_619);
    tcase_add_test(tc_fmod, s21_fmod_620);
    tcase_add_test(tc_fmod, s21_fmod_621);
    tcase_add_test(tc_fmod, s21_fmod_622);
    tcase_add_test(tc_fmod, s21_fmod_623);
    tcase_add_test(tc_fmod, s21_fmod_624);
    tcase_add_test(tc_fmod, s21_fmod_625);
    tcase_add_test(tc_fmod, s21_fmod_626);
    tcase_add_test(tc_fmod, s21_fmod_627);
    tcase_add_test(tc_fmod, s21_fmod_628);
    tcase_add_test(tc_fmod, s21_fmod_629);
    tcase_add_test(tc_fmod, s21_fmod_630);
    tcase_add_test(tc_fmod, s21_fmod_631);
    tcase_add_test(tc_fmod, s21_fmod_632);
    tcase_add_test(tc_fmod, s21_fmod_633);
    tcase_add_test(tc_fmod, s21_fmod_634);
    tcase_add_test(tc_fmod, s21_fmod_635);
    tcase_add_test(tc_fmod, s21_fmod_636);
    tcase_add_test(tc_fmod, s21_fmod_637);
    tcase_add_test(tc_fmod, s21_fmod_638);
    tcase_add_test(tc_fmod, s21_fmod_639);
    tcase_add_test(tc_fmod, s21_fmod_640);
    tcase_add_test(tc_fmod, s21_fmod_641);
    tcase_add_test(tc_fmod, s21_fmod_642);
    tcase_add_test(tc_fmod, s21_fmod_643);
    tcase_add_test(tc_fmod, s21_fmod_644);
    tcase_add_test(tc_fmod, s21_fmod_645);
    tcase_add_test(tc_fmod, s21_fmod_646);
    tcase_add_test(tc_fmod, s21_fmod_647);
    tcase_add_test(tc_fmod, s21_fmod_648);
    tcase_add_test(tc_fmod, s21_fmod_649);
    tcase_add_test(tc_fmod, s21_fmod_650);
    tcase_add_test(tc_fmod, s21_fmod_651);
    tcase_add_test(tc_fmod, s21_fmod_652);
    tcase_add_test(tc_fmod, s21_fmod_653);
    tcase_add_test(tc_fmod, s21_fmod_654);
    tcase_add_test(tc_fmod, s21_fmod_655);
    tcase_add_test(tc_fmod, s21_fmod_656);
    tcase_add_test(tc_fmod, s21_fmod_657);
    tcase_add_test(tc_fmod, s21_fmod_658);
    tcase_add_test(tc_fmod, s21_fmod_659);
    tcase_add_test(tc_fmod, s21_fmod_660);
    tcase_add_test(tc_fmod, s21_fmod_661);
    tcase_add_test(tc_fmod, s21_fmod_662);
    tcase_add_test(tc_fmod, s21_fmod_663);
    tcase_add_test(tc_fmod, s21_fmod_664);
    tcase_add_test(tc_fmod, s21_fmod_665);
    tcase_add_test(tc_fmod, s21_fmod_666);
    tcase_add_test(tc_fmod, s21_fmod_667);
    tcase_add_test(tc_fmod, s21_fmod_668);
    tcase_add_test(tc_fmod, s21_fmod_669);
    tcase_add_test(tc_fmod, s21_fmod_670);
    tcase_add_test(tc_fmod, s21_fmod_671);
    tcase_add_test(tc_fmod, s21_fmod_672);
    tcase_add_test(tc_fmod, s21_fmod_673);
    tcase_add_test(tc_fmod, s21_fmod_674);
    tcase_add_test(tc_fmod, s21_fmod_675);
    tcase_add_test(tc_fmod, s21_fmod_676);
    tcase_add_test(tc_fmod, s21_fmod_677);
    tcase_add_test(tc_fmod, s21_fmod_678);
    tcase_add_test(tc_fmod, s21_fmod_679);
    tcase_add_test(tc_fmod, s21_fmod_680);
    tcase_add_test(tc_fmod, s21_fmod_681);
    tcase_add_test(tc_fmod, s21_fmod_682);
    tcase_add_test(tc_fmod, s21_fmod_683);
    tcase_add_test(tc_fmod, s21_fmod_684);
    tcase_add_test(tc_fmod, s21_fmod_685);
    tcase_add_test(tc_fmod, s21_fmod_686);
    tcase_add_test(tc_fmod, s21_fmod_687);
    tcase_add_test(tc_fmod, s21_fmod_688);
    tcase_add_test(tc_fmod, s21_fmod_689);
    tcase_add_test(tc_fmod, s21_fmod_690);
    tcase_add_test(tc_fmod, s21_fmod_691);
    tcase_add_test(tc_fmod, s21_fmod_692);
    tcase_add_test(tc_fmod, s21_fmod_693);
    tcase_add_test(tc_fmod, s21_fmod_694);
    tcase_add_test(tc_fmod, s21_fmod_695);
    tcase_add_test(tc_fmod, s21_fmod_696);
    tcase_add_test(tc_fmod, s21_fmod_697);
    tcase_add_test(tc_fmod, s21_fmod_698);
    tcase_add_test(tc_fmod, s21_fmod_699);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief eighth set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_eighth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod eighth case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_700);
    tcase_add_test(tc_fmod, s21_fmod_701);
    tcase_add_test(tc_fmod, s21_fmod_702);
    tcase_add_test(tc_fmod, s21_fmod_703);
    tcase_add_test(tc_fmod, s21_fmod_704);
    tcase_add_test(tc_fmod, s21_fmod_705);
    tcase_add_test(tc_fmod, s21_fmod_706);
    tcase_add_test(tc_fmod, s21_fmod_707);
    tcase_add_test(tc_fmod, s21_fmod_708);
    tcase_add_test(tc_fmod, s21_fmod_709);
    tcase_add_test(tc_fmod, s21_fmod_710);
    tcase_add_test(tc_fmod, s21_fmod_711);
    tcase_add_test(tc_fmod, s21_fmod_712);
    tcase_add_test(tc_fmod, s21_fmod_713);
    tcase_add_test(tc_fmod, s21_fmod_714);
    tcase_add_test(tc_fmod, s21_fmod_715);
    tcase_add_test(tc_fmod, s21_fmod_716);
    tcase_add_test(tc_fmod, s21_fmod_717);
    tcase_add_test(tc_fmod, s21_fmod_718);
    tcase_add_test(tc_fmod, s21_fmod_719);
    tcase_add_test(tc_fmod, s21_fmod_720);
    tcase_add_test(tc_fmod, s21_fmod_721);
    tcase_add_test(tc_fmod, s21_fmod_722);
    tcase_add_test(tc_fmod, s21_fmod_723);
    tcase_add_test(tc_fmod, s21_fmod_724);
    tcase_add_test(tc_fmod, s21_fmod_725);
    tcase_add_test(tc_fmod, s21_fmod_726);
    tcase_add_test(tc_fmod, s21_fmod_727);
    tcase_add_test(tc_fmod, s21_fmod_728);
    tcase_add_test(tc_fmod, s21_fmod_729);
    tcase_add_test(tc_fmod, s21_fmod_730);
    tcase_add_test(tc_fmod, s21_fmod_731);
    tcase_add_test(tc_fmod, s21_fmod_732);
    tcase_add_test(tc_fmod, s21_fmod_733);
    tcase_add_test(tc_fmod, s21_fmod_734);
    tcase_add_test(tc_fmod, s21_fmod_735);
    tcase_add_test(tc_fmod, s21_fmod_736);
    tcase_add_test(tc_fmod, s21_fmod_737);
    tcase_add_test(tc_fmod, s21_fmod_738);
    tcase_add_test(tc_fmod, s21_fmod_739);
    tcase_add_test(tc_fmod, s21_fmod_740);
    tcase_add_test(tc_fmod, s21_fmod_741);
    tcase_add_test(tc_fmod, s21_fmod_742);
    tcase_add_test(tc_fmod, s21_fmod_743);
    tcase_add_test(tc_fmod, s21_fmod_744);
    tcase_add_test(tc_fmod, s21_fmod_745);
    tcase_add_test(tc_fmod, s21_fmod_746);
    tcase_add_test(tc_fmod, s21_fmod_747);
    tcase_add_test(tc_fmod, s21_fmod_748);
    tcase_add_test(tc_fmod, s21_fmod_749);
    tcase_add_test(tc_fmod, s21_fmod_750);
    tcase_add_test(tc_fmod, s21_fmod_751);
    tcase_add_test(tc_fmod, s21_fmod_752);
    tcase_add_test(tc_fmod, s21_fmod_753);
    tcase_add_test(tc_fmod, s21_fmod_754);
    tcase_add_test(tc_fmod, s21_fmod_755);
    tcase_add_test(tc_fmod, s21_fmod_756);
    tcase_add_test(tc_fmod, s21_fmod_757);
    tcase_add_test(tc_fmod, s21_fmod_758);
    tcase_add_test(tc_fmod, s21_fmod_759);
    tcase_add_test(tc_fmod, s21_fmod_760);
    tcase_add_test(tc_fmod, s21_fmod_761);
    tcase_add_test(tc_fmod, s21_fmod_762);
    tcase_add_test(tc_fmod, s21_fmod_763);
    tcase_add_test(tc_fmod, s21_fmod_764);
    tcase_add_test(tc_fmod, s21_fmod_765);
    tcase_add_test(tc_fmod, s21_fmod_766);
    tcase_add_test(tc_fmod, s21_fmod_767);
    tcase_add_test(tc_fmod, s21_fmod_768);
    tcase_add_test(tc_fmod, s21_fmod_769);
    tcase_add_test(tc_fmod, s21_fmod_770);
    tcase_add_test(tc_fmod, s21_fmod_771);
    tcase_add_test(tc_fmod, s21_fmod_772);
    tcase_add_test(tc_fmod, s21_fmod_773);
    tcase_add_test(tc_fmod, s21_fmod_774);
    tcase_add_test(tc_fmod, s21_fmod_775);
    tcase_add_test(tc_fmod, s21_fmod_776);
    tcase_add_test(tc_fmod, s21_fmod_777);
    tcase_add_test(tc_fmod, s21_fmod_778);
    tcase_add_test(tc_fmod, s21_fmod_779);
    tcase_add_test(tc_fmod, s21_fmod_780);
    tcase_add_test(tc_fmod, s21_fmod_781);
    tcase_add_test(tc_fmod, s21_fmod_782);
    tcase_add_test(tc_fmod, s21_fmod_783);
    tcase_add_test(tc_fmod, s21_fmod_784);
    tcase_add_test(tc_fmod, s21_fmod_785);
    tcase_add_test(tc_fmod, s21_fmod_786);
    tcase_add_test(tc_fmod, s21_fmod_787);
    tcase_add_test(tc_fmod, s21_fmod_788);
    tcase_add_test(tc_fmod, s21_fmod_789);
    tcase_add_test(tc_fmod, s21_fmod_790);
    tcase_add_test(tc_fmod, s21_fmod_791);
    tcase_add_test(tc_fmod, s21_fmod_792);
    tcase_add_test(tc_fmod, s21_fmod_793);
    tcase_add_test(tc_fmod, s21_fmod_794);
    tcase_add_test(tc_fmod, s21_fmod_795);
    tcase_add_test(tc_fmod, s21_fmod_796);
    tcase_add_test(tc_fmod, s21_fmod_797);
    tcase_add_test(tc_fmod, s21_fmod_798);
    tcase_add_test(tc_fmod, s21_fmod_799);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief ninth set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_ninth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod ninth case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_800);
    tcase_add_test(tc_fmod, s21_fmod_801);
    tcase_add_test(tc_fmod, s21_fmod_802);
    tcase_add_test(tc_fmod, s21_fmod_803);
    tcase_add_test(tc_fmod, s21_fmod_804);
    tcase_add_test(tc_fmod, s21_fmod_805);
    tcase_add_test(tc_fmod, s21_fmod_806);
    tcase_add_test(tc_fmod, s21_fmod_807);
    tcase_add_test(tc_fmod, s21_fmod_808);
    tcase_add_test(tc_fmod, s21_fmod_809);
    tcase_add_test(tc_fmod, s21_fmod_810);
    tcase_add_test(tc_fmod, s21_fmod_811);
    tcase_add_test(tc_fmod, s21_fmod_812);
    tcase_add_test(tc_fmod, s21_fmod_813);
    tcase_add_test(tc_fmod, s21_fmod_814);
    tcase_add_test(tc_fmod, s21_fmod_815);
    tcase_add_test(tc_fmod, s21_fmod_816);
    tcase_add_test(tc_fmod, s21_fmod_817);
    tcase_add_test(tc_fmod, s21_fmod_818);
    tcase_add_test(tc_fmod, s21_fmod_819);
    tcase_add_test(tc_fmod, s21_fmod_820);
    tcase_add_test(tc_fmod, s21_fmod_821);
    tcase_add_test(tc_fmod, s21_fmod_822);
    tcase_add_test(tc_fmod, s21_fmod_823);
    tcase_add_test(tc_fmod, s21_fmod_824);
    tcase_add_test(tc_fmod, s21_fmod_825);
    tcase_add_test(tc_fmod, s21_fmod_826);
    tcase_add_test(tc_fmod, s21_fmod_827);
    tcase_add_test(tc_fmod, s21_fmod_828);
    tcase_add_test(tc_fmod, s21_fmod_829);
    tcase_add_test(tc_fmod, s21_fmod_830);
    tcase_add_test(tc_fmod, s21_fmod_831);
    tcase_add_test(tc_fmod, s21_fmod_832);
    tcase_add_test(tc_fmod, s21_fmod_833);
    tcase_add_test(tc_fmod, s21_fmod_834);
    tcase_add_test(tc_fmod, s21_fmod_835);
    tcase_add_test(tc_fmod, s21_fmod_836);
    tcase_add_test(tc_fmod, s21_fmod_837);
    tcase_add_test(tc_fmod, s21_fmod_838);
    tcase_add_test(tc_fmod, s21_fmod_839);
    tcase_add_test(tc_fmod, s21_fmod_840);
    tcase_add_test(tc_fmod, s21_fmod_841);
    tcase_add_test(tc_fmod, s21_fmod_842);
    tcase_add_test(tc_fmod, s21_fmod_843);
    tcase_add_test(tc_fmod, s21_fmod_844);
    tcase_add_test(tc_fmod, s21_fmod_845);
    tcase_add_test(tc_fmod, s21_fmod_846);
    tcase_add_test(tc_fmod, s21_fmod_847);
    tcase_add_test(tc_fmod, s21_fmod_848);
    tcase_add_test(tc_fmod, s21_fmod_849);
    tcase_add_test(tc_fmod, s21_fmod_850);
    tcase_add_test(tc_fmod, s21_fmod_851);
    tcase_add_test(tc_fmod, s21_fmod_852);
    tcase_add_test(tc_fmod, s21_fmod_853);
    tcase_add_test(tc_fmod, s21_fmod_854);
    tcase_add_test(tc_fmod, s21_fmod_855);
    tcase_add_test(tc_fmod, s21_fmod_856);
    tcase_add_test(tc_fmod, s21_fmod_857);
    tcase_add_test(tc_fmod, s21_fmod_858);
    tcase_add_test(tc_fmod, s21_fmod_859);
    tcase_add_test(tc_fmod, s21_fmod_860);
    tcase_add_test(tc_fmod, s21_fmod_861);
    tcase_add_test(tc_fmod, s21_fmod_862);
    tcase_add_test(tc_fmod, s21_fmod_863);
    tcase_add_test(tc_fmod, s21_fmod_864);
    tcase_add_test(tc_fmod, s21_fmod_865);
    tcase_add_test(tc_fmod, s21_fmod_866);
    tcase_add_test(tc_fmod, s21_fmod_867);
    tcase_add_test(tc_fmod, s21_fmod_868);
    tcase_add_test(tc_fmod, s21_fmod_869);
    tcase_add_test(tc_fmod, s21_fmod_870);
    tcase_add_test(tc_fmod, s21_fmod_871);
    tcase_add_test(tc_fmod, s21_fmod_872);
    tcase_add_test(tc_fmod, s21_fmod_873);
    tcase_add_test(tc_fmod, s21_fmod_874);
    tcase_add_test(tc_fmod, s21_fmod_875);
    tcase_add_test(tc_fmod, s21_fmod_876);
    tcase_add_test(tc_fmod, s21_fmod_877);
    tcase_add_test(tc_fmod, s21_fmod_878);
    tcase_add_test(tc_fmod, s21_fmod_879);
    tcase_add_test(tc_fmod, s21_fmod_880);
    tcase_add_test(tc_fmod, s21_fmod_881);
    tcase_add_test(tc_fmod, s21_fmod_882);
    tcase_add_test(tc_fmod, s21_fmod_883);
    tcase_add_test(tc_fmod, s21_fmod_884);
    tcase_add_test(tc_fmod, s21_fmod_885);
    tcase_add_test(tc_fmod, s21_fmod_886);
    tcase_add_test(tc_fmod, s21_fmod_887);
    tcase_add_test(tc_fmod, s21_fmod_888);
    tcase_add_test(tc_fmod, s21_fmod_889);
    tcase_add_test(tc_fmod, s21_fmod_890);
    tcase_add_test(tc_fmod, s21_fmod_891);
    tcase_add_test(tc_fmod, s21_fmod_892);
    tcase_add_test(tc_fmod, s21_fmod_893);
    tcase_add_test(tc_fmod, s21_fmod_894);
    tcase_add_test(tc_fmod, s21_fmod_895);
    tcase_add_test(tc_fmod, s21_fmod_896);
    tcase_add_test(tc_fmod, s21_fmod_897);
    tcase_add_test(tc_fmod, s21_fmod_898);
    tcase_add_test(tc_fmod, s21_fmod_899);
    suite_add_tcase(math, tc_fmod);

    return math;
}

/**
 * @brief tenth set of tests
 *
 * @return Suite*
 */
Suite *s21_fmod_tenth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_fmod tenth case)\n");

    TCase *tc_fmod = tcase_create("test_fmod");
    tcase_add_test(tc_fmod, s21_fmod_900);
    tcase_add_test(tc_fmod, s21_fmod_901);
    tcase_add_test(tc_fmod, s21_fmod_902);
    tcase_add_test(tc_fmod, s21_fmod_903);
    tcase_add_test(tc_fmod, s21_fmod_904);
    tcase_add_test(tc_fmod, s21_fmod_905);
    tcase_add_test(tc_fmod, s21_fmod_906);
    tcase_add_test(tc_fmod, s21_fmod_907);
    tcase_add_test(tc_fmod, s21_fmod_908);
    tcase_add_test(tc_fmod, s21_fmod_909);
    tcase_add_test(tc_fmod, s21_fmod_910);
    tcase_add_test(tc_fmod, s21_fmod_911);
    tcase_add_test(tc_fmod, s21_fmod_912);
    tcase_add_test(tc_fmod, s21_fmod_913);
    tcase_add_test(tc_fmod, s21_fmod_914);
    tcase_add_test(tc_fmod, s21_fmod_915);
    tcase_add_test(tc_fmod, s21_fmod_916);
    tcase_add_test(tc_fmod, s21_fmod_917);
    tcase_add_test(tc_fmod, s21_fmod_918);
    tcase_add_test(tc_fmod, s21_fmod_919);
    tcase_add_test(tc_fmod, s21_fmod_920);
    tcase_add_test(tc_fmod, s21_fmod_921);
    tcase_add_test(tc_fmod, s21_fmod_922);
    tcase_add_test(tc_fmod, s21_fmod_923);
    tcase_add_test(tc_fmod, s21_fmod_924);
    tcase_add_test(tc_fmod, s21_fmod_925);
    tcase_add_test(tc_fmod, s21_fmod_926);
    tcase_add_test(tc_fmod, s21_fmod_927);
    tcase_add_test(tc_fmod, s21_fmod_928);
    tcase_add_test(tc_fmod, s21_fmod_929);
    tcase_add_test(tc_fmod, s21_fmod_930);
    tcase_add_test(tc_fmod, s21_fmod_931);
    tcase_add_test(tc_fmod, s21_fmod_932);
    tcase_add_test(tc_fmod, s21_fmod_933);
    tcase_add_test(tc_fmod, s21_fmod_934);
    tcase_add_test(tc_fmod, s21_fmod_935);
    tcase_add_test(tc_fmod, s21_fmod_936);
    tcase_add_test(tc_fmod, s21_fmod_937);
    tcase_add_test(tc_fmod, s21_fmod_938);
    tcase_add_test(tc_fmod, s21_fmod_939);
    tcase_add_test(tc_fmod, s21_fmod_940);
    tcase_add_test(tc_fmod, s21_fmod_941);
    tcase_add_test(tc_fmod, s21_fmod_942);
    tcase_add_test(tc_fmod, s21_fmod_943);
    tcase_add_test(tc_fmod, s21_fmod_944);
    tcase_add_test(tc_fmod, s21_fmod_945);
    tcase_add_test(tc_fmod, s21_fmod_946);
    tcase_add_test(tc_fmod, s21_fmod_947);
    tcase_add_test(tc_fmod, s21_fmod_948);
    tcase_add_test(tc_fmod, s21_fmod_949);
    tcase_add_test(tc_fmod, s21_fmod_950);
    tcase_add_test(tc_fmod, s21_fmod_951);
    tcase_add_test(tc_fmod, s21_fmod_952);
    tcase_add_test(tc_fmod, s21_fmod_953);
    tcase_add_test(tc_fmod, s21_fmod_954);
    tcase_add_test(tc_fmod, s21_fmod_955);
    tcase_add_test(tc_fmod, s21_fmod_956);
    tcase_add_test(tc_fmod, s21_fmod_957);
    tcase_add_test(tc_fmod, s21_fmod_958);
    tcase_add_test(tc_fmod, s21_fmod_959);
    tcase_add_test(tc_fmod, s21_fmod_960);
    tcase_add_test(tc_fmod, s21_fmod_961);
    tcase_add_test(tc_fmod, s21_fmod_962);
    tcase_add_test(tc_fmod, s21_fmod_963);
    tcase_add_test(tc_fmod, s21_fmod_964);
    tcase_add_test(tc_fmod, s21_fmod_965);
    tcase_add_test(tc_fmod, s21_fmod_966);
    tcase_add_test(tc_fmod, s21_fmod_967);
    tcase_add_test(tc_fmod, s21_fmod_968);
    tcase_add_test(tc_fmod, s21_fmod_969);
    tcase_add_test(tc_fmod, s21_fmod_970);
    tcase_add_test(tc_fmod, s21_fmod_971);
    tcase_add_test(tc_fmod, s21_fmod_972);
    tcase_add_test(tc_fmod, s21_fmod_973);
    tcase_add_test(tc_fmod, s21_fmod_974);
    tcase_add_test(tc_fmod, s21_fmod_975);
    tcase_add_test(tc_fmod, s21_fmod_976);
    tcase_add_test(tc_fmod, s21_fmod_977);
    tcase_add_test(tc_fmod, s21_fmod_978);
    tcase_add_test(tc_fmod, s21_fmod_979);
    tcase_add_test(tc_fmod, s21_fmod_980);
    tcase_add_test(tc_fmod, s21_fmod_981);
    tcase_add_test(tc_fmod, s21_fmod_982);
    tcase_add_test(tc_fmod, s21_fmod_983);
    tcase_add_test(tc_fmod, s21_fmod_984);
    tcase_add_test(tc_fmod, s21_fmod_985);
    tcase_add_test(tc_fmod, s21_fmod_986);
    tcase_add_test(tc_fmod, s21_fmod_987);
    tcase_add_test(tc_fmod, s21_fmod_988);
    tcase_add_test(tc_fmod, s21_fmod_989);
    tcase_add_test(tc_fmod, s21_fmod_990);
    tcase_add_test(tc_fmod, s21_fmod_991);
    tcase_add_test(tc_fmod, s21_fmod_992);
    tcase_add_test(tc_fmod, s21_fmod_993);
    tcase_add_test(tc_fmod, s21_fmod_994);
    tcase_add_test(tc_fmod, s21_fmod_995);
    tcase_add_test(tc_fmod, s21_fmod_996);
    tcase_add_test(tc_fmod, s21_fmod_997);
    tcase_add_test(tc_fmod, s21_fmod_998);
    tcase_add_test(tc_fmod, s21_fmod_999);
    suite_add_tcase(math, tc_fmod);

    return math;
}


/**
 * @brief Quickly check the functionality of the module s21_fmod.
 *
 * @param[in] x number whose remainder needs to be found.
 * @param[in] y number from which you need to find the remainder.
 * base of e.
 */
void s21_test_fmod(double x, double y) {
  long double original_func = fmod(x, y);
  long double implementation = fmod(x, y);

  printf("Input value: %lf mod %lf\n", x, y);

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
