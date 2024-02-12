/**
 * @file s21_test_log.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_log
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./test_include/s21_test_log.h"

/// @brief \f[ log(0.0001) = -9.210340 \f]
START_TEST(s21_log_0)
{
    double value = 0.0001;

    s21_test_log(value);
}

/// @brief \f[ log(0.00241) = -6.028129 \f]
START_TEST(s21_log_1)
{
    double value = 0.00241;

    s21_test_log(value);
}

/// @brief \f[ log(0.00472) = -5.355946 \f]
START_TEST(s21_log_2)
{
    double value = 0.00472;

    s21_test_log(value);
}

/// @brief \f[ log(0.00703) = -4.957569 \f]
START_TEST(s21_log_3)
{
    double value = 0.00703;

    s21_test_log(value);
}

/// @brief \f[ log(0.00934) = -4.673449 \f]
START_TEST(s21_log_4)
{
    double value = 0.00934;

    s21_test_log(value);
}

/// @brief \f[ log(0.01165) = -4.452449 \f]
START_TEST(s21_log_5)
{
    double value = 0.01165;

    s21_test_log(value);
}

/// @brief \f[ log(0.01396) = -4.271559 \f]
START_TEST(s21_log_6)
{
    double value = 0.01396;

    s21_test_log(value);
}

/// @brief \f[ log(0.01627) = -4.118432 \f]
START_TEST(s21_log_7)
{
    double value = 0.01627;

    s21_test_log(value);
}

/// @brief \f[ log(0.01858) = -3.985670 \f]
START_TEST(s21_log_8)
{
    double value = 0.01858;

    s21_test_log(value);
}

/// @brief \f[ log(0.02089) = -3.868485 \f]
START_TEST(s21_log_9)
{
    double value = 0.02089;

    s21_test_log(value);
}

/// @brief \f[ log(0.02320) = -3.763603 \f]
START_TEST(s21_log_10)
{
    double value = 0.02320;

    s21_test_log(value);
}

/// @brief \f[ log(0.02551) = -3.668685 \f]
START_TEST(s21_log_11)
{
    double value = 0.02551;

    s21_test_log(value);
}

/// @brief \f[ log(0.02782) = -3.582000 \f]
START_TEST(s21_log_12)
{
    double value = 0.02782;

    s21_test_log(value);
}

/// @brief \f[ log(0.03013) = -3.502234 \f]
START_TEST(s21_log_13)
{
    double value = 0.03013;

    s21_test_log(value);
}

/// @brief \f[ log(0.03244) = -3.428363 \f]
START_TEST(s21_log_14)
{
    double value = 0.03244;

    s21_test_log(value);
}

/// @brief \f[ log(0.03475) = -3.359576 \f]
START_TEST(s21_log_15)
{
    double value = 0.03475;

    s21_test_log(value);
}

/// @brief \f[ log(0.03706) = -3.295217 \f]
START_TEST(s21_log_16)
{
    double value = 0.03706;

    s21_test_log(value);
}

/// @brief \f[ log(0.03937) = -3.234751 \f]
START_TEST(s21_log_17)
{
    double value = 0.03937;

    s21_test_log(value);
}

/// @brief \f[ log(0.04168) = -3.177734 \f]
START_TEST(s21_log_18)
{
    double value = 0.04168;

    s21_test_log(value);
}

/// @brief \f[ log(0.04399) = -3.123793 \f]
START_TEST(s21_log_19)
{
    double value = 0.04399;

    s21_test_log(value);
}

/// @brief \f[ log(0.04630) = -3.072613 \f]
START_TEST(s21_log_20)
{
    double value = 0.04630;

    s21_test_log(value);
}

/// @brief \f[ log(0.04861) = -3.023926 \f]
START_TEST(s21_log_21)
{
    double value = 0.04861;

    s21_test_log(value);
}

/// @brief \f[ log(0.05092) = -2.977500 \f]
START_TEST(s21_log_22)
{
    double value = 0.05092;

    s21_test_log(value);
}

/// @brief \f[ log(0.05323) = -2.933133 \f]
START_TEST(s21_log_23)
{
    double value = 0.05323;

    s21_test_log(value);
}

/// @brief \f[ log(0.05554) = -2.890652 \f]
START_TEST(s21_log_24)
{
    double value = 0.05554;

    s21_test_log(value);
}

/// @brief \f[ log(0.05785) = -2.849902 \f]
START_TEST(s21_log_25)
{
    double value = 0.05785;

    s21_test_log(value);
}

/// @brief \f[ log(0.06016) = -2.810748 \f]
START_TEST(s21_log_26)
{
    double value = 0.06016;

    s21_test_log(value);
}

/// @brief \f[ log(0.06247) = -2.773069 \f]
START_TEST(s21_log_27)
{
    double value = 0.06247;

    s21_test_log(value);
}

/// @brief \f[ log(0.06478) = -2.736758 \f]
START_TEST(s21_log_28)
{
    double value = 0.06478;

    s21_test_log(value);
}

/// @brief \f[ log(0.06709) = -2.701720 \f]
START_TEST(s21_log_29)
{
    double value = 0.06709;

    s21_test_log(value);
}

/// @brief \f[ log(0.06940) = -2.667868 \f]
START_TEST(s21_log_30)
{
    double value = 0.06940;

    s21_test_log(value);
}

/// @brief \f[ log(0.07171) = -2.635125 \f]
START_TEST(s21_log_31)
{
    double value = 0.07171;

    s21_test_log(value);
}

/// @brief \f[ log(0.07402) = -2.603420 \f]
START_TEST(s21_log_32)
{
    double value = 0.07402;

    s21_test_log(value);
}

/// @brief \f[ log(0.07633) = -2.572689 \f]
START_TEST(s21_log_33)
{
    double value = 0.07633;

    s21_test_log(value);
}

/// @brief \f[ log(0.07864) = -2.542875 \f]
START_TEST(s21_log_34)
{
    double value = 0.07864;

    s21_test_log(value);
}

/// @brief \f[ log(0.08095) = -2.513924 \f]
START_TEST(s21_log_35)
{
    double value = 0.08095;

    s21_test_log(value);
}

/// @brief \f[ log(0.08326) = -2.485787 \f]
START_TEST(s21_log_36)
{
    double value = 0.08326;

    s21_test_log(value);
}

/// @brief \f[ log(0.08557) = -2.458421 \f]
START_TEST(s21_log_37)
{
    double value = 0.08557;

    s21_test_log(value);
}

/// @brief \f[ log(0.08788) = -2.431783 \f]
START_TEST(s21_log_38)
{
    double value = 0.08788;

    s21_test_log(value);
}

/// @brief \f[ log(0.09019) = -2.405837 \f]
START_TEST(s21_log_39)
{
    double value = 0.09019;

    s21_test_log(value);
}

/// @brief \f[ log(0.09250) = -2.380547 \f]
START_TEST(s21_log_40)
{
    double value = 0.09250;

    s21_test_log(value);
}

/// @brief \f[ log(0.09481) = -2.355880 \f]
START_TEST(s21_log_41)
{
    double value = 0.09481;

    s21_test_log(value);
}

/// @brief \f[ log(0.09712) = -2.331808 \f]
START_TEST(s21_log_42)
{
    double value = 0.09712;

    s21_test_log(value);
}

/// @brief \f[ log(0.09943) = -2.308301 \f]
START_TEST(s21_log_43)
{
    double value = 0.09943;

    s21_test_log(value);
}

/// @brief \f[ log(0.10174) = -2.285335 \f]
START_TEST(s21_log_44)
{
    double value = 0.10174;

    s21_test_log(value);
}

/// @brief \f[ log(0.10405) = -2.262884 \f]
START_TEST(s21_log_45)
{
    double value = 0.10405;

    s21_test_log(value);
}

/// @brief \f[ log(0.10636) = -2.240926 \f]
START_TEST(s21_log_46)
{
    double value = 0.10636;

    s21_test_log(value);
}

/// @brief \f[ log(0.10867) = -2.219440 \f]
START_TEST(s21_log_47)
{
    double value = 0.10867;

    s21_test_log(value);
}

/// @brief \f[ log(0.11098) = -2.198405 \f]
START_TEST(s21_log_48)
{
    double value = 0.11098;

    s21_test_log(value);
}

/// @brief \f[ log(0.11329) = -2.177804 \f]
START_TEST(s21_log_49)
{
    double value = 0.11329;

    s21_test_log(value);
}

/// @brief \f[ log(0.11560) = -2.157619 \f]
START_TEST(s21_log_50)
{
    double value = 0.11560;

    s21_test_log(value);
}

/// @brief \f[ log(0.11791) = -2.137834 \f]
START_TEST(s21_log_51)
{
    double value = 0.11791;

    s21_test_log(value);
}

/// @brief \f[ log(0.12022) = -2.118432 \f]
START_TEST(s21_log_52)
{
    double value = 0.12022;

    s21_test_log(value);
}

/// @brief \f[ log(0.12253) = -2.099399 \f]
START_TEST(s21_log_53)
{
    double value = 0.12253;

    s21_test_log(value);
}

/// @brief \f[ log(0.12484) = -2.080722 \f]
START_TEST(s21_log_54)
{
    double value = 0.12484;

    s21_test_log(value);
}

/// @brief \f[ log(0.12715) = -2.062388 \f]
START_TEST(s21_log_55)
{
    double value = 0.12715;

    s21_test_log(value);
}

/// @brief \f[ log(0.12946) = -2.044383 \f]
START_TEST(s21_log_56)
{
    double value = 0.12946;

    s21_test_log(value);
}

/// @brief \f[ log(0.13177) = -2.026697 \f]
START_TEST(s21_log_57)
{
    double value = 0.13177;

    s21_test_log(value);
}

/// @brief \f[ log(0.13408) = -2.009319 \f]
START_TEST(s21_log_58)
{
    double value = 0.13408;

    s21_test_log(value);
}

/// @brief \f[ log(0.13639) = -1.992237 \f]
START_TEST(s21_log_59)
{
    double value = 0.13639;

    s21_test_log(value);
}

/// @brief \f[ log(0.13870) = -1.975442 \f]
START_TEST(s21_log_60)
{
    double value = 0.13870;

    s21_test_log(value);
}

/// @brief \f[ log(0.14101) = -1.958924 \f]
START_TEST(s21_log_61)
{
    double value = 0.14101;

    s21_test_log(value);
}

/// @brief \f[ log(0.14332) = -1.942675 \f]
START_TEST(s21_log_62)
{
    double value = 0.14332;

    s21_test_log(value);
}

/// @brief \f[ log(0.14563) = -1.926686 \f]
START_TEST(s21_log_63)
{
    double value = 0.14563;

    s21_test_log(value);
}

/// @brief \f[ log(0.14794) = -1.910948 \f]
START_TEST(s21_log_64)
{
    double value = 0.14794;

    s21_test_log(value);
}

/// @brief \f[ log(0.15025) = -1.895455 \f]
START_TEST(s21_log_65)
{
    double value = 0.15025;

    s21_test_log(value);
}

/// @brief \f[ log(0.15256) = -1.880197 \f]
START_TEST(s21_log_66)
{
    double value = 0.15256;

    s21_test_log(value);
}

/// @brief \f[ log(0.15487) = -1.865169 \f]
START_TEST(s21_log_67)
{
    double value = 0.15487;

    s21_test_log(value);
}

/// @brief \f[ log(0.15718) = -1.850364 \f]
START_TEST(s21_log_68)
{
    double value = 0.15718;

    s21_test_log(value);
}

/// @brief \f[ log(0.15949) = -1.835774 \f]
START_TEST(s21_log_69)
{
    double value = 0.15949;

    s21_test_log(value);
}

/// @brief \f[ log(0.16180) = -1.821394 \f]
START_TEST(s21_log_70)
{
    double value = 0.16180;

    s21_test_log(value);
}

/// @brief \f[ log(0.16411) = -1.807218 \f]
START_TEST(s21_log_71)
{
    double value = 0.16411;

    s21_test_log(value);
}

/// @brief \f[ log(0.16642) = -1.793241 \f]
START_TEST(s21_log_72)
{
    double value = 0.16642;

    s21_test_log(value);
}

/// @brief \f[ log(0.16873) = -1.779455 \f]
START_TEST(s21_log_73)
{
    double value = 0.16873;

    s21_test_log(value);
}

/// @brief \f[ log(0.17104) = -1.765858 \f]
START_TEST(s21_log_74)
{
    double value = 0.17104;

    s21_test_log(value);
}

/// @brief \f[ log(0.17335) = -1.752443 \f]
START_TEST(s21_log_75)
{
    double value = 0.17335;

    s21_test_log(value);
}

/// @brief \f[ log(0.17566) = -1.739205 \f]
START_TEST(s21_log_76)
{
    double value = 0.17566;

    s21_test_log(value);
}

/// @brief \f[ log(0.17797) = -1.726140 \f]
START_TEST(s21_log_77)
{
    double value = 0.17797;

    s21_test_log(value);
}

/// @brief \f[ log(0.18028) = -1.713244 \f]
START_TEST(s21_log_78)
{
    double value = 0.18028;

    s21_test_log(value);
}

/// @brief \f[ log(0.18259) = -1.700512 \f]
START_TEST(s21_log_79)
{
    double value = 0.18259;

    s21_test_log(value);
}

/// @brief \f[ log(0.18490) = -1.687940 \f]
START_TEST(s21_log_80)
{
    double value = 0.18490;

    s21_test_log(value);
}

/// @brief \f[ log(0.18721) = -1.675524 \f]
START_TEST(s21_log_81)
{
    double value = 0.18721;

    s21_test_log(value);
}

/// @brief \f[ log(0.18952) = -1.663261 \f]
START_TEST(s21_log_82)
{
    double value = 0.18952;

    s21_test_log(value);
}

/// @brief \f[ log(0.19183) = -1.651146 \f]
START_TEST(s21_log_83)
{
    double value = 0.19183;

    s21_test_log(value);
}

/// @brief \f[ log(0.19414) = -1.639176 \f]
START_TEST(s21_log_84)
{
    double value = 0.19414;

    s21_test_log(value);
}

/// @brief \f[ log(0.19645) = -1.627347 \f]
START_TEST(s21_log_85)
{
    double value = 0.19645;

    s21_test_log(value);
}

/// @brief \f[ log(0.19876) = -1.615657 \f]
START_TEST(s21_log_86)
{
    double value = 0.19876;

    s21_test_log(value);
}

/// @brief \f[ log(0.20107) = -1.604102 \f]
START_TEST(s21_log_87)
{
    double value = 0.20107;

    s21_test_log(value);
}

/// @brief \f[ log(0.20338) = -1.592679 \f]
START_TEST(s21_log_88)
{
    double value = 0.20338;

    s21_test_log(value);
}

/// @brief \f[ log(0.20569) = -1.581385 \f]
START_TEST(s21_log_89)
{
    double value = 0.20569;

    s21_test_log(value);
}

/// @brief \f[ log(0.20800) = -1.570217 \f]
START_TEST(s21_log_90)
{
    double value = 0.20800;

    s21_test_log(value);
}

/// @brief \f[ log(0.21031) = -1.559173 \f]
START_TEST(s21_log_91)
{
    double value = 0.21031;

    s21_test_log(value);
}

/// @brief \f[ log(0.21262) = -1.548249 \f]
START_TEST(s21_log_92)
{
    double value = 0.21262;

    s21_test_log(value);
}

/// @brief \f[ log(0.21493) = -1.537443 \f]
START_TEST(s21_log_93)
{
    double value = 0.21493;

    s21_test_log(value);
}

/// @brief \f[ log(0.21724) = -1.526753 \f]
START_TEST(s21_log_94)
{
    double value = 0.21724;

    s21_test_log(value);
}

/// @brief \f[ log(0.21955) = -1.516175 \f]
START_TEST(s21_log_95)
{
    double value = 0.21955;

    s21_test_log(value);
}

/// @brief \f[ log(0.22186) = -1.505709 \f]
START_TEST(s21_log_96)
{
    double value = 0.22186;

    s21_test_log(value);
}

/// @brief \f[ log(0.22417) = -1.495351 \f]
START_TEST(s21_log_97)
{
    double value = 0.22417;

    s21_test_log(value);
}

/// @brief \f[ log(0.22648) = -1.485099 \f]
START_TEST(s21_log_98)
{
    double value = 0.22648;

    s21_test_log(value);
}

/// @brief \f[ log(0.22879) = -1.474951 \f]
START_TEST(s21_log_99)
{
    double value = 0.22879;

    s21_test_log(value);
}

/// @brief \f[ log(0.002) = -6.214608 \f]
START_TEST(s21_log_100)
{
    double value = 0.002;

    s21_test_log(value);
}

/// @brief \f[ log(0.00232) = -6.066188 \f]
START_TEST(s21_log_101)
{
    double value = 0.00232;

    s21_test_log(value);
}

/// @brief \f[ log(0.00264) = -5.936976 \f]
START_TEST(s21_log_102)
{
    double value = 0.00264;

    s21_test_log(value);
}

/// @brief \f[ log(0.00296) = -5.822566 \f]
START_TEST(s21_log_103)
{
    double value = 0.00296;

    s21_test_log(value);
}

/// @brief \f[ log(0.00328) = -5.719912 \f]
START_TEST(s21_log_104)
{
    double value = 0.00328;

    s21_test_log(value);
}

/// @brief \f[ log(0.00360) = -5.626821 \f]
START_TEST(s21_log_105)
{
    double value = 0.00360;

    s21_test_log(value);
}

/// @brief \f[ log(0.00392) = -5.541664 \f]
START_TEST(s21_log_106)
{
    double value = 0.00392;

    s21_test_log(value);
}

/// @brief \f[ log(0.00424) = -5.463192 \f]
START_TEST(s21_log_107)
{
    double value = 0.00424;

    s21_test_log(value);
}

/// @brief \f[ log(0.00456) = -5.390433 \f]
START_TEST(s21_log_108)
{
    double value = 0.00456;

    s21_test_log(value);
}

/// @brief \f[ log(0.00488) = -5.322610 \f]
START_TEST(s21_log_109)
{
    double value = 0.00488;

    s21_test_log(value);
}

/// @brief \f[ log(0.00520) = -5.259097 \f]
START_TEST(s21_log_110)
{
    double value = 0.00520;

    s21_test_log(value);
}

/// @brief \f[ log(0.00552) = -5.199377 \f]
START_TEST(s21_log_111)
{
    double value = 0.00552;

    s21_test_log(value);
}

/// @brief \f[ log(0.00584) = -5.143024 \f]
START_TEST(s21_log_112)
{
    double value = 0.00584;

    s21_test_log(value);
}

/// @brief \f[ log(0.00616) = -5.089679 \f]
START_TEST(s21_log_113)
{
    double value = 0.00616;

    s21_test_log(value);
}

/// @brief \f[ log(0.00648) = -5.039035 \f]
START_TEST(s21_log_114)
{
    double value = 0.00648;

    s21_test_log(value);
}

/// @brief \f[ log(0.00680) = -4.990833 \f]
START_TEST(s21_log_115)
{
    double value = 0.00680;

    s21_test_log(value);
}

/// @brief \f[ log(0.00712) = -4.944848 \f]
START_TEST(s21_log_116)
{
    double value = 0.00712;

    s21_test_log(value);
}

/// @brief \f[ log(0.00744) = -4.900884 \f]
START_TEST(s21_log_117)
{
    double value = 0.00744;

    s21_test_log(value);
}

/// @brief \f[ log(0.00776) = -4.858773 \f]
START_TEST(s21_log_118)
{
    double value = 0.00776;

    s21_test_log(value);
}

/// @brief \f[ log(0.00808) = -4.818363 \f]
START_TEST(s21_log_119)
{
    double value = 0.00808;

    s21_test_log(value);
}

/// @brief \f[ log(0.00840) = -4.779524 \f]
START_TEST(s21_log_120)
{
    double value = 0.00840;

    s21_test_log(value);
}

/// @brief \f[ log(0.00872) = -4.742136 \f]
START_TEST(s21_log_121)
{
    double value = 0.00872;

    s21_test_log(value);
}

/// @brief \f[ log(0.00904) = -4.706096 \f]
START_TEST(s21_log_122)
{
    double value = 0.00904;

    s21_test_log(value);
}

/// @brief \f[ log(0.00936) = -4.671310 \f]
START_TEST(s21_log_123)
{
    double value = 0.00936;

    s21_test_log(value);
}

/// @brief \f[ log(0.00968) = -4.637693 \f]
START_TEST(s21_log_124)
{
    double value = 0.00968;

    s21_test_log(value);
}

/// @brief \f[ log(0.01000) = -4.605170 \f]
START_TEST(s21_log_125)
{
    double value = 0.01000;

    s21_test_log(value);
}

/// @brief \f[ log(0.01032) = -4.573672 \f]
START_TEST(s21_log_126)
{
    double value = 0.01032;

    s21_test_log(value);
}

/// @brief \f[ log(0.01064) = -4.543135 \f]
START_TEST(s21_log_127)
{
    double value = 0.01064;

    s21_test_log(value);
}

/// @brief \f[ log(0.01096) = -4.513503 \f]
START_TEST(s21_log_128)
{
    double value = 0.01096;

    s21_test_log(value);
}

/// @brief \f[ log(0.01128) = -4.484724 \f]
START_TEST(s21_log_129)
{
    double value = 0.01128;

    s21_test_log(value);
}

/// @brief \f[ log(0.01160) = -4.456750 \f]
START_TEST(s21_log_130)
{
    double value = 0.01160;

    s21_test_log(value);
}

/// @brief \f[ log(0.01192) = -4.429538 \f]
START_TEST(s21_log_131)
{
    double value = 0.01192;

    s21_test_log(value);
}

/// @brief \f[ log(0.01224) = -4.403046 \f]
START_TEST(s21_log_132)
{
    double value = 0.01224;

    s21_test_log(value);
}

/// @brief \f[ log(0.01256) = -4.377238 \f]
START_TEST(s21_log_133)
{
    double value = 0.01256;

    s21_test_log(value);
}

/// @brief \f[ log(0.01288) = -4.352080 \f]
START_TEST(s21_log_134)
{
    double value = 0.01288;

    s21_test_log(value);
}

/// @brief \f[ log(0.01320) = -4.327538 \f]
START_TEST(s21_log_135)
{
    double value = 0.01320;

    s21_test_log(value);
}

/// @brief \f[ log(0.01352) = -4.303585 \f]
START_TEST(s21_log_136)
{
    double value = 0.01352;

    s21_test_log(value);
}

/// @brief \f[ log(0.01384) = -4.280192 \f]
START_TEST(s21_log_137)
{
    double value = 0.01384;

    s21_test_log(value);
}

/// @brief \f[ log(0.01416) = -4.257334 \f]
START_TEST(s21_log_138)
{
    double value = 0.01416;

    s21_test_log(value);
}

/// @brief \f[ log(0.01448) = -4.234987 \f]
START_TEST(s21_log_139)
{
    double value = 0.01448;

    s21_test_log(value);
}

/// @brief \f[ log(0.01480) = -4.213128 \f]
START_TEST(s21_log_140)
{
    double value = 0.01480;

    s21_test_log(value);
}

/// @brief \f[ log(0.01512) = -4.191737 \f]
START_TEST(s21_log_141)
{
    double value = 0.01512;

    s21_test_log(value);
}

/// @brief \f[ log(0.01544) = -4.170794 \f]
START_TEST(s21_log_142)
{
    double value = 0.01544;

    s21_test_log(value);
}

/// @brief \f[ log(0.01576) = -4.150280 \f]
START_TEST(s21_log_143)
{
    double value = 0.01576;

    s21_test_log(value);
}

/// @brief \f[ log(0.01608) = -4.130179 \f]
START_TEST(s21_log_144)
{
    double value = 0.01608;

    s21_test_log(value);
}

/// @brief \f[ log(0.01640) = -4.110474 \f]
START_TEST(s21_log_145)
{
    double value = 0.01640;

    s21_test_log(value);
}

/// @brief \f[ log(0.01672) = -4.091150 \f]
START_TEST(s21_log_146)
{
    double value = 0.01672;

    s21_test_log(value);
}

/// @brief \f[ log(0.01704) = -4.072192 \f]
START_TEST(s21_log_147)
{
    double value = 0.01704;

    s21_test_log(value);
}

/// @brief \f[ log(0.01736) = -4.053587 \f]
START_TEST(s21_log_148)
{
    double value = 0.01736;

    s21_test_log(value);
}

/// @brief \f[ log(0.01768) = -4.035321 \f]
START_TEST(s21_log_149)
{
    double value = 0.01768;

    s21_test_log(value);
}

/// @brief \f[ log(0.01800) = -4.017384 \f]
START_TEST(s21_log_150)
{
    double value = 0.01800;

    s21_test_log(value);
}

/// @brief \f[ log(0.01832) = -3.999762 \f]
START_TEST(s21_log_151)
{
    double value = 0.01832;

    s21_test_log(value);
}

/// @brief \f[ log(0.01864) = -3.982445 \f]
START_TEST(s21_log_152)
{
    double value = 0.01864;

    s21_test_log(value);
}

/// @brief \f[ log(0.01896) = -3.965424 \f]
START_TEST(s21_log_153)
{
    double value = 0.01896;

    s21_test_log(value);
}

/// @brief \f[ log(0.01928) = -3.948687 \f]
START_TEST(s21_log_154)
{
    double value = 0.01928;

    s21_test_log(value);
}

/// @brief \f[ log(0.01960) = -3.932226 \f]
START_TEST(s21_log_155)
{
    double value = 0.01960;

    s21_test_log(value);
}

/// @brief \f[ log(0.01992) = -3.916031 \f]
START_TEST(s21_log_156)
{
    double value = 0.01992;

    s21_test_log(value);
}

/// @brief \f[ log(0.02024) = -3.900094 \f]
START_TEST(s21_log_157)
{
    double value = 0.02024;

    s21_test_log(value);
}

/// @brief \f[ log(0.02056) = -3.884408 \f]
START_TEST(s21_log_158)
{
    double value = 0.02056;

    s21_test_log(value);
}

/// @brief \f[ log(0.02088) = -3.868964 \f]
START_TEST(s21_log_159)
{
    double value = 0.02088;

    s21_test_log(value);
}

/// @brief \f[ log(0.02120) = -3.853754 \f]
START_TEST(s21_log_160)
{
    double value = 0.02120;

    s21_test_log(value);
}

/// @brief \f[ log(0.02152) = -3.838773 \f]
START_TEST(s21_log_161)
{
    double value = 0.02152;

    s21_test_log(value);
}

/// @brief \f[ log(0.02184) = -3.824012 \f]
START_TEST(s21_log_162)
{
    double value = 0.02184;

    s21_test_log(value);
}

/// @brief \f[ log(0.02216) = -3.809466 \f]
START_TEST(s21_log_163)
{
    double value = 0.02216;

    s21_test_log(value);
}

/// @brief \f[ log(0.02248) = -3.795129 \f]
START_TEST(s21_log_164)
{
    double value = 0.02248;

    s21_test_log(value);
}

/// @brief \f[ log(0.02280) = -3.780995 \f]
START_TEST(s21_log_165)
{
    double value = 0.02280;

    s21_test_log(value);
}

/// @brief \f[ log(0.02312) = -3.767057 \f]
START_TEST(s21_log_166)
{
    double value = 0.02312;

    s21_test_log(value);
}

/// @brief \f[ log(0.02344) = -3.753311 \f]
START_TEST(s21_log_167)
{
    double value = 0.02344;

    s21_test_log(value);
}

/// @brief \f[ log(0.02376) = -3.739752 \f]
START_TEST(s21_log_168)
{
    double value = 0.02376;

    s21_test_log(value);
}

/// @brief \f[ log(0.02408) = -3.726374 \f]
START_TEST(s21_log_169)
{
    double value = 0.02408;

    s21_test_log(value);
}

/// @brief \f[ log(0.02440) = -3.713172 \f]
START_TEST(s21_log_170)
{
    double value = 0.02440;

    s21_test_log(value);
}

/// @brief \f[ log(0.02472) = -3.700143 \f]
START_TEST(s21_log_171)
{
    double value = 0.02472;

    s21_test_log(value);
}

/// @brief \f[ log(0.02504) = -3.687281 \f]
START_TEST(s21_log_172)
{
    double value = 0.02504;

    s21_test_log(value);
}

/// @brief \f[ log(0.02536) = -3.674582 \f]
START_TEST(s21_log_173)
{
    double value = 0.02536;

    s21_test_log(value);
}

/// @brief \f[ log(0.02568) = -3.662043 \f]
START_TEST(s21_log_174)
{
    double value = 0.02568;

    s21_test_log(value);
}

/// @brief \f[ log(0.02600) = -3.649659 \f]
START_TEST(s21_log_175)
{
    double value = 0.02600;

    s21_test_log(value);
}

/// @brief \f[ log(0.02632) = -3.637426 \f]
START_TEST(s21_log_176)
{
    double value = 0.02632;

    s21_test_log(value);
}

/// @brief \f[ log(0.02664) = -3.625341 \f]
START_TEST(s21_log_177)
{
    double value = 0.02664;

    s21_test_log(value);
}

/// @brief \f[ log(0.02696) = -3.613401 \f]
START_TEST(s21_log_178)
{
    double value = 0.02696;

    s21_test_log(value);
}

/// @brief \f[ log(0.02728) = -3.601601 \f]
START_TEST(s21_log_179)
{
    double value = 0.02728;

    s21_test_log(value);
}

/// @brief \f[ log(0.02760) = -3.589940 \f]
START_TEST(s21_log_180)
{
    double value = 0.02760;

    s21_test_log(value);
}

/// @brief \f[ log(0.02792) = -3.578412 \f]
START_TEST(s21_log_181)
{
    double value = 0.02792;

    s21_test_log(value);
}

/// @brief \f[ log(0.02824) = -3.567016 \f]
START_TEST(s21_log_182)
{
    double value = 0.02824;

    s21_test_log(value);
}

/// @brief \f[ log(0.02856) = -3.555748 \f]
START_TEST(s21_log_183)
{
    double value = 0.02856;

    s21_test_log(value);
}

/// @brief \f[ log(0.02888) = -3.544606 \f]
START_TEST(s21_log_184)
{
    double value = 0.02888;

    s21_test_log(value);
}

/// @brief \f[ log(0.02920) = -3.533587 \f]
START_TEST(s21_log_185)
{
    double value = 0.02920;

    s21_test_log(value);
}

/// @brief \f[ log(0.02952) = -3.522687 \f]
START_TEST(s21_log_186)
{
    double value = 0.02952;

    s21_test_log(value);
}

/// @brief \f[ log(0.02984) = -3.511906 \f]
START_TEST(s21_log_187)
{
    double value = 0.02984;

    s21_test_log(value);
}

/// @brief \f[ log(0.03016) = -3.501239 \f]
START_TEST(s21_log_188)
{
    double value = 0.03016;

    s21_test_log(value);
}

/// @brief \f[ log(0.03048) = -3.490685 \f]
START_TEST(s21_log_189)
{
    double value = 0.03048;

    s21_test_log(value);
}

/// @brief \f[ log(0.03080) = -3.480241 \f]
START_TEST(s21_log_190)
{
    double value = 0.03080;

    s21_test_log(value);
}

/// @brief \f[ log(0.03112) = -3.469905 \f]
START_TEST(s21_log_191)
{
    double value = 0.03112;

    s21_test_log(value);
}

/// @brief \f[ log(0.03144) = -3.459674 \f]
START_TEST(s21_log_192)
{
    double value = 0.03144;

    s21_test_log(value);
}

/// @brief \f[ log(0.03176) = -3.449548 \f]
START_TEST(s21_log_193)
{
    double value = 0.03176;

    s21_test_log(value);
}

/// @brief \f[ log(0.03208) = -3.439522 \f]
START_TEST(s21_log_194)
{
    double value = 0.03208;

    s21_test_log(value);
}

/// @brief \f[ log(0.03240) = -3.429597 \f]
START_TEST(s21_log_195)
{
    double value = 0.03240;

    s21_test_log(value);
}

/// @brief \f[ log(0.03272) = -3.419769 \f]
START_TEST(s21_log_196)
{
    double value = 0.03272;

    s21_test_log(value);
}

/// @brief \f[ log(0.03304) = -3.410036 \f]
START_TEST(s21_log_197)
{
    double value = 0.03304;

    s21_test_log(value);
}

/// @brief \f[ log(0.03336) = -3.400398 \f]
START_TEST(s21_log_198)
{
    double value = 0.03336;

    s21_test_log(value);
}

/// @brief \f[ log(0.03368) = -3.390851 \f]
START_TEST(s21_log_199)
{
    double value = 0.03368;

    s21_test_log(value);
}

/// @brief \f[ log(0.003) = -5.809143 \f]
START_TEST(s21_log_200)
{
    double value = 0.003;

    s21_test_log(value);
}

/// @brief \f[ log(0.00312) = -5.769922 \f]
START_TEST(s21_log_201)
{
    double value = 0.00312;

    s21_test_log(value);
}

/// @brief \f[ log(0.00324) = -5.732182 \f]
START_TEST(s21_log_202)
{
    double value = 0.00324;

    s21_test_log(value);
}

/// @brief \f[ log(0.00336) = -5.695814 \f]
START_TEST(s21_log_203)
{
    double value = 0.00336;

    s21_test_log(value);
}

/// @brief \f[ log(0.00348) = -5.660723 \f]
START_TEST(s21_log_204)
{
    double value = 0.00348;

    s21_test_log(value);
}

/// @brief \f[ log(0.00360) = -5.626821 \f]
START_TEST(s21_log_205)
{
    double value = 0.00360;

    s21_test_log(value);
}

/// @brief \f[ log(0.00372) = -5.594032 \f]
START_TEST(s21_log_206)
{
    double value = 0.00372;

    s21_test_log(value);
}

/// @brief \f[ log(0.00384) = -5.562283 \f]
START_TEST(s21_log_207)
{
    double value = 0.00384;

    s21_test_log(value);
}

/// @brief \f[ log(0.00396) = -5.531511 \f]
START_TEST(s21_log_208)
{
    double value = 0.00396;

    s21_test_log(value);
}

/// @brief \f[ log(0.00408) = -5.501658 \f]
START_TEST(s21_log_209)
{
    double value = 0.00408;

    s21_test_log(value);
}

/// @brief \f[ log(0.00420) = -5.472671 \f]
START_TEST(s21_log_210)
{
    double value = 0.00420;

    s21_test_log(value);
}

/// @brief \f[ log(0.00432) = -5.444500 \f]
START_TEST(s21_log_211)
{
    double value = 0.00432;

    s21_test_log(value);
}

/// @brief \f[ log(0.00444) = -5.417101 \f]
START_TEST(s21_log_212)
{
    double value = 0.00444;

    s21_test_log(value);
}

/// @brief \f[ log(0.00456) = -5.390433 \f]
START_TEST(s21_log_213)
{
    double value = 0.00456;

    s21_test_log(value);
}

/// @brief \f[ log(0.00468) = -5.364457 \f]
START_TEST(s21_log_214)
{
    double value = 0.00468;

    s21_test_log(value);
}

/// @brief \f[ log(0.00480) = -5.339139 \f]
START_TEST(s21_log_215)
{
    double value = 0.00480;

    s21_test_log(value);
}

/// @brief \f[ log(0.00492) = -5.314447 \f]
START_TEST(s21_log_216)
{
    double value = 0.00492;

    s21_test_log(value);
}

/// @brief \f[ log(0.00504) = -5.290349 \f]
START_TEST(s21_log_217)
{
    double value = 0.00504;

    s21_test_log(value);
}

/// @brief \f[ log(0.00516) = -5.266819 \f]
START_TEST(s21_log_218)
{
    double value = 0.00516;

    s21_test_log(value);
}

/// @brief \f[ log(0.00528) = -5.243829 \f]
START_TEST(s21_log_219)
{
    double value = 0.00528;

    s21_test_log(value);
}

/// @brief \f[ log(0.00540) = -5.221356 \f]
START_TEST(s21_log_220)
{
    double value = 0.00540;

    s21_test_log(value);
}

/// @brief \f[ log(0.00552) = -5.199377 \f]
START_TEST(s21_log_221)
{
    double value = 0.00552;

    s21_test_log(value);
}

/// @brief \f[ log(0.00564) = -5.177871 \f]
START_TEST(s21_log_222)
{
    double value = 0.00564;

    s21_test_log(value);
}

/// @brief \f[ log(0.00576) = -5.156818 \f]
START_TEST(s21_log_223)
{
    double value = 0.00576;

    s21_test_log(value);
}

/// @brief \f[ log(0.00588) = -5.136199 \f]
START_TEST(s21_log_224)
{
    double value = 0.00588;

    s21_test_log(value);
}

/// @brief \f[ log(0.00600) = -5.115996 \f]
START_TEST(s21_log_225)
{
    double value = 0.00600;

    s21_test_log(value);
}

/// @brief \f[ log(0.00612) = -5.096193 \f]
START_TEST(s21_log_226)
{
    double value = 0.00612;

    s21_test_log(value);
}

/// @brief \f[ log(0.00624) = -5.076775 \f]
START_TEST(s21_log_227)
{
    double value = 0.00624;

    s21_test_log(value);
}

/// @brief \f[ log(0.00636) = -5.057727 \f]
START_TEST(s21_log_228)
{
    double value = 0.00636;

    s21_test_log(value);
}

/// @brief \f[ log(0.00648) = -5.039035 \f]
START_TEST(s21_log_229)
{
    double value = 0.00648;

    s21_test_log(value);
}

/// @brief \f[ log(0.00660) = -5.020686 \f]
START_TEST(s21_log_230)
{
    double value = 0.00660;

    s21_test_log(value);
}

/// @brief \f[ log(0.00672) = -5.002667 \f]
START_TEST(s21_log_231)
{
    double value = 0.00672;

    s21_test_log(value);
}

/// @brief \f[ log(0.00684) = -4.984968 \f]
START_TEST(s21_log_232)
{
    double value = 0.00684;

    s21_test_log(value);
}

/// @brief \f[ log(0.00696) = -4.967576 \f]
START_TEST(s21_log_233)
{
    double value = 0.00696;

    s21_test_log(value);
}

/// @brief \f[ log(0.00708) = -4.950481 \f]
START_TEST(s21_log_234)
{
    double value = 0.00708;

    s21_test_log(value);
}

/// @brief \f[ log(0.00720) = -4.933674 \f]
START_TEST(s21_log_235)
{
    double value = 0.00720;

    s21_test_log(value);
}

/// @brief \f[ log(0.00732) = -4.917145 \f]
START_TEST(s21_log_236)
{
    double value = 0.00732;

    s21_test_log(value);
}

/// @brief \f[ log(0.00744) = -4.900884 \f]
START_TEST(s21_log_237)
{
    double value = 0.00744;

    s21_test_log(value);
}

/// @brief \f[ log(0.00756) = -4.884884 \f]
START_TEST(s21_log_238)
{
    double value = 0.00756;

    s21_test_log(value);
}

/// @brief \f[ log(0.00768) = -4.869136 \f]
START_TEST(s21_log_239)
{
    double value = 0.00768;

    s21_test_log(value);
}

/// @brief \f[ log(0.00780) = -4.853632 \f]
START_TEST(s21_log_240)
{
    double value = 0.00780;

    s21_test_log(value);
}

/// @brief \f[ log(0.00792) = -4.838364 \f]
START_TEST(s21_log_241)
{
    double value = 0.00792;

    s21_test_log(value);
}

/// @brief \f[ log(0.00804) = -4.823326 \f]
START_TEST(s21_log_242)
{
    double value = 0.00804;

    s21_test_log(value);
}

/// @brief \f[ log(0.00816) = -4.808511 \f]
START_TEST(s21_log_243)
{
    double value = 0.00816;

    s21_test_log(value);
}

/// @brief \f[ log(0.00828) = -4.793912 \f]
START_TEST(s21_log_244)
{
    double value = 0.00828;

    s21_test_log(value);
}

/// @brief \f[ log(0.00840) = -4.779524 \f]
START_TEST(s21_log_245)
{
    double value = 0.00840;

    s21_test_log(value);
}

/// @brief \f[ log(0.00852) = -4.765339 \f]
START_TEST(s21_log_246)
{
    double value = 0.00852;

    s21_test_log(value);
}

/// @brief \f[ log(0.00864) = -4.751353 \f]
START_TEST(s21_log_247)
{
    double value = 0.00864;

    s21_test_log(value);
}

/// @brief \f[ log(0.00876) = -4.737559 \f]
START_TEST(s21_log_248)
{
    double value = 0.00876;

    s21_test_log(value);
}

/// @brief \f[ log(0.00888) = -4.723954 \f]
START_TEST(s21_log_249)
{
    double value = 0.00888;

    s21_test_log(value);
}

/// @brief \f[ log(0.00900) = -4.710531 \f]
START_TEST(s21_log_250)
{
    double value = 0.00900;

    s21_test_log(value);
}

/// @brief \f[ log(0.00912) = -4.697285 \f]
START_TEST(s21_log_251)
{
    double value = 0.00912;

    s21_test_log(value);
}

/// @brief \f[ log(0.00924) = -4.684213 \f]
START_TEST(s21_log_252)
{
    double value = 0.00924;

    s21_test_log(value);
}

/// @brief \f[ log(0.00936) = -4.671310 \f]
START_TEST(s21_log_253)
{
    double value = 0.00936;

    s21_test_log(value);
}

/// @brief \f[ log(0.00948) = -4.658571 \f]
START_TEST(s21_log_254)
{
    double value = 0.00948;

    s21_test_log(value);
}

/// @brief \f[ log(0.00960) = -4.645992 \f]
START_TEST(s21_log_255)
{
    double value = 0.00960;

    s21_test_log(value);
}

/// @brief \f[ log(0.00972) = -4.633570 \f]
START_TEST(s21_log_256)
{
    double value = 0.00972;

    s21_test_log(value);
}

/// @brief \f[ log(0.00984) = -4.621300 \f]
START_TEST(s21_log_257)
{
    double value = 0.00984;

    s21_test_log(value);
}

/// @brief \f[ log(0.00996) = -4.609178 \f]
START_TEST(s21_log_258)
{
    double value = 0.00996;

    s21_test_log(value);
}

/// @brief \f[ log(0.01008) = -4.597202 \f]
START_TEST(s21_log_259)
{
    double value = 0.01008;

    s21_test_log(value);
}

/// @brief \f[ log(0.01020) = -4.585368 \f]
START_TEST(s21_log_260)
{
    double value = 0.01020;

    s21_test_log(value);
}

/// @brief \f[ log(0.01032) = -4.573672 \f]
START_TEST(s21_log_261)
{
    double value = 0.01032;

    s21_test_log(value);
}

/// @brief \f[ log(0.01044) = -4.562111 \f]
START_TEST(s21_log_262)
{
    double value = 0.01044;

    s21_test_log(value);
}

/// @brief \f[ log(0.01056) = -4.550682 \f]
START_TEST(s21_log_263)
{
    double value = 0.01056;

    s21_test_log(value);
}

/// @brief \f[ log(0.01068) = -4.539382 \f]
START_TEST(s21_log_264)
{
    double value = 0.01068;

    s21_test_log(value);
}

/// @brief \f[ log(0.01080) = -4.528209 \f]
START_TEST(s21_log_265)
{
    double value = 0.01080;

    s21_test_log(value);
}

/// @brief \f[ log(0.01092) = -4.517159 \f]
START_TEST(s21_log_266)
{
    double value = 0.01092;

    s21_test_log(value);
}

/// @brief \f[ log(0.01104) = -4.506230 \f]
START_TEST(s21_log_267)
{
    double value = 0.01104;

    s21_test_log(value);
}

/// @brief \f[ log(0.01116) = -4.495419 \f]
START_TEST(s21_log_268)
{
    double value = 0.01116;

    s21_test_log(value);
}

/// @brief \f[ log(0.01128) = -4.484724 \f]
START_TEST(s21_log_269)
{
    double value = 0.01128;

    s21_test_log(value);
}

/// @brief \f[ log(0.01140) = -4.474142 \f]
START_TEST(s21_log_270)
{
    double value = 0.01140;

    s21_test_log(value);
}

/// @brief \f[ log(0.01152) = -4.463671 \f]
START_TEST(s21_log_271)
{
    double value = 0.01152;

    s21_test_log(value);
}

/// @brief \f[ log(0.01164) = -4.453308 \f]
START_TEST(s21_log_272)
{
    double value = 0.01164;

    s21_test_log(value);
}

/// @brief \f[ log(0.01176) = -4.443051 \f]
START_TEST(s21_log_273)
{
    double value = 0.01176;

    s21_test_log(value);
}

/// @brief \f[ log(0.01188) = -4.432899 \f]
START_TEST(s21_log_274)
{
    double value = 0.01188;

    s21_test_log(value);
}

/// @brief \f[ log(0.01200) = -4.422849 \f]
START_TEST(s21_log_275)
{
    double value = 0.01200;

    s21_test_log(value);
}

/// @brief \f[ log(0.01212) = -4.412898 \f]
START_TEST(s21_log_276)
{
    double value = 0.01212;

    s21_test_log(value);
}

/// @brief \f[ log(0.01224) = -4.403046 \f]
START_TEST(s21_log_277)
{
    double value = 0.01224;

    s21_test_log(value);
}

/// @brief \f[ log(0.01236) = -4.393290 \f]
START_TEST(s21_log_278)
{
    double value = 0.01236;

    s21_test_log(value);
}

/// @brief \f[ log(0.01248) = -4.383628 \f]
START_TEST(s21_log_279)
{
    double value = 0.01248;

    s21_test_log(value);
}

/// @brief \f[ log(0.01260) = -4.374058 \f]
START_TEST(s21_log_280)
{
    double value = 0.01260;

    s21_test_log(value);
}

/// @brief \f[ log(0.01272) = -4.364580 \f]
START_TEST(s21_log_281)
{
    double value = 0.01272;

    s21_test_log(value);
}

/// @brief \f[ log(0.01284) = -4.355190 \f]
START_TEST(s21_log_282)
{
    double value = 0.01284;

    s21_test_log(value);
}

/// @brief \f[ log(0.01296) = -4.345888 \f]
START_TEST(s21_log_283)
{
    double value = 0.01296;

    s21_test_log(value);
}

/// @brief \f[ log(0.01308) = -4.336671 \f]
START_TEST(s21_log_284)
{
    double value = 0.01308;

    s21_test_log(value);
}

/// @brief \f[ log(0.01320) = -4.327538 \f]
START_TEST(s21_log_285)
{
    double value = 0.01320;

    s21_test_log(value);
}

/// @brief \f[ log(0.01332) = -4.318489 \f]
START_TEST(s21_log_286)
{
    double value = 0.01332;

    s21_test_log(value);
}

/// @brief \f[ log(0.01344) = -4.309520 \f]
START_TEST(s21_log_287)
{
    double value = 0.01344;

    s21_test_log(value);
}

/// @brief \f[ log(0.01356) = -4.300631 \f]
START_TEST(s21_log_288)
{
    double value = 0.01356;

    s21_test_log(value);
}

/// @brief \f[ log(0.01368) = -4.291820 \f]
START_TEST(s21_log_289)
{
    double value = 0.01368;

    s21_test_log(value);
}

/// @brief \f[ log(0.01380) = -4.283087 \f]
START_TEST(s21_log_290)
{
    double value = 0.01380;

    s21_test_log(value);
}

/// @brief \f[ log(0.01392) = -4.274429 \f]
START_TEST(s21_log_291)
{
    double value = 0.01392;

    s21_test_log(value);
}

/// @brief \f[ log(0.01404) = -4.265845 \f]
START_TEST(s21_log_292)
{
    double value = 0.01404;

    s21_test_log(value);
}

/// @brief \f[ log(0.01416) = -4.257334 \f]
START_TEST(s21_log_293)
{
    double value = 0.01416;

    s21_test_log(value);
}

/// @brief \f[ log(0.01428) = -4.248895 \f]
START_TEST(s21_log_294)
{
    double value = 0.01428;

    s21_test_log(value);
}

/// @brief \f[ log(0.01440) = -4.240527 \f]
START_TEST(s21_log_295)
{
    double value = 0.01440;

    s21_test_log(value);
}

/// @brief \f[ log(0.01452) = -4.232228 \f]
START_TEST(s21_log_296)
{
    double value = 0.01452;

    s21_test_log(value);
}

/// @brief \f[ log(0.01464) = -4.223998 \f]
START_TEST(s21_log_297)
{
    double value = 0.01464;

    s21_test_log(value);
}

/// @brief \f[ log(0.01476) = -4.215834 \f]
START_TEST(s21_log_298)
{
    double value = 0.01476;

    s21_test_log(value);
}

/// @brief \f[ log(0.01488) = -4.207737 \f]
START_TEST(s21_log_299)
{
    double value = 0.01488;

    s21_test_log(value);
}

/// @brief \f[ log(0.004) = -5.521461 \f]
START_TEST(s21_log_300)
{
    double value = 0.004;

    s21_test_log(value);
}

/// @brief \f[ log(0.0063) = -5.067206 \f]
START_TEST(s21_log_301)
{
    double value = 0.0063;

    s21_test_log(value);
}

/// @brief \f[ log(0.0086) = -4.755993 \f]
START_TEST(s21_log_302)
{
    double value = 0.0086;

    s21_test_log(value);
}

/// @brief \f[ log(0.0109) = -4.518992 \f]
START_TEST(s21_log_303)
{
    double value = 0.0109;

    s21_test_log(value);
}

/// @brief \f[ log(0.0132) = -4.327538 \f]
START_TEST(s21_log_304)
{
    double value = 0.0132;

    s21_test_log(value);
}

/// @brief \f[ log(0.0155) = -4.166915 \f]
START_TEST(s21_log_305)
{
    double value = 0.0155;

    s21_test_log(value);
}

/// @brief \f[ log(0.0178) = -4.028557 \f]
START_TEST(s21_log_306)
{
    double value = 0.0178;

    s21_test_log(value);
}

/// @brief \f[ log(0.0201) = -3.907035 \f]
START_TEST(s21_log_307)
{
    double value = 0.0201;

    s21_test_log(value);
}

/// @brief \f[ log(0.0224) = -3.798694 \f]
START_TEST(s21_log_308)
{
    double value = 0.0224;

    s21_test_log(value);
}

/// @brief \f[ log(0.0247) = -3.700952 \f]
START_TEST(s21_log_309)
{
    double value = 0.0247;

    s21_test_log(value);
}

/// @brief \f[ log(0.0270) = -3.611918 \f]
START_TEST(s21_log_310)
{
    double value = 0.0270;

    s21_test_log(value);
}

/// @brief \f[ log(0.0293) = -3.530168 \f]
START_TEST(s21_log_311)
{
    double value = 0.0293;

    s21_test_log(value);
}

/// @brief \f[ log(0.0316) = -3.454598 \f]
START_TEST(s21_log_312)
{
    double value = 0.0316;

    s21_test_log(value);
}

/// @brief \f[ log(0.0339) = -3.384340 \f]
START_TEST(s21_log_313)
{
    double value = 0.0339;

    s21_test_log(value);
}

/// @brief \f[ log(0.0362) = -3.318696 \f]
START_TEST(s21_log_314)
{
    double value = 0.0362;

    s21_test_log(value);
}

/// @brief \f[ log(0.0385) = -3.257097 \f]
START_TEST(s21_log_315)
{
    double value = 0.0385;

    s21_test_log(value);
}

/// @brief \f[ log(0.0408) = -3.199073 \f]
START_TEST(s21_log_316)
{
    double value = 0.0408;

    s21_test_log(value);
}

/// @brief \f[ log(0.0431) = -3.144232 \f]
START_TEST(s21_log_317)
{
    double value = 0.0431;

    s21_test_log(value);
}

/// @brief \f[ log(0.0454) = -3.092243 \f]
START_TEST(s21_log_318)
{
    double value = 0.0454;

    s21_test_log(value);
}

/// @brief \f[ log(0.0477) = -3.042824 \f]
START_TEST(s21_log_319)
{
    double value = 0.0477;

    s21_test_log(value);
}

/// @brief \f[ log(0.0500) = -2.995732 \f]
START_TEST(s21_log_320)
{
    double value = 0.0500;

    s21_test_log(value);
}

/// @brief \f[ log(0.0523) = -2.950759 \f]
START_TEST(s21_log_321)
{
    double value = 0.0523;

    s21_test_log(value);
}

/// @brief \f[ log(0.0546) = -2.907721 \f]
START_TEST(s21_log_322)
{
    double value = 0.0546;

    s21_test_log(value);
}

/// @brief \f[ log(0.0569) = -2.866460 \f]
START_TEST(s21_log_323)
{
    double value = 0.0569;

    s21_test_log(value);
}

/// @brief \f[ log(0.0592) = -2.826834 \f]
START_TEST(s21_log_324)
{
    double value = 0.0592;

    s21_test_log(value);
}

/// @brief \f[ log(0.0615) = -2.788718 \f]
START_TEST(s21_log_325)
{
    double value = 0.0615;

    s21_test_log(value);
}

/// @brief \f[ log(0.0638) = -2.752002 \f]
START_TEST(s21_log_326)
{
    double value = 0.0638;

    s21_test_log(value);
}

/// @brief \f[ log(0.0661) = -2.716587 \f]
START_TEST(s21_log_327)
{
    double value = 0.0661;

    s21_test_log(value);
}

/// @brief \f[ log(0.0684) = -2.682382 \f]
START_TEST(s21_log_328)
{
    double value = 0.0684;

    s21_test_log(value);
}

/// @brief \f[ log(0.0707) = -2.649310 \f]
START_TEST(s21_log_329)
{
    double value = 0.0707;

    s21_test_log(value);
}

/// @brief \f[ log(0.0730) = -2.617296 \f]
START_TEST(s21_log_330)
{
    double value = 0.0730;

    s21_test_log(value);
}

/// @brief \f[ log(0.0753) = -2.586275 \f]
START_TEST(s21_log_331)
{
    double value = 0.0753;

    s21_test_log(value);
}

/// @brief \f[ log(0.0776) = -2.556188 \f]
START_TEST(s21_log_332)
{
    double value = 0.0776;

    s21_test_log(value);
}

/// @brief \f[ log(0.0799) = -2.526979 \f]
START_TEST(s21_log_333)
{
    double value = 0.0799;

    s21_test_log(value);
}

/// @brief \f[ log(0.0822) = -2.498600 \f]
START_TEST(s21_log_334)
{
    double value = 0.0822;

    s21_test_log(value);
}

/// @brief \f[ log(0.0845) = -2.471004 \f]
START_TEST(s21_log_335)
{
    double value = 0.0845;

    s21_test_log(value);
}

/// @brief \f[ log(0.0868) = -2.444149 \f]
START_TEST(s21_log_336)
{
    double value = 0.0868;

    s21_test_log(value);
}

/// @brief \f[ log(0.0891) = -2.417996 \f]
START_TEST(s21_log_337)
{
    double value = 0.0891;

    s21_test_log(value);
}

/// @brief \f[ log(0.0914) = -2.392510 \f]
START_TEST(s21_log_338)
{
    double value = 0.0914;

    s21_test_log(value);
}

/// @brief \f[ log(0.0937) = -2.367657 \f]
START_TEST(s21_log_339)
{
    double value = 0.0937;

    s21_test_log(value);
}

/// @brief \f[ log(0.0960) = -2.343407 \f]
START_TEST(s21_log_340)
{
    double value = 0.0960;

    s21_test_log(value);
}

/// @brief \f[ log(0.0983) = -2.319731 \f]
START_TEST(s21_log_341)
{
    double value = 0.0983;

    s21_test_log(value);
}

/// @brief \f[ log(0.1006) = -2.296603 \f]
START_TEST(s21_log_342)
{
    double value = 0.1006;

    s21_test_log(value);
}

/// @brief \f[ log(0.1029) = -2.273998 \f]
START_TEST(s21_log_343)
{
    double value = 0.1029;

    s21_test_log(value);
}

/// @brief \f[ log(0.1052) = -2.251892 \f]
START_TEST(s21_log_344)
{
    double value = 0.1052;

    s21_test_log(value);
}

/// @brief \f[ log(0.1075) = -2.230264 \f]
START_TEST(s21_log_345)
{
    double value = 0.1075;

    s21_test_log(value);
}

/// @brief \f[ log(0.1098) = -2.209095 \f]
START_TEST(s21_log_346)
{
    double value = 0.1098;

    s21_test_log(value);
}

/// @brief \f[ log(0.1121) = -2.188364 \f]
START_TEST(s21_log_347)
{
    double value = 0.1121;

    s21_test_log(value);
}

/// @brief \f[ log(0.1144) = -2.168054 \f]
START_TEST(s21_log_348)
{
    double value = 0.1144;

    s21_test_log(value);
}

/// @brief \f[ log(0.1167) = -2.148149 \f]
START_TEST(s21_log_349)
{
    double value = 0.1167;

    s21_test_log(value);
}

/// @brief \f[ log(0.1190) = -2.128632 \f]
START_TEST(s21_log_350)
{
    double value = 0.1190;

    s21_test_log(value);
}

/// @brief \f[ log(0.1213) = -2.109488 \f]
START_TEST(s21_log_351)
{
    double value = 0.1213;

    s21_test_log(value);
}

/// @brief \f[ log(0.1236) = -2.090705 \f]
START_TEST(s21_log_352)
{
    double value = 0.1236;

    s21_test_log(value);
}

/// @brief \f[ log(0.1259) = -2.072267 \f]
START_TEST(s21_log_353)
{
    double value = 0.1259;

    s21_test_log(value);
}

/// @brief \f[ log(0.1282) = -2.054164 \f]
START_TEST(s21_log_354)
{
    double value = 0.1282;

    s21_test_log(value);
}

/// @brief \f[ log(0.1305) = -2.036382 \f]
START_TEST(s21_log_355)
{
    double value = 0.1305;

    s21_test_log(value);
}

/// @brief \f[ log(0.1328) = -2.018911 \f]
START_TEST(s21_log_356)
{
    double value = 0.1328;

    s21_test_log(value);
}

/// @brief \f[ log(0.1351) = -2.001740 \f]
START_TEST(s21_log_357)
{
    double value = 0.1351;

    s21_test_log(value);
}

/// @brief \f[ log(0.1374) = -1.984859 \f]
START_TEST(s21_log_358)
{
    double value = 0.1374;

    s21_test_log(value);
}

/// @brief \f[ log(0.1397) = -1.968258 \f]
START_TEST(s21_log_359)
{
    double value = 0.1397;

    s21_test_log(value);
}

/// @brief \f[ log(0.1420) = -1.951928 \f]
START_TEST(s21_log_360)
{
    double value = 0.1420;

    s21_test_log(value);
}

/// @brief \f[ log(0.1443) = -1.935861 \f]
START_TEST(s21_log_361)
{
    double value = 0.1443;

    s21_test_log(value);
}

/// @brief \f[ log(0.1466) = -1.920047 \f]
START_TEST(s21_log_362)
{
    double value = 0.1466;

    s21_test_log(value);
}

/// @brief \f[ log(0.1489) = -1.904480 \f]
START_TEST(s21_log_363)
{
    double value = 0.1489;

    s21_test_log(value);
}

/// @brief \f[ log(0.1512) = -1.889152 \f]
START_TEST(s21_log_364)
{
    double value = 0.1512;

    s21_test_log(value);
}

/// @brief \f[ log(0.1535) = -1.874055 \f]
START_TEST(s21_log_365)
{
    double value = 0.1535;

    s21_test_log(value);
}

/// @brief \f[ log(0.1558) = -1.859182 \f]
START_TEST(s21_log_366)
{
    double value = 0.1558;

    s21_test_log(value);
}

/// @brief \f[ log(0.1581) = -1.844528 \f]
START_TEST(s21_log_367)
{
    double value = 0.1581;

    s21_test_log(value);
}

/// @brief \f[ log(0.1604) = -1.830085 \f]
START_TEST(s21_log_368)
{
    double value = 0.1604;

    s21_test_log(value);
}

/// @brief \f[ log(0.1627) = -1.815847 \f]
START_TEST(s21_log_369)
{
    double value = 0.1627;

    s21_test_log(value);
}

/// @brief \f[ log(0.1650) = -1.801810 \f]
START_TEST(s21_log_370)
{
    double value = 0.1650;

    s21_test_log(value);
}

/// @brief \f[ log(0.1673) = -1.787967 \f]
START_TEST(s21_log_371)
{
    double value = 0.1673;

    s21_test_log(value);
}

/// @brief \f[ log(0.1696) = -1.774313 \f]
START_TEST(s21_log_372)
{
    double value = 0.1696;

    s21_test_log(value);
}

/// @brief \f[ log(0.1719) = -1.760842 \f]
START_TEST(s21_log_373)
{
    double value = 0.1719;

    s21_test_log(value);
}

/// @brief \f[ log(0.1742) = -1.747551 \f]
START_TEST(s21_log_374)
{
    double value = 0.1742;

    s21_test_log(value);
}

/// @brief \f[ log(0.1765) = -1.734434 \f]
START_TEST(s21_log_375)
{
    double value = 0.1765;

    s21_test_log(value);
}

/// @brief \f[ log(0.1788) = -1.721487 \f]
START_TEST(s21_log_376)
{
    double value = 0.1788;

    s21_test_log(value);
}

/// @brief \f[ log(0.1811) = -1.708706 \f]
START_TEST(s21_log_377)
{
    double value = 0.1811;

    s21_test_log(value);
}

/// @brief \f[ log(0.1834) = -1.696086 \f]
START_TEST(s21_log_378)
{
    double value = 0.1834;

    s21_test_log(value);
}

/// @brief \f[ log(0.1857) = -1.683623 \f]
START_TEST(s21_log_379)
{
    double value = 0.1857;

    s21_test_log(value);
}

/// @brief \f[ log(0.1880) = -1.671313 \f]
START_TEST(s21_log_380)
{
    double value = 0.1880;

    s21_test_log(value);
}

/// @brief \f[ log(0.1903) = -1.659154 \f]
START_TEST(s21_log_381)
{
    double value = 0.1903;

    s21_test_log(value);
}

/// @brief \f[ log(0.1926) = -1.647140 \f]
START_TEST(s21_log_382)
{
    double value = 0.1926;

    s21_test_log(value);
}

/// @brief \f[ log(0.1949) = -1.635269 \f]
START_TEST(s21_log_383)
{
    double value = 0.1949;

    s21_test_log(value);
}

/// @brief \f[ log(0.1972) = -1.623537 \f]
START_TEST(s21_log_384)
{
    double value = 0.1972;

    s21_test_log(value);
}

/// @brief \f[ log(0.1995) = -1.611941 \f]
START_TEST(s21_log_385)
{
    double value = 0.1995;

    s21_test_log(value);
}

/// @brief \f[ log(0.2018) = -1.600478 \f]
START_TEST(s21_log_386)
{
    double value = 0.2018;

    s21_test_log(value);
}

/// @brief \f[ log(0.2041) = -1.589145 \f]
START_TEST(s21_log_387)
{
    double value = 0.2041;

    s21_test_log(value);
}

/// @brief \f[ log(0.2064) = -1.577939 \f]
START_TEST(s21_log_388)
{
    double value = 0.2064;

    s21_test_log(value);
}

/// @brief \f[ log(0.2087) = -1.566857 \f]
START_TEST(s21_log_389)
{
    double value = 0.2087;

    s21_test_log(value);
}

/// @brief \f[ log(0.2110) = -1.555897 \f]
START_TEST(s21_log_390)
{
    double value = 0.2110;

    s21_test_log(value);
}

/// @brief \f[ log(0.2133) = -1.545056 \f]
START_TEST(s21_log_391)
{
    double value = 0.2133;

    s21_test_log(value);
}

/// @brief \f[ log(0.2156) = -1.534330 \f]
START_TEST(s21_log_392)
{
    double value = 0.2156;

    s21_test_log(value);
}

/// @brief \f[ log(0.2179) = -1.523719 \f]
START_TEST(s21_log_393)
{
    double value = 0.2179;

    s21_test_log(value);
}

/// @brief \f[ log(0.2202) = -1.513219 \f]
START_TEST(s21_log_394)
{
    double value = 0.2202;

    s21_test_log(value);
}

/// @brief \f[ log(0.2225) = -1.502828 \f]
START_TEST(s21_log_395)
{
    double value = 0.2225;

    s21_test_log(value);
}

/// @brief \f[ log(0.2248) = -1.492544 \f]
START_TEST(s21_log_396)
{
    double value = 0.2248;

    s21_test_log(value);
}

/// @brief \f[ log(0.2271) = -1.482365 \f]
START_TEST(s21_log_397)
{
    double value = 0.2271;

    s21_test_log(value);
}

/// @brief \f[ log(0.2294) = -1.472288 \f]
START_TEST(s21_log_398)
{
    double value = 0.2294;

    s21_test_log(value);
}

/// @brief \f[ log(0.2317) = -1.462312 \f]
START_TEST(s21_log_399)
{
    double value = 0.2317;

    s21_test_log(value);
}

/// @brief \f[ log(1.213) = 0.193097 \f]
START_TEST(s21_log_400)
{
    double value = 1.213;

    s21_test_log(value);
}

/// @brief \f[ log(1.447) = 0.369492 \f]
START_TEST(s21_log_401)
{
    double value = 1.447;

    s21_test_log(value);
}

/// @brief \f[ log(1.681) = 0.519389 \f]
START_TEST(s21_log_402)
{
    double value = 1.681;

    s21_test_log(value);
}

/// @brief \f[ log(1.915) = 0.649718 \f]
START_TEST(s21_log_403)
{
    double value = 1.915;

    s21_test_log(value);
}

/// @brief \f[ log(2.149) = 0.765003 \f]
START_TEST(s21_log_404)
{
    double value = 2.149;

    s21_test_log(value);
}

/// @brief \f[ log(2.383) = 0.868360 \f]
START_TEST(s21_log_405)
{
    double value = 2.383;

    s21_test_log(value);
}

/// @brief \f[ log(2.617) = 0.962029 \f]
START_TEST(s21_log_406)
{
    double value = 2.617;

    s21_test_log(value);
}

/// @brief \f[ log(2.851) = 1.047670 \f]
START_TEST(s21_log_407)
{
    double value = 2.851;

    s21_test_log(value);
}

/// @brief \f[ log(3.085) = 1.126552 \f]
START_TEST(s21_log_408)
{
    double value = 3.085;

    s21_test_log(value);
}

/// @brief \f[ log(3.319) = 1.199664 \f]
START_TEST(s21_log_409)
{
    double value = 3.319;

    s21_test_log(value);
}

/// @brief \f[ log(3.553) = 1.267792 \f]
START_TEST(s21_log_410)
{
    double value = 3.553;

    s21_test_log(value);
}

/// @brief \f[ log(3.787) = 1.331574 \f]
START_TEST(s21_log_411)
{
    double value = 3.787;

    s21_test_log(value);
}

/// @brief \f[ log(4.021) = 1.391531 \f]
START_TEST(s21_log_412)
{
    double value = 4.021;

    s21_test_log(value);
}

/// @brief \f[ log(4.255) = 1.448095 \f]
START_TEST(s21_log_413)
{
    double value = 4.255;

    s21_test_log(value);
}

/// @brief \f[ log(4.489) = 1.501630 \f]
START_TEST(s21_log_414)
{
    double value = 4.489;

    s21_test_log(value);
}

/// @brief \f[ log(4.723) = 1.552444 \f]
START_TEST(s21_log_415)
{
    double value = 4.723;

    s21_test_log(value);
}

/// @brief \f[ log(4.957) = 1.600801 \f]
START_TEST(s21_log_416)
{
    double value = 4.957;

    s21_test_log(value);
}

/// @brief \f[ log(5.191) = 1.646926 \f]
START_TEST(s21_log_417)
{
    double value = 5.191;

    s21_test_log(value);
}

/// @brief \f[ log(5.425) = 1.691018 \f]
START_TEST(s21_log_418)
{
    double value = 5.425;

    s21_test_log(value);
}

/// @brief \f[ log(5.659) = 1.733247 \f]
START_TEST(s21_log_419)
{
    double value = 5.659;

    s21_test_log(value);
}

/// @brief \f[ log(5.893) = 1.773765 \f]
START_TEST(s21_log_420)
{
    double value = 5.893;

    s21_test_log(value);
}

/// @brief \f[ log(6.127) = 1.812705 \f]
START_TEST(s21_log_421)
{
    double value = 6.127;

    s21_test_log(value);
}

/// @brief \f[ log(6.361) = 1.850186 \f]
START_TEST(s21_log_422)
{
    double value = 6.361;

    s21_test_log(value);
}

/// @brief \f[ log(6.595) = 1.886312 \f]
START_TEST(s21_log_423)
{
    double value = 6.595;

    s21_test_log(value);
}

/// @brief \f[ log(6.829) = 1.921178 \f]
START_TEST(s21_log_424)
{
    double value = 6.829;

    s21_test_log(value);
}

/// @brief \f[ log(7.063) = 1.954870 \f]
START_TEST(s21_log_425)
{
    double value = 7.063;

    s21_test_log(value);
}

/// @brief \f[ log(7.297) = 1.987463 \f]
START_TEST(s21_log_426)
{
    double value = 7.297;

    s21_test_log(value);
}

/// @brief \f[ log(7.531) = 2.019028 \f]
START_TEST(s21_log_427)
{
    double value = 7.531;

    s21_test_log(value);
}

/// @brief \f[ log(7.765) = 2.049626 \f]
START_TEST(s21_log_428)
{
    double value = 7.765;

    s21_test_log(value);
}

/// @brief \f[ log(7.999) = 2.079317 \f]
START_TEST(s21_log_429)
{
    double value = 7.999;

    s21_test_log(value);
}

/// @brief \f[ log(8.233) = 2.108150 \f]
START_TEST(s21_log_430)
{
    double value = 8.233;

    s21_test_log(value);
}

/// @brief \f[ log(8.467) = 2.136176 \f]
START_TEST(s21_log_431)
{
    double value = 8.467;

    s21_test_log(value);
}

/// @brief \f[ log(8.701) = 2.163438 \f]
START_TEST(s21_log_432)
{
    double value = 8.701;

    s21_test_log(value);
}

/// @brief \f[ log(8.935) = 2.189976 \f]
START_TEST(s21_log_433)
{
    double value = 8.935;

    s21_test_log(value);
}

/// @brief \f[ log(9.169) = 2.215828 \f]
START_TEST(s21_log_434)
{
    double value = 9.169;

    s21_test_log(value);
}

/// @brief \f[ log(9.403) = 2.241029 \f]
START_TEST(s21_log_435)
{
    double value = 9.403;

    s21_test_log(value);
}

/// @brief \f[ log(9.637) = 2.265610 \f]
START_TEST(s21_log_436)
{
    double value = 9.637;

    s21_test_log(value);
}

/// @brief \f[ log(9.871) = 2.289601 \f]
START_TEST(s21_log_437)
{
    double value = 9.871;

    s21_test_log(value);
}

/// @brief \f[ log(10.105) = 2.313030 \f]
START_TEST(s21_log_438)
{
    double value = 10.105;

    s21_test_log(value);
}

/// @brief \f[ log(10.339) = 2.335923 \f]
START_TEST(s21_log_439)
{
    double value = 10.339;

    s21_test_log(value);
}

/// @brief \f[ log(10.573) = 2.358304 \f]
START_TEST(s21_log_440)
{
    double value = 10.573;

    s21_test_log(value);
}

/// @brief \f[ log(10.807) = 2.380194 \f]
START_TEST(s21_log_441)
{
    double value = 10.807;

    s21_test_log(value);
}

/// @brief \f[ log(11.041) = 2.401616 \f]
START_TEST(s21_log_442)
{
    double value = 11.041;

    s21_test_log(value);
}

/// @brief \f[ log(11.275) = 2.422588 \f]
START_TEST(s21_log_443)
{
    double value = 11.275;

    s21_test_log(value);
}

/// @brief \f[ log(11.509) = 2.443129 \f]
START_TEST(s21_log_444)
{
    double value = 11.509;

    s21_test_log(value);
}

/// @brief \f[ log(11.743) = 2.463257 \f]
START_TEST(s21_log_445)
{
    double value = 11.743;

    s21_test_log(value);
}

/// @brief \f[ log(11.977) = 2.482988 \f]
START_TEST(s21_log_446)
{
    double value = 11.977;

    s21_test_log(value);
}

/// @brief \f[ log(12.211) = 2.502337 \f]
START_TEST(s21_log_447)
{
    double value = 12.211;

    s21_test_log(value);
}

/// @brief \f[ log(12.445) = 2.521319 \f]
START_TEST(s21_log_448)
{
    double value = 12.445;

    s21_test_log(value);
}

/// @brief \f[ log(12.679) = 2.539947 \f]
START_TEST(s21_log_449)
{
    double value = 12.679;

    s21_test_log(value);
}

/// @brief \f[ log(12.913) = 2.558235 \f]
START_TEST(s21_log_450)
{
    double value = 12.913;

    s21_test_log(value);
}

/// @brief \f[ log(13.147) = 2.576194 \f]
START_TEST(s21_log_451)
{
    double value = 13.147;

    s21_test_log(value);
}

/// @brief \f[ log(13.381) = 2.593836 \f]
START_TEST(s21_log_452)
{
    double value = 13.381;

    s21_test_log(value);
}

/// @brief \f[ log(13.615) = 2.611172 \f]
START_TEST(s21_log_453)
{
    double value = 13.615;

    s21_test_log(value);
}

/// @brief \f[ log(13.849) = 2.628213 \f]
START_TEST(s21_log_454)
{
    double value = 13.849;

    s21_test_log(value);
}

/// @brief \f[ log(14.083) = 2.644968 \f]
START_TEST(s21_log_455)
{
    double value = 14.083;

    s21_test_log(value);
}

/// @brief \f[ log(14.317) = 2.661448 \f]
START_TEST(s21_log_456)
{
    double value = 14.317;

    s21_test_log(value);
}

/// @brief \f[ log(14.551) = 2.677660 \f]
START_TEST(s21_log_457)
{
    double value = 14.551;

    s21_test_log(value);
}

/// @brief \f[ log(14.785) = 2.693613 \f]
START_TEST(s21_log_458)
{
    double value = 14.785;

    s21_test_log(value);
}

/// @brief \f[ log(15.019) = 2.709316 \f]
START_TEST(s21_log_459)
{
    double value = 15.019;

    s21_test_log(value);
}

/// @brief \f[ log(15.253) = 2.724776 \f]
START_TEST(s21_log_460)
{
    double value = 15.253;

    s21_test_log(value);
}

/// @brief \f[ log(15.487) = 2.740001 \f]
START_TEST(s21_log_461)
{
    double value = 15.487;

    s21_test_log(value);
}

/// @brief \f[ log(15.721) = 2.754997 \f]
START_TEST(s21_log_462)
{
    double value = 15.721;

    s21_test_log(value);
}

/// @brief \f[ log(15.955) = 2.769772 \f]
START_TEST(s21_log_463)
{
    double value = 15.955;

    s21_test_log(value);
}

/// @brief \f[ log(16.189) = 2.784332 \f]
START_TEST(s21_log_464)
{
    double value = 16.189;

    s21_test_log(value);
}

/// @brief \f[ log(16.423) = 2.798683 \f]
START_TEST(s21_log_465)
{
    double value = 16.423;

    s21_test_log(value);
}

/// @brief \f[ log(16.657) = 2.812831 \f]
START_TEST(s21_log_466)
{
    double value = 16.657;

    s21_test_log(value);
}

/// @brief \f[ log(16.891) = 2.826781 \f]
START_TEST(s21_log_467)
{
    double value = 16.891;

    s21_test_log(value);
}

/// @brief \f[ log(17.125) = 2.840539 \f]
START_TEST(s21_log_468)
{
    double value = 17.125;

    s21_test_log(value);
}

/// @brief \f[ log(17.359) = 2.854111 \f]
START_TEST(s21_log_469)
{
    double value = 17.359;

    s21_test_log(value);
}

/// @brief \f[ log(17.593) = 2.867501 \f]
START_TEST(s21_log_470)
{
    double value = 17.593;

    s21_test_log(value);
}

/// @brief \f[ log(17.827) = 2.880714 \f]
START_TEST(s21_log_471)
{
    double value = 17.827;

    s21_test_log(value);
}

/// @brief \f[ log(18.061) = 2.893755 \f]
START_TEST(s21_log_472)
{
    double value = 18.061;

    s21_test_log(value);
}

/// @brief \f[ log(18.295) = 2.906628 \f]
START_TEST(s21_log_473)
{
    double value = 18.295;

    s21_test_log(value);
}

/// @brief \f[ log(18.529) = 2.919337 \f]
START_TEST(s21_log_474)
{
    double value = 18.529;

    s21_test_log(value);
}

/// @brief \f[ log(18.763) = 2.931887 \f]
START_TEST(s21_log_475)
{
    double value = 18.763;

    s21_test_log(value);
}

/// @brief \f[ log(18.997) = 2.944281 \f]
START_TEST(s21_log_476)
{
    double value = 18.997;

    s21_test_log(value);
}

/// @brief \f[ log(19.231) = 2.956524 \f]
START_TEST(s21_log_477)
{
    double value = 19.231;

    s21_test_log(value);
}

/// @brief \f[ log(19.465) = 2.968618 \f]
START_TEST(s21_log_478)
{
    double value = 19.465;

    s21_test_log(value);
}

/// @brief \f[ log(19.699) = 2.980568 \f]
START_TEST(s21_log_479)
{
    double value = 19.699;

    s21_test_log(value);
}

/// @brief \f[ log(19.933) = 2.992377 \f]
START_TEST(s21_log_480)
{
    double value = 19.933;

    s21_test_log(value);
}

/// @brief \f[ log(20.167) = 3.004048 \f]
START_TEST(s21_log_481)
{
    double value = 20.167;

    s21_test_log(value);
}

/// @brief \f[ log(20.401) = 3.015584 \f]
START_TEST(s21_log_482)
{
    double value = 20.401;

    s21_test_log(value);
}

/// @brief \f[ log(20.635) = 3.026989 \f]
START_TEST(s21_log_483)
{
    double value = 20.635;

    s21_test_log(value);
}

/// @brief \f[ log(20.869) = 3.038265 \f]
START_TEST(s21_log_484)
{
    double value = 20.869;

    s21_test_log(value);
}

/// @brief \f[ log(21.103) = 3.049415 \f]
START_TEST(s21_log_485)
{
    double value = 21.103;

    s21_test_log(value);
}

/// @brief \f[ log(21.337) = 3.060443 \f]
START_TEST(s21_log_486)
{
    double value = 21.337;

    s21_test_log(value);
}

/// @brief \f[ log(21.571) = 3.071350 \f]
START_TEST(s21_log_487)
{
    double value = 21.571;

    s21_test_log(value);
}

/// @brief \f[ log(21.805) = 3.082139 \f]
START_TEST(s21_log_488)
{
    double value = 21.805;

    s21_test_log(value);
}

/// @brief \f[ log(22.039) = 3.092814 \f]
START_TEST(s21_log_489)
{
    double value = 22.039;

    s21_test_log(value);
}

/// @brief \f[ log(22.273) = 3.103375 \f]
START_TEST(s21_log_490)
{
    double value = 22.273;

    s21_test_log(value);
}

/// @brief \f[ log(22.507) = 3.113826 \f]
START_TEST(s21_log_491)
{
    double value = 22.507;

    s21_test_log(value);
}

/// @brief \f[ log(22.741) = 3.124169 \f]
START_TEST(s21_log_492)
{
    double value = 22.741;

    s21_test_log(value);
}

/// @brief \f[ log(22.975) = 3.134407 \f]
START_TEST(s21_log_493)
{
    double value = 22.975;

    s21_test_log(value);
}

/// @brief \f[ log(23.209) = 3.144540 \f]
START_TEST(s21_log_494)
{
    double value = 23.209;

    s21_test_log(value);
}

/// @brief \f[ log(23.443) = 3.154572 \f]
START_TEST(s21_log_495)
{
    double value = 23.443;

    s21_test_log(value);
}

/// @brief \f[ log(23.677) = 3.164504 \f]
START_TEST(s21_log_496)
{
    double value = 23.677;

    s21_test_log(value);
}

/// @brief \f[ log(23.911) = 3.174339 \f]
START_TEST(s21_log_497)
{
    double value = 23.911;

    s21_test_log(value);
}

/// @brief \f[ log(24.145) = 3.184077 \f]
START_TEST(s21_log_498)
{
    double value = 24.145;

    s21_test_log(value);
}

/// @brief \f[ log(24.379) = 3.193722 \f]
START_TEST(s21_log_499)
{
    double value = 24.379;

    s21_test_log(value);
}

/// @brief \f[ log(12.2113) = 2.502362 \f]
START_TEST(s21_log_500)
{
    double value = 12.2113;

    s21_test_log(value);
}

/// @brief \f[ log(13.4113) = 2.596098 \f]
START_TEST(s21_log_501)
{
    double value = 13.4113;

    s21_test_log(value);
}

/// @brief \f[ log(14.6113) = 2.681795 \f]
START_TEST(s21_log_502)
{
    double value = 14.6113;

    s21_test_log(value);
}

/// @brief \f[ log(15.8113) = 2.760725 \f]
START_TEST(s21_log_503)
{
    double value = 15.8113;

    s21_test_log(value);
}

/// @brief \f[ log(17.0113) = 2.833878 \f]
START_TEST(s21_log_504)
{
    double value = 17.0113;

    s21_test_log(value);
}

/// @brief \f[ log(18.2113) = 2.902042 \f]
START_TEST(s21_log_505)
{
    double value = 18.2113;

    s21_test_log(value);
}

/// @brief \f[ log(19.4113) = 2.965855 \f]
START_TEST(s21_log_506)
{
    double value = 19.4113;

    s21_test_log(value);
}

/// @brief \f[ log(20.6113) = 3.025839 \f]
START_TEST(s21_log_507)
{
    double value = 20.6113;

    s21_test_log(value);
}

/// @brief \f[ log(21.8113) = 3.082428 \f]
START_TEST(s21_log_508)
{
    double value = 21.8113;

    s21_test_log(value);
}

/// @brief \f[ log(23.0113) = 3.135985 \f]
START_TEST(s21_log_509)
{
    double value = 23.0113;

    s21_test_log(value);
}

/// @brief \f[ log(24.2113) = 3.186819 \f]
START_TEST(s21_log_510)
{
    double value = 24.2113;

    s21_test_log(value);
}

/// @brief \f[ log(25.4113) = 3.235194 \f]
START_TEST(s21_log_511)
{
    double value = 25.4113;

    s21_test_log(value);
}

/// @brief \f[ log(26.6113) = 3.281336 \f]
START_TEST(s21_log_512)
{
    double value = 26.6113;

    s21_test_log(value);
}

/// @brief \f[ log(27.8113) = 3.325442 \f]
START_TEST(s21_log_513)
{
    double value = 27.8113;

    s21_test_log(value);
}

/// @brief \f[ log(29.0113) = 3.367685 \f]
START_TEST(s21_log_514)
{
    double value = 29.0113;

    s21_test_log(value);
}

/// @brief \f[ log(30.2113) = 3.408216 \f]
START_TEST(s21_log_515)
{
    double value = 30.2113;

    s21_test_log(value);
}

/// @brief \f[ log(31.4113) = 3.447168 \f]
START_TEST(s21_log_516)
{
    double value = 31.4113;

    s21_test_log(value);
}

/// @brief \f[ log(32.6113) = 3.484659 \f]
START_TEST(s21_log_517)
{
    double value = 32.6113;

    s21_test_log(value);
}

/// @brief \f[ log(33.8113) = 3.520795 \f]
START_TEST(s21_log_518)
{
    double value = 33.8113;

    s21_test_log(value);
}

/// @brief \f[ log(35.0113) = 3.555671 \f]
START_TEST(s21_log_519)
{
    double value = 35.0113;

    s21_test_log(value);
}

/// @brief \f[ log(36.2113) = 3.589371 \f]
START_TEST(s21_log_520)
{
    double value = 36.2113;

    s21_test_log(value);
}

/// @brief \f[ log(37.4113) = 3.621973 \f]
START_TEST(s21_log_521)
{
    double value = 37.4113;

    s21_test_log(value);
}

/// @brief \f[ log(38.6113) = 3.653545 \f]
START_TEST(s21_log_522)
{
    double value = 38.6113;

    s21_test_log(value);
}

/// @brief \f[ log(39.8113) = 3.684151 \f]
START_TEST(s21_log_523)
{
    double value = 39.8113;

    s21_test_log(value);
}

/// @brief \f[ log(41.0113) = 3.713848 \f]
START_TEST(s21_log_524)
{
    double value = 41.0113;

    s21_test_log(value);
}

/// @brief \f[ log(42.2113) = 3.742688 \f]
START_TEST(s21_log_525)
{
    double value = 42.2113;

    s21_test_log(value);
}

/// @brief \f[ log(43.4113) = 3.770720 \f]
START_TEST(s21_log_526)
{
    double value = 43.4113;

    s21_test_log(value);
}

/// @brief \f[ log(44.6113) = 3.797987 \f]
START_TEST(s21_log_527)
{
    double value = 44.6113;

    s21_test_log(value);
}

/// @brief \f[ log(45.8113) = 3.824531 \f]
START_TEST(s21_log_528)
{
    double value = 45.8113;

    s21_test_log(value);
}

/// @brief \f[ log(47.0113) = 3.850388 \f]
START_TEST(s21_log_529)
{
    double value = 47.0113;

    s21_test_log(value);
}

/// @brief \f[ log(48.2113) = 3.875593 \f]
START_TEST(s21_log_530)
{
    double value = 48.2113;

    s21_test_log(value);
}

/// @brief \f[ log(49.4113) = 3.900179 \f]
START_TEST(s21_log_531)
{
    double value = 49.4113;

    s21_test_log(value);
}

/// @brief \f[ log(50.6113) = 3.924175 \f]
START_TEST(s21_log_532)
{
    double value = 50.6113;

    s21_test_log(value);
}

/// @brief \f[ log(51.8113) = 3.947608 \f]
START_TEST(s21_log_533)
{
    double value = 51.8113;

    s21_test_log(value);
}

/// @brief \f[ log(53.0113) = 3.970505 \f]
START_TEST(s21_log_534)
{
    double value = 53.0113;

    s21_test_log(value);
}

/// @brief \f[ log(54.2113) = 3.992889 \f]
START_TEST(s21_log_535)
{
    double value = 54.2113;

    s21_test_log(value);
}

/// @brief \f[ log(55.4113) = 4.014784 \f]
START_TEST(s21_log_536)
{
    double value = 55.4113;

    s21_test_log(value);
}

/// @brief \f[ log(56.6113) = 4.036209 \f]
START_TEST(s21_log_537)
{
    double value = 56.6113;

    s21_test_log(value);
}

/// @brief \f[ log(57.8113) = 4.057184 \f]
START_TEST(s21_log_538)
{
    double value = 57.8113;

    s21_test_log(value);
}

/// @brief \f[ log(59.0113) = 4.077729 \f]
START_TEST(s21_log_539)
{
    double value = 59.0113;

    s21_test_log(value);
}

/// @brief \f[ log(60.2113) = 4.097860 \f]
START_TEST(s21_log_540)
{
    double value = 60.2113;

    s21_test_log(value);
}

/// @brief \f[ log(61.4113) = 4.117594 \f]
START_TEST(s21_log_541)
{
    double value = 61.4113;

    s21_test_log(value);
}

/// @brief \f[ log(62.6113) = 4.136946 \f]
START_TEST(s21_log_542)
{
    double value = 62.6113;

    s21_test_log(value);
}

/// @brief \f[ log(63.8113) = 4.155930 \f]
START_TEST(s21_log_543)
{
    double value = 63.8113;

    s21_test_log(value);
}

/// @brief \f[ log(65.0113) = 4.174561 \f]
START_TEST(s21_log_544)
{
    double value = 65.0113;

    s21_test_log(value);
}

/// @brief \f[ log(66.2113) = 4.192851 \f]
START_TEST(s21_log_545)
{
    double value = 66.2113;

    s21_test_log(value);
}

/// @brief \f[ log(67.4113) = 4.210813 \f]
START_TEST(s21_log_546)
{
    double value = 67.4113;

    s21_test_log(value);
}

/// @brief \f[ log(68.6113) = 4.228457 \f]
START_TEST(s21_log_547)
{
    double value = 68.6113;

    s21_test_log(value);
}

/// @brief \f[ log(69.8113) = 4.245796 \f]
START_TEST(s21_log_548)
{
    double value = 69.8113;

    s21_test_log(value);
}

/// @brief \f[ log(71.0113) = 4.262839 \f]
START_TEST(s21_log_549)
{
    double value = 71.0113;

    s21_test_log(value);
}

/// @brief \f[ log(72.2113) = 4.279597 \f]
START_TEST(s21_log_550)
{
    double value = 72.2113;

    s21_test_log(value);
}

/// @brief \f[ log(73.4113) = 4.296078 \f]
START_TEST(s21_log_551)
{
    double value = 73.4113;

    s21_test_log(value);
}

/// @brief \f[ log(74.6113) = 4.312292 \f]
START_TEST(s21_log_552)
{
    double value = 74.6113;

    s21_test_log(value);
}

/// @brief \f[ log(75.8113) = 4.328247 \f]
START_TEST(s21_log_553)
{
    double value = 75.8113;

    s21_test_log(value);
}

/// @brief \f[ log(77.0113) = 4.343952 \f]
START_TEST(s21_log_554)
{
    double value = 77.0113;

    s21_test_log(value);
}

/// @brief \f[ log(78.2113) = 4.359414 \f]
START_TEST(s21_log_555)
{
    double value = 78.2113;

    s21_test_log(value);
}

/// @brief \f[ log(79.4113) = 4.374641 \f]
START_TEST(s21_log_556)
{
    double value = 79.4113;

    s21_test_log(value);
}

/// @brief \f[ log(80.6113) = 4.389639 \f]
START_TEST(s21_log_557)
{
    double value = 80.6113;

    s21_test_log(value);
}

/// @brief \f[ log(81.8113) = 4.404415 \f]
START_TEST(s21_log_558)
{
    double value = 81.8113;

    s21_test_log(value);
}

/// @brief \f[ log(83.0113) = 4.418977 \f]
START_TEST(s21_log_559)
{
    double value = 83.0113;

    s21_test_log(value);
}

/// @brief \f[ log(84.2113) = 4.433329 \f]
START_TEST(s21_log_560)
{
    double value = 84.2113;

    s21_test_log(value);
}

/// @brief \f[ log(85.4113) = 4.447478 \f]
START_TEST(s21_log_561)
{
    double value = 85.4113;

    s21_test_log(value);
}

/// @brief \f[ log(86.6113) = 4.461430 \f]
START_TEST(s21_log_562)
{
    double value = 86.6113;

    s21_test_log(value);
}

/// @brief \f[ log(87.8113) = 4.475190 \f]
START_TEST(s21_log_563)
{
    double value = 87.8113;

    s21_test_log(value);
}

/// @brief \f[ log(89.0113) = 4.488763 \f]
START_TEST(s21_log_564)
{
    double value = 89.0113;

    s21_test_log(value);
}

/// @brief \f[ log(90.2113) = 4.502155 \f]
START_TEST(s21_log_565)
{
    double value = 90.2113;

    s21_test_log(value);
}

/// @brief \f[ log(91.4113) = 4.515369 \f]
START_TEST(s21_log_566)
{
    double value = 91.4113;

    s21_test_log(value);
}

/// @brief \f[ log(92.6113) = 4.528411 \f]
START_TEST(s21_log_567)
{
    double value = 92.6113;

    s21_test_log(value);
}

/// @brief \f[ log(93.8113) = 4.541285 \f]
START_TEST(s21_log_568)
{
    double value = 93.8113;

    s21_test_log(value);
}

/// @brief \f[ log(95.0113) = 4.553996 \f]
START_TEST(s21_log_569)
{
    double value = 95.0113;

    s21_test_log(value);
}

/// @brief \f[ log(96.2113) = 4.566547 \f]
START_TEST(s21_log_570)
{
    double value = 96.2113;

    s21_test_log(value);
}

/// @brief \f[ log(97.4113) = 4.578942 \f]
START_TEST(s21_log_571)
{
    double value = 97.4113;

    s21_test_log(value);
}

/// @brief \f[ log(98.6113) = 4.591186 \f]
START_TEST(s21_log_572)
{
    double value = 98.6113;

    s21_test_log(value);
}

/// @brief \f[ log(99.8113) = 4.603281 \f]
START_TEST(s21_log_573)
{
    double value = 99.8113;

    s21_test_log(value);
}

/// @brief \f[ log(101.0113) = 4.615232 \f]
START_TEST(s21_log_574)
{
    double value = 101.0113;

    s21_test_log(value);
}

/// @brief \f[ log(102.2113) = 4.627042 \f]
START_TEST(s21_log_575)
{
    double value = 102.2113;

    s21_test_log(value);
}

/// @brief \f[ log(103.4113) = 4.638714 \f]
START_TEST(s21_log_576)
{
    double value = 103.4113;

    s21_test_log(value);
}

/// @brief \f[ log(104.6113) = 4.650252 \f]
START_TEST(s21_log_577)
{
    double value = 104.6113;

    s21_test_log(value);
}

/// @brief \f[ log(105.8113) = 4.661657 \f]
START_TEST(s21_log_578)
{
    double value = 105.8113;

    s21_test_log(value);
}

/// @brief \f[ log(107.0113) = 4.672934 \f]
START_TEST(s21_log_579)
{
    double value = 107.0113;

    s21_test_log(value);
}

/// @brief \f[ log(108.2113) = 4.684086 \f]
START_TEST(s21_log_580)
{
    double value = 108.2113;

    s21_test_log(value);
}

/// @brief \f[ log(109.4113) = 4.695114 \f]
START_TEST(s21_log_581)
{
    double value = 109.4113;

    s21_test_log(value);
}

/// @brief \f[ log(110.6113) = 4.706022 \f]
START_TEST(s21_log_582)
{
    double value = 110.6113;

    s21_test_log(value);
}

/// @brief \f[ log(111.8113) = 4.716813 \f]
START_TEST(s21_log_583)
{
    double value = 111.8113;

    s21_test_log(value);
}

/// @brief \f[ log(113.0113) = 4.727488 \f]
START_TEST(s21_log_584)
{
    double value = 113.0113;

    s21_test_log(value);
}

/// @brief \f[ log(114.2113) = 4.738050 \f]
START_TEST(s21_log_585)
{
    double value = 114.2113;

    s21_test_log(value);
}

/// @brief \f[ log(115.4113) = 4.748502 \f]
START_TEST(s21_log_586)
{
    double value = 115.4113;

    s21_test_log(value);
}

/// @brief \f[ log(116.6113) = 4.758846 \f]
START_TEST(s21_log_587)
{
    double value = 116.6113;

    s21_test_log(value);
}

/// @brief \f[ log(117.8113) = 4.769084 \f]
START_TEST(s21_log_588)
{
    double value = 117.8113;

    s21_test_log(value);
}

/// @brief \f[ log(119.0113) = 4.779218 \f]
START_TEST(s21_log_589)
{
    double value = 119.0113;

    s21_test_log(value);
}

/// @brief \f[ log(120.2113) = 4.789251 \f]
START_TEST(s21_log_590)
{
    double value = 120.2113;

    s21_test_log(value);
}

/// @brief \f[ log(121.4113) = 4.799184 \f]
START_TEST(s21_log_591)
{
    double value = 121.4113;

    s21_test_log(value);
}

/// @brief \f[ log(122.6113) = 4.809019 \f]
START_TEST(s21_log_592)
{
    double value = 122.6113;

    s21_test_log(value);
}

/// @brief \f[ log(123.8113) = 4.818759 \f]
START_TEST(s21_log_593)
{
    double value = 123.8113;

    s21_test_log(value);
}

/// @brief \f[ log(125.0113) = 4.828404 \f]
START_TEST(s21_log_594)
{
    double value = 125.0113;

    s21_test_log(value);
}

/// @brief \f[ log(126.2113) = 4.837957 \f]
START_TEST(s21_log_595)
{
    double value = 126.2113;

    s21_test_log(value);
}

/// @brief \f[ log(127.4113) = 4.847420 \f]
START_TEST(s21_log_596)
{
    double value = 127.4113;

    s21_test_log(value);
}

/// @brief \f[ log(128.6113) = 4.856795 \f]
START_TEST(s21_log_597)
{
    double value = 128.6113;

    s21_test_log(value);
}

/// @brief \f[ log(129.8113) = 4.866082 \f]
START_TEST(s21_log_598)
{
    double value = 129.8113;

    s21_test_log(value);
}

/// @brief \f[ log(131.0113) = 4.875284 \f]
START_TEST(s21_log_599)
{
    double value = 131.0113;

    s21_test_log(value);
}

/// @brief \f[ log(1.0) = 0.000000 \f]
START_TEST(s21_log_600)
{
    double value = 1.0;

    s21_test_log(value);
}

/// @brief \f[ log(2.0) = 0.693147 \f]
START_TEST(s21_log_601)
{
    double value = 2.0;

    s21_test_log(value);
}

/// @brief \f[ log(3.0) = 1.098612 \f]
START_TEST(s21_log_602)
{
    double value = 3.0;

    s21_test_log(value);
}

/// @brief \f[ log(4.0) = 1.386294 \f]
START_TEST(s21_log_603)
{
    double value = 4.0;

    s21_test_log(value);
}

/// @brief \f[ log(5.0) = 1.609438 \f]
START_TEST(s21_log_604)
{
    double value = 5.0;

    s21_test_log(value);
}

/// @brief \f[ log(6.0) = 1.791759 \f]
START_TEST(s21_log_605)
{
    double value = 6.0;

    s21_test_log(value);
}

/// @brief \f[ log(7.0) = 1.945910 \f]
START_TEST(s21_log_606)
{
    double value = 7.0;

    s21_test_log(value);
}

/// @brief \f[ log(8.0) = 2.079442 \f]
START_TEST(s21_log_607)
{
    double value = 8.0;

    s21_test_log(value);
}

/// @brief \f[ log(9.0) = 2.197225 \f]
START_TEST(s21_log_608)
{
    double value = 9.0;

    s21_test_log(value);
}

/// @brief \f[ log(10.0) = 2.302585 \f]
START_TEST(s21_log_609)
{
    double value = 10.0;

    s21_test_log(value);
}

/// @brief \f[ log(11.0) = 2.397895 \f]
START_TEST(s21_log_610)
{
    double value = 11.0;

    s21_test_log(value);
}

/// @brief \f[ log(12.0) = 2.484907 \f]
START_TEST(s21_log_611)
{
    double value = 12.0;

    s21_test_log(value);
}

/// @brief \f[ log(13.0) = 2.564949 \f]
START_TEST(s21_log_612)
{
    double value = 13.0;

    s21_test_log(value);
}

/// @brief \f[ log(14.0) = 2.639057 \f]
START_TEST(s21_log_613)
{
    double value = 14.0;

    s21_test_log(value);
}

/// @brief \f[ log(15.0) = 2.708050 \f]
START_TEST(s21_log_614)
{
    double value = 15.0;

    s21_test_log(value);
}

/// @brief \f[ log(16.0) = 2.772589 \f]
START_TEST(s21_log_615)
{
    double value = 16.0;

    s21_test_log(value);
}

/// @brief \f[ log(17.0) = 2.833213 \f]
START_TEST(s21_log_616)
{
    double value = 17.0;

    s21_test_log(value);
}

/// @brief \f[ log(18.0) = 2.890372 \f]
START_TEST(s21_log_617)
{
    double value = 18.0;

    s21_test_log(value);
}

/// @brief \f[ log(19.0) = 2.944439 \f]
START_TEST(s21_log_618)
{
    double value = 19.0;

    s21_test_log(value);
}

/// @brief \f[ log(20.0) = 2.995732 \f]
START_TEST(s21_log_619)
{
    double value = 20.0;

    s21_test_log(value);
}

/// @brief \f[ log(21.0) = 3.044522 \f]
START_TEST(s21_log_620)
{
    double value = 21.0;

    s21_test_log(value);
}

/// @brief \f[ log(22.0) = 3.091042 \f]
START_TEST(s21_log_621)
{
    double value = 22.0;

    s21_test_log(value);
}

/// @brief \f[ log(23.0) = 3.135494 \f]
START_TEST(s21_log_622)
{
    double value = 23.0;

    s21_test_log(value);
}

/// @brief \f[ log(24.0) = 3.178054 \f]
START_TEST(s21_log_623)
{
    double value = 24.0;

    s21_test_log(value);
}

/// @brief \f[ log(25.0) = 3.218876 \f]
START_TEST(s21_log_624)
{
    double value = 25.0;

    s21_test_log(value);
}

/// @brief \f[ log(26.0) = 3.258097 \f]
START_TEST(s21_log_625)
{
    double value = 26.0;

    s21_test_log(value);
}

/// @brief \f[ log(27.0) = 3.295837 \f]
START_TEST(s21_log_626)
{
    double value = 27.0;

    s21_test_log(value);
}

/// @brief \f[ log(28.0) = 3.332205 \f]
START_TEST(s21_log_627)
{
    double value = 28.0;

    s21_test_log(value);
}

/// @brief \f[ log(29.0) = 3.367296 \f]
START_TEST(s21_log_628)
{
    double value = 29.0;

    s21_test_log(value);
}

/// @brief \f[ log(30.0) = 3.401197 \f]
START_TEST(s21_log_629)
{
    double value = 30.0;

    s21_test_log(value);
}

/// @brief \f[ log(31.0) = 3.433987 \f]
START_TEST(s21_log_630)
{
    double value = 31.0;

    s21_test_log(value);
}

/// @brief \f[ log(32.0) = 3.465736 \f]
START_TEST(s21_log_631)
{
    double value = 32.0;

    s21_test_log(value);
}

/// @brief \f[ log(33.0) = 3.496508 \f]
START_TEST(s21_log_632)
{
    double value = 33.0;

    s21_test_log(value);
}

/// @brief \f[ log(34.0) = 3.526361 \f]
START_TEST(s21_log_633)
{
    double value = 34.0;

    s21_test_log(value);
}

/// @brief \f[ log(35.0) = 3.555348 \f]
START_TEST(s21_log_634)
{
    double value = 35.0;

    s21_test_log(value);
}

/// @brief \f[ log(36.0) = 3.583519 \f]
START_TEST(s21_log_635)
{
    double value = 36.0;

    s21_test_log(value);
}

/// @brief \f[ log(37.0) = 3.610918 \f]
START_TEST(s21_log_636)
{
    double value = 37.0;

    s21_test_log(value);
}

/// @brief \f[ log(38.0) = 3.637586 \f]
START_TEST(s21_log_637)
{
    double value = 38.0;

    s21_test_log(value);
}

/// @brief \f[ log(39.0) = 3.663562 \f]
START_TEST(s21_log_638)
{
    double value = 39.0;

    s21_test_log(value);
}

/// @brief \f[ log(40.0) = 3.688879 \f]
START_TEST(s21_log_639)
{
    double value = 40.0;

    s21_test_log(value);
}

/// @brief \f[ log(41.0) = 3.713572 \f]
START_TEST(s21_log_640)
{
    double value = 41.0;

    s21_test_log(value);
}

/// @brief \f[ log(42.0) = 3.737670 \f]
START_TEST(s21_log_641)
{
    double value = 42.0;

    s21_test_log(value);
}

/// @brief \f[ log(43.0) = 3.761200 \f]
START_TEST(s21_log_642)
{
    double value = 43.0;

    s21_test_log(value);
}

/// @brief \f[ log(44.0) = 3.784190 \f]
START_TEST(s21_log_643)
{
    double value = 44.0;

    s21_test_log(value);
}

/// @brief \f[ log(45.0) = 3.806662 \f]
START_TEST(s21_log_644)
{
    double value = 45.0;

    s21_test_log(value);
}

/// @brief \f[ log(46.0) = 3.828641 \f]
START_TEST(s21_log_645)
{
    double value = 46.0;

    s21_test_log(value);
}

/// @brief \f[ log(47.0) = 3.850148 \f]
START_TEST(s21_log_646)
{
    double value = 47.0;

    s21_test_log(value);
}

/// @brief \f[ log(48.0) = 3.871201 \f]
START_TEST(s21_log_647)
{
    double value = 48.0;

    s21_test_log(value);
}

/// @brief \f[ log(49.0) = 3.891820 \f]
START_TEST(s21_log_648)
{
    double value = 49.0;

    s21_test_log(value);
}

/// @brief \f[ log(50.0) = 3.912023 \f]
START_TEST(s21_log_649)
{
    double value = 50.0;

    s21_test_log(value);
}

/// @brief \f[ log(51.0) = 3.931826 \f]
START_TEST(s21_log_650)
{
    double value = 51.0;

    s21_test_log(value);
}

/// @brief \f[ log(52.0) = 3.951244 \f]
START_TEST(s21_log_651)
{
    double value = 52.0;

    s21_test_log(value);
}

/// @brief \f[ log(53.0) = 3.970292 \f]
START_TEST(s21_log_652)
{
    double value = 53.0;

    s21_test_log(value);
}

/// @brief \f[ log(54.0) = 3.988984 \f]
START_TEST(s21_log_653)
{
    double value = 54.0;

    s21_test_log(value);
}

/// @brief \f[ log(55.0) = 4.007333 \f]
START_TEST(s21_log_654)
{
    double value = 55.0;

    s21_test_log(value);
}

/// @brief \f[ log(56.0) = 4.025352 \f]
START_TEST(s21_log_655)
{
    double value = 56.0;

    s21_test_log(value);
}

/// @brief \f[ log(57.0) = 4.043051 \f]
START_TEST(s21_log_656)
{
    double value = 57.0;

    s21_test_log(value);
}

/// @brief \f[ log(58.0) = 4.060443 \f]
START_TEST(s21_log_657)
{
    double value = 58.0;

    s21_test_log(value);
}

/// @brief \f[ log(59.0) = 4.077537 \f]
START_TEST(s21_log_658)
{
    double value = 59.0;

    s21_test_log(value);
}

/// @brief \f[ log(60.0) = 4.094345 \f]
START_TEST(s21_log_659)
{
    double value = 60.0;

    s21_test_log(value);
}

/// @brief \f[ log(61.0) = 4.110874 \f]
START_TEST(s21_log_660)
{
    double value = 61.0;

    s21_test_log(value);
}

/// @brief \f[ log(62.0) = 4.127134 \f]
START_TEST(s21_log_661)
{
    double value = 62.0;

    s21_test_log(value);
}

/// @brief \f[ log(63.0) = 4.143135 \f]
START_TEST(s21_log_662)
{
    double value = 63.0;

    s21_test_log(value);
}

/// @brief \f[ log(64.0) = 4.158883 \f]
START_TEST(s21_log_663)
{
    double value = 64.0;

    s21_test_log(value);
}

/// @brief \f[ log(65.0) = 4.174387 \f]
START_TEST(s21_log_664)
{
    double value = 65.0;

    s21_test_log(value);
}

/// @brief \f[ log(66.0) = 4.189655 \f]
START_TEST(s21_log_665)
{
    double value = 66.0;

    s21_test_log(value);
}

/// @brief \f[ log(67.0) = 4.204693 \f]
START_TEST(s21_log_666)
{
    double value = 67.0;

    s21_test_log(value);
}

/// @brief \f[ log(68.0) = 4.219508 \f]
START_TEST(s21_log_667)
{
    double value = 68.0;

    s21_test_log(value);
}

/// @brief \f[ log(69.0) = 4.234107 \f]
START_TEST(s21_log_668)
{
    double value = 69.0;

    s21_test_log(value);
}

/// @brief \f[ log(70.0) = 4.248495 \f]
START_TEST(s21_log_669)
{
    double value = 70.0;

    s21_test_log(value);
}

/// @brief \f[ log(71.0) = 4.262680 \f]
START_TEST(s21_log_670)
{
    double value = 71.0;

    s21_test_log(value);
}

/// @brief \f[ log(72.0) = 4.276666 \f]
START_TEST(s21_log_671)
{
    double value = 72.0;

    s21_test_log(value);
}

/// @brief \f[ log(73.0) = 4.290459 \f]
START_TEST(s21_log_672)
{
    double value = 73.0;

    s21_test_log(value);
}

/// @brief \f[ log(74.0) = 4.304065 \f]
START_TEST(s21_log_673)
{
    double value = 74.0;

    s21_test_log(value);
}

/// @brief \f[ log(75.0) = 4.317488 \f]
START_TEST(s21_log_674)
{
    double value = 75.0;

    s21_test_log(value);
}

/// @brief \f[ log(76.0) = 4.330733 \f]
START_TEST(s21_log_675)
{
    double value = 76.0;

    s21_test_log(value);
}

/// @brief \f[ log(77.0) = 4.343805 \f]
START_TEST(s21_log_676)
{
    double value = 77.0;

    s21_test_log(value);
}

/// @brief \f[ log(78.0) = 4.356709 \f]
START_TEST(s21_log_677)
{
    double value = 78.0;

    s21_test_log(value);
}

/// @brief \f[ log(79.0) = 4.369448 \f]
START_TEST(s21_log_678)
{
    double value = 79.0;

    s21_test_log(value);
}

/// @brief \f[ log(80.0) = 4.382027 \f]
START_TEST(s21_log_679)
{
    double value = 80.0;

    s21_test_log(value);
}

/// @brief \f[ log(81.0) = 4.394449 \f]
START_TEST(s21_log_680)
{
    double value = 81.0;

    s21_test_log(value);
}

/// @brief \f[ log(82.0) = 4.406719 \f]
START_TEST(s21_log_681)
{
    double value = 82.0;

    s21_test_log(value);
}

/// @brief \f[ log(83.0) = 4.418841 \f]
START_TEST(s21_log_682)
{
    double value = 83.0;

    s21_test_log(value);
}

/// @brief \f[ log(84.0) = 4.430817 \f]
START_TEST(s21_log_683)
{
    double value = 84.0;

    s21_test_log(value);
}

/// @brief \f[ log(85.0) = 4.442651 \f]
START_TEST(s21_log_684)
{
    double value = 85.0;

    s21_test_log(value);
}

/// @brief \f[ log(86.0) = 4.454347 \f]
START_TEST(s21_log_685)
{
    double value = 86.0;

    s21_test_log(value);
}

/// @brief \f[ log(87.0) = 4.465908 \f]
START_TEST(s21_log_686)
{
    double value = 87.0;

    s21_test_log(value);
}

/// @brief \f[ log(88.0) = 4.477337 \f]
START_TEST(s21_log_687)
{
    double value = 88.0;

    s21_test_log(value);
}

/// @brief \f[ log(89.0) = 4.488636 \f]
START_TEST(s21_log_688)
{
    double value = 89.0;

    s21_test_log(value);
}

/// @brief \f[ log(90.0) = 4.499810 \f]
START_TEST(s21_log_689)
{
    double value = 90.0;

    s21_test_log(value);
}

/// @brief \f[ log(91.0) = 4.510860 \f]
START_TEST(s21_log_690)
{
    double value = 91.0;

    s21_test_log(value);
}

/// @brief \f[ log(92.0) = 4.521789 \f]
START_TEST(s21_log_691)
{
    double value = 92.0;

    s21_test_log(value);
}

/// @brief \f[ log(93.0) = 4.532599 \f]
START_TEST(s21_log_692)
{
    double value = 93.0;

    s21_test_log(value);
}

/// @brief \f[ log(94.0) = 4.543295 \f]
START_TEST(s21_log_693)
{
    double value = 94.0;

    s21_test_log(value);
}

/// @brief \f[ log(95.0) = 4.553877 \f]
START_TEST(s21_log_694)
{
    double value = 95.0;

    s21_test_log(value);
}

/// @brief \f[ log(96.0) = 4.564348 \f]
START_TEST(s21_log_695)
{
    double value = 96.0;

    s21_test_log(value);
}

/// @brief \f[ log(97.0) = 4.574711 \f]
START_TEST(s21_log_696)
{
    double value = 97.0;

    s21_test_log(value);
}

/// @brief \f[ log(98.0) = 4.584967 \f]
START_TEST(s21_log_697)
{
    double value = 98.0;

    s21_test_log(value);
}

/// @brief \f[ log(99.0) = 4.595120 \f]
START_TEST(s21_log_698)
{
    double value = 99.0;

    s21_test_log(value);
}

/// @brief \f[ log(100.0) = 4.605170 \f]
START_TEST(s21_log_699)
{
    double value = 100.0;

    s21_test_log(value);
}

/// @brief \f[ log(1.23) = 0.207014 \f]
START_TEST(s21_log_700)
{
    double value = 1.23;

    s21_test_log(value);
}

/// @brief \f[ log(2.73) = 1.004302 \f]
START_TEST(s21_log_701)
{
    double value = 2.73;

    s21_test_log(value);
}

/// @brief \f[ log(4.23) = 1.442202 \f]
START_TEST(s21_log_702)
{
    double value = 4.23;

    s21_test_log(value);
}

/// @brief \f[ log(5.73) = 1.745716 \f]
START_TEST(s21_log_703)
{
    double value = 5.73;

    s21_test_log(value);
}

/// @brief \f[ log(7.23) = 1.978239 \f]
START_TEST(s21_log_704)
{
    double value = 7.23;

    s21_test_log(value);
}

/// @brief \f[ log(8.73) = 2.166765 \f]
START_TEST(s21_log_705)
{
    double value = 8.73;

    s21_test_log(value);
}

/// @brief \f[ log(10.23) = 2.325325 \f]
START_TEST(s21_log_706)
{
    double value = 10.23;

    s21_test_log(value);
}

/// @brief \f[ log(11.73) = 2.462150 \f]
START_TEST(s21_log_707)
{
    double value = 11.73;

    s21_test_log(value);
}

/// @brief \f[ log(13.23) = 2.582487 \f]
START_TEST(s21_log_708)
{
    double value = 13.23;

    s21_test_log(value);
}

/// @brief \f[ log(14.73) = 2.689886 \f]
START_TEST(s21_log_709)
{
    double value = 14.73;

    s21_test_log(value);
}

/// @brief \f[ log(16.23) = 2.786861 \f]
START_TEST(s21_log_710)
{
    double value = 16.23;

    s21_test_log(value);
}

/// @brief \f[ log(17.73) = 2.875258 \f]
START_TEST(s21_log_711)
{
    double value = 17.73;

    s21_test_log(value);
}

/// @brief \f[ log(19.23) = 2.956472 \f]
START_TEST(s21_log_712)
{
    double value = 19.23;

    s21_test_log(value);
}

/// @brief \f[ log(20.73) = 3.031582 \f]
START_TEST(s21_log_713)
{
    double value = 20.73;

    s21_test_log(value);
}

/// @brief \f[ log(22.23) = 3.101443 \f]
START_TEST(s21_log_714)
{
    double value = 22.23;

    s21_test_log(value);
}

/// @brief \f[ log(23.73) = 3.166740 \f]
START_TEST(s21_log_715)
{
    double value = 23.73;

    s21_test_log(value);
}

/// @brief \f[ log(25.23) = 3.228034 \f]
START_TEST(s21_log_716)
{
    double value = 25.23;

    s21_test_log(value);
}

/// @brief \f[ log(26.73) = 3.285787 \f]
START_TEST(s21_log_717)
{
    double value = 26.73;

    s21_test_log(value);
}

/// @brief \f[ log(28.23) = 3.340385 \f]
START_TEST(s21_log_718)
{
    double value = 28.23;

    s21_test_log(value);
}

/// @brief \f[ log(29.73) = 3.392157 \f]
START_TEST(s21_log_719)
{
    double value = 29.73;

    s21_test_log(value);
}

/// @brief \f[ log(31.23) = 3.441379 \f]
START_TEST(s21_log_720)
{
    double value = 31.23;

    s21_test_log(value);
}

/// @brief \f[ log(32.73) = 3.488292 \f]
START_TEST(s21_log_721)
{
    double value = 32.73;

    s21_test_log(value);
}

/// @brief \f[ log(34.23) = 3.533102 \f]
START_TEST(s21_log_722)
{
    double value = 34.23;

    s21_test_log(value);
}

/// @brief \f[ log(35.73) = 3.575991 \f]
START_TEST(s21_log_723)
{
    double value = 35.73;

    s21_test_log(value);
}

/// @brief \f[ log(37.23) = 3.617115 \f]
START_TEST(s21_log_724)
{
    double value = 37.23;

    s21_test_log(value);
}

/// @brief \f[ log(38.73) = 3.656614 \f]
START_TEST(s21_log_725)
{
    double value = 38.73;

    s21_test_log(value);
}

/// @brief \f[ log(40.23) = 3.694613 \f]
START_TEST(s21_log_726)
{
    double value = 40.23;

    s21_test_log(value);
}

/// @brief \f[ log(41.73) = 3.731220 \f]
START_TEST(s21_log_727)
{
    double value = 41.73;

    s21_test_log(value);
}

/// @brief \f[ log(43.23) = 3.766535 \f]
START_TEST(s21_log_728)
{
    double value = 43.23;

    s21_test_log(value);
}

/// @brief \f[ log(44.73) = 3.800644 \f]
START_TEST(s21_log_729)
{
    double value = 44.73;

    s21_test_log(value);
}

/// @brief \f[ log(46.23) = 3.833629 \f]
START_TEST(s21_log_730)
{
    double value = 46.23;

    s21_test_log(value);
}

/// @brief \f[ log(47.73) = 3.865560 \f]
START_TEST(s21_log_731)
{
    double value = 47.73;

    s21_test_log(value);
}

/// @brief \f[ log(49.23) = 3.896503 \f]
START_TEST(s21_log_732)
{
    double value = 49.23;

    s21_test_log(value);
}

/// @brief \f[ log(50.73) = 3.926517 \f]
START_TEST(s21_log_733)
{
    double value = 50.73;

    s21_test_log(value);
}

/// @brief \f[ log(52.23) = 3.955657 \f]
START_TEST(s21_log_734)
{
    double value = 52.23;

    s21_test_log(value);
}

/// @brief \f[ log(53.73) = 3.983972 \f]
START_TEST(s21_log_735)
{
    double value = 53.73;

    s21_test_log(value);
}

/// @brief \f[ log(55.23) = 4.011506 \f]
START_TEST(s21_log_736)
{
    double value = 55.23;

    s21_test_log(value);
}

/// @brief \f[ log(56.73) = 4.038303 \f]
START_TEST(s21_log_737)
{
    double value = 56.73;

    s21_test_log(value);
}

/// @brief \f[ log(58.23) = 4.064401 \f]
START_TEST(s21_log_738)
{
    double value = 58.23;

    s21_test_log(value);
}

/// @brief \f[ log(59.73) = 4.089834 \f]
START_TEST(s21_log_739)
{
    double value = 59.73;

    s21_test_log(value);
}

/// @brief \f[ log(61.23) = 4.114637 \f]
START_TEST(s21_log_740)
{
    double value = 61.23;

    s21_test_log(value);
}

/// @brief \f[ log(62.73) = 4.138840 \f]
START_TEST(s21_log_741)
{
    double value = 62.73;

    s21_test_log(value);
}

/// @brief \f[ log(64.23) = 4.162470 \f]
START_TEST(s21_log_742)
{
    double value = 64.23;

    s21_test_log(value);
}

/// @brief \f[ log(65.73) = 4.185555 \f]
START_TEST(s21_log_743)
{
    double value = 65.73;

    s21_test_log(value);
}

/// @brief \f[ log(67.23) = 4.208120 \f]
START_TEST(s21_log_744)
{
    double value = 67.23;

    s21_test_log(value);
}

/// @brief \f[ log(68.73) = 4.230186 \f]
START_TEST(s21_log_745)
{
    double value = 68.73;

    s21_test_log(value);
}

/// @brief \f[ log(70.23) = 4.251776 \f]
START_TEST(s21_log_746)
{
    double value = 70.23;

    s21_test_log(value);
}

/// @brief \f[ log(71.73) = 4.272909 \f]
START_TEST(s21_log_747)
{
    double value = 71.73;

    s21_test_log(value);
}

/// @brief \f[ log(73.23) = 4.293605 \f]
START_TEST(s21_log_748)
{
    double value = 73.23;

    s21_test_log(value);
}

/// @brief \f[ log(74.73) = 4.313882 \f]
START_TEST(s21_log_749)
{
    double value = 74.73;

    s21_test_log(value);
}

/// @brief \f[ log(76.23) = 4.333755 \f]
START_TEST(s21_log_750)
{
    double value = 76.23;

    s21_test_log(value);
}

/// @brief \f[ log(77.73) = 4.353241 \f]
START_TEST(s21_log_751)
{
    double value = 77.73;

    s21_test_log(value);
}

/// @brief \f[ log(79.23) = 4.372355 \f]
START_TEST(s21_log_752)
{
    double value = 79.23;

    s21_test_log(value);
}

/// @brief \f[ log(80.73) = 4.391110 \f]
START_TEST(s21_log_753)
{
    double value = 80.73;

    s21_test_log(value);
}

/// @brief \f[ log(82.23) = 4.409520 \f]
START_TEST(s21_log_754)
{
    double value = 82.23;

    s21_test_log(value);
}

/// @brief \f[ log(83.73) = 4.427597 \f]
START_TEST(s21_log_755)
{
    double value = 83.73;

    s21_test_log(value);
}

/// @brief \f[ log(85.23) = 4.445353 \f]
START_TEST(s21_log_756)
{
    double value = 85.23;

    s21_test_log(value);
}

/// @brief \f[ log(86.73) = 4.462800 \f]
START_TEST(s21_log_757)
{
    double value = 86.73;

    s21_test_log(value);
}

/// @brief \f[ log(88.23) = 4.479947 \f]
START_TEST(s21_log_758)
{
    double value = 88.23;

    s21_test_log(value);
}

/// @brief \f[ log(89.73) = 4.496805 \f]
START_TEST(s21_log_759)
{
    double value = 89.73;

    s21_test_log(value);
}

/// @brief \f[ log(91.23) = 4.513384 \f]
START_TEST(s21_log_760)
{
    double value = 91.23;

    s21_test_log(value);
}

/// @brief \f[ log(92.73) = 4.529692 \f]
START_TEST(s21_log_761)
{
    double value = 92.73;

    s21_test_log(value);
}

/// @brief \f[ log(94.23) = 4.545739 \f]
START_TEST(s21_log_762)
{
    double value = 94.23;

    s21_test_log(value);
}

/// @brief \f[ log(95.73) = 4.561532 \f]
START_TEST(s21_log_763)
{
    double value = 95.73;

    s21_test_log(value);
}

/// @brief \f[ log(97.23) = 4.577079 \f]
START_TEST(s21_log_764)
{
    double value = 97.23;

    s21_test_log(value);
}

/// @brief \f[ log(98.73) = 4.592389 \f]
START_TEST(s21_log_765)
{
    double value = 98.73;

    s21_test_log(value);
}

/// @brief \f[ log(100.23) = 4.607468 \f]
START_TEST(s21_log_766)
{
    double value = 100.23;

    s21_test_log(value);
}

/// @brief \f[ log(101.73) = 4.622322 \f]
START_TEST(s21_log_767)
{
    double value = 101.73;

    s21_test_log(value);
}

/// @brief \f[ log(103.23) = 4.636960 \f]
START_TEST(s21_log_768)
{
    double value = 103.23;

    s21_test_log(value);
}

/// @brief \f[ log(104.73) = 4.651386 \f]
START_TEST(s21_log_769)
{
    double value = 104.73;

    s21_test_log(value);
}

/// @brief \f[ log(106.23) = 4.665607 \f]
START_TEST(s21_log_770)
{
    double value = 106.23;

    s21_test_log(value);
}

/// @brief \f[ log(107.73) = 4.679628 \f]
START_TEST(s21_log_771)
{
    double value = 107.73;

    s21_test_log(value);
}

/// @brief \f[ log(109.23) = 4.693456 \f]
START_TEST(s21_log_772)
{
    double value = 109.23;

    s21_test_log(value);
}

/// @brief \f[ log(110.73) = 4.707095 \f]
START_TEST(s21_log_773)
{
    double value = 110.73;

    s21_test_log(value);
}

/// @brief \f[ log(112.23) = 4.720550 \f]
START_TEST(s21_log_774)
{
    double value = 112.23;

    s21_test_log(value);
}

/// @brief \f[ log(113.73) = 4.733827 \f]
START_TEST(s21_log_775)
{
    double value = 113.73;

    s21_test_log(value);
}

/// @brief \f[ log(115.23) = 4.746930 \f]
START_TEST(s21_log_776)
{
    double value = 115.23;

    s21_test_log(value);
}

/// @brief \f[ log(116.73) = 4.759864 \f]
START_TEST(s21_log_777)
{
    double value = 116.73;

    s21_test_log(value);
}

/// @brief \f[ log(118.23) = 4.772632 \f]
START_TEST(s21_log_778)
{
    double value = 118.23;

    s21_test_log(value);
}

/// @brief \f[ log(119.73) = 4.785239 \f]
START_TEST(s21_log_779)
{
    double value = 119.73;

    s21_test_log(value);
}

/// @brief \f[ log(121.23) = 4.797690 \f]
START_TEST(s21_log_780)
{
    double value = 121.23;

    s21_test_log(value);
}

/// @brief \f[ log(122.73) = 4.809987 \f]
START_TEST(s21_log_781)
{
    double value = 122.73;

    s21_test_log(value);
}

/// @brief \f[ log(124.23) = 4.822135 \f]
START_TEST(s21_log_782)
{
    double value = 124.23;

    s21_test_log(value);
}

/// @brief \f[ log(125.73) = 4.834137 \f]
START_TEST(s21_log_783)
{
    double value = 125.73;

    s21_test_log(value);
}

/// @brief \f[ log(127.23) = 4.845996 \f]
START_TEST(s21_log_784)
{
    double value = 127.23;

    s21_test_log(value);
}

/// @brief \f[ log(128.73) = 4.857717 \f]
START_TEST(s21_log_785)
{
    double value = 128.73;

    s21_test_log(value);
}

/// @brief \f[ log(130.23) = 4.869302 \f]
START_TEST(s21_log_786)
{
    double value = 130.23;

    s21_test_log(value);
}

/// @brief \f[ log(131.73) = 4.880754 \f]
START_TEST(s21_log_787)
{
    double value = 131.73;

    s21_test_log(value);
}

/// @brief \f[ log(133.23) = 4.892077 \f]
START_TEST(s21_log_788)
{
    double value = 133.23;

    s21_test_log(value);
}

/// @brief \f[ log(134.73) = 4.903273 \f]
START_TEST(s21_log_789)
{
    double value = 134.73;

    s21_test_log(value);
}

/// @brief \f[ log(136.23) = 4.914345 \f]
START_TEST(s21_log_790)
{
    double value = 136.23;

    s21_test_log(value);
}

/// @brief \f[ log(137.73) = 4.925295 \f]
START_TEST(s21_log_791)
{
    double value = 137.73;

    s21_test_log(value);
}

/// @brief \f[ log(139.23) = 4.936127 \f]
START_TEST(s21_log_792)
{
    double value = 139.23;

    s21_test_log(value);
}

/// @brief \f[ log(140.73) = 4.946843 \f]
START_TEST(s21_log_793)
{
    double value = 140.73;

    s21_test_log(value);
}

/// @brief \f[ log(142.23) = 4.957445 \f]
START_TEST(s21_log_794)
{
    double value = 142.23;

    s21_test_log(value);
}

/// @brief \f[ log(143.73) = 4.967937 \f]
START_TEST(s21_log_795)
{
    double value = 143.73;

    s21_test_log(value);
}

/// @brief \f[ log(145.23) = 4.978319 \f]
START_TEST(s21_log_796)
{
    double value = 145.23;

    s21_test_log(value);
}

/// @brief \f[ log(146.73) = 4.988594 \f]
START_TEST(s21_log_797)
{
    double value = 146.73;

    s21_test_log(value);
}

/// @brief \f[ log(148.23) = 4.998765 \f]
START_TEST(s21_log_798)
{
    double value = 148.23;

    s21_test_log(value);
}

/// @brief \f[ log(149.73) = 5.008834 \f]
START_TEST(s21_log_799)
{
    double value = 149.73;

    s21_test_log(value);
}

/// @brief \f[ log(2.1) = 0.741937 \f]
START_TEST(s21_log_800)
{
    double value = 2.1;

    s21_test_log(value);
}

/// @brief \f[ log(3.6) = 1.280934 \f]
START_TEST(s21_log_801)
{
    double value = 3.6;

    s21_test_log(value);
}

/// @brief \f[ log(5.1) = 1.629241 \f]
START_TEST(s21_log_802)
{
    double value = 5.1;

    s21_test_log(value);
}

/// @brief \f[ log(6.6) = 1.887070 \f]
START_TEST(s21_log_803)
{
    double value = 6.6;

    s21_test_log(value);
}

/// @brief \f[ log(8.1) = 2.091864 \f]
START_TEST(s21_log_804)
{
    double value = 8.1;

    s21_test_log(value);
}

/// @brief \f[ log(9.6) = 2.261763 \f]
START_TEST(s21_log_805)
{
    double value = 9.6;

    s21_test_log(value);
}

/// @brief \f[ log(11.1) = 2.406945 \f]
START_TEST(s21_log_806)
{
    double value = 11.1;

    s21_test_log(value);
}

/// @brief \f[ log(12.6) = 2.533697 \f]
START_TEST(s21_log_807)
{
    double value = 12.6;

    s21_test_log(value);
}

/// @brief \f[ log(14.1) = 2.646175 \f]
START_TEST(s21_log_808)
{
    double value = 14.1;

    s21_test_log(value);
}

/// @brief \f[ log(15.6) = 2.747271 \f]
START_TEST(s21_log_809)
{
    double value = 15.6;

    s21_test_log(value);
}

/// @brief \f[ log(17.1) = 2.839078 \f]
START_TEST(s21_log_810)
{
    double value = 17.1;

    s21_test_log(value);
}

/// @brief \f[ log(18.6) = 2.923162 \f]
START_TEST(s21_log_811)
{
    double value = 18.6;

    s21_test_log(value);
}

/// @brief \f[ log(20.1) = 3.000720 \f]
START_TEST(s21_log_812)
{
    double value = 20.1;

    s21_test_log(value);
}

/// @brief \f[ log(21.6) = 3.072693 \f]
START_TEST(s21_log_813)
{
    double value = 21.6;

    s21_test_log(value);
}

/// @brief \f[ log(23.1) = 3.139833 \f]
START_TEST(s21_log_814)
{
    double value = 23.1;

    s21_test_log(value);
}

/// @brief \f[ log(24.6) = 3.202746 \f]
START_TEST(s21_log_815)
{
    double value = 24.6;

    s21_test_log(value);
}

/// @brief \f[ log(26.1) = 3.261935 \f]
START_TEST(s21_log_816)
{
    double value = 26.1;

    s21_test_log(value);
}

/// @brief \f[ log(27.6) = 3.317816 \f]
START_TEST(s21_log_817)
{
    double value = 27.6;

    s21_test_log(value);
}

/// @brief \f[ log(29.1) = 3.370738 \f]
START_TEST(s21_log_818)
{
    double value = 29.1;

    s21_test_log(value);
}

/// @brief \f[ log(30.6) = 3.421000 \f]
START_TEST(s21_log_819)
{
    double value = 30.6;

    s21_test_log(value);
}

/// @brief \f[ log(32.1) = 3.468856 \f]
START_TEST(s21_log_820)
{
    double value = 32.1;

    s21_test_log(value);
}

/// @brief \f[ log(33.6) = 3.514526 \f]
START_TEST(s21_log_821)
{
    double value = 33.6;

    s21_test_log(value);
}

/// @brief \f[ log(35.1) = 3.558201 \f]
START_TEST(s21_log_822)
{
    double value = 35.1;

    s21_test_log(value);
}

/// @brief \f[ log(36.6) = 3.600048 \f]
START_TEST(s21_log_823)
{
    double value = 36.6;

    s21_test_log(value);
}

/// @brief \f[ log(38.1) = 3.640214 \f]
START_TEST(s21_log_824)
{
    double value = 38.1;

    s21_test_log(value);
}

/// @brief \f[ log(39.6) = 3.678829 \f]
START_TEST(s21_log_825)
{
    double value = 39.6;

    s21_test_log(value);
}

/// @brief \f[ log(41.1) = 3.716008 \f]
START_TEST(s21_log_826)
{
    double value = 41.1;

    s21_test_log(value);
}

/// @brief \f[ log(42.6) = 3.751854 \f]
START_TEST(s21_log_827)
{
    double value = 42.6;

    s21_test_log(value);
}

/// @brief \f[ log(44.1) = 3.786460 \f]
START_TEST(s21_log_828)
{
    double value = 44.1;

    s21_test_log(value);
}

/// @brief \f[ log(45.6) = 3.819908 \f]
START_TEST(s21_log_829)
{
    double value = 45.6;

    s21_test_log(value);
}

/// @brief \f[ log(47.1) = 3.852273 \f]
START_TEST(s21_log_830)
{
    double value = 47.1;

    s21_test_log(value);
}

/// @brief \f[ log(48.6) = 3.883624 \f]
START_TEST(s21_log_831)
{
    double value = 48.6;

    s21_test_log(value);
}

/// @brief \f[ log(50.1) = 3.914021 \f]
START_TEST(s21_log_832)
{
    double value = 50.1;

    s21_test_log(value);
}

/// @brief \f[ log(51.6) = 3.943522 \f]
START_TEST(s21_log_833)
{
    double value = 51.6;

    s21_test_log(value);
}

/// @brief \f[ log(53.1) = 3.972177 \f]
START_TEST(s21_log_834)
{
    double value = 53.1;

    s21_test_log(value);
}

/// @brief \f[ log(54.6) = 4.000034 \f]
START_TEST(s21_log_835)
{
    double value = 54.6;

    s21_test_log(value);
}

/// @brief \f[ log(56.1) = 4.027136 \f]
START_TEST(s21_log_836)
{
    double value = 56.1;

    s21_test_log(value);
}

/// @brief \f[ log(57.6) = 4.053523 \f]
START_TEST(s21_log_837)
{
    double value = 57.6;

    s21_test_log(value);
}

/// @brief \f[ log(59.1) = 4.079231 \f]
START_TEST(s21_log_838)
{
    double value = 59.1;

    s21_test_log(value);
}

/// @brief \f[ log(60.6) = 4.104295 \f]
START_TEST(s21_log_839)
{
    double value = 60.6;

    s21_test_log(value);
}

/// @brief \f[ log(62.1) = 4.128746 \f]
START_TEST(s21_log_840)
{
    double value = 62.1;

    s21_test_log(value);
}

/// @brief \f[ log(63.6) = 4.152613 \f]
START_TEST(s21_log_841)
{
    double value = 63.6;

    s21_test_log(value);
}

/// @brief \f[ log(65.1) = 4.175925 \f]
START_TEST(s21_log_842)
{
    double value = 65.1;

    s21_test_log(value);
}

/// @brief \f[ log(66.6) = 4.198705 \f]
START_TEST(s21_log_843)
{
    double value = 66.6;

    s21_test_log(value);
}

/// @brief \f[ log(68.1) = 4.220977 \f]
START_TEST(s21_log_844)
{
    double value = 68.1;

    s21_test_log(value);
}

/// @brief \f[ log(69.6) = 4.242765 \f]
START_TEST(s21_log_845)
{
    double value = 69.6;

    s21_test_log(value);
}

/// @brief \f[ log(71.1) = 4.264087 \f]
START_TEST(s21_log_846)
{
    double value = 71.1;

    s21_test_log(value);
}

/// @brief \f[ log(72.6) = 4.284965 \f]
START_TEST(s21_log_847)
{
    double value = 72.6;

    s21_test_log(value);
}

/// @brief \f[ log(74.1) = 4.305416 \f]
START_TEST(s21_log_848)
{
    double value = 74.1;

    s21_test_log(value);
}

/// @brief \f[ log(75.6) = 4.325456 \f]
START_TEST(s21_log_849)
{
    double value = 75.6;

    s21_test_log(value);
}

/// @brief \f[ log(77.1) = 4.345103 \f]
START_TEST(s21_log_850)
{
    double value = 77.1;

    s21_test_log(value);
}

/// @brief \f[ log(78.6) = 4.364372 \f]
START_TEST(s21_log_851)
{
    double value = 78.6;

    s21_test_log(value);
}

/// @brief \f[ log(80.1) = 4.383276 \f]
START_TEST(s21_log_852)
{
    double value = 80.1;

    s21_test_log(value);
}

/// @brief \f[ log(81.6) = 4.401829 \f]
START_TEST(s21_log_853)
{
    double value = 81.6;

    s21_test_log(value);
}

/// @brief \f[ log(83.1) = 4.420045 \f]
START_TEST(s21_log_854)
{
    double value = 83.1;

    s21_test_log(value);
}

/// @brief \f[ log(84.6) = 4.437934 \f]
START_TEST(s21_log_855)
{
    double value = 84.6;

    s21_test_log(value);
}

/// @brief \f[ log(86.1) = 4.455509 \f]
START_TEST(s21_log_856)
{
    double value = 86.1;

    s21_test_log(value);
}

/// @brief \f[ log(87.6) = 4.472781 \f]
START_TEST(s21_log_857)
{
    double value = 87.6;

    s21_test_log(value);
}

/// @brief \f[ log(89.1) = 4.489759 \f]
START_TEST(s21_log_858)
{
    double value = 89.1;

    s21_test_log(value);
}

/// @brief \f[ log(90.6) = 4.506454 \f]
START_TEST(s21_log_859)
{
    double value = 90.6;

    s21_test_log(value);
}

/// @brief \f[ log(92.1) = 4.522875 \f]
START_TEST(s21_log_860)
{
    double value = 92.1;

    s21_test_log(value);
}

/// @brief \f[ log(93.6) = 4.539030 \f]
START_TEST(s21_log_861)
{
    double value = 93.6;

    s21_test_log(value);
}

/// @brief \f[ log(95.1) = 4.554929 \f]
START_TEST(s21_log_862)
{
    double value = 95.1;

    s21_test_log(value);
}

/// @brief \f[ log(96.6) = 4.570579 \f]
START_TEST(s21_log_863)
{
    double value = 96.6;

    s21_test_log(value);
}

/// @brief \f[ log(98.1) = 4.585987 \f]
START_TEST(s21_log_864)
{
    double value = 98.1;

    s21_test_log(value);
}

/// @brief \f[ log(99.6) = 4.601162 \f]
START_TEST(s21_log_865)
{
    double value = 99.6;

    s21_test_log(value);
}

/// @brief \f[ log(101.1) = 4.616110 \f]
START_TEST(s21_log_866)
{
    double value = 101.1;

    s21_test_log(value);
}

/// @brief \f[ log(102.6) = 4.630838 \f]
START_TEST(s21_log_867)
{
    double value = 102.6;

    s21_test_log(value);
}

/// @brief \f[ log(104.1) = 4.645352 \f]
START_TEST(s21_log_868)
{
    double value = 104.1;

    s21_test_log(value);
}

/// @brief \f[ log(105.6) = 4.659658 \f]
START_TEST(s21_log_869)
{
    double value = 105.6;

    s21_test_log(value);
}

/// @brief \f[ log(107.1) = 4.673763 \f]
START_TEST(s21_log_870)
{
    double value = 107.1;

    s21_test_log(value);
}

/// @brief \f[ log(108.6) = 4.687671 \f]
START_TEST(s21_log_871)
{
    double value = 108.6;

    s21_test_log(value);
}

/// @brief \f[ log(110.1) = 4.701389 \f]
START_TEST(s21_log_872)
{
    double value = 110.1;

    s21_test_log(value);
}

/// @brief \f[ log(111.6) = 4.714921 \f]
START_TEST(s21_log_873)
{
    double value = 111.6;

    s21_test_log(value);
}

/// @brief \f[ log(113.1) = 4.728272 \f]
START_TEST(s21_log_874)
{
    double value = 113.1;

    s21_test_log(value);
}

/// @brief \f[ log(114.6) = 4.741448 \f]
START_TEST(s21_log_875)
{
    double value = 114.6;

    s21_test_log(value);
}

/// @brief \f[ log(116.1) = 4.754452 \f]
START_TEST(s21_log_876)
{
    double value = 116.1;

    s21_test_log(value);
}

/// @brief \f[ log(117.6) = 4.767289 \f]
START_TEST(s21_log_877)
{
    double value = 117.6;

    s21_test_log(value);
}

/// @brief \f[ log(119.1) = 4.779963 \f]
START_TEST(s21_log_878)
{
    double value = 119.1;

    s21_test_log(value);
}

/// @brief \f[ log(120.6) = 4.792479 \f]
START_TEST(s21_log_879)
{
    double value = 120.6;

    s21_test_log(value);
}

/// @brief \f[ log(122.1) = 4.804840 \f]
START_TEST(s21_log_880)
{
    double value = 122.1;

    s21_test_log(value);
}

/// @brief \f[ log(123.6) = 4.817051 \f]
START_TEST(s21_log_881)
{
    double value = 123.6;

    s21_test_log(value);
}

/// @brief \f[ log(125.1) = 4.829113 \f]
START_TEST(s21_log_882)
{
    double value = 125.1;

    s21_test_log(value);
}

/// @brief \f[ log(126.6) = 4.841033 \f]
START_TEST(s21_log_883)
{
    double value = 126.6;

    s21_test_log(value);
}

/// @brief \f[ log(128.1) = 4.852811 \f]
START_TEST(s21_log_884)
{
    double value = 128.1;

    s21_test_log(value);
}

/// @brief \f[ log(129.6) = 4.864453 \f]
START_TEST(s21_log_885)
{
    double value = 129.6;

    s21_test_log(value);
}

/// @brief \f[ log(131.1) = 4.875960 \f]
START_TEST(s21_log_886)
{
    double value = 131.1;

    s21_test_log(value);
}

/// @brief \f[ log(132.6) = 4.887337 \f]
START_TEST(s21_log_887)
{
    double value = 132.6;

    s21_test_log(value);
}

/// @brief \f[ log(134.1) = 4.898586 \f]
START_TEST(s21_log_888)
{
    double value = 134.1;

    s21_test_log(value);
}

/// @brief \f[ log(135.6) = 4.909709 \f]
START_TEST(s21_log_889)
{
    double value = 135.6;

    s21_test_log(value);
}

/// @brief \f[ log(137.1) = 4.920711 \f]
START_TEST(s21_log_890)
{
    double value = 137.1;

    s21_test_log(value);
}

/// @brief \f[ log(138.6) = 4.931592 \f]
START_TEST(s21_log_891)
{
    double value = 138.6;

    s21_test_log(value);
}

/// @brief \f[ log(140.1) = 4.942356 \f]
START_TEST(s21_log_892)
{
    double value = 140.1;

    s21_test_log(value);
}

/// @brief \f[ log(141.6) = 4.953006 \f]
START_TEST(s21_log_893)
{
    double value = 141.6;

    s21_test_log(value);
}

/// @brief \f[ log(143.1) = 4.963544 \f]
START_TEST(s21_log_894)
{
    double value = 143.1;

    s21_test_log(value);
}

/// @brief \f[ log(144.6) = 4.973971 \f]
START_TEST(s21_log_895)
{
    double value = 144.6;

    s21_test_log(value);
}

/// @brief \f[ log(146.1) = 4.984291 \f]
START_TEST(s21_log_896)
{
    double value = 146.1;

    s21_test_log(value);
}

/// @brief \f[ log(147.6) = 4.994506 \f]
START_TEST(s21_log_897)
{
    double value = 147.6;

    s21_test_log(value);
}

/// @brief \f[ log(149.1) = 5.004617 \f]
START_TEST(s21_log_898)
{
    double value = 149.1;

    s21_test_log(value);
}

/// @brief \f[ log(150.6) = 5.014627 \f]
START_TEST(s21_log_899)
{
    double value = 150.6;

    s21_test_log(value);
}

/// @brief \f[ log(2.321) = 0.841998 \f]
START_TEST(s21_log_900)
{
    double value = 2.321;

    s21_test_log(value);
}

/// @brief \f[ log(2.4441) = 0.893677 \f]
START_TEST(s21_log_901)
{
    double value = 2.4441;

    s21_test_log(value);
}

/// @brief \f[ log(2.5672) = 0.942816 \f]
START_TEST(s21_log_902)
{
    double value = 2.5672;

    s21_test_log(value);
}

/// @brief \f[ log(2.6903) = 0.989653 \f]
START_TEST(s21_log_903)
{
    double value = 2.6903;

    s21_test_log(value);
}

/// @brief \f[ log(2.8134) = 1.034394 \f]
START_TEST(s21_log_904)
{
    double value = 2.8134;

    s21_test_log(value);
}

/// @brief \f[ log(2.9365) = 1.077218 \f]
START_TEST(s21_log_905)
{
    double value = 2.9365;

    s21_test_log(value);
}

/// @brief \f[ log(3.0596) = 1.118284 \f]
START_TEST(s21_log_906)
{
    double value = 3.0596;

    s21_test_log(value);
}

/// @brief \f[ log(3.1827) = 1.157730 \f]
START_TEST(s21_log_907)
{
    double value = 3.1827;

    s21_test_log(value);
}

/// @brief \f[ log(3.3058) = 1.195679 \f]
START_TEST(s21_log_908)
{
    double value = 3.3058;

    s21_test_log(value);
}

/// @brief \f[ log(3.4289) = 1.232240 \f]
START_TEST(s21_log_909)
{
    double value = 3.4289;

    s21_test_log(value);
}

/// @brief \f[ log(3.5520) = 1.267511 \f]
START_TEST(s21_log_910)
{
    double value = 3.5520;

    s21_test_log(value);
}

/// @brief \f[ log(3.6751) = 1.301580 \f]
START_TEST(s21_log_911)
{
    double value = 3.6751;

    s21_test_log(value);
}

/// @brief \f[ log(3.7982) = 1.334527 \f]
START_TEST(s21_log_912)
{
    double value = 3.7982;

    s21_test_log(value);
}

/// @brief \f[ log(3.9213) = 1.366423 \f]
START_TEST(s21_log_913)
{
    double value = 3.9213;

    s21_test_log(value);
}

/// @brief \f[ log(4.0444) = 1.397333 \f]
START_TEST(s21_log_914)
{
    double value = 4.0444;

    s21_test_log(value);
}

/// @brief \f[ log(4.1675) = 1.427316 \f]
START_TEST(s21_log_915)
{
    double value = 4.1675;

    s21_test_log(value);
}

/// @brief \f[ log(4.2906) = 1.456427 \f]
START_TEST(s21_log_916)
{
    double value = 4.2906;

    s21_test_log(value);
}

/// @brief \f[ log(4.4137) = 1.484713 \f]
START_TEST(s21_log_917)
{
    double value = 4.4137;

    s21_test_log(value);
}

/// @brief \f[ log(4.5368) = 1.512222 \f]
START_TEST(s21_log_918)
{
    double value = 4.5368;

    s21_test_log(value);
}

/// @brief \f[ log(4.6599) = 1.538994 \f]
START_TEST(s21_log_919)
{
    double value = 4.6599;

    s21_test_log(value);
}

/// @brief \f[ log(4.7830) = 1.565068 \f]
START_TEST(s21_log_920)
{
    double value = 4.7830;

    s21_test_log(value);
}

/// @brief \f[ log(4.9061) = 1.590479 \f]
START_TEST(s21_log_921)
{
    double value = 4.9061;

    s21_test_log(value);
}

/// @brief \f[ log(5.0292) = 1.615261 \f]
START_TEST(s21_log_922)
{
    double value = 5.0292;

    s21_test_log(value);
}

/// @brief \f[ log(5.1523) = 1.639443 \f]
START_TEST(s21_log_923)
{
    double value = 5.1523;

    s21_test_log(value);
}

/// @brief \f[ log(5.2754) = 1.663055 \f]
START_TEST(s21_log_924)
{
    double value = 5.2754;

    s21_test_log(value);
}

/// @brief \f[ log(5.3985) = 1.686121 \f]
START_TEST(s21_log_925)
{
    double value = 5.3985;

    s21_test_log(value);
}

/// @brief \f[ log(5.5216) = 1.708668 \f]
START_TEST(s21_log_926)
{
    double value = 5.5216;

    s21_test_log(value);
}

/// @brief \f[ log(5.6447) = 1.730717 \f]
START_TEST(s21_log_927)
{
    double value = 5.6447;

    s21_test_log(value);
}

/// @brief \f[ log(5.7678) = 1.752291 \f]
START_TEST(s21_log_928)
{
    double value = 5.7678;

    s21_test_log(value);
}

/// @brief \f[ log(5.8909) = 1.773409 \f]
START_TEST(s21_log_929)
{
    double value = 5.8909;

    s21_test_log(value);
}

/// @brief \f[ log(6.0140) = 1.794090 \f]
START_TEST(s21_log_930)
{
    double value = 6.0140;

    s21_test_log(value);
}

/// @brief \f[ log(6.1371) = 1.814352 \f]
START_TEST(s21_log_931)
{
    double value = 6.1371;

    s21_test_log(value);
}

/// @brief \f[ log(6.2602) = 1.834212 \f]
START_TEST(s21_log_932)
{
    double value = 6.2602;

    s21_test_log(value);
}

/// @brief \f[ log(6.3833) = 1.853685 \f]
START_TEST(s21_log_933)
{
    double value = 6.3833;

    s21_test_log(value);
}

/// @brief \f[ log(6.5064) = 1.872786 \f]
START_TEST(s21_log_934)
{
    double value = 6.5064;

    s21_test_log(value);
}

/// @brief \f[ log(6.6295) = 1.891529 \f]
START_TEST(s21_log_935)
{
    double value = 6.6295;

    s21_test_log(value);
}

/// @brief \f[ log(6.7526) = 1.909928 \f]
START_TEST(s21_log_936)
{
    double value = 6.7526;

    s21_test_log(value);
}

/// @brief \f[ log(6.8757) = 1.927993 \f]
START_TEST(s21_log_937)
{
    double value = 6.8757;

    s21_test_log(value);
}

/// @brief \f[ log(6.9988) = 1.945739 \f]
START_TEST(s21_log_938)
{
    double value = 6.9988;

    s21_test_log(value);
}

/// @brief \f[ log(7.1219) = 1.963175 \f]
START_TEST(s21_log_939)
{
    double value = 7.1219;

    s21_test_log(value);
}

/// @brief \f[ log(7.2450) = 1.980312 \f]
START_TEST(s21_log_940)
{
    double value = 7.2450;

    s21_test_log(value);
}

/// @brief \f[ log(7.3681) = 1.997160 \f]
START_TEST(s21_log_941)
{
    double value = 7.3681;

    s21_test_log(value);
}

/// @brief \f[ log(7.4912) = 2.013729 \f]
START_TEST(s21_log_942)
{
    double value = 7.4912;

    s21_test_log(value);
}

/// @brief \f[ log(7.6143) = 2.030028 \f]
START_TEST(s21_log_943)
{
    double value = 7.6143;

    s21_test_log(value);
}

/// @brief \f[ log(7.7374) = 2.046066 \f]
START_TEST(s21_log_944)
{
    double value = 7.7374;

    s21_test_log(value);
}

/// @brief \f[ log(7.8605) = 2.061850 \f]
START_TEST(s21_log_945)
{
    double value = 7.8605;

    s21_test_log(value);
}

/// @brief \f[ log(7.9836) = 2.077389 \f]
START_TEST(s21_log_946)
{
    double value = 7.9836;

    s21_test_log(value);
}

/// @brief \f[ log(8.1067) = 2.092691 \f]
START_TEST(s21_log_947)
{
    double value = 8.1067;

    s21_test_log(value);
}

/// @brief \f[ log(8.2298) = 2.107762 \f]
START_TEST(s21_log_948)
{
    double value = 8.2298;

    s21_test_log(value);
}

/// @brief \f[ log(8.3529) = 2.122609 \f]
START_TEST(s21_log_949)
{
    double value = 8.3529;

    s21_test_log(value);
}

/// @brief \f[ log(8.4760) = 2.137239 \f]
START_TEST(s21_log_950)
{
    double value = 8.4760;

    s21_test_log(value);
}

/// @brief \f[ log(8.5991) = 2.151658 \f]
START_TEST(s21_log_951)
{
    double value = 8.5991;

    s21_test_log(value);
}

/// @brief \f[ log(8.7222) = 2.165871 \f]
START_TEST(s21_log_952)
{
    double value = 8.7222;

    s21_test_log(value);
}

/// @brief \f[ log(8.8453) = 2.179886 \f]
START_TEST(s21_log_953)
{
    double value = 8.8453;

    s21_test_log(value);
}

/// @brief \f[ log(8.9684) = 2.193707 \f]
START_TEST(s21_log_954)
{
    double value = 8.9684;

    s21_test_log(value);
}

/// @brief \f[ log(9.0915) = 2.207340 \f]
START_TEST(s21_log_955)
{
    double value = 9.0915;

    s21_test_log(value);
}

/// @brief \f[ log(9.2146) = 2.220789 \f]
START_TEST(s21_log_956)
{
    double value = 9.2146;

    s21_test_log(value);
}

/// @brief \f[ log(9.3377) = 2.234060 \f]
START_TEST(s21_log_957)
{
    double value = 9.3377;

    s21_test_log(value);
}

/// @brief \f[ log(9.4608) = 2.247157 \f]
START_TEST(s21_log_958)
{
    double value = 9.4608;

    s21_test_log(value);
}

/// @brief \f[ log(9.5839) = 2.260085 \f]
START_TEST(s21_log_959)
{
    double value = 9.5839;

    s21_test_log(value);
}

/// @brief \f[ log(9.7070) = 2.272847 \f]
START_TEST(s21_log_960)
{
    double value = 9.7070;

    s21_test_log(value);
}

/// @brief \f[ log(9.8301) = 2.285449 \f]
START_TEST(s21_log_961)
{
    double value = 9.8301;

    s21_test_log(value);
}

/// @brief \f[ log(9.9532) = 2.297894 \f]
START_TEST(s21_log_962)
{
    double value = 9.9532;

    s21_test_log(value);
}

/// @brief \f[ log(10.0763) = 2.310186 \f]
START_TEST(s21_log_963)
{
    double value = 10.0763;

    s21_test_log(value);
}

/// @brief \f[ log(10.1994) = 2.322329 \f]
START_TEST(s21_log_964)
{
    double value = 10.1994;

    s21_test_log(value);
}

/// @brief \f[ log(10.3225) = 2.334326 \f]
START_TEST(s21_log_965)
{
    double value = 10.3225;

    s21_test_log(value);
}

/// @brief \f[ log(10.4456) = 2.346181 \f]
START_TEST(s21_log_966)
{
    double value = 10.4456;

    s21_test_log(value);
}

/// @brief \f[ log(10.5687) = 2.357897 \f]
START_TEST(s21_log_967)
{
    double value = 10.5687;

    s21_test_log(value);
}

/// @brief \f[ log(10.6918) = 2.369477 \f]
START_TEST(s21_log_968)
{
    double value = 10.6918;

    s21_test_log(value);
}

/// @brief \f[ log(10.8149) = 2.380925 \f]
START_TEST(s21_log_969)
{
    double value = 10.8149;

    s21_test_log(value);
}

/// @brief \f[ log(10.9380) = 2.392243 \f]
START_TEST(s21_log_970)
{
    double value = 10.9380;

    s21_test_log(value);
}

/// @brief \f[ log(11.0611) = 2.403434 \f]
START_TEST(s21_log_971)
{
    double value = 11.0611;

    s21_test_log(value);
}

/// @brief \f[ log(11.1842) = 2.414502 \f]
START_TEST(s21_log_972)
{
    double value = 11.1842;

    s21_test_log(value);
}

/// @brief \f[ log(11.3073) = 2.425449 \f]
START_TEST(s21_log_973)
{
    double value = 11.3073;

    s21_test_log(value);
}

/// @brief \f[ log(11.4304) = 2.436276 \f]
START_TEST(s21_log_974)
{
    double value = 11.4304;

    s21_test_log(value);
}

/// @brief \f[ log(11.5535) = 2.446988 \f]
START_TEST(s21_log_975)
{
    double value = 11.5535;

    s21_test_log(value);
}

/// @brief \f[ log(11.6766) = 2.457587 \f]
START_TEST(s21_log_976)
{
    double value = 11.6766;

    s21_test_log(value);
}

/// @brief \f[ log(11.7997) = 2.468074 \f]
START_TEST(s21_log_977)
{
    double value = 11.7997;

    s21_test_log(value);
}

/// @brief \f[ log(11.9228) = 2.478453 \f]
START_TEST(s21_log_978)
{
    double value = 11.9228;

    s21_test_log(value);
}

/// @brief \f[ log(12.0459) = 2.488724 \f]
START_TEST(s21_log_979)
{
    double value = 12.0459;

    s21_test_log(value);
}

/// @brief \f[ log(12.1690) = 2.498892 \f]
START_TEST(s21_log_980)
{
    double value = 12.1690;

    s21_test_log(value);
}

/// @brief \f[ log(12.2921) = 2.508957 \f]
START_TEST(s21_log_981)
{
    double value = 12.2921;

    s21_test_log(value);
}

/// @brief \f[ log(12.4152) = 2.518922 \f]
START_TEST(s21_log_982)
{
    double value = 12.4152;

    s21_test_log(value);
}

/// @brief \f[ log(12.5383) = 2.528788 \f]
START_TEST(s21_log_983)
{
    double value = 12.5383;

    s21_test_log(value);
}

/// @brief \f[ log(12.6614) = 2.538558 \f]
START_TEST(s21_log_984)
{
    double value = 12.6614;

    s21_test_log(value);
}

/// @brief \f[ log(12.7845) = 2.548233 \f]
START_TEST(s21_log_985)
{
    double value = 12.7845;

    s21_test_log(value);
}

/// @brief \f[ log(12.9076) = 2.557816 \f]
START_TEST(s21_log_986)
{
    double value = 12.9076;

    s21_test_log(value);
}

/// @brief \f[ log(13.0307) = 2.567308 \f]
START_TEST(s21_log_987)
{
    double value = 13.0307;

    s21_test_log(value);
}

/// @brief \f[ log(13.1538) = 2.576711 \f]
START_TEST(s21_log_988)
{
    double value = 13.1538;

    s21_test_log(value);
}

/// @brief \f[ log(13.2769) = 2.586026 \f]
START_TEST(s21_log_989)
{
    double value = 13.2769;

    s21_test_log(value);
}

/// @brief \f[ log(13.4000) = 2.595255 \f]
START_TEST(s21_log_990)
{
    double value = 13.4000;

    s21_test_log(value);
}

/// @brief \f[ log(13.5231) = 2.604399 \f]
START_TEST(s21_log_991)
{
    double value = 13.5231;

    s21_test_log(value);
}

/// @brief \f[ log(13.6462) = 2.613461 \f]
START_TEST(s21_log_992)
{
    double value = 13.6462;

    s21_test_log(value);
}

/// @brief \f[ log(13.7693) = 2.622441 \f]
START_TEST(s21_log_993)
{
    double value = 13.7693;

    s21_test_log(value);
}

/// @brief \f[ log(13.8924) = 2.631342 \f]
START_TEST(s21_log_994)
{
    double value = 13.8924;

    s21_test_log(value);
}

/// @brief \f[ log(14.0155) = 2.640164 \f]
START_TEST(s21_log_995)
{
    double value = 14.0155;

    s21_test_log(value);
}

/// @brief \f[ log(14.1386) = 2.648909 \f]
START_TEST(s21_log_996)
{
    double value = 14.1386;

    s21_test_log(value);
}

/// @brief \f[ log(14.2617) = 2.657578 \f]
START_TEST(s21_log_997)
{
    double value = 14.2617;

    s21_test_log(value);
}

/// @brief \f[ log(14.3848) = 2.666172 \f]
START_TEST(s21_log_998)
{
    double value = 14.3848;

    s21_test_log(value);
}

/// @brief \f[ log(14.5079) = 2.674693 \f]
START_TEST(s21_log_999)
{
    double value = 14.5079;

    s21_test_log(value);
}


/**
 * @brief first set of tests
 *
 * @return Suite*
 */
Suite *s21_log_first_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log first case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_0);
    tcase_add_test(tc_log, s21_log_1);
    tcase_add_test(tc_log, s21_log_2);
    tcase_add_test(tc_log, s21_log_3);
    tcase_add_test(tc_log, s21_log_4);
    tcase_add_test(tc_log, s21_log_5);
    tcase_add_test(tc_log, s21_log_6);
    tcase_add_test(tc_log, s21_log_7);
    tcase_add_test(tc_log, s21_log_8);
    tcase_add_test(tc_log, s21_log_9);
    tcase_add_test(tc_log, s21_log_10);
    tcase_add_test(tc_log, s21_log_11);
    tcase_add_test(tc_log, s21_log_12);
    tcase_add_test(tc_log, s21_log_13);
    tcase_add_test(tc_log, s21_log_14);
    tcase_add_test(tc_log, s21_log_15);
    tcase_add_test(tc_log, s21_log_16);
    tcase_add_test(tc_log, s21_log_17);
    tcase_add_test(tc_log, s21_log_18);
    tcase_add_test(tc_log, s21_log_19);
    tcase_add_test(tc_log, s21_log_20);
    tcase_add_test(tc_log, s21_log_21);
    tcase_add_test(tc_log, s21_log_22);
    tcase_add_test(tc_log, s21_log_23);
    tcase_add_test(tc_log, s21_log_24);
    tcase_add_test(tc_log, s21_log_25);
    tcase_add_test(tc_log, s21_log_26);
    tcase_add_test(tc_log, s21_log_27);
    tcase_add_test(tc_log, s21_log_28);
    tcase_add_test(tc_log, s21_log_29);
    tcase_add_test(tc_log, s21_log_30);
    tcase_add_test(tc_log, s21_log_31);
    tcase_add_test(tc_log, s21_log_32);
    tcase_add_test(tc_log, s21_log_33);
    tcase_add_test(tc_log, s21_log_34);
    tcase_add_test(tc_log, s21_log_35);
    tcase_add_test(tc_log, s21_log_36);
    tcase_add_test(tc_log, s21_log_37);
    tcase_add_test(tc_log, s21_log_38);
    tcase_add_test(tc_log, s21_log_39);
    tcase_add_test(tc_log, s21_log_40);
    tcase_add_test(tc_log, s21_log_41);
    tcase_add_test(tc_log, s21_log_42);
    tcase_add_test(tc_log, s21_log_43);
    tcase_add_test(tc_log, s21_log_44);
    tcase_add_test(tc_log, s21_log_45);
    tcase_add_test(tc_log, s21_log_46);
    tcase_add_test(tc_log, s21_log_47);
    tcase_add_test(tc_log, s21_log_48);
    tcase_add_test(tc_log, s21_log_49);
    tcase_add_test(tc_log, s21_log_50);
    tcase_add_test(tc_log, s21_log_51);
    tcase_add_test(tc_log, s21_log_52);
    tcase_add_test(tc_log, s21_log_53);
    tcase_add_test(tc_log, s21_log_54);
    tcase_add_test(tc_log, s21_log_55);
    tcase_add_test(tc_log, s21_log_56);
    tcase_add_test(tc_log, s21_log_57);
    tcase_add_test(tc_log, s21_log_58);
    tcase_add_test(tc_log, s21_log_59);
    tcase_add_test(tc_log, s21_log_60);
    tcase_add_test(tc_log, s21_log_61);
    tcase_add_test(tc_log, s21_log_62);
    tcase_add_test(tc_log, s21_log_63);
    tcase_add_test(tc_log, s21_log_64);
    tcase_add_test(tc_log, s21_log_65);
    tcase_add_test(tc_log, s21_log_66);
    tcase_add_test(tc_log, s21_log_67);
    tcase_add_test(tc_log, s21_log_68);
    tcase_add_test(tc_log, s21_log_69);
    tcase_add_test(tc_log, s21_log_70);
    tcase_add_test(tc_log, s21_log_71);
    tcase_add_test(tc_log, s21_log_72);
    tcase_add_test(tc_log, s21_log_73);
    tcase_add_test(tc_log, s21_log_74);
    tcase_add_test(tc_log, s21_log_75);
    tcase_add_test(tc_log, s21_log_76);
    tcase_add_test(tc_log, s21_log_77);
    tcase_add_test(tc_log, s21_log_78);
    tcase_add_test(tc_log, s21_log_79);
    tcase_add_test(tc_log, s21_log_80);
    tcase_add_test(tc_log, s21_log_81);
    tcase_add_test(tc_log, s21_log_82);
    tcase_add_test(tc_log, s21_log_83);
    tcase_add_test(tc_log, s21_log_84);
    tcase_add_test(tc_log, s21_log_85);
    tcase_add_test(tc_log, s21_log_86);
    tcase_add_test(tc_log, s21_log_87);
    tcase_add_test(tc_log, s21_log_88);
    tcase_add_test(tc_log, s21_log_89);
    tcase_add_test(tc_log, s21_log_90);
    tcase_add_test(tc_log, s21_log_91);
    tcase_add_test(tc_log, s21_log_92);
    tcase_add_test(tc_log, s21_log_93);
    tcase_add_test(tc_log, s21_log_94);
    tcase_add_test(tc_log, s21_log_95);
    tcase_add_test(tc_log, s21_log_96);
    tcase_add_test(tc_log, s21_log_97);
    tcase_add_test(tc_log, s21_log_98);
    tcase_add_test(tc_log, s21_log_99);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief second set of tests
 *
 * @return Suite*
 */
Suite *s21_log_second_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log second case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_100);
    tcase_add_test(tc_log, s21_log_101);
    tcase_add_test(tc_log, s21_log_102);
    tcase_add_test(tc_log, s21_log_103);
    tcase_add_test(tc_log, s21_log_104);
    tcase_add_test(tc_log, s21_log_105);
    tcase_add_test(tc_log, s21_log_106);
    tcase_add_test(tc_log, s21_log_107);
    tcase_add_test(tc_log, s21_log_108);
    tcase_add_test(tc_log, s21_log_109);
    tcase_add_test(tc_log, s21_log_110);
    tcase_add_test(tc_log, s21_log_111);
    tcase_add_test(tc_log, s21_log_112);
    tcase_add_test(tc_log, s21_log_113);
    tcase_add_test(tc_log, s21_log_114);
    tcase_add_test(tc_log, s21_log_115);
    tcase_add_test(tc_log, s21_log_116);
    tcase_add_test(tc_log, s21_log_117);
    tcase_add_test(tc_log, s21_log_118);
    tcase_add_test(tc_log, s21_log_119);
    tcase_add_test(tc_log, s21_log_120);
    tcase_add_test(tc_log, s21_log_121);
    tcase_add_test(tc_log, s21_log_122);
    tcase_add_test(tc_log, s21_log_123);
    tcase_add_test(tc_log, s21_log_124);
    tcase_add_test(tc_log, s21_log_125);
    tcase_add_test(tc_log, s21_log_126);
    tcase_add_test(tc_log, s21_log_127);
    tcase_add_test(tc_log, s21_log_128);
    tcase_add_test(tc_log, s21_log_129);
    tcase_add_test(tc_log, s21_log_130);
    tcase_add_test(tc_log, s21_log_131);
    tcase_add_test(tc_log, s21_log_132);
    tcase_add_test(tc_log, s21_log_133);
    tcase_add_test(tc_log, s21_log_134);
    tcase_add_test(tc_log, s21_log_135);
    tcase_add_test(tc_log, s21_log_136);
    tcase_add_test(tc_log, s21_log_137);
    tcase_add_test(tc_log, s21_log_138);
    tcase_add_test(tc_log, s21_log_139);
    tcase_add_test(tc_log, s21_log_140);
    tcase_add_test(tc_log, s21_log_141);
    tcase_add_test(tc_log, s21_log_142);
    tcase_add_test(tc_log, s21_log_143);
    tcase_add_test(tc_log, s21_log_144);
    tcase_add_test(tc_log, s21_log_145);
    tcase_add_test(tc_log, s21_log_146);
    tcase_add_test(tc_log, s21_log_147);
    tcase_add_test(tc_log, s21_log_148);
    tcase_add_test(tc_log, s21_log_149);
    tcase_add_test(tc_log, s21_log_150);
    tcase_add_test(tc_log, s21_log_151);
    tcase_add_test(tc_log, s21_log_152);
    tcase_add_test(tc_log, s21_log_153);
    tcase_add_test(tc_log, s21_log_154);
    tcase_add_test(tc_log, s21_log_155);
    tcase_add_test(tc_log, s21_log_156);
    tcase_add_test(tc_log, s21_log_157);
    tcase_add_test(tc_log, s21_log_158);
    tcase_add_test(tc_log, s21_log_159);
    tcase_add_test(tc_log, s21_log_160);
    tcase_add_test(tc_log, s21_log_161);
    tcase_add_test(tc_log, s21_log_162);
    tcase_add_test(tc_log, s21_log_163);
    tcase_add_test(tc_log, s21_log_164);
    tcase_add_test(tc_log, s21_log_165);
    tcase_add_test(tc_log, s21_log_166);
    tcase_add_test(tc_log, s21_log_167);
    tcase_add_test(tc_log, s21_log_168);
    tcase_add_test(tc_log, s21_log_169);
    tcase_add_test(tc_log, s21_log_170);
    tcase_add_test(tc_log, s21_log_171);
    tcase_add_test(tc_log, s21_log_172);
    tcase_add_test(tc_log, s21_log_173);
    tcase_add_test(tc_log, s21_log_174);
    tcase_add_test(tc_log, s21_log_175);
    tcase_add_test(tc_log, s21_log_176);
    tcase_add_test(tc_log, s21_log_177);
    tcase_add_test(tc_log, s21_log_178);
    tcase_add_test(tc_log, s21_log_179);
    tcase_add_test(tc_log, s21_log_180);
    tcase_add_test(tc_log, s21_log_181);
    tcase_add_test(tc_log, s21_log_182);
    tcase_add_test(tc_log, s21_log_183);
    tcase_add_test(tc_log, s21_log_184);
    tcase_add_test(tc_log, s21_log_185);
    tcase_add_test(tc_log, s21_log_186);
    tcase_add_test(tc_log, s21_log_187);
    tcase_add_test(tc_log, s21_log_188);
    tcase_add_test(tc_log, s21_log_189);
    tcase_add_test(tc_log, s21_log_190);
    tcase_add_test(tc_log, s21_log_191);
    tcase_add_test(tc_log, s21_log_192);
    tcase_add_test(tc_log, s21_log_193);
    tcase_add_test(tc_log, s21_log_194);
    tcase_add_test(tc_log, s21_log_195);
    tcase_add_test(tc_log, s21_log_196);
    tcase_add_test(tc_log, s21_log_197);
    tcase_add_test(tc_log, s21_log_198);
    tcase_add_test(tc_log, s21_log_199);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief third set of tests
 *
 * @return Suite*
 */
Suite *s21_log_third_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log third case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_200);
    tcase_add_test(tc_log, s21_log_201);
    tcase_add_test(tc_log, s21_log_202);
    tcase_add_test(tc_log, s21_log_203);
    tcase_add_test(tc_log, s21_log_204);
    tcase_add_test(tc_log, s21_log_205);
    tcase_add_test(tc_log, s21_log_206);
    tcase_add_test(tc_log, s21_log_207);
    tcase_add_test(tc_log, s21_log_208);
    tcase_add_test(tc_log, s21_log_209);
    tcase_add_test(tc_log, s21_log_210);
    tcase_add_test(tc_log, s21_log_211);
    tcase_add_test(tc_log, s21_log_212);
    tcase_add_test(tc_log, s21_log_213);
    tcase_add_test(tc_log, s21_log_214);
    tcase_add_test(tc_log, s21_log_215);
    tcase_add_test(tc_log, s21_log_216);
    tcase_add_test(tc_log, s21_log_217);
    tcase_add_test(tc_log, s21_log_218);
    tcase_add_test(tc_log, s21_log_219);
    tcase_add_test(tc_log, s21_log_220);
    tcase_add_test(tc_log, s21_log_221);
    tcase_add_test(tc_log, s21_log_222);
    tcase_add_test(tc_log, s21_log_223);
    tcase_add_test(tc_log, s21_log_224);
    tcase_add_test(tc_log, s21_log_225);
    tcase_add_test(tc_log, s21_log_226);
    tcase_add_test(tc_log, s21_log_227);
    tcase_add_test(tc_log, s21_log_228);
    tcase_add_test(tc_log, s21_log_229);
    tcase_add_test(tc_log, s21_log_230);
    tcase_add_test(tc_log, s21_log_231);
    tcase_add_test(tc_log, s21_log_232);
    tcase_add_test(tc_log, s21_log_233);
    tcase_add_test(tc_log, s21_log_234);
    tcase_add_test(tc_log, s21_log_235);
    tcase_add_test(tc_log, s21_log_236);
    tcase_add_test(tc_log, s21_log_237);
    tcase_add_test(tc_log, s21_log_238);
    tcase_add_test(tc_log, s21_log_239);
    tcase_add_test(tc_log, s21_log_240);
    tcase_add_test(tc_log, s21_log_241);
    tcase_add_test(tc_log, s21_log_242);
    tcase_add_test(tc_log, s21_log_243);
    tcase_add_test(tc_log, s21_log_244);
    tcase_add_test(tc_log, s21_log_245);
    tcase_add_test(tc_log, s21_log_246);
    tcase_add_test(tc_log, s21_log_247);
    tcase_add_test(tc_log, s21_log_248);
    tcase_add_test(tc_log, s21_log_249);
    tcase_add_test(tc_log, s21_log_250);
    tcase_add_test(tc_log, s21_log_251);
    tcase_add_test(tc_log, s21_log_252);
    tcase_add_test(tc_log, s21_log_253);
    tcase_add_test(tc_log, s21_log_254);
    tcase_add_test(tc_log, s21_log_255);
    tcase_add_test(tc_log, s21_log_256);
    tcase_add_test(tc_log, s21_log_257);
    tcase_add_test(tc_log, s21_log_258);
    tcase_add_test(tc_log, s21_log_259);
    tcase_add_test(tc_log, s21_log_260);
    tcase_add_test(tc_log, s21_log_261);
    tcase_add_test(tc_log, s21_log_262);
    tcase_add_test(tc_log, s21_log_263);
    tcase_add_test(tc_log, s21_log_264);
    tcase_add_test(tc_log, s21_log_265);
    tcase_add_test(tc_log, s21_log_266);
    tcase_add_test(tc_log, s21_log_267);
    tcase_add_test(tc_log, s21_log_268);
    tcase_add_test(tc_log, s21_log_269);
    tcase_add_test(tc_log, s21_log_270);
    tcase_add_test(tc_log, s21_log_271);
    tcase_add_test(tc_log, s21_log_272);
    tcase_add_test(tc_log, s21_log_273);
    tcase_add_test(tc_log, s21_log_274);
    tcase_add_test(tc_log, s21_log_275);
    tcase_add_test(tc_log, s21_log_276);
    tcase_add_test(tc_log, s21_log_277);
    tcase_add_test(tc_log, s21_log_278);
    tcase_add_test(tc_log, s21_log_279);
    tcase_add_test(tc_log, s21_log_280);
    tcase_add_test(tc_log, s21_log_281);
    tcase_add_test(tc_log, s21_log_282);
    tcase_add_test(tc_log, s21_log_283);
    tcase_add_test(tc_log, s21_log_284);
    tcase_add_test(tc_log, s21_log_285);
    tcase_add_test(tc_log, s21_log_286);
    tcase_add_test(tc_log, s21_log_287);
    tcase_add_test(tc_log, s21_log_288);
    tcase_add_test(tc_log, s21_log_289);
    tcase_add_test(tc_log, s21_log_290);
    tcase_add_test(tc_log, s21_log_291);
    tcase_add_test(tc_log, s21_log_292);
    tcase_add_test(tc_log, s21_log_293);
    tcase_add_test(tc_log, s21_log_294);
    tcase_add_test(tc_log, s21_log_295);
    tcase_add_test(tc_log, s21_log_296);
    tcase_add_test(tc_log, s21_log_297);
    tcase_add_test(tc_log, s21_log_298);
    tcase_add_test(tc_log, s21_log_299);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief fourth set of tests
 *
 * @return Suite*
 */
Suite *s21_log_fourth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log fourth case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_300);
    tcase_add_test(tc_log, s21_log_301);
    tcase_add_test(tc_log, s21_log_302);
    tcase_add_test(tc_log, s21_log_303);
    tcase_add_test(tc_log, s21_log_304);
    tcase_add_test(tc_log, s21_log_305);
    tcase_add_test(tc_log, s21_log_306);
    tcase_add_test(tc_log, s21_log_307);
    tcase_add_test(tc_log, s21_log_308);
    tcase_add_test(tc_log, s21_log_309);
    tcase_add_test(tc_log, s21_log_310);
    tcase_add_test(tc_log, s21_log_311);
    tcase_add_test(tc_log, s21_log_312);
    tcase_add_test(tc_log, s21_log_313);
    tcase_add_test(tc_log, s21_log_314);
    tcase_add_test(tc_log, s21_log_315);
    tcase_add_test(tc_log, s21_log_316);
    tcase_add_test(tc_log, s21_log_317);
    tcase_add_test(tc_log, s21_log_318);
    tcase_add_test(tc_log, s21_log_319);
    tcase_add_test(tc_log, s21_log_320);
    tcase_add_test(tc_log, s21_log_321);
    tcase_add_test(tc_log, s21_log_322);
    tcase_add_test(tc_log, s21_log_323);
    tcase_add_test(tc_log, s21_log_324);
    tcase_add_test(tc_log, s21_log_325);
    tcase_add_test(tc_log, s21_log_326);
    tcase_add_test(tc_log, s21_log_327);
    tcase_add_test(tc_log, s21_log_328);
    tcase_add_test(tc_log, s21_log_329);
    tcase_add_test(tc_log, s21_log_330);
    tcase_add_test(tc_log, s21_log_331);
    tcase_add_test(tc_log, s21_log_332);
    tcase_add_test(tc_log, s21_log_333);
    tcase_add_test(tc_log, s21_log_334);
    tcase_add_test(tc_log, s21_log_335);
    tcase_add_test(tc_log, s21_log_336);
    tcase_add_test(tc_log, s21_log_337);
    tcase_add_test(tc_log, s21_log_338);
    tcase_add_test(tc_log, s21_log_339);
    tcase_add_test(tc_log, s21_log_340);
    tcase_add_test(tc_log, s21_log_341);
    tcase_add_test(tc_log, s21_log_342);
    tcase_add_test(tc_log, s21_log_343);
    tcase_add_test(tc_log, s21_log_344);
    tcase_add_test(tc_log, s21_log_345);
    tcase_add_test(tc_log, s21_log_346);
    tcase_add_test(tc_log, s21_log_347);
    tcase_add_test(tc_log, s21_log_348);
    tcase_add_test(tc_log, s21_log_349);
    tcase_add_test(tc_log, s21_log_350);
    tcase_add_test(tc_log, s21_log_351);
    tcase_add_test(tc_log, s21_log_352);
    tcase_add_test(tc_log, s21_log_353);
    tcase_add_test(tc_log, s21_log_354);
    tcase_add_test(tc_log, s21_log_355);
    tcase_add_test(tc_log, s21_log_356);
    tcase_add_test(tc_log, s21_log_357);
    tcase_add_test(tc_log, s21_log_358);
    tcase_add_test(tc_log, s21_log_359);
    tcase_add_test(tc_log, s21_log_360);
    tcase_add_test(tc_log, s21_log_361);
    tcase_add_test(tc_log, s21_log_362);
    tcase_add_test(tc_log, s21_log_363);
    tcase_add_test(tc_log, s21_log_364);
    tcase_add_test(tc_log, s21_log_365);
    tcase_add_test(tc_log, s21_log_366);
    tcase_add_test(tc_log, s21_log_367);
    tcase_add_test(tc_log, s21_log_368);
    tcase_add_test(tc_log, s21_log_369);
    tcase_add_test(tc_log, s21_log_370);
    tcase_add_test(tc_log, s21_log_371);
    tcase_add_test(tc_log, s21_log_372);
    tcase_add_test(tc_log, s21_log_373);
    tcase_add_test(tc_log, s21_log_374);
    tcase_add_test(tc_log, s21_log_375);
    tcase_add_test(tc_log, s21_log_376);
    tcase_add_test(tc_log, s21_log_377);
    tcase_add_test(tc_log, s21_log_378);
    tcase_add_test(tc_log, s21_log_379);
    tcase_add_test(tc_log, s21_log_380);
    tcase_add_test(tc_log, s21_log_381);
    tcase_add_test(tc_log, s21_log_382);
    tcase_add_test(tc_log, s21_log_383);
    tcase_add_test(tc_log, s21_log_384);
    tcase_add_test(tc_log, s21_log_385);
    tcase_add_test(tc_log, s21_log_386);
    tcase_add_test(tc_log, s21_log_387);
    tcase_add_test(tc_log, s21_log_388);
    tcase_add_test(tc_log, s21_log_389);
    tcase_add_test(tc_log, s21_log_390);
    tcase_add_test(tc_log, s21_log_391);
    tcase_add_test(tc_log, s21_log_392);
    tcase_add_test(tc_log, s21_log_393);
    tcase_add_test(tc_log, s21_log_394);
    tcase_add_test(tc_log, s21_log_395);
    tcase_add_test(tc_log, s21_log_396);
    tcase_add_test(tc_log, s21_log_397);
    tcase_add_test(tc_log, s21_log_398);
    tcase_add_test(tc_log, s21_log_399);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief fifth set of tests
 *
 * @return Suite*
 */
Suite *s21_log_fifth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log fifth case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_400);
    tcase_add_test(tc_log, s21_log_401);
    tcase_add_test(tc_log, s21_log_402);
    tcase_add_test(tc_log, s21_log_403);
    tcase_add_test(tc_log, s21_log_404);
    tcase_add_test(tc_log, s21_log_405);
    tcase_add_test(tc_log, s21_log_406);
    tcase_add_test(tc_log, s21_log_407);
    tcase_add_test(tc_log, s21_log_408);
    tcase_add_test(tc_log, s21_log_409);
    tcase_add_test(tc_log, s21_log_410);
    tcase_add_test(tc_log, s21_log_411);
    tcase_add_test(tc_log, s21_log_412);
    tcase_add_test(tc_log, s21_log_413);
    tcase_add_test(tc_log, s21_log_414);
    tcase_add_test(tc_log, s21_log_415);
    tcase_add_test(tc_log, s21_log_416);
    tcase_add_test(tc_log, s21_log_417);
    tcase_add_test(tc_log, s21_log_418);
    tcase_add_test(tc_log, s21_log_419);
    tcase_add_test(tc_log, s21_log_420);
    tcase_add_test(tc_log, s21_log_421);
    tcase_add_test(tc_log, s21_log_422);
    tcase_add_test(tc_log, s21_log_423);
    tcase_add_test(tc_log, s21_log_424);
    tcase_add_test(tc_log, s21_log_425);
    tcase_add_test(tc_log, s21_log_426);
    tcase_add_test(tc_log, s21_log_427);
    tcase_add_test(tc_log, s21_log_428);
    tcase_add_test(tc_log, s21_log_429);
    tcase_add_test(tc_log, s21_log_430);
    tcase_add_test(tc_log, s21_log_431);
    tcase_add_test(tc_log, s21_log_432);
    tcase_add_test(tc_log, s21_log_433);
    tcase_add_test(tc_log, s21_log_434);
    tcase_add_test(tc_log, s21_log_435);
    tcase_add_test(tc_log, s21_log_436);
    tcase_add_test(tc_log, s21_log_437);
    tcase_add_test(tc_log, s21_log_438);
    tcase_add_test(tc_log, s21_log_439);
    tcase_add_test(tc_log, s21_log_440);
    tcase_add_test(tc_log, s21_log_441);
    tcase_add_test(tc_log, s21_log_442);
    tcase_add_test(tc_log, s21_log_443);
    tcase_add_test(tc_log, s21_log_444);
    tcase_add_test(tc_log, s21_log_445);
    tcase_add_test(tc_log, s21_log_446);
    tcase_add_test(tc_log, s21_log_447);
    tcase_add_test(tc_log, s21_log_448);
    tcase_add_test(tc_log, s21_log_449);
    tcase_add_test(tc_log, s21_log_450);
    tcase_add_test(tc_log, s21_log_451);
    tcase_add_test(tc_log, s21_log_452);
    tcase_add_test(tc_log, s21_log_453);
    tcase_add_test(tc_log, s21_log_454);
    tcase_add_test(tc_log, s21_log_455);
    tcase_add_test(tc_log, s21_log_456);
    tcase_add_test(tc_log, s21_log_457);
    tcase_add_test(tc_log, s21_log_458);
    tcase_add_test(tc_log, s21_log_459);
    tcase_add_test(tc_log, s21_log_460);
    tcase_add_test(tc_log, s21_log_461);
    tcase_add_test(tc_log, s21_log_462);
    tcase_add_test(tc_log, s21_log_463);
    tcase_add_test(tc_log, s21_log_464);
    tcase_add_test(tc_log, s21_log_465);
    tcase_add_test(tc_log, s21_log_466);
    tcase_add_test(tc_log, s21_log_467);
    tcase_add_test(tc_log, s21_log_468);
    tcase_add_test(tc_log, s21_log_469);
    tcase_add_test(tc_log, s21_log_470);
    tcase_add_test(tc_log, s21_log_471);
    tcase_add_test(tc_log, s21_log_472);
    tcase_add_test(tc_log, s21_log_473);
    tcase_add_test(tc_log, s21_log_474);
    tcase_add_test(tc_log, s21_log_475);
    tcase_add_test(tc_log, s21_log_476);
    tcase_add_test(tc_log, s21_log_477);
    tcase_add_test(tc_log, s21_log_478);
    tcase_add_test(tc_log, s21_log_479);
    tcase_add_test(tc_log, s21_log_480);
    tcase_add_test(tc_log, s21_log_481);
    tcase_add_test(tc_log, s21_log_482);
    tcase_add_test(tc_log, s21_log_483);
    tcase_add_test(tc_log, s21_log_484);
    tcase_add_test(tc_log, s21_log_485);
    tcase_add_test(tc_log, s21_log_486);
    tcase_add_test(tc_log, s21_log_487);
    tcase_add_test(tc_log, s21_log_488);
    tcase_add_test(tc_log, s21_log_489);
    tcase_add_test(tc_log, s21_log_490);
    tcase_add_test(tc_log, s21_log_491);
    tcase_add_test(tc_log, s21_log_492);
    tcase_add_test(tc_log, s21_log_493);
    tcase_add_test(tc_log, s21_log_494);
    tcase_add_test(tc_log, s21_log_495);
    tcase_add_test(tc_log, s21_log_496);
    tcase_add_test(tc_log, s21_log_497);
    tcase_add_test(tc_log, s21_log_498);
    tcase_add_test(tc_log, s21_log_499);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief sixth set of tests
 *
 * @return Suite*
 */
Suite *s21_log_sixth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log sixth case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_500);
    tcase_add_test(tc_log, s21_log_501);
    tcase_add_test(tc_log, s21_log_502);
    tcase_add_test(tc_log, s21_log_503);
    tcase_add_test(tc_log, s21_log_504);
    tcase_add_test(tc_log, s21_log_505);
    tcase_add_test(tc_log, s21_log_506);
    tcase_add_test(tc_log, s21_log_507);
    tcase_add_test(tc_log, s21_log_508);
    tcase_add_test(tc_log, s21_log_509);
    tcase_add_test(tc_log, s21_log_510);
    tcase_add_test(tc_log, s21_log_511);
    tcase_add_test(tc_log, s21_log_512);
    tcase_add_test(tc_log, s21_log_513);
    tcase_add_test(tc_log, s21_log_514);
    tcase_add_test(tc_log, s21_log_515);
    tcase_add_test(tc_log, s21_log_516);
    tcase_add_test(tc_log, s21_log_517);
    tcase_add_test(tc_log, s21_log_518);
    tcase_add_test(tc_log, s21_log_519);
    tcase_add_test(tc_log, s21_log_520);
    tcase_add_test(tc_log, s21_log_521);
    tcase_add_test(tc_log, s21_log_522);
    tcase_add_test(tc_log, s21_log_523);
    tcase_add_test(tc_log, s21_log_524);
    tcase_add_test(tc_log, s21_log_525);
    tcase_add_test(tc_log, s21_log_526);
    tcase_add_test(tc_log, s21_log_527);
    tcase_add_test(tc_log, s21_log_528);
    tcase_add_test(tc_log, s21_log_529);
    tcase_add_test(tc_log, s21_log_530);
    tcase_add_test(tc_log, s21_log_531);
    tcase_add_test(tc_log, s21_log_532);
    tcase_add_test(tc_log, s21_log_533);
    tcase_add_test(tc_log, s21_log_534);
    tcase_add_test(tc_log, s21_log_535);
    tcase_add_test(tc_log, s21_log_536);
    tcase_add_test(tc_log, s21_log_537);
    tcase_add_test(tc_log, s21_log_538);
    tcase_add_test(tc_log, s21_log_539);
    tcase_add_test(tc_log, s21_log_540);
    tcase_add_test(tc_log, s21_log_541);
    tcase_add_test(tc_log, s21_log_542);
    tcase_add_test(tc_log, s21_log_543);
    tcase_add_test(tc_log, s21_log_544);
    tcase_add_test(tc_log, s21_log_545);
    tcase_add_test(tc_log, s21_log_546);
    tcase_add_test(tc_log, s21_log_547);
    tcase_add_test(tc_log, s21_log_548);
    tcase_add_test(tc_log, s21_log_549);
    tcase_add_test(tc_log, s21_log_550);
    tcase_add_test(tc_log, s21_log_551);
    tcase_add_test(tc_log, s21_log_552);
    tcase_add_test(tc_log, s21_log_553);
    tcase_add_test(tc_log, s21_log_554);
    tcase_add_test(tc_log, s21_log_555);
    tcase_add_test(tc_log, s21_log_556);
    tcase_add_test(tc_log, s21_log_557);
    tcase_add_test(tc_log, s21_log_558);
    tcase_add_test(tc_log, s21_log_559);
    tcase_add_test(tc_log, s21_log_560);
    tcase_add_test(tc_log, s21_log_561);
    tcase_add_test(tc_log, s21_log_562);
    tcase_add_test(tc_log, s21_log_563);
    tcase_add_test(tc_log, s21_log_564);
    tcase_add_test(tc_log, s21_log_565);
    tcase_add_test(tc_log, s21_log_566);
    tcase_add_test(tc_log, s21_log_567);
    tcase_add_test(tc_log, s21_log_568);
    tcase_add_test(tc_log, s21_log_569);
    tcase_add_test(tc_log, s21_log_570);
    tcase_add_test(tc_log, s21_log_571);
    tcase_add_test(tc_log, s21_log_572);
    tcase_add_test(tc_log, s21_log_573);
    tcase_add_test(tc_log, s21_log_574);
    tcase_add_test(tc_log, s21_log_575);
    tcase_add_test(tc_log, s21_log_576);
    tcase_add_test(tc_log, s21_log_577);
    tcase_add_test(tc_log, s21_log_578);
    tcase_add_test(tc_log, s21_log_579);
    tcase_add_test(tc_log, s21_log_580);
    tcase_add_test(tc_log, s21_log_581);
    tcase_add_test(tc_log, s21_log_582);
    tcase_add_test(tc_log, s21_log_583);
    tcase_add_test(tc_log, s21_log_584);
    tcase_add_test(tc_log, s21_log_585);
    tcase_add_test(tc_log, s21_log_586);
    tcase_add_test(tc_log, s21_log_587);
    tcase_add_test(tc_log, s21_log_588);
    tcase_add_test(tc_log, s21_log_589);
    tcase_add_test(tc_log, s21_log_590);
    tcase_add_test(tc_log, s21_log_591);
    tcase_add_test(tc_log, s21_log_592);
    tcase_add_test(tc_log, s21_log_593);
    tcase_add_test(tc_log, s21_log_594);
    tcase_add_test(tc_log, s21_log_595);
    tcase_add_test(tc_log, s21_log_596);
    tcase_add_test(tc_log, s21_log_597);
    tcase_add_test(tc_log, s21_log_598);
    tcase_add_test(tc_log, s21_log_599);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief seventh set of tests
 *
 * @return Suite*
 */
Suite *s21_log_seventh_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log seventh case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_600);
    tcase_add_test(tc_log, s21_log_601);
    tcase_add_test(tc_log, s21_log_602);
    tcase_add_test(tc_log, s21_log_603);
    tcase_add_test(tc_log, s21_log_604);
    tcase_add_test(tc_log, s21_log_605);
    tcase_add_test(tc_log, s21_log_606);
    tcase_add_test(tc_log, s21_log_607);
    tcase_add_test(tc_log, s21_log_608);
    tcase_add_test(tc_log, s21_log_609);
    tcase_add_test(tc_log, s21_log_610);
    tcase_add_test(tc_log, s21_log_611);
    tcase_add_test(tc_log, s21_log_612);
    tcase_add_test(tc_log, s21_log_613);
    tcase_add_test(tc_log, s21_log_614);
    tcase_add_test(tc_log, s21_log_615);
    tcase_add_test(tc_log, s21_log_616);
    tcase_add_test(tc_log, s21_log_617);
    tcase_add_test(tc_log, s21_log_618);
    tcase_add_test(tc_log, s21_log_619);
    tcase_add_test(tc_log, s21_log_620);
    tcase_add_test(tc_log, s21_log_621);
    tcase_add_test(tc_log, s21_log_622);
    tcase_add_test(tc_log, s21_log_623);
    tcase_add_test(tc_log, s21_log_624);
    tcase_add_test(tc_log, s21_log_625);
    tcase_add_test(tc_log, s21_log_626);
    tcase_add_test(tc_log, s21_log_627);
    tcase_add_test(tc_log, s21_log_628);
    tcase_add_test(tc_log, s21_log_629);
    tcase_add_test(tc_log, s21_log_630);
    tcase_add_test(tc_log, s21_log_631);
    tcase_add_test(tc_log, s21_log_632);
    tcase_add_test(tc_log, s21_log_633);
    tcase_add_test(tc_log, s21_log_634);
    tcase_add_test(tc_log, s21_log_635);
    tcase_add_test(tc_log, s21_log_636);
    tcase_add_test(tc_log, s21_log_637);
    tcase_add_test(tc_log, s21_log_638);
    tcase_add_test(tc_log, s21_log_639);
    tcase_add_test(tc_log, s21_log_640);
    tcase_add_test(tc_log, s21_log_641);
    tcase_add_test(tc_log, s21_log_642);
    tcase_add_test(tc_log, s21_log_643);
    tcase_add_test(tc_log, s21_log_644);
    tcase_add_test(tc_log, s21_log_645);
    tcase_add_test(tc_log, s21_log_646);
    tcase_add_test(tc_log, s21_log_647);
    tcase_add_test(tc_log, s21_log_648);
    tcase_add_test(tc_log, s21_log_649);
    tcase_add_test(tc_log, s21_log_650);
    tcase_add_test(tc_log, s21_log_651);
    tcase_add_test(tc_log, s21_log_652);
    tcase_add_test(tc_log, s21_log_653);
    tcase_add_test(tc_log, s21_log_654);
    tcase_add_test(tc_log, s21_log_655);
    tcase_add_test(tc_log, s21_log_656);
    tcase_add_test(tc_log, s21_log_657);
    tcase_add_test(tc_log, s21_log_658);
    tcase_add_test(tc_log, s21_log_659);
    tcase_add_test(tc_log, s21_log_660);
    tcase_add_test(tc_log, s21_log_661);
    tcase_add_test(tc_log, s21_log_662);
    tcase_add_test(tc_log, s21_log_663);
    tcase_add_test(tc_log, s21_log_664);
    tcase_add_test(tc_log, s21_log_665);
    tcase_add_test(tc_log, s21_log_666);
    tcase_add_test(tc_log, s21_log_667);
    tcase_add_test(tc_log, s21_log_668);
    tcase_add_test(tc_log, s21_log_669);
    tcase_add_test(tc_log, s21_log_670);
    tcase_add_test(tc_log, s21_log_671);
    tcase_add_test(tc_log, s21_log_672);
    tcase_add_test(tc_log, s21_log_673);
    tcase_add_test(tc_log, s21_log_674);
    tcase_add_test(tc_log, s21_log_675);
    tcase_add_test(tc_log, s21_log_676);
    tcase_add_test(tc_log, s21_log_677);
    tcase_add_test(tc_log, s21_log_678);
    tcase_add_test(tc_log, s21_log_679);
    tcase_add_test(tc_log, s21_log_680);
    tcase_add_test(tc_log, s21_log_681);
    tcase_add_test(tc_log, s21_log_682);
    tcase_add_test(tc_log, s21_log_683);
    tcase_add_test(tc_log, s21_log_684);
    tcase_add_test(tc_log, s21_log_685);
    tcase_add_test(tc_log, s21_log_686);
    tcase_add_test(tc_log, s21_log_687);
    tcase_add_test(tc_log, s21_log_688);
    tcase_add_test(tc_log, s21_log_689);
    tcase_add_test(tc_log, s21_log_690);
    tcase_add_test(tc_log, s21_log_691);
    tcase_add_test(tc_log, s21_log_692);
    tcase_add_test(tc_log, s21_log_693);
    tcase_add_test(tc_log, s21_log_694);
    tcase_add_test(tc_log, s21_log_695);
    tcase_add_test(tc_log, s21_log_696);
    tcase_add_test(tc_log, s21_log_697);
    tcase_add_test(tc_log, s21_log_698);
    tcase_add_test(tc_log, s21_log_699);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief eighth set of tests
 *
 * @return Suite*
 */
Suite *s21_log_eighth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log eighth case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_700);
    tcase_add_test(tc_log, s21_log_701);
    tcase_add_test(tc_log, s21_log_702);
    tcase_add_test(tc_log, s21_log_703);
    tcase_add_test(tc_log, s21_log_704);
    tcase_add_test(tc_log, s21_log_705);
    tcase_add_test(tc_log, s21_log_706);
    tcase_add_test(tc_log, s21_log_707);
    tcase_add_test(tc_log, s21_log_708);
    tcase_add_test(tc_log, s21_log_709);
    tcase_add_test(tc_log, s21_log_710);
    tcase_add_test(tc_log, s21_log_711);
    tcase_add_test(tc_log, s21_log_712);
    tcase_add_test(tc_log, s21_log_713);
    tcase_add_test(tc_log, s21_log_714);
    tcase_add_test(tc_log, s21_log_715);
    tcase_add_test(tc_log, s21_log_716);
    tcase_add_test(tc_log, s21_log_717);
    tcase_add_test(tc_log, s21_log_718);
    tcase_add_test(tc_log, s21_log_719);
    tcase_add_test(tc_log, s21_log_720);
    tcase_add_test(tc_log, s21_log_721);
    tcase_add_test(tc_log, s21_log_722);
    tcase_add_test(tc_log, s21_log_723);
    tcase_add_test(tc_log, s21_log_724);
    tcase_add_test(tc_log, s21_log_725);
    tcase_add_test(tc_log, s21_log_726);
    tcase_add_test(tc_log, s21_log_727);
    tcase_add_test(tc_log, s21_log_728);
    tcase_add_test(tc_log, s21_log_729);
    tcase_add_test(tc_log, s21_log_730);
    tcase_add_test(tc_log, s21_log_731);
    tcase_add_test(tc_log, s21_log_732);
    tcase_add_test(tc_log, s21_log_733);
    tcase_add_test(tc_log, s21_log_734);
    tcase_add_test(tc_log, s21_log_735);
    tcase_add_test(tc_log, s21_log_736);
    tcase_add_test(tc_log, s21_log_737);
    tcase_add_test(tc_log, s21_log_738);
    tcase_add_test(tc_log, s21_log_739);
    tcase_add_test(tc_log, s21_log_740);
    tcase_add_test(tc_log, s21_log_741);
    tcase_add_test(tc_log, s21_log_742);
    tcase_add_test(tc_log, s21_log_743);
    tcase_add_test(tc_log, s21_log_744);
    tcase_add_test(tc_log, s21_log_745);
    tcase_add_test(tc_log, s21_log_746);
    tcase_add_test(tc_log, s21_log_747);
    tcase_add_test(tc_log, s21_log_748);
    tcase_add_test(tc_log, s21_log_749);
    tcase_add_test(tc_log, s21_log_750);
    tcase_add_test(tc_log, s21_log_751);
    tcase_add_test(tc_log, s21_log_752);
    tcase_add_test(tc_log, s21_log_753);
    tcase_add_test(tc_log, s21_log_754);
    tcase_add_test(tc_log, s21_log_755);
    tcase_add_test(tc_log, s21_log_756);
    tcase_add_test(tc_log, s21_log_757);
    tcase_add_test(tc_log, s21_log_758);
    tcase_add_test(tc_log, s21_log_759);
    tcase_add_test(tc_log, s21_log_760);
    tcase_add_test(tc_log, s21_log_761);
    tcase_add_test(tc_log, s21_log_762);
    tcase_add_test(tc_log, s21_log_763);
    tcase_add_test(tc_log, s21_log_764);
    tcase_add_test(tc_log, s21_log_765);
    tcase_add_test(tc_log, s21_log_766);
    tcase_add_test(tc_log, s21_log_767);
    tcase_add_test(tc_log, s21_log_768);
    tcase_add_test(tc_log, s21_log_769);
    tcase_add_test(tc_log, s21_log_770);
    tcase_add_test(tc_log, s21_log_771);
    tcase_add_test(tc_log, s21_log_772);
    tcase_add_test(tc_log, s21_log_773);
    tcase_add_test(tc_log, s21_log_774);
    tcase_add_test(tc_log, s21_log_775);
    tcase_add_test(tc_log, s21_log_776);
    tcase_add_test(tc_log, s21_log_777);
    tcase_add_test(tc_log, s21_log_778);
    tcase_add_test(tc_log, s21_log_779);
    tcase_add_test(tc_log, s21_log_780);
    tcase_add_test(tc_log, s21_log_781);
    tcase_add_test(tc_log, s21_log_782);
    tcase_add_test(tc_log, s21_log_783);
    tcase_add_test(tc_log, s21_log_784);
    tcase_add_test(tc_log, s21_log_785);
    tcase_add_test(tc_log, s21_log_786);
    tcase_add_test(tc_log, s21_log_787);
    tcase_add_test(tc_log, s21_log_788);
    tcase_add_test(tc_log, s21_log_789);
    tcase_add_test(tc_log, s21_log_790);
    tcase_add_test(tc_log, s21_log_791);
    tcase_add_test(tc_log, s21_log_792);
    tcase_add_test(tc_log, s21_log_793);
    tcase_add_test(tc_log, s21_log_794);
    tcase_add_test(tc_log, s21_log_795);
    tcase_add_test(tc_log, s21_log_796);
    tcase_add_test(tc_log, s21_log_797);
    tcase_add_test(tc_log, s21_log_798);
    tcase_add_test(tc_log, s21_log_799);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief ninth set of tests
 *
 * @return Suite*
 */
Suite *s21_log_ninth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log ninth case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_800);
    tcase_add_test(tc_log, s21_log_801);
    tcase_add_test(tc_log, s21_log_802);
    tcase_add_test(tc_log, s21_log_803);
    tcase_add_test(tc_log, s21_log_804);
    tcase_add_test(tc_log, s21_log_805);
    tcase_add_test(tc_log, s21_log_806);
    tcase_add_test(tc_log, s21_log_807);
    tcase_add_test(tc_log, s21_log_808);
    tcase_add_test(tc_log, s21_log_809);
    tcase_add_test(tc_log, s21_log_810);
    tcase_add_test(tc_log, s21_log_811);
    tcase_add_test(tc_log, s21_log_812);
    tcase_add_test(tc_log, s21_log_813);
    tcase_add_test(tc_log, s21_log_814);
    tcase_add_test(tc_log, s21_log_815);
    tcase_add_test(tc_log, s21_log_816);
    tcase_add_test(tc_log, s21_log_817);
    tcase_add_test(tc_log, s21_log_818);
    tcase_add_test(tc_log, s21_log_819);
    tcase_add_test(tc_log, s21_log_820);
    tcase_add_test(tc_log, s21_log_821);
    tcase_add_test(tc_log, s21_log_822);
    tcase_add_test(tc_log, s21_log_823);
    tcase_add_test(tc_log, s21_log_824);
    tcase_add_test(tc_log, s21_log_825);
    tcase_add_test(tc_log, s21_log_826);
    tcase_add_test(tc_log, s21_log_827);
    tcase_add_test(tc_log, s21_log_828);
    tcase_add_test(tc_log, s21_log_829);
    tcase_add_test(tc_log, s21_log_830);
    tcase_add_test(tc_log, s21_log_831);
    tcase_add_test(tc_log, s21_log_832);
    tcase_add_test(tc_log, s21_log_833);
    tcase_add_test(tc_log, s21_log_834);
    tcase_add_test(tc_log, s21_log_835);
    tcase_add_test(tc_log, s21_log_836);
    tcase_add_test(tc_log, s21_log_837);
    tcase_add_test(tc_log, s21_log_838);
    tcase_add_test(tc_log, s21_log_839);
    tcase_add_test(tc_log, s21_log_840);
    tcase_add_test(tc_log, s21_log_841);
    tcase_add_test(tc_log, s21_log_842);
    tcase_add_test(tc_log, s21_log_843);
    tcase_add_test(tc_log, s21_log_844);
    tcase_add_test(tc_log, s21_log_845);
    tcase_add_test(tc_log, s21_log_846);
    tcase_add_test(tc_log, s21_log_847);
    tcase_add_test(tc_log, s21_log_848);
    tcase_add_test(tc_log, s21_log_849);
    tcase_add_test(tc_log, s21_log_850);
    tcase_add_test(tc_log, s21_log_851);
    tcase_add_test(tc_log, s21_log_852);
    tcase_add_test(tc_log, s21_log_853);
    tcase_add_test(tc_log, s21_log_854);
    tcase_add_test(tc_log, s21_log_855);
    tcase_add_test(tc_log, s21_log_856);
    tcase_add_test(tc_log, s21_log_857);
    tcase_add_test(tc_log, s21_log_858);
    tcase_add_test(tc_log, s21_log_859);
    tcase_add_test(tc_log, s21_log_860);
    tcase_add_test(tc_log, s21_log_861);
    tcase_add_test(tc_log, s21_log_862);
    tcase_add_test(tc_log, s21_log_863);
    tcase_add_test(tc_log, s21_log_864);
    tcase_add_test(tc_log, s21_log_865);
    tcase_add_test(tc_log, s21_log_866);
    tcase_add_test(tc_log, s21_log_867);
    tcase_add_test(tc_log, s21_log_868);
    tcase_add_test(tc_log, s21_log_869);
    tcase_add_test(tc_log, s21_log_870);
    tcase_add_test(tc_log, s21_log_871);
    tcase_add_test(tc_log, s21_log_872);
    tcase_add_test(tc_log, s21_log_873);
    tcase_add_test(tc_log, s21_log_874);
    tcase_add_test(tc_log, s21_log_875);
    tcase_add_test(tc_log, s21_log_876);
    tcase_add_test(tc_log, s21_log_877);
    tcase_add_test(tc_log, s21_log_878);
    tcase_add_test(tc_log, s21_log_879);
    tcase_add_test(tc_log, s21_log_880);
    tcase_add_test(tc_log, s21_log_881);
    tcase_add_test(tc_log, s21_log_882);
    tcase_add_test(tc_log, s21_log_883);
    tcase_add_test(tc_log, s21_log_884);
    tcase_add_test(tc_log, s21_log_885);
    tcase_add_test(tc_log, s21_log_886);
    tcase_add_test(tc_log, s21_log_887);
    tcase_add_test(tc_log, s21_log_888);
    tcase_add_test(tc_log, s21_log_889);
    tcase_add_test(tc_log, s21_log_890);
    tcase_add_test(tc_log, s21_log_891);
    tcase_add_test(tc_log, s21_log_892);
    tcase_add_test(tc_log, s21_log_893);
    tcase_add_test(tc_log, s21_log_894);
    tcase_add_test(tc_log, s21_log_895);
    tcase_add_test(tc_log, s21_log_896);
    tcase_add_test(tc_log, s21_log_897);
    tcase_add_test(tc_log, s21_log_898);
    tcase_add_test(tc_log, s21_log_899);
    suite_add_tcase(math, tc_log);

    return math;
}

/**
 * @brief tenth set of tests
 *
 * @return Suite*
 */
Suite *s21_log_tenth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_log tenth case)\n");

    TCase *tc_log = tcase_create("test_log");
    tcase_add_test(tc_log, s21_log_900);
    tcase_add_test(tc_log, s21_log_901);
    tcase_add_test(tc_log, s21_log_902);
    tcase_add_test(tc_log, s21_log_903);
    tcase_add_test(tc_log, s21_log_904);
    tcase_add_test(tc_log, s21_log_905);
    tcase_add_test(tc_log, s21_log_906);
    tcase_add_test(tc_log, s21_log_907);
    tcase_add_test(tc_log, s21_log_908);
    tcase_add_test(tc_log, s21_log_909);
    tcase_add_test(tc_log, s21_log_910);
    tcase_add_test(tc_log, s21_log_911);
    tcase_add_test(tc_log, s21_log_912);
    tcase_add_test(tc_log, s21_log_913);
    tcase_add_test(tc_log, s21_log_914);
    tcase_add_test(tc_log, s21_log_915);
    tcase_add_test(tc_log, s21_log_916);
    tcase_add_test(tc_log, s21_log_917);
    tcase_add_test(tc_log, s21_log_918);
    tcase_add_test(tc_log, s21_log_919);
    tcase_add_test(tc_log, s21_log_920);
    tcase_add_test(tc_log, s21_log_921);
    tcase_add_test(tc_log, s21_log_922);
    tcase_add_test(tc_log, s21_log_923);
    tcase_add_test(tc_log, s21_log_924);
    tcase_add_test(tc_log, s21_log_925);
    tcase_add_test(tc_log, s21_log_926);
    tcase_add_test(tc_log, s21_log_927);
    tcase_add_test(tc_log, s21_log_928);
    tcase_add_test(tc_log, s21_log_929);
    tcase_add_test(tc_log, s21_log_930);
    tcase_add_test(tc_log, s21_log_931);
    tcase_add_test(tc_log, s21_log_932);
    tcase_add_test(tc_log, s21_log_933);
    tcase_add_test(tc_log, s21_log_934);
    tcase_add_test(tc_log, s21_log_935);
    tcase_add_test(tc_log, s21_log_936);
    tcase_add_test(tc_log, s21_log_937);
    tcase_add_test(tc_log, s21_log_938);
    tcase_add_test(tc_log, s21_log_939);
    tcase_add_test(tc_log, s21_log_940);
    tcase_add_test(tc_log, s21_log_941);
    tcase_add_test(tc_log, s21_log_942);
    tcase_add_test(tc_log, s21_log_943);
    tcase_add_test(tc_log, s21_log_944);
    tcase_add_test(tc_log, s21_log_945);
    tcase_add_test(tc_log, s21_log_946);
    tcase_add_test(tc_log, s21_log_947);
    tcase_add_test(tc_log, s21_log_948);
    tcase_add_test(tc_log, s21_log_949);
    tcase_add_test(tc_log, s21_log_950);
    tcase_add_test(tc_log, s21_log_951);
    tcase_add_test(tc_log, s21_log_952);
    tcase_add_test(tc_log, s21_log_953);
    tcase_add_test(tc_log, s21_log_954);
    tcase_add_test(tc_log, s21_log_955);
    tcase_add_test(tc_log, s21_log_956);
    tcase_add_test(tc_log, s21_log_957);
    tcase_add_test(tc_log, s21_log_958);
    tcase_add_test(tc_log, s21_log_959);
    tcase_add_test(tc_log, s21_log_960);
    tcase_add_test(tc_log, s21_log_961);
    tcase_add_test(tc_log, s21_log_962);
    tcase_add_test(tc_log, s21_log_963);
    tcase_add_test(tc_log, s21_log_964);
    tcase_add_test(tc_log, s21_log_965);
    tcase_add_test(tc_log, s21_log_966);
    tcase_add_test(tc_log, s21_log_967);
    tcase_add_test(tc_log, s21_log_968);
    tcase_add_test(tc_log, s21_log_969);
    tcase_add_test(tc_log, s21_log_970);
    tcase_add_test(tc_log, s21_log_971);
    tcase_add_test(tc_log, s21_log_972);
    tcase_add_test(tc_log, s21_log_973);
    tcase_add_test(tc_log, s21_log_974);
    tcase_add_test(tc_log, s21_log_975);
    tcase_add_test(tc_log, s21_log_976);
    tcase_add_test(tc_log, s21_log_977);
    tcase_add_test(tc_log, s21_log_978);
    tcase_add_test(tc_log, s21_log_979);
    tcase_add_test(tc_log, s21_log_980);
    tcase_add_test(tc_log, s21_log_981);
    tcase_add_test(tc_log, s21_log_982);
    tcase_add_test(tc_log, s21_log_983);
    tcase_add_test(tc_log, s21_log_984);
    tcase_add_test(tc_log, s21_log_985);
    tcase_add_test(tc_log, s21_log_986);
    tcase_add_test(tc_log, s21_log_987);
    tcase_add_test(tc_log, s21_log_988);
    tcase_add_test(tc_log, s21_log_989);
    tcase_add_test(tc_log, s21_log_990);
    tcase_add_test(tc_log, s21_log_991);
    tcase_add_test(tc_log, s21_log_992);
    tcase_add_test(tc_log, s21_log_993);
    tcase_add_test(tc_log, s21_log_994);
    tcase_add_test(tc_log, s21_log_995);
    tcase_add_test(tc_log, s21_log_996);
    tcase_add_test(tc_log, s21_log_997);
    tcase_add_test(tc_log, s21_log_998);
    tcase_add_test(tc_log, s21_log_999);
    suite_add_tcase(math, tc_log);

    return math;
}


//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_log.
 *
 * @param[in] value a value used in the calculation of the logarithm of x to the
 * base of e.
 */
void s21_test_log(double value) {
  long double original_func = log(value);
  long double implementation = s21_log(value);

  printf("Input value: %lf\n", value);

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
#ifdef DEBUG
    // s21_test_print(original_func, implementation);
#endif
  } else {
    printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
  }

  // s21_test_print(original_func, implementation);

  ck_assert_double_eq_tol(first, second, COMPARE_ACCURACY);
}
