/**
 * @file s21_test_exp.c
 * @author kossadda (https://github.com/kossadda)
 * @brief A set of tests to check the functionality of s21_exp
 * @version 1.0
 * @date 2024-01-21
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "./test_include/s21_test_exp.h"

/// @brief \f[ exp(0.0001) = -9.210340 \f]
START_TEST(s21_exp_0)
{
    double value = 0.0001;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0001312) = -8.938788 \f]
START_TEST(s21_exp_1)
{
    double value = 0.0001312;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0001624) = -8.725448 \f]
START_TEST(s21_exp_2)
{
    double value = 0.0001624;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0001936) = -8.549716 \f]
START_TEST(s21_exp_3)
{
    double value = 0.0001936;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0002248) = -8.400299 \f]
START_TEST(s21_exp_4)
{
    double value = 0.0002248;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0002560) = -8.270333 \f]
START_TEST(s21_exp_5)
{
    double value = 0.0002560;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0002872) = -8.155332 \f]
START_TEST(s21_exp_6)
{
    double value = 0.0002872;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0003184) = -8.052202 \f]
START_TEST(s21_exp_7)
{
    double value = 0.0003184;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0003496) = -7.958721 \f]
START_TEST(s21_exp_8)
{
    double value = 0.0003496;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0003808) = -7.873236 \f]
START_TEST(s21_exp_9)
{
    double value = 0.0003808;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0004120) = -7.794487 \f]
START_TEST(s21_exp_10)
{
    double value = 0.0004120;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0004432) = -7.721489 \f]
START_TEST(s21_exp_11)
{
    double value = 0.0004432;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0004744) = -7.653460 \f]
START_TEST(s21_exp_12)
{
    double value = 0.0004744;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0005056) = -7.589765 \f]
START_TEST(s21_exp_13)
{
    double value = 0.0005056;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0005368) = -7.529885 \f]
START_TEST(s21_exp_14)
{
    double value = 0.0005368;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0005680) = -7.473389 \f]
START_TEST(s21_exp_15)
{
    double value = 0.0005680;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0005992) = -7.419915 \f]
START_TEST(s21_exp_16)
{
    double value = 0.0005992;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0006304) = -7.369156 \f]
START_TEST(s21_exp_17)
{
    double value = 0.0006304;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0006616) = -7.320849 \f]
START_TEST(s21_exp_18)
{
    double value = 0.0006616;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0006928) = -7.274769 \f]
START_TEST(s21_exp_19)
{
    double value = 0.0006928;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0007240) = -7.230719 \f]
START_TEST(s21_exp_20)
{
    double value = 0.0007240;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0007552) = -7.188528 \f]
START_TEST(s21_exp_21)
{
    double value = 0.0007552;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0007864) = -7.148045 \f]
START_TEST(s21_exp_22)
{
    double value = 0.0007864;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0008176) = -7.109137 \f]
START_TEST(s21_exp_23)
{
    double value = 0.0008176;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0008488) = -7.071687 \f]
START_TEST(s21_exp_24)
{
    double value = 0.0008488;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0008800) = -7.035589 \f]
START_TEST(s21_exp_25)
{
    double value = 0.0008800;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0009112) = -7.000748 \f]
START_TEST(s21_exp_26)
{
    double value = 0.0009112;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0009424) = -6.967081 \f]
START_TEST(s21_exp_27)
{
    double value = 0.0009424;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0009736) = -6.934510 \f]
START_TEST(s21_exp_28)
{
    double value = 0.0009736;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0010048) = -6.902967 \f]
START_TEST(s21_exp_29)
{
    double value = 0.0010048;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0010360) = -6.872388 \f]
START_TEST(s21_exp_30)
{
    double value = 0.0010360;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0010672) = -6.842717 \f]
START_TEST(s21_exp_31)
{
    double value = 0.0010672;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0010984) = -6.813901 \f]
START_TEST(s21_exp_32)
{
    double value = 0.0010984;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0011296) = -6.785892 \f]
START_TEST(s21_exp_33)
{
    double value = 0.0011296;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0011608) = -6.758646 \f]
START_TEST(s21_exp_34)
{
    double value = 0.0011608;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0011920) = -6.732123 \f]
START_TEST(s21_exp_35)
{
    double value = 0.0011920;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0012232) = -6.706285 \f]
START_TEST(s21_exp_36)
{
    double value = 0.0012232;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0012544) = -6.681098 \f]
START_TEST(s21_exp_37)
{
    double value = 0.0012544;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0012856) = -6.656530 \f]
START_TEST(s21_exp_38)
{
    double value = 0.0012856;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0013168) = -6.632551 \f]
START_TEST(s21_exp_39)
{
    double value = 0.0013168;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0013480) = -6.609133 \f]
START_TEST(s21_exp_40)
{
    double value = 0.0013480;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0013792) = -6.586252 \f]
START_TEST(s21_exp_41)
{
    double value = 0.0013792;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0014104) = -6.563882 \f]
START_TEST(s21_exp_42)
{
    double value = 0.0014104;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0014416) = -6.542002 \f]
START_TEST(s21_exp_43)
{
    double value = 0.0014416;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0014728) = -6.520590 \f]
START_TEST(s21_exp_44)
{
    double value = 0.0014728;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0015040) = -6.499627 \f]
START_TEST(s21_exp_45)
{
    double value = 0.0015040;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0015352) = -6.479095 \f]
START_TEST(s21_exp_46)
{
    double value = 0.0015352;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0015664) = -6.458975 \f]
START_TEST(s21_exp_47)
{
    double value = 0.0015664;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0015976) = -6.439253 \f]
START_TEST(s21_exp_48)
{
    double value = 0.0015976;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0016288) = -6.419912 \f]
START_TEST(s21_exp_49)
{
    double value = 0.0016288;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0016600) = -6.400938 \f]
START_TEST(s21_exp_50)
{
    double value = 0.0016600;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0016912) = -6.382317 \f]
START_TEST(s21_exp_51)
{
    double value = 0.0016912;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0017224) = -6.364037 \f]
START_TEST(s21_exp_52)
{
    double value = 0.0017224;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0017536) = -6.346084 \f]
START_TEST(s21_exp_53)
{
    double value = 0.0017536;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0017848) = -6.328449 \f]
START_TEST(s21_exp_54)
{
    double value = 0.0017848;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0018160) = -6.311119 \f]
START_TEST(s21_exp_55)
{
    double value = 0.0018160;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0018472) = -6.294084 \f]
START_TEST(s21_exp_56)
{
    double value = 0.0018472;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0018784) = -6.277335 \f]
START_TEST(s21_exp_57)
{
    double value = 0.0018784;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0019096) = -6.260861 \f]
START_TEST(s21_exp_58)
{
    double value = 0.0019096;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0019408) = -6.244655 \f]
START_TEST(s21_exp_59)
{
    double value = 0.0019408;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0019720) = -6.228707 \f]
START_TEST(s21_exp_60)
{
    double value = 0.0019720;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0020032) = -6.213009 \f]
START_TEST(s21_exp_61)
{
    double value = 0.0020032;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0020344) = -6.197554 \f]
START_TEST(s21_exp_62)
{
    double value = 0.0020344;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0020656) = -6.182335 \f]
START_TEST(s21_exp_63)
{
    double value = 0.0020656;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0020968) = -6.167343 \f]
START_TEST(s21_exp_64)
{
    double value = 0.0020968;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0021280) = -6.152573 \f]
START_TEST(s21_exp_65)
{
    double value = 0.0021280;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0021592) = -6.138017 \f]
START_TEST(s21_exp_66)
{
    double value = 0.0021592;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0021904) = -6.123671 \f]
START_TEST(s21_exp_67)
{
    double value = 0.0021904;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0022216) = -6.109528 \f]
START_TEST(s21_exp_68)
{
    double value = 0.0022216;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0022528) = -6.095581 \f]
START_TEST(s21_exp_69)
{
    double value = 0.0022528;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0022840) = -6.081827 \f]
START_TEST(s21_exp_70)
{
    double value = 0.0022840;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0023152) = -6.068259 \f]
START_TEST(s21_exp_71)
{
    double value = 0.0023152;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0023464) = -6.054873 \f]
START_TEST(s21_exp_72)
{
    double value = 0.0023464;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0023776) = -6.041664 \f]
START_TEST(s21_exp_73)
{
    double value = 0.0023776;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0024088) = -6.028627 \f]
START_TEST(s21_exp_74)
{
    double value = 0.0024088;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0024400) = -6.015757 \f]
START_TEST(s21_exp_75)
{
    double value = 0.0024400;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0024712) = -6.003051 \f]
START_TEST(s21_exp_76)
{
    double value = 0.0024712;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0025024) = -5.990505 \f]
START_TEST(s21_exp_77)
{
    double value = 0.0025024;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0025336) = -5.978114 \f]
START_TEST(s21_exp_78)
{
    double value = 0.0025336;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0025648) = -5.965875 \f]
START_TEST(s21_exp_79)
{
    double value = 0.0025648;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0025960) = -5.953783 \f]
START_TEST(s21_exp_80)
{
    double value = 0.0025960;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0026272) = -5.941837 \f]
START_TEST(s21_exp_81)
{
    double value = 0.0026272;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0026584) = -5.930031 \f]
START_TEST(s21_exp_82)
{
    double value = 0.0026584;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0026896) = -5.918363 \f]
START_TEST(s21_exp_83)
{
    double value = 0.0026896;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0027208) = -5.906829 \f]
START_TEST(s21_exp_84)
{
    double value = 0.0027208;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0027520) = -5.895427 \f]
START_TEST(s21_exp_85)
{
    double value = 0.0027520;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0027832) = -5.884154 \f]
START_TEST(s21_exp_86)
{
    double value = 0.0027832;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0028144) = -5.873006 \f]
START_TEST(s21_exp_87)
{
    double value = 0.0028144;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0028456) = -5.861981 \f]
START_TEST(s21_exp_88)
{
    double value = 0.0028456;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0028768) = -5.851077 \f]
START_TEST(s21_exp_89)
{
    double value = 0.0028768;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0029080) = -5.840290 \f]
START_TEST(s21_exp_90)
{
    double value = 0.0029080;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0029392) = -5.829618 \f]
START_TEST(s21_exp_91)
{
    double value = 0.0029392;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0029704) = -5.819059 \f]
START_TEST(s21_exp_92)
{
    double value = 0.0029704;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030016) = -5.808610 \f]
START_TEST(s21_exp_93)
{
    double value = 0.0030016;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030328) = -5.798269 \f]
START_TEST(s21_exp_94)
{
    double value = 0.0030328;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030640) = -5.788034 \f]
START_TEST(s21_exp_95)
{
    double value = 0.0030640;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030952) = -5.777903 \f]
START_TEST(s21_exp_96)
{
    double value = 0.0030952;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031264) = -5.767873 \f]
START_TEST(s21_exp_97)
{
    double value = 0.0031264;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031576) = -5.757943 \f]
START_TEST(s21_exp_98)
{
    double value = 0.0031576;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031888) = -5.748111 \f]
START_TEST(s21_exp_99)
{
    double value = 0.0031888;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0002) = -8.517193 \f]
START_TEST(s21_exp_100)
{
    double value = 0.0002;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0002312) = -8.372227 \f]
START_TEST(s21_exp_101)
{
    double value = 0.0002312;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0002624) = -8.245641 \f]
START_TEST(s21_exp_102)
{
    double value = 0.0002624;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0002936) = -8.133292 \f]
START_TEST(s21_exp_103)
{
    double value = 0.0002936;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0003248) = -8.032301 \f]
START_TEST(s21_exp_104)
{
    double value = 0.0003248;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0003560) = -7.940580 \f]
START_TEST(s21_exp_105)
{
    double value = 0.0003560;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0003872) = -7.856569 \f]
START_TEST(s21_exp_106)
{
    double value = 0.0003872;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0004184) = -7.779073 \f]
START_TEST(s21_exp_107)
{
    double value = 0.0004184;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0004496) = -7.707152 \f]
START_TEST(s21_exp_108)
{
    double value = 0.0004496;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0004808) = -7.640059 \f]
START_TEST(s21_exp_109)
{
    double value = 0.0004808;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0005120) = -7.577186 \f]
START_TEST(s21_exp_110)
{
    double value = 0.0005120;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0005432) = -7.518033 \f]
START_TEST(s21_exp_111)
{
    double value = 0.0005432;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0005744) = -7.462185 \f]
START_TEST(s21_exp_112)
{
    double value = 0.0005744;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0006056) = -7.409291 \f]
START_TEST(s21_exp_113)
{
    double value = 0.0006056;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0006368) = -7.359055 \f]
START_TEST(s21_exp_114)
{
    double value = 0.0006368;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0006680) = -7.311222 \f]
START_TEST(s21_exp_115)
{
    double value = 0.0006680;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0006992) = -7.265574 \f]
START_TEST(s21_exp_116)
{
    double value = 0.0006992;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0007304) = -7.221918 \f]
START_TEST(s21_exp_117)
{
    double value = 0.0007304;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0007616) = -7.180089 \f]
START_TEST(s21_exp_118)
{
    double value = 0.0007616;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0007928) = -7.139940 \f]
START_TEST(s21_exp_119)
{
    double value = 0.0007928;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0008240) = -7.101340 \f]
START_TEST(s21_exp_120)
{
    double value = 0.0008240;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0008552) = -7.064175 \f]
START_TEST(s21_exp_121)
{
    double value = 0.0008552;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0008864) = -7.028342 \f]
START_TEST(s21_exp_122)
{
    double value = 0.0008864;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0009176) = -6.993749 \f]
START_TEST(s21_exp_123)
{
    double value = 0.0009176;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0009488) = -6.960313 \f]
START_TEST(s21_exp_124)
{
    double value = 0.0009488;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0009800) = -6.927958 \f]
START_TEST(s21_exp_125)
{
    double value = 0.0009800;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0010112) = -6.896618 \f]
START_TEST(s21_exp_126)
{
    double value = 0.0010112;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0010424) = -6.866230 \f]
START_TEST(s21_exp_127)
{
    double value = 0.0010424;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0010736) = -6.836738 \f]
START_TEST(s21_exp_128)
{
    double value = 0.0010736;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0011048) = -6.808091 \f]
START_TEST(s21_exp_129)
{
    double value = 0.0011048;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0011360) = -6.780242 \f]
START_TEST(s21_exp_130)
{
    double value = 0.0011360;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0011672) = -6.753148 \f]
START_TEST(s21_exp_131)
{
    double value = 0.0011672;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0011984) = -6.726768 \f]
START_TEST(s21_exp_132)
{
    double value = 0.0011984;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0012296) = -6.701066 \f]
START_TEST(s21_exp_133)
{
    double value = 0.0012296;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0012608) = -6.676009 \f]
START_TEST(s21_exp_134)
{
    double value = 0.0012608;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0012920) = -6.651564 \f]
START_TEST(s21_exp_135)
{
    double value = 0.0012920;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0013232) = -6.627702 \f]
START_TEST(s21_exp_136)
{
    double value = 0.0013232;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0013544) = -6.604397 \f]
START_TEST(s21_exp_137)
{
    double value = 0.0013544;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0013856) = -6.581622 \f]
START_TEST(s21_exp_138)
{
    double value = 0.0013856;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0014168) = -6.559354 \f]
START_TEST(s21_exp_139)
{
    double value = 0.0014168;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0014480) = -6.537572 \f]
START_TEST(s21_exp_140)
{
    double value = 0.0014480;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0014792) = -6.516254 \f]
START_TEST(s21_exp_141)
{
    double value = 0.0014792;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0015104) = -6.495381 \f]
START_TEST(s21_exp_142)
{
    double value = 0.0015104;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0015416) = -6.474934 \f]
START_TEST(s21_exp_143)
{
    double value = 0.0015416;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0015728) = -6.454898 \f]
START_TEST(s21_exp_144)
{
    double value = 0.0015728;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0016040) = -6.435255 \f]
START_TEST(s21_exp_145)
{
    double value = 0.0016040;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0016352) = -6.415990 \f]
START_TEST(s21_exp_146)
{
    double value = 0.0016352;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0016664) = -6.397090 \f]
START_TEST(s21_exp_147)
{
    double value = 0.0016664;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0016976) = -6.378540 \f]
START_TEST(s21_exp_148)
{
    double value = 0.0016976;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0017288) = -6.360328 \f]
START_TEST(s21_exp_149)
{
    double value = 0.0017288;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0017600) = -6.342441 \f]
START_TEST(s21_exp_150)
{
    double value = 0.0017600;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0017912) = -6.324869 \f]
START_TEST(s21_exp_151)
{
    double value = 0.0017912;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0018224) = -6.307601 \f]
START_TEST(s21_exp_152)
{
    double value = 0.0018224;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0018536) = -6.290626 \f]
START_TEST(s21_exp_153)
{
    double value = 0.0018536;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0018848) = -6.273934 \f]
START_TEST(s21_exp_154)
{
    double value = 0.0018848;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0019160) = -6.257516 \f]
START_TEST(s21_exp_155)
{
    double value = 0.0019160;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0019472) = -6.241363 \f]
START_TEST(s21_exp_156)
{
    double value = 0.0019472;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0019784) = -6.225467 \f]
START_TEST(s21_exp_157)
{
    double value = 0.0019784;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0020096) = -6.209820 \f]
START_TEST(s21_exp_158)
{
    double value = 0.0020096;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0020408) = -6.194413 \f]
START_TEST(s21_exp_159)
{
    double value = 0.0020408;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0020720) = -6.179241 \f]
START_TEST(s21_exp_160)
{
    double value = 0.0020720;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0021032) = -6.164295 \f]
START_TEST(s21_exp_161)
{
    double value = 0.0021032;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0021344) = -6.149570 \f]
START_TEST(s21_exp_162)
{
    double value = 0.0021344;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0021656) = -6.135058 \f]
START_TEST(s21_exp_163)
{
    double value = 0.0021656;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0021968) = -6.120754 \f]
START_TEST(s21_exp_164)
{
    double value = 0.0021968;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0022280) = -6.106651 \f]
START_TEST(s21_exp_165)
{
    double value = 0.0022280;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0022592) = -6.092745 \f]
START_TEST(s21_exp_166)
{
    double value = 0.0022592;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0022904) = -6.079029 \f]
START_TEST(s21_exp_167)
{
    double value = 0.0022904;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0023216) = -6.065499 \f]
START_TEST(s21_exp_168)
{
    double value = 0.0023216;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0023528) = -6.052149 \f]
START_TEST(s21_exp_169)
{
    double value = 0.0023528;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0023840) = -6.038976 \f]
START_TEST(s21_exp_170)
{
    double value = 0.0023840;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0024152) = -6.025973 \f]
START_TEST(s21_exp_171)
{
    double value = 0.0024152;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0024464) = -6.013138 \f]
START_TEST(s21_exp_172)
{
    double value = 0.0024464;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0024776) = -6.000465 \f]
START_TEST(s21_exp_173)
{
    double value = 0.0024776;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0025088) = -5.987951 \f]
START_TEST(s21_exp_174)
{
    double value = 0.0025088;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0025400) = -5.975591 \f]
START_TEST(s21_exp_175)
{
    double value = 0.0025400;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0025712) = -5.963383 \f]
START_TEST(s21_exp_176)
{
    double value = 0.0025712;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0026024) = -5.951321 \f]
START_TEST(s21_exp_177)
{
    double value = 0.0026024;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0026336) = -5.939404 \f]
START_TEST(s21_exp_178)
{
    double value = 0.0026336;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0026648) = -5.927626 \f]
START_TEST(s21_exp_179)
{
    double value = 0.0026648;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0026960) = -5.915986 \f]
START_TEST(s21_exp_180)
{
    double value = 0.0026960;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0027272) = -5.904480 \f]
START_TEST(s21_exp_181)
{
    double value = 0.0027272;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0027584) = -5.893104 \f]
START_TEST(s21_exp_182)
{
    double value = 0.0027584;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0027896) = -5.881857 \f]
START_TEST(s21_exp_183)
{
    double value = 0.0027896;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0028208) = -5.870735 \f]
START_TEST(s21_exp_184)
{
    double value = 0.0028208;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0028520) = -5.859735 \f]
START_TEST(s21_exp_185)
{
    double value = 0.0028520;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0028832) = -5.848854 \f]
START_TEST(s21_exp_186)
{
    double value = 0.0028832;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0029144) = -5.838091 \f]
START_TEST(s21_exp_187)
{
    double value = 0.0029144;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0029456) = -5.827443 \f]
START_TEST(s21_exp_188)
{
    double value = 0.0029456;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0029768) = -5.816906 \f]
START_TEST(s21_exp_189)
{
    double value = 0.0029768;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030080) = -5.806480 \f]
START_TEST(s21_exp_190)
{
    double value = 0.0030080;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030392) = -5.796161 \f]
START_TEST(s21_exp_191)
{
    double value = 0.0030392;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030704) = -5.785947 \f]
START_TEST(s21_exp_192)
{
    double value = 0.0030704;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031016) = -5.775837 \f]
START_TEST(s21_exp_193)
{
    double value = 0.0031016;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031328) = -5.765828 \f]
START_TEST(s21_exp_194)
{
    double value = 0.0031328;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031640) = -5.755918 \f]
START_TEST(s21_exp_195)
{
    double value = 0.0031640;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031952) = -5.746106 \f]
START_TEST(s21_exp_196)
{
    double value = 0.0031952;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0032264) = -5.736388 \f]
START_TEST(s21_exp_197)
{
    double value = 0.0032264;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0032576) = -5.726765 \f]
START_TEST(s21_exp_198)
{
    double value = 0.0032576;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0032888) = -5.717233 \f]
START_TEST(s21_exp_199)
{
    double value = 0.0032888;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.003) = -5.809143 \f]
START_TEST(s21_exp_200)
{
    double value = 0.003;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030211) = -5.802134 \f]
START_TEST(s21_exp_201)
{
    double value = 0.0030211;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030422) = -5.795174 \f]
START_TEST(s21_exp_202)
{
    double value = 0.0030422;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030633) = -5.788263 \f]
START_TEST(s21_exp_203)
{
    double value = 0.0030633;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0030844) = -5.781398 \f]
START_TEST(s21_exp_204)
{
    double value = 0.0030844;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031055) = -5.774581 \f]
START_TEST(s21_exp_205)
{
    double value = 0.0031055;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031266) = -5.767809 \f]
START_TEST(s21_exp_206)
{
    double value = 0.0031266;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031477) = -5.761083 \f]
START_TEST(s21_exp_207)
{
    double value = 0.0031477;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031688) = -5.754402 \f]
START_TEST(s21_exp_208)
{
    double value = 0.0031688;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0031899) = -5.747766 \f]
START_TEST(s21_exp_209)
{
    double value = 0.0031899;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0032110) = -5.741173 \f]
START_TEST(s21_exp_210)
{
    double value = 0.0032110;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0032321) = -5.734623 \f]
START_TEST(s21_exp_211)
{
    double value = 0.0032321;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0032532) = -5.728116 \f]
START_TEST(s21_exp_212)
{
    double value = 0.0032532;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0032743) = -5.721651 \f]
START_TEST(s21_exp_213)
{
    double value = 0.0032743;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0032954) = -5.715228 \f]
START_TEST(s21_exp_214)
{
    double value = 0.0032954;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0033165) = -5.708845 \f]
START_TEST(s21_exp_215)
{
    double value = 0.0033165;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0033376) = -5.702503 \f]
START_TEST(s21_exp_216)
{
    double value = 0.0033376;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0033587) = -5.696201 \f]
START_TEST(s21_exp_217)
{
    double value = 0.0033587;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0033798) = -5.689939 \f]
START_TEST(s21_exp_218)
{
    double value = 0.0033798;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0034009) = -5.683715 \f]
START_TEST(s21_exp_219)
{
    double value = 0.0034009;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0034220) = -5.677530 \f]
START_TEST(s21_exp_220)
{
    double value = 0.0034220;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0034431) = -5.671383 \f]
START_TEST(s21_exp_221)
{
    double value = 0.0034431;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0034642) = -5.665274 \f]
START_TEST(s21_exp_222)
{
    double value = 0.0034642;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0034853) = -5.659201 \f]
START_TEST(s21_exp_223)
{
    double value = 0.0034853;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0035064) = -5.653165 \f]
START_TEST(s21_exp_224)
{
    double value = 0.0035064;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0035275) = -5.647166 \f]
START_TEST(s21_exp_225)
{
    double value = 0.0035275;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0035486) = -5.641202 \f]
START_TEST(s21_exp_226)
{
    double value = 0.0035486;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0035697) = -5.635274 \f]
START_TEST(s21_exp_227)
{
    double value = 0.0035697;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0035908) = -5.629380 \f]
START_TEST(s21_exp_228)
{
    double value = 0.0035908;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0036119) = -5.623521 \f]
START_TEST(s21_exp_229)
{
    double value = 0.0036119;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0036330) = -5.617697 \f]
START_TEST(s21_exp_230)
{
    double value = 0.0036330;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0036541) = -5.611905 \f]
START_TEST(s21_exp_231)
{
    double value = 0.0036541;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0036752) = -5.606148 \f]
START_TEST(s21_exp_232)
{
    double value = 0.0036752;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0036963) = -5.600423 \f]
START_TEST(s21_exp_233)
{
    double value = 0.0036963;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0037174) = -5.594731 \f]
START_TEST(s21_exp_234)
{
    double value = 0.0037174;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0037385) = -5.589071 \f]
START_TEST(s21_exp_235)
{
    double value = 0.0037385;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0037596) = -5.583443 \f]
START_TEST(s21_exp_236)
{
    double value = 0.0037596;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0037807) = -5.577846 \f]
START_TEST(s21_exp_237)
{
    double value = 0.0037807;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0038018) = -5.572281 \f]
START_TEST(s21_exp_238)
{
    double value = 0.0038018;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0038229) = -5.566746 \f]
START_TEST(s21_exp_239)
{
    double value = 0.0038229;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0038440) = -5.561242 \f]
START_TEST(s21_exp_240)
{
    double value = 0.0038440;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0038651) = -5.555768 \f]
START_TEST(s21_exp_241)
{
    double value = 0.0038651;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0038862) = -5.550323 \f]
START_TEST(s21_exp_242)
{
    double value = 0.0038862;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0039073) = -5.544909 \f]
START_TEST(s21_exp_243)
{
    double value = 0.0039073;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0039284) = -5.539523 \f]
START_TEST(s21_exp_244)
{
    double value = 0.0039284;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0039495) = -5.534166 \f]
START_TEST(s21_exp_245)
{
    double value = 0.0039495;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0039706) = -5.528838 \f]
START_TEST(s21_exp_246)
{
    double value = 0.0039706;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0039917) = -5.523538 \f]
START_TEST(s21_exp_247)
{
    double value = 0.0039917;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0040128) = -5.518266 \f]
START_TEST(s21_exp_248)
{
    double value = 0.0040128;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0040339) = -5.513022 \f]
START_TEST(s21_exp_249)
{
    double value = 0.0040339;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0040550) = -5.507805 \f]
START_TEST(s21_exp_250)
{
    double value = 0.0040550;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0040761) = -5.502615 \f]
START_TEST(s21_exp_251)
{
    double value = 0.0040761;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0040972) = -5.497451 \f]
START_TEST(s21_exp_252)
{
    double value = 0.0040972;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0041183) = -5.492315 \f]
START_TEST(s21_exp_253)
{
    double value = 0.0041183;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0041394) = -5.487204 \f]
START_TEST(s21_exp_254)
{
    double value = 0.0041394;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0041605) = -5.482120 \f]
START_TEST(s21_exp_255)
{
    double value = 0.0041605;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0041816) = -5.477061 \f]
START_TEST(s21_exp_256)
{
    double value = 0.0041816;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0042027) = -5.472028 \f]
START_TEST(s21_exp_257)
{
    double value = 0.0042027;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0042238) = -5.467020 \f]
START_TEST(s21_exp_258)
{
    double value = 0.0042238;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0042449) = -5.462037 \f]
START_TEST(s21_exp_259)
{
    double value = 0.0042449;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0042660) = -5.457079 \f]
START_TEST(s21_exp_260)
{
    double value = 0.0042660;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0042871) = -5.452145 \f]
START_TEST(s21_exp_261)
{
    double value = 0.0042871;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0043082) = -5.447235 \f]
START_TEST(s21_exp_262)
{
    double value = 0.0043082;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0043293) = -5.442349 \f]
START_TEST(s21_exp_263)
{
    double value = 0.0043293;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0043504) = -5.437487 \f]
START_TEST(s21_exp_264)
{
    double value = 0.0043504;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0043715) = -5.432649 \f]
START_TEST(s21_exp_265)
{
    double value = 0.0043715;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0043926) = -5.427834 \f]
START_TEST(s21_exp_266)
{
    double value = 0.0043926;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0044137) = -5.423042 \f]
START_TEST(s21_exp_267)
{
    double value = 0.0044137;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0044348) = -5.418273 \f]
START_TEST(s21_exp_268)
{
    double value = 0.0044348;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0044559) = -5.413526 \f]
START_TEST(s21_exp_269)
{
    double value = 0.0044559;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0044770) = -5.408802 \f]
START_TEST(s21_exp_270)
{
    double value = 0.0044770;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0044981) = -5.404100 \f]
START_TEST(s21_exp_271)
{
    double value = 0.0044981;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0045192) = -5.399420 \f]
START_TEST(s21_exp_272)
{
    double value = 0.0045192;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0045403) = -5.394762 \f]
START_TEST(s21_exp_273)
{
    double value = 0.0045403;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0045614) = -5.390126 \f]
START_TEST(s21_exp_274)
{
    double value = 0.0045614;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0045825) = -5.385511 \f]
START_TEST(s21_exp_275)
{
    double value = 0.0045825;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0046036) = -5.380917 \f]
START_TEST(s21_exp_276)
{
    double value = 0.0046036;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0046247) = -5.376344 \f]
START_TEST(s21_exp_277)
{
    double value = 0.0046247;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0046458) = -5.371792 \f]
START_TEST(s21_exp_278)
{
    double value = 0.0046458;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0046669) = -5.367260 \f]
START_TEST(s21_exp_279)
{
    double value = 0.0046669;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0046880) = -5.362749 \f]
START_TEST(s21_exp_280)
{
    double value = 0.0046880;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0047091) = -5.358258 \f]
START_TEST(s21_exp_281)
{
    double value = 0.0047091;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0047302) = -5.353788 \f]
START_TEST(s21_exp_282)
{
    double value = 0.0047302;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0047513) = -5.349337 \f]
START_TEST(s21_exp_283)
{
    double value = 0.0047513;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0047724) = -5.344906 \f]
START_TEST(s21_exp_284)
{
    double value = 0.0047724;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0047935) = -5.340494 \f]
START_TEST(s21_exp_285)
{
    double value = 0.0047935;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0048146) = -5.336102 \f]
START_TEST(s21_exp_286)
{
    double value = 0.0048146;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0048357) = -5.331729 \f]
START_TEST(s21_exp_287)
{
    double value = 0.0048357;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0048568) = -5.327375 \f]
START_TEST(s21_exp_288)
{
    double value = 0.0048568;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0048779) = -5.323040 \f]
START_TEST(s21_exp_289)
{
    double value = 0.0048779;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0048990) = -5.318724 \f]
START_TEST(s21_exp_290)
{
    double value = 0.0048990;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0049201) = -5.314426 \f]
START_TEST(s21_exp_291)
{
    double value = 0.0049201;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0049412) = -5.310147 \f]
START_TEST(s21_exp_292)
{
    double value = 0.0049412;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0049623) = -5.305886 \f]
START_TEST(s21_exp_293)
{
    double value = 0.0049623;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0049834) = -5.301643 \f]
START_TEST(s21_exp_294)
{
    double value = 0.0049834;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0050045) = -5.297418 \f]
START_TEST(s21_exp_295)
{
    double value = 0.0050045;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0050256) = -5.293210 \f]
START_TEST(s21_exp_296)
{
    double value = 0.0050256;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0050467) = -5.289021 \f]
START_TEST(s21_exp_297)
{
    double value = 0.0050467;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0050678) = -5.284848 \f]
START_TEST(s21_exp_298)
{
    double value = 0.0050678;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.0050889) = -5.280694 \f]
START_TEST(s21_exp_299)
{
    double value = 0.0050889;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.004) = -5.521461 \f]
START_TEST(s21_exp_300)
{
    double value = 0.004;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.004211) = -5.470055 \f]
START_TEST(s21_exp_301)
{
    double value = 0.004211;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.004422) = -5.421163 \f]
START_TEST(s21_exp_302)
{
    double value = 0.004422;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.004633) = -5.374551 \f]
START_TEST(s21_exp_303)
{
    double value = 0.004633;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.004844) = -5.330014 \f]
START_TEST(s21_exp_304)
{
    double value = 0.004844;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.005055) = -5.287377 \f]
START_TEST(s21_exp_305)
{
    double value = 0.005055;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.005266) = -5.246484 \f]
START_TEST(s21_exp_306)
{
    double value = 0.005266;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.005477) = -5.207198 \f]
START_TEST(s21_exp_307)
{
    double value = 0.005477;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.005688) = -5.169397 \f]
START_TEST(s21_exp_308)
{
    double value = 0.005688;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.005899) = -5.132972 \f]
START_TEST(s21_exp_309)
{
    double value = 0.005899;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.006110) = -5.097829 \f]
START_TEST(s21_exp_310)
{
    double value = 0.006110;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.006321) = -5.063878 \f]
START_TEST(s21_exp_311)
{
    double value = 0.006321;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.006532) = -5.031042 \f]
START_TEST(s21_exp_312)
{
    double value = 0.006532;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.006743) = -4.999250 \f]
START_TEST(s21_exp_313)
{
    double value = 0.006743;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.006954) = -4.968438 \f]
START_TEST(s21_exp_314)
{
    double value = 0.006954;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.007165) = -4.938547 \f]
START_TEST(s21_exp_315)
{
    double value = 0.007165;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.007376) = -4.909524 \f]
START_TEST(s21_exp_316)
{
    double value = 0.007376;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.007587) = -4.881319 \f]
START_TEST(s21_exp_317)
{
    double value = 0.007587;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.007798) = -4.853888 \f]
START_TEST(s21_exp_318)
{
    double value = 0.007798;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.008009) = -4.827189 \f]
START_TEST(s21_exp_319)
{
    double value = 0.008009;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.008220) = -4.801185 \f]
START_TEST(s21_exp_320)
{
    double value = 0.008220;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.008431) = -4.775840 \f]
START_TEST(s21_exp_321)
{
    double value = 0.008431;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.008642) = -4.751121 \f]
START_TEST(s21_exp_322)
{
    double value = 0.008642;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.008853) = -4.726999 \f]
START_TEST(s21_exp_323)
{
    double value = 0.008853;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.009064) = -4.703445 \f]
START_TEST(s21_exp_324)
{
    double value = 0.009064;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.009275) = -4.680433 \f]
START_TEST(s21_exp_325)
{
    double value = 0.009275;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.009486) = -4.657938 \f]
START_TEST(s21_exp_326)
{
    double value = 0.009486;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.009697) = -4.635939 \f]
START_TEST(s21_exp_327)
{
    double value = 0.009697;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.009908) = -4.614413 \f]
START_TEST(s21_exp_328)
{
    double value = 0.009908;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.010119) = -4.593340 \f]
START_TEST(s21_exp_329)
{
    double value = 0.010119;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.010330) = -4.572703 \f]
START_TEST(s21_exp_330)
{
    double value = 0.010330;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.010541) = -4.552483 \f]
START_TEST(s21_exp_331)
{
    double value = 0.010541;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.010752) = -4.532663 \f]
START_TEST(s21_exp_332)
{
    double value = 0.010752;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.010963) = -4.513229 \f]
START_TEST(s21_exp_333)
{
    double value = 0.010963;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.011174) = -4.494166 \f]
START_TEST(s21_exp_334)
{
    double value = 0.011174;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.011385) = -4.475459 \f]
START_TEST(s21_exp_335)
{
    double value = 0.011385;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.011596) = -4.457095 \f]
START_TEST(s21_exp_336)
{
    double value = 0.011596;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.011807) = -4.439063 \f]
START_TEST(s21_exp_337)
{
    double value = 0.011807;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.012018) = -4.421350 \f]
START_TEST(s21_exp_338)
{
    double value = 0.012018;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.012229) = -4.403945 \f]
START_TEST(s21_exp_339)
{
    double value = 0.012229;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.012440) = -4.386838 \f]
START_TEST(s21_exp_340)
{
    double value = 0.012440;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.012651) = -4.370019 \f]
START_TEST(s21_exp_341)
{
    double value = 0.012651;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.012862) = -4.353478 \f]
START_TEST(s21_exp_342)
{
    double value = 0.012862;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.013073) = -4.337206 \f]
START_TEST(s21_exp_343)
{
    double value = 0.013073;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.013284) = -4.321195 \f]
START_TEST(s21_exp_344)
{
    double value = 0.013284;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.013495) = -4.305436 \f]
START_TEST(s21_exp_345)
{
    double value = 0.013495;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.013706) = -4.289922 \f]
START_TEST(s21_exp_346)
{
    double value = 0.013706;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.013917) = -4.274644 \f]
START_TEST(s21_exp_347)
{
    double value = 0.013917;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.014128) = -4.259597 \f]
START_TEST(s21_exp_348)
{
    double value = 0.014128;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.014339) = -4.244772 \f]
START_TEST(s21_exp_349)
{
    double value = 0.014339;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.014550) = -4.230164 \f]
START_TEST(s21_exp_350)
{
    double value = 0.014550;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.014761) = -4.215767 \f]
START_TEST(s21_exp_351)
{
    double value = 0.014761;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.014972) = -4.201573 \f]
START_TEST(s21_exp_352)
{
    double value = 0.014972;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.015183) = -4.187579 \f]
START_TEST(s21_exp_353)
{
    double value = 0.015183;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.015394) = -4.173777 \f]
START_TEST(s21_exp_354)
{
    double value = 0.015394;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.015605) = -4.160164 \f]
START_TEST(s21_exp_355)
{
    double value = 0.015605;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.015816) = -4.146733 \f]
START_TEST(s21_exp_356)
{
    double value = 0.015816;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.016027) = -4.133480 \f]
START_TEST(s21_exp_357)
{
    double value = 0.016027;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.016238) = -4.120401 \f]
START_TEST(s21_exp_358)
{
    double value = 0.016238;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.016449) = -4.107491 \f]
START_TEST(s21_exp_359)
{
    double value = 0.016449;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.016660) = -4.094745 \f]
START_TEST(s21_exp_360)
{
    double value = 0.016660;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.016871) = -4.082159 \f]
START_TEST(s21_exp_361)
{
    double value = 0.016871;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.017082) = -4.069730 \f]
START_TEST(s21_exp_362)
{
    double value = 0.017082;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.017293) = -4.057453 \f]
START_TEST(s21_exp_363)
{
    double value = 0.017293;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.017504) = -4.045326 \f]
START_TEST(s21_exp_364)
{
    double value = 0.017504;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.017715) = -4.033344 \f]
START_TEST(s21_exp_365)
{
    double value = 0.017715;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.017926) = -4.021503 \f]
START_TEST(s21_exp_366)
{
    double value = 0.017926;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.018137) = -4.009801 \f]
START_TEST(s21_exp_367)
{
    double value = 0.018137;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.018348) = -3.998235 \f]
START_TEST(s21_exp_368)
{
    double value = 0.018348;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.018559) = -3.986800 \f]
START_TEST(s21_exp_369)
{
    double value = 0.018559;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.018770) = -3.975495 \f]
START_TEST(s21_exp_370)
{
    double value = 0.018770;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.018981) = -3.964317 \f]
START_TEST(s21_exp_371)
{
    double value = 0.018981;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.019192) = -3.953262 \f]
START_TEST(s21_exp_372)
{
    double value = 0.019192;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.019403) = -3.942328 \f]
START_TEST(s21_exp_373)
{
    double value = 0.019403;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.019614) = -3.931512 \f]
START_TEST(s21_exp_374)
{
    double value = 0.019614;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.019825) = -3.920812 \f]
START_TEST(s21_exp_375)
{
    double value = 0.019825;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.020036) = -3.910225 \f]
START_TEST(s21_exp_376)
{
    double value = 0.020036;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.020247) = -3.899749 \f]
START_TEST(s21_exp_377)
{
    double value = 0.020247;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.020458) = -3.889381 \f]
START_TEST(s21_exp_378)
{
    double value = 0.020458;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.020669) = -3.879120 \f]
START_TEST(s21_exp_379)
{
    double value = 0.020669;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.020880) = -3.868964 \f]
START_TEST(s21_exp_380)
{
    double value = 0.020880;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.021091) = -3.858909 \f]
START_TEST(s21_exp_381)
{
    double value = 0.021091;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.021302) = -3.848954 \f]
START_TEST(s21_exp_382)
{
    double value = 0.021302;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.021513) = -3.839098 \f]
START_TEST(s21_exp_383)
{
    double value = 0.021513;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.021724) = -3.829338 \f]
START_TEST(s21_exp_384)
{
    double value = 0.021724;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.021935) = -3.819672 \f]
START_TEST(s21_exp_385)
{
    double value = 0.021935;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.022146) = -3.810098 \f]
START_TEST(s21_exp_386)
{
    double value = 0.022146;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.022357) = -3.800616 \f]
START_TEST(s21_exp_387)
{
    double value = 0.022357;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.022568) = -3.791222 \f]
START_TEST(s21_exp_388)
{
    double value = 0.022568;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.022779) = -3.781916 \f]
START_TEST(s21_exp_389)
{
    double value = 0.022779;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.022990) = -3.772696 \f]
START_TEST(s21_exp_390)
{
    double value = 0.022990;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.023201) = -3.763560 \f]
START_TEST(s21_exp_391)
{
    double value = 0.023201;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.023412) = -3.754507 \f]
START_TEST(s21_exp_392)
{
    double value = 0.023412;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.023623) = -3.745534 \f]
START_TEST(s21_exp_393)
{
    double value = 0.023623;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.023834) = -3.736642 \f]
START_TEST(s21_exp_394)
{
    double value = 0.023834;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.024045) = -3.727828 \f]
START_TEST(s21_exp_395)
{
    double value = 0.024045;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.024256) = -3.719091 \f]
START_TEST(s21_exp_396)
{
    double value = 0.024256;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.024467) = -3.710430 \f]
START_TEST(s21_exp_397)
{
    double value = 0.024467;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.024678) = -3.701843 \f]
START_TEST(s21_exp_398)
{
    double value = 0.024678;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.024889) = -3.693329 \f]
START_TEST(s21_exp_399)
{
    double value = 0.024889;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.005) = -5.298317 \f]
START_TEST(s21_exp_400)
{
    double value = 0.005;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.00623) = -5.078379 \f]
START_TEST(s21_exp_401)
{
    double value = 0.00623;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.00746) = -4.898200 \f]
START_TEST(s21_exp_402)
{
    double value = 0.00746;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.00869) = -4.745582 \f]
START_TEST(s21_exp_403)
{
    double value = 0.00869;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.00992) = -4.613202 \f]
START_TEST(s21_exp_404)
{
    double value = 0.00992;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01115) = -4.496316 \f]
START_TEST(s21_exp_405)
{
    double value = 0.01115;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01238) = -4.391673 \f]
START_TEST(s21_exp_406)
{
    double value = 0.01238;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01361) = -4.296950 \f]
START_TEST(s21_exp_407)
{
    double value = 0.01361;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01484) = -4.210429 \f]
START_TEST(s21_exp_408)
{
    double value = 0.01484;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01607) = -4.130801 \f]
START_TEST(s21_exp_409)
{
    double value = 0.01607;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01730) = -4.057049 \f]
START_TEST(s21_exp_410)
{
    double value = 0.01730;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01853) = -3.988364 \f]
START_TEST(s21_exp_411)
{
    double value = 0.01853;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01976) = -3.924096 \f]
START_TEST(s21_exp_412)
{
    double value = 0.01976;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02099) = -3.863709 \f]
START_TEST(s21_exp_413)
{
    double value = 0.02099;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02222) = -3.806762 \f]
START_TEST(s21_exp_414)
{
    double value = 0.02222;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02345) = -3.752885 \f]
START_TEST(s21_exp_415)
{
    double value = 0.02345;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02468) = -3.701762 \f]
START_TEST(s21_exp_416)
{
    double value = 0.02468;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02591) = -3.653126 \f]
START_TEST(s21_exp_417)
{
    double value = 0.02591;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02714) = -3.606747 \f]
START_TEST(s21_exp_418)
{
    double value = 0.02714;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02837) = -3.562423 \f]
START_TEST(s21_exp_419)
{
    double value = 0.02837;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02960) = -3.519981 \f]
START_TEST(s21_exp_420)
{
    double value = 0.02960;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03083) = -3.479267 \f]
START_TEST(s21_exp_421)
{
    double value = 0.03083;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03206) = -3.440146 \f]
START_TEST(s21_exp_422)
{
    double value = 0.03206;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03329) = -3.402498 \f]
START_TEST(s21_exp_423)
{
    double value = 0.03329;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03452) = -3.366216 \f]
START_TEST(s21_exp_424)
{
    double value = 0.03452;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03575) = -3.331205 \f]
START_TEST(s21_exp_425)
{
    double value = 0.03575;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03698) = -3.297378 \f]
START_TEST(s21_exp_426)
{
    double value = 0.03698;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03821) = -3.264658 \f]
START_TEST(s21_exp_427)
{
    double value = 0.03821;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03944) = -3.232975 \f]
START_TEST(s21_exp_428)
{
    double value = 0.03944;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04067) = -3.202265 \f]
START_TEST(s21_exp_429)
{
    double value = 0.04067;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04190) = -3.172469 \f]
START_TEST(s21_exp_430)
{
    double value = 0.04190;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04313) = -3.143536 \f]
START_TEST(s21_exp_431)
{
    double value = 0.04313;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04436) = -3.115417 \f]
START_TEST(s21_exp_432)
{
    double value = 0.04436;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04559) = -3.088067 \f]
START_TEST(s21_exp_433)
{
    double value = 0.04559;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04682) = -3.061445 \f]
START_TEST(s21_exp_434)
{
    double value = 0.04682;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04805) = -3.035513 \f]
START_TEST(s21_exp_435)
{
    double value = 0.04805;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04928) = -3.010237 \f]
START_TEST(s21_exp_436)
{
    double value = 0.04928;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05051) = -2.985584 \f]
START_TEST(s21_exp_437)
{
    double value = 0.05051;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05174) = -2.961524 \f]
START_TEST(s21_exp_438)
{
    double value = 0.05174;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05297) = -2.938030 \f]
START_TEST(s21_exp_439)
{
    double value = 0.05297;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05420) = -2.915074 \f]
START_TEST(s21_exp_440)
{
    double value = 0.05420;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05543) = -2.892634 \f]
START_TEST(s21_exp_441)
{
    double value = 0.05543;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05666) = -2.870687 \f]
START_TEST(s21_exp_442)
{
    double value = 0.05666;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05789) = -2.849211 \f]
START_TEST(s21_exp_443)
{
    double value = 0.05789;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05912) = -2.828186 \f]
START_TEST(s21_exp_444)
{
    double value = 0.05912;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06035) = -2.807594 \f]
START_TEST(s21_exp_445)
{
    double value = 0.06035;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06158) = -2.787418 \f]
START_TEST(s21_exp_446)
{
    double value = 0.06158;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06281) = -2.767641 \f]
START_TEST(s21_exp_447)
{
    double value = 0.06281;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06404) = -2.748247 \f]
START_TEST(s21_exp_448)
{
    double value = 0.06404;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06527) = -2.729223 \f]
START_TEST(s21_exp_449)
{
    double value = 0.06527;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06650) = -2.710553 \f]
START_TEST(s21_exp_450)
{
    double value = 0.06650;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06773) = -2.692226 \f]
START_TEST(s21_exp_451)
{
    double value = 0.06773;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06896) = -2.674229 \f]
START_TEST(s21_exp_452)
{
    double value = 0.06896;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07019) = -2.656549 \f]
START_TEST(s21_exp_453)
{
    double value = 0.07019;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07142) = -2.639177 \f]
START_TEST(s21_exp_454)
{
    double value = 0.07142;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07265) = -2.622102 \f]
START_TEST(s21_exp_455)
{
    double value = 0.07265;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07388) = -2.605313 \f]
START_TEST(s21_exp_456)
{
    double value = 0.07388;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07511) = -2.588802 \f]
START_TEST(s21_exp_457)
{
    double value = 0.07511;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07634) = -2.572558 \f]
START_TEST(s21_exp_458)
{
    double value = 0.07634;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07757) = -2.556575 \f]
START_TEST(s21_exp_459)
{
    double value = 0.07757;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07880) = -2.540842 \f]
START_TEST(s21_exp_460)
{
    double value = 0.07880;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08003) = -2.525354 \f]
START_TEST(s21_exp_461)
{
    double value = 0.08003;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08126) = -2.510101 \f]
START_TEST(s21_exp_462)
{
    double value = 0.08126;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08249) = -2.495078 \f]
START_TEST(s21_exp_463)
{
    double value = 0.08249;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08372) = -2.480277 \f]
START_TEST(s21_exp_464)
{
    double value = 0.08372;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08495) = -2.465692 \f]
START_TEST(s21_exp_465)
{
    double value = 0.08495;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08618) = -2.451317 \f]
START_TEST(s21_exp_466)
{
    double value = 0.08618;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08741) = -2.437146 \f]
START_TEST(s21_exp_467)
{
    double value = 0.08741;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08864) = -2.423172 \f]
START_TEST(s21_exp_468)
{
    double value = 0.08864;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08987) = -2.409391 \f]
START_TEST(s21_exp_469)
{
    double value = 0.08987;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09110) = -2.395797 \f]
START_TEST(s21_exp_470)
{
    double value = 0.09110;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09233) = -2.382386 \f]
START_TEST(s21_exp_471)
{
    double value = 0.09233;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09356) = -2.369152 \f]
START_TEST(s21_exp_472)
{
    double value = 0.09356;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09479) = -2.356091 \f]
START_TEST(s21_exp_473)
{
    double value = 0.09479;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09602) = -2.343199 \f]
START_TEST(s21_exp_474)
{
    double value = 0.09602;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09725) = -2.330470 \f]
START_TEST(s21_exp_475)
{
    double value = 0.09725;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09848) = -2.317902 \f]
START_TEST(s21_exp_476)
{
    double value = 0.09848;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09971) = -2.305489 \f]
START_TEST(s21_exp_477)
{
    double value = 0.09971;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10094) = -2.293229 \f]
START_TEST(s21_exp_478)
{
    double value = 0.10094;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10217) = -2.281117 \f]
START_TEST(s21_exp_479)
{
    double value = 0.10217;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10340) = -2.269150 \f]
START_TEST(s21_exp_480)
{
    double value = 0.10340;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10463) = -2.257325 \f]
START_TEST(s21_exp_481)
{
    double value = 0.10463;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10586) = -2.245638 \f]
START_TEST(s21_exp_482)
{
    double value = 0.10586;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10709) = -2.234086 \f]
START_TEST(s21_exp_483)
{
    double value = 0.10709;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10832) = -2.222665 \f]
START_TEST(s21_exp_484)
{
    double value = 0.10832;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10955) = -2.211374 \f]
START_TEST(s21_exp_485)
{
    double value = 0.10955;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11078) = -2.200209 \f]
START_TEST(s21_exp_486)
{
    double value = 0.11078;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11201) = -2.189167 \f]
START_TEST(s21_exp_487)
{
    double value = 0.11201;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11324) = -2.178246 \f]
START_TEST(s21_exp_488)
{
    double value = 0.11324;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11447) = -2.167442 \f]
START_TEST(s21_exp_489)
{
    double value = 0.11447;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11570) = -2.156755 \f]
START_TEST(s21_exp_490)
{
    double value = 0.11570;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11693) = -2.146180 \f]
START_TEST(s21_exp_491)
{
    double value = 0.11693;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11816) = -2.135716 \f]
START_TEST(s21_exp_492)
{
    double value = 0.11816;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11939) = -2.125360 \f]
START_TEST(s21_exp_493)
{
    double value = 0.11939;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12062) = -2.115110 \f]
START_TEST(s21_exp_494)
{
    double value = 0.12062;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12185) = -2.104964 \f]
START_TEST(s21_exp_495)
{
    double value = 0.12185;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12308) = -2.094921 \f]
START_TEST(s21_exp_496)
{
    double value = 0.12308;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12431) = -2.084977 \f]
START_TEST(s21_exp_497)
{
    double value = 0.12431;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12554) = -2.075131 \f]
START_TEST(s21_exp_498)
{
    double value = 0.12554;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12677) = -2.065381 \f]
START_TEST(s21_exp_499)
{
    double value = 0.12677;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.006) = -5.115996 \f]
START_TEST(s21_exp_500)
{
    double value = 0.006;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.00723) = -4.929516 \f]
START_TEST(s21_exp_501)
{
    double value = 0.00723;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.00846) = -4.772406 \f]
START_TEST(s21_exp_502)
{
    double value = 0.00846;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.00969) = -4.636661 \f]
START_TEST(s21_exp_503)
{
    double value = 0.00969;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01092) = -4.517159 \f]
START_TEST(s21_exp_504)
{
    double value = 0.01092;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01215) = -4.410426 \f]
START_TEST(s21_exp_505)
{
    double value = 0.01215;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01338) = -4.313994 \f]
START_TEST(s21_exp_506)
{
    double value = 0.01338;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01461) = -4.226049 \f]
START_TEST(s21_exp_507)
{
    double value = 0.01461;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01584) = -4.145217 \f]
START_TEST(s21_exp_508)
{
    double value = 0.01584;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01707) = -4.070433 \f]
START_TEST(s21_exp_509)
{
    double value = 0.01707;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01830) = -4.000854 \f]
START_TEST(s21_exp_510)
{
    double value = 0.01830;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.01953) = -3.935804 \f]
START_TEST(s21_exp_511)
{
    double value = 0.01953;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02076) = -3.874727 \f]
START_TEST(s21_exp_512)
{
    double value = 0.02076;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02199) = -3.817167 \f]
START_TEST(s21_exp_513)
{
    double value = 0.02199;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02322) = -3.762741 \f]
START_TEST(s21_exp_514)
{
    double value = 0.02322;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02445) = -3.711125 \f]
START_TEST(s21_exp_515)
{
    double value = 0.02445;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02568) = -3.662043 \f]
START_TEST(s21_exp_516)
{
    double value = 0.02568;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02691) = -3.615257 \f]
START_TEST(s21_exp_517)
{
    double value = 0.02691;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02814) = -3.570563 \f]
START_TEST(s21_exp_518)
{
    double value = 0.02814;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.02937) = -3.527782 \f]
START_TEST(s21_exp_519)
{
    double value = 0.02937;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03060) = -3.486755 \f]
START_TEST(s21_exp_520)
{
    double value = 0.03060;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03183) = -3.447346 \f]
START_TEST(s21_exp_521)
{
    double value = 0.03183;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03306) = -3.409431 \f]
START_TEST(s21_exp_522)
{
    double value = 0.03306;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03429) = -3.372902 \f]
START_TEST(s21_exp_523)
{
    double value = 0.03429;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03552) = -3.337659 \f]
START_TEST(s21_exp_524)
{
    double value = 0.03552;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03675) = -3.303617 \f]
START_TEST(s21_exp_525)
{
    double value = 0.03675;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03798) = -3.270696 \f]
START_TEST(s21_exp_526)
{
    double value = 0.03798;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.03921) = -3.238823 \f]
START_TEST(s21_exp_527)
{
    double value = 0.03921;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04044) = -3.207936 \f]
START_TEST(s21_exp_528)
{
    double value = 0.04044;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04167) = -3.177974 \f]
START_TEST(s21_exp_529)
{
    double value = 0.04167;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04290) = -3.148883 \f]
START_TEST(s21_exp_530)
{
    double value = 0.04290;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04413) = -3.120615 \f]
START_TEST(s21_exp_531)
{
    double value = 0.04413;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04536) = -3.093125 \f]
START_TEST(s21_exp_532)
{
    double value = 0.04536;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04659) = -3.066369 \f]
START_TEST(s21_exp_533)
{
    double value = 0.04659;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04782) = -3.040311 \f]
START_TEST(s21_exp_534)
{
    double value = 0.04782;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.04905) = -3.014915 \f]
START_TEST(s21_exp_535)
{
    double value = 0.04905;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05028) = -2.990148 \f]
START_TEST(s21_exp_536)
{
    double value = 0.05028;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05151) = -2.965979 \f]
START_TEST(s21_exp_537)
{
    double value = 0.05151;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05274) = -2.942381 \f]
START_TEST(s21_exp_538)
{
    double value = 0.05274;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05397) = -2.919327 \f]
START_TEST(s21_exp_539)
{
    double value = 0.05397;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05520) = -2.896792 \f]
START_TEST(s21_exp_540)
{
    double value = 0.05520;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05643) = -2.874754 \f]
START_TEST(s21_exp_541)
{
    double value = 0.05643;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05766) = -2.853192 \f]
START_TEST(s21_exp_542)
{
    double value = 0.05766;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.05889) = -2.832084 \f]
START_TEST(s21_exp_543)
{
    double value = 0.05889;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06012) = -2.811413 \f]
START_TEST(s21_exp_544)
{
    double value = 0.06012;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06135) = -2.791160 \f]
START_TEST(s21_exp_545)
{
    double value = 0.06135;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06258) = -2.771310 \f]
START_TEST(s21_exp_546)
{
    double value = 0.06258;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06381) = -2.751845 \f]
START_TEST(s21_exp_547)
{
    double value = 0.06381;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06504) = -2.732753 \f]
START_TEST(s21_exp_548)
{
    double value = 0.06504;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06627) = -2.714018 \f]
START_TEST(s21_exp_549)
{
    double value = 0.06627;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06750) = -2.695628 \f]
START_TEST(s21_exp_550)
{
    double value = 0.06750;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06873) = -2.677569 \f]
START_TEST(s21_exp_551)
{
    double value = 0.06873;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.06996) = -2.659832 \f]
START_TEST(s21_exp_552)
{
    double value = 0.06996;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07119) = -2.642403 \f]
START_TEST(s21_exp_553)
{
    double value = 0.07119;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07242) = -2.625273 \f]
START_TEST(s21_exp_554)
{
    double value = 0.07242;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07365) = -2.608431 \f]
START_TEST(s21_exp_555)
{
    double value = 0.07365;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07488) = -2.591868 \f]
START_TEST(s21_exp_556)
{
    double value = 0.07488;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07611) = -2.575576 \f]
START_TEST(s21_exp_557)
{
    double value = 0.07611;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07734) = -2.559544 \f]
START_TEST(s21_exp_558)
{
    double value = 0.07734;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07857) = -2.543765 \f]
START_TEST(s21_exp_559)
{
    double value = 0.07857;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07980) = -2.528232 \f]
START_TEST(s21_exp_560)
{
    double value = 0.07980;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08103) = -2.512936 \f]
START_TEST(s21_exp_561)
{
    double value = 0.08103;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08226) = -2.497870 \f]
START_TEST(s21_exp_562)
{
    double value = 0.08226;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08349) = -2.483028 \f]
START_TEST(s21_exp_563)
{
    double value = 0.08349;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08472) = -2.468404 \f]
START_TEST(s21_exp_564)
{
    double value = 0.08472;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08595) = -2.453990 \f]
START_TEST(s21_exp_565)
{
    double value = 0.08595;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08718) = -2.439780 \f]
START_TEST(s21_exp_566)
{
    double value = 0.08718;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08841) = -2.425770 \f]
START_TEST(s21_exp_567)
{
    double value = 0.08841;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08964) = -2.411954 \f]
START_TEST(s21_exp_568)
{
    double value = 0.08964;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09087) = -2.398325 \f]
START_TEST(s21_exp_569)
{
    double value = 0.09087;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09210) = -2.384880 \f]
START_TEST(s21_exp_570)
{
    double value = 0.09210;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09333) = -2.371614 \f]
START_TEST(s21_exp_571)
{
    double value = 0.09333;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09456) = -2.358521 \f]
START_TEST(s21_exp_572)
{
    double value = 0.09456;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09579) = -2.345597 \f]
START_TEST(s21_exp_573)
{
    double value = 0.09579;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09702) = -2.332838 \f]
START_TEST(s21_exp_574)
{
    double value = 0.09702;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09825) = -2.320240 \f]
START_TEST(s21_exp_575)
{
    double value = 0.09825;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09948) = -2.307799 \f]
START_TEST(s21_exp_576)
{
    double value = 0.09948;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10071) = -2.295510 \f]
START_TEST(s21_exp_577)
{
    double value = 0.10071;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10194) = -2.283371 \f]
START_TEST(s21_exp_578)
{
    double value = 0.10194;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10317) = -2.271377 \f]
START_TEST(s21_exp_579)
{
    double value = 0.10317;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10440) = -2.259526 \f]
START_TEST(s21_exp_580)
{
    double value = 0.10440;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10563) = -2.247813 \f]
START_TEST(s21_exp_581)
{
    double value = 0.10563;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10686) = -2.236236 \f]
START_TEST(s21_exp_582)
{
    double value = 0.10686;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10809) = -2.224791 \f]
START_TEST(s21_exp_583)
{
    double value = 0.10809;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10932) = -2.213476 \f]
START_TEST(s21_exp_584)
{
    double value = 0.10932;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11055) = -2.202287 \f]
START_TEST(s21_exp_585)
{
    double value = 0.11055;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11178) = -2.191223 \f]
START_TEST(s21_exp_586)
{
    double value = 0.11178;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11301) = -2.180279 \f]
START_TEST(s21_exp_587)
{
    double value = 0.11301;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11424) = -2.169454 \f]
START_TEST(s21_exp_588)
{
    double value = 0.11424;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11547) = -2.158745 \f]
START_TEST(s21_exp_589)
{
    double value = 0.11547;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11670) = -2.148149 \f]
START_TEST(s21_exp_590)
{
    double value = 0.11670;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11793) = -2.137664 \f]
START_TEST(s21_exp_591)
{
    double value = 0.11793;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11916) = -2.127288 \f]
START_TEST(s21_exp_592)
{
    double value = 0.11916;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12039) = -2.117019 \f]
START_TEST(s21_exp_593)
{
    double value = 0.12039;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12162) = -2.106854 \f]
START_TEST(s21_exp_594)
{
    double value = 0.12162;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12285) = -2.096791 \f]
START_TEST(s21_exp_595)
{
    double value = 0.12285;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12408) = -2.086829 \f]
START_TEST(s21_exp_596)
{
    double value = 0.12408;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12531) = -2.076965 \f]
START_TEST(s21_exp_597)
{
    double value = 0.12531;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12654) = -2.067197 \f]
START_TEST(s21_exp_598)
{
    double value = 0.12654;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12777) = -2.057524 \f]
START_TEST(s21_exp_599)
{
    double value = 0.12777;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07) = -2.659260 \f]
START_TEST(s21_exp_600)
{
    double value = 0.07;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07091) = -2.646344 \f]
START_TEST(s21_exp_601)
{
    double value = 0.07091;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07182) = -2.633592 \f]
START_TEST(s21_exp_602)
{
    double value = 0.07182;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07273) = -2.621001 \f]
START_TEST(s21_exp_603)
{
    double value = 0.07273;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07364) = -2.608567 \f]
START_TEST(s21_exp_604)
{
    double value = 0.07364;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07455) = -2.596285 \f]
START_TEST(s21_exp_605)
{
    double value = 0.07455;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07546) = -2.584153 \f]
START_TEST(s21_exp_606)
{
    double value = 0.07546;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07637) = -2.572165 \f]
START_TEST(s21_exp_607)
{
    double value = 0.07637;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07728) = -2.560320 \f]
START_TEST(s21_exp_608)
{
    double value = 0.07728;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07819) = -2.548614 \f]
START_TEST(s21_exp_609)
{
    double value = 0.07819;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.07910) = -2.537042 \f]
START_TEST(s21_exp_610)
{
    double value = 0.07910;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08001) = -2.525604 \f]
START_TEST(s21_exp_611)
{
    double value = 0.08001;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08092) = -2.514294 \f]
START_TEST(s21_exp_612)
{
    double value = 0.08092;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08183) = -2.503111 \f]
START_TEST(s21_exp_613)
{
    double value = 0.08183;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08274) = -2.492052 \f]
START_TEST(s21_exp_614)
{
    double value = 0.08274;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08365) = -2.481114 \f]
START_TEST(s21_exp_615)
{
    double value = 0.08365;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08456) = -2.470294 \f]
START_TEST(s21_exp_616)
{
    double value = 0.08456;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08547) = -2.459590 \f]
START_TEST(s21_exp_617)
{
    double value = 0.08547;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08638) = -2.448999 \f]
START_TEST(s21_exp_618)
{
    double value = 0.08638;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08729) = -2.438519 \f]
START_TEST(s21_exp_619)
{
    double value = 0.08729;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08820) = -2.428148 \f]
START_TEST(s21_exp_620)
{
    double value = 0.08820;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08911) = -2.417884 \f]
START_TEST(s21_exp_621)
{
    double value = 0.08911;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09002) = -2.407723 \f]
START_TEST(s21_exp_622)
{
    double value = 0.09002;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09093) = -2.397665 \f]
START_TEST(s21_exp_623)
{
    double value = 0.09093;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09184) = -2.387707 \f]
START_TEST(s21_exp_624)
{
    double value = 0.09184;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09275) = -2.377848 \f]
START_TEST(s21_exp_625)
{
    double value = 0.09275;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09366) = -2.368084 \f]
START_TEST(s21_exp_626)
{
    double value = 0.09366;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09457) = -2.358415 \f]
START_TEST(s21_exp_627)
{
    double value = 0.09457;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09548) = -2.348838 \f]
START_TEST(s21_exp_628)
{
    double value = 0.09548;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09639) = -2.339353 \f]
START_TEST(s21_exp_629)
{
    double value = 0.09639;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09730) = -2.329956 \f]
START_TEST(s21_exp_630)
{
    double value = 0.09730;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09821) = -2.320647 \f]
START_TEST(s21_exp_631)
{
    double value = 0.09821;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09912) = -2.311424 \f]
START_TEST(s21_exp_632)
{
    double value = 0.09912;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10003) = -2.302285 \f]
START_TEST(s21_exp_633)
{
    double value = 0.10003;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10094) = -2.293229 \f]
START_TEST(s21_exp_634)
{
    double value = 0.10094;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10185) = -2.284254 \f]
START_TEST(s21_exp_635)
{
    double value = 0.10185;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10276) = -2.275359 \f]
START_TEST(s21_exp_636)
{
    double value = 0.10276;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10367) = -2.266543 \f]
START_TEST(s21_exp_637)
{
    double value = 0.10367;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10458) = -2.257803 \f]
START_TEST(s21_exp_638)
{
    double value = 0.10458;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10549) = -2.249139 \f]
START_TEST(s21_exp_639)
{
    double value = 0.10549;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10640) = -2.240550 \f]
START_TEST(s21_exp_640)
{
    double value = 0.10640;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10731) = -2.232033 \f]
START_TEST(s21_exp_641)
{
    double value = 0.10731;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10822) = -2.223589 \f]
START_TEST(s21_exp_642)
{
    double value = 0.10822;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10913) = -2.215215 \f]
START_TEST(s21_exp_643)
{
    double value = 0.10913;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11004) = -2.206911 \f]
START_TEST(s21_exp_644)
{
    double value = 0.11004;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11095) = -2.198676 \f]
START_TEST(s21_exp_645)
{
    double value = 0.11095;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11186) = -2.190507 \f]
START_TEST(s21_exp_646)
{
    double value = 0.11186;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11277) = -2.182405 \f]
START_TEST(s21_exp_647)
{
    double value = 0.11277;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11368) = -2.174368 \f]
START_TEST(s21_exp_648)
{
    double value = 0.11368;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11459) = -2.166395 \f]
START_TEST(s21_exp_649)
{
    double value = 0.11459;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11550) = -2.158485 \f]
START_TEST(s21_exp_650)
{
    double value = 0.11550;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11641) = -2.150637 \f]
START_TEST(s21_exp_651)
{
    double value = 0.11641;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11732) = -2.142850 \f]
START_TEST(s21_exp_652)
{
    double value = 0.11732;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11823) = -2.135123 \f]
START_TEST(s21_exp_653)
{
    double value = 0.11823;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11914) = -2.127456 \f]
START_TEST(s21_exp_654)
{
    double value = 0.11914;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12005) = -2.119847 \f]
START_TEST(s21_exp_655)
{
    double value = 0.12005;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12096) = -2.112295 \f]
START_TEST(s21_exp_656)
{
    double value = 0.12096;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12187) = -2.104800 \f]
START_TEST(s21_exp_657)
{
    double value = 0.12187;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12278) = -2.097361 \f]
START_TEST(s21_exp_658)
{
    double value = 0.12278;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12369) = -2.089977 \f]
START_TEST(s21_exp_659)
{
    double value = 0.12369;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12460) = -2.082647 \f]
START_TEST(s21_exp_660)
{
    double value = 0.12460;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12551) = -2.075370 \f]
START_TEST(s21_exp_661)
{
    double value = 0.12551;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12642) = -2.068146 \f]
START_TEST(s21_exp_662)
{
    double value = 0.12642;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12733) = -2.060973 \f]
START_TEST(s21_exp_663)
{
    double value = 0.12733;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12824) = -2.053852 \f]
START_TEST(s21_exp_664)
{
    double value = 0.12824;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12915) = -2.046781 \f]
START_TEST(s21_exp_665)
{
    double value = 0.12915;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13006) = -2.039759 \f]
START_TEST(s21_exp_666)
{
    double value = 0.13006;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13097) = -2.032787 \f]
START_TEST(s21_exp_667)
{
    double value = 0.13097;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13188) = -2.025863 \f]
START_TEST(s21_exp_668)
{
    double value = 0.13188;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13279) = -2.018986 \f]
START_TEST(s21_exp_669)
{
    double value = 0.13279;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13370) = -2.012157 \f]
START_TEST(s21_exp_670)
{
    double value = 0.13370;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13461) = -2.005374 \f]
START_TEST(s21_exp_671)
{
    double value = 0.13461;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13552) = -1.998636 \f]
START_TEST(s21_exp_672)
{
    double value = 0.13552;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13643) = -1.991944 \f]
START_TEST(s21_exp_673)
{
    double value = 0.13643;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13734) = -1.985296 \f]
START_TEST(s21_exp_674)
{
    double value = 0.13734;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13825) = -1.978692 \f]
START_TEST(s21_exp_675)
{
    double value = 0.13825;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13916) = -1.972131 \f]
START_TEST(s21_exp_676)
{
    double value = 0.13916;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14007) = -1.965613 \f]
START_TEST(s21_exp_677)
{
    double value = 0.14007;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14098) = -1.959137 \f]
START_TEST(s21_exp_678)
{
    double value = 0.14098;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14189) = -1.952703 \f]
START_TEST(s21_exp_679)
{
    double value = 0.14189;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14280) = -1.946310 \f]
START_TEST(s21_exp_680)
{
    double value = 0.14280;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14371) = -1.939958 \f]
START_TEST(s21_exp_681)
{
    double value = 0.14371;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14462) = -1.933646 \f]
START_TEST(s21_exp_682)
{
    double value = 0.14462;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14553) = -1.927373 \f]
START_TEST(s21_exp_683)
{
    double value = 0.14553;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14644) = -1.921139 \f]
START_TEST(s21_exp_684)
{
    double value = 0.14644;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14735) = -1.914945 \f]
START_TEST(s21_exp_685)
{
    double value = 0.14735;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14826) = -1.908788 \f]
START_TEST(s21_exp_686)
{
    double value = 0.14826;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14917) = -1.902669 \f]
START_TEST(s21_exp_687)
{
    double value = 0.14917;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15008) = -1.896587 \f]
START_TEST(s21_exp_688)
{
    double value = 0.15008;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15099) = -1.890542 \f]
START_TEST(s21_exp_689)
{
    double value = 0.15099;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15190) = -1.884533 \f]
START_TEST(s21_exp_690)
{
    double value = 0.15190;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15281) = -1.878560 \f]
START_TEST(s21_exp_691)
{
    double value = 0.15281;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15372) = -1.872623 \f]
START_TEST(s21_exp_692)
{
    double value = 0.15372;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15463) = -1.866720 \f]
START_TEST(s21_exp_693)
{
    double value = 0.15463;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15554) = -1.860852 \f]
START_TEST(s21_exp_694)
{
    double value = 0.15554;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15645) = -1.855019 \f]
START_TEST(s21_exp_695)
{
    double value = 0.15645;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15736) = -1.849219 \f]
START_TEST(s21_exp_696)
{
    double value = 0.15736;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15827) = -1.843453 \f]
START_TEST(s21_exp_697)
{
    double value = 0.15827;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15918) = -1.837720 \f]
START_TEST(s21_exp_698)
{
    double value = 0.15918;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.16009) = -1.832019 \f]
START_TEST(s21_exp_699)
{
    double value = 0.16009;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08) = -2.525729 \f]
START_TEST(s21_exp_700)
{
    double value = 0.08;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.08912) = -2.417772 \f]
START_TEST(s21_exp_701)
{
    double value = 0.08912;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09824) = -2.320342 \f]
START_TEST(s21_exp_702)
{
    double value = 0.09824;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10736) = -2.231568 \f]
START_TEST(s21_exp_703)
{
    double value = 0.10736;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11648) = -2.150036 \f]
START_TEST(s21_exp_704)
{
    double value = 0.11648;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12560) = -2.074653 \f]
START_TEST(s21_exp_705)
{
    double value = 0.12560;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13472) = -2.004557 \f]
START_TEST(s21_exp_706)
{
    double value = 0.13472;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14384) = -1.939054 \f]
START_TEST(s21_exp_707)
{
    double value = 0.14384;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15296) = -1.877579 \f]
START_TEST(s21_exp_708)
{
    double value = 0.15296;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.16208) = -1.819665 \f]
START_TEST(s21_exp_709)
{
    double value = 0.16208;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.17120) = -1.764923 \f]
START_TEST(s21_exp_710)
{
    double value = 0.17120;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.18032) = -1.713022 \f]
START_TEST(s21_exp_711)
{
    double value = 0.18032;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.18944) = -1.663683 \f]
START_TEST(s21_exp_712)
{
    double value = 0.18944;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.19856) = -1.616664 \f]
START_TEST(s21_exp_713)
{
    double value = 0.19856;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.20768) = -1.571757 \f]
START_TEST(s21_exp_714)
{
    double value = 0.20768;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.21680) = -1.528780 \f]
START_TEST(s21_exp_715)
{
    double value = 0.21680;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.22592) = -1.487574 \f]
START_TEST(s21_exp_716)
{
    double value = 0.22592;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.23504) = -1.448000 \f]
START_TEST(s21_exp_717)
{
    double value = 0.23504;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.24416) = -1.409932 \f]
START_TEST(s21_exp_718)
{
    double value = 0.24416;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.25328) = -1.373260 \f]
START_TEST(s21_exp_719)
{
    double value = 0.25328;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.26240) = -1.337885 \f]
START_TEST(s21_exp_720)
{
    double value = 0.26240;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.27152) = -1.303719 \f]
START_TEST(s21_exp_721)
{
    double value = 0.27152;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.28064) = -1.270683 \f]
START_TEST(s21_exp_722)
{
    double value = 0.28064;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.28976) = -1.238702 \f]
START_TEST(s21_exp_723)
{
    double value = 0.28976;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.29888) = -1.207713 \f]
START_TEST(s21_exp_724)
{
    double value = 0.29888;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.30800) = -1.177655 \f]
START_TEST(s21_exp_725)
{
    double value = 0.30800;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.31712) = -1.148475 \f]
START_TEST(s21_exp_726)
{
    double value = 0.31712;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.32624) = -1.120122 \f]
START_TEST(s21_exp_727)
{
    double value = 0.32624;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.33536) = -1.092551 \f]
START_TEST(s21_exp_728)
{
    double value = 0.33536;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.34448) = -1.065719 \f]
START_TEST(s21_exp_729)
{
    double value = 0.34448;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.35360) = -1.039589 \f]
START_TEST(s21_exp_730)
{
    double value = 0.35360;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.36272) = -1.014124 \f]
START_TEST(s21_exp_731)
{
    double value = 0.36272;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.37184) = -0.989292 \f]
START_TEST(s21_exp_732)
{
    double value = 0.37184;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.38096) = -0.965061 \f]
START_TEST(s21_exp_733)
{
    double value = 0.38096;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.39008) = -0.941403 \f]
START_TEST(s21_exp_734)
{
    double value = 0.39008;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.39920) = -0.918293 \f]
START_TEST(s21_exp_735)
{
    double value = 0.39920;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.40832) = -0.895704 \f]
START_TEST(s21_exp_736)
{
    double value = 0.40832;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.41744) = -0.873614 \f]
START_TEST(s21_exp_737)
{
    double value = 0.41744;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.42656) = -0.852002 \f]
START_TEST(s21_exp_738)
{
    double value = 0.42656;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.43568) = -0.830847 \f]
START_TEST(s21_exp_739)
{
    double value = 0.43568;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.44480) = -0.810131 \f]
START_TEST(s21_exp_740)
{
    double value = 0.44480;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.45392) = -0.789834 \f]
START_TEST(s21_exp_741)
{
    double value = 0.45392;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.46304) = -0.769942 \f]
START_TEST(s21_exp_742)
{
    double value = 0.46304;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.47216) = -0.750437 \f]
START_TEST(s21_exp_743)
{
    double value = 0.47216;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.48128) = -0.731306 \f]
START_TEST(s21_exp_744)
{
    double value = 0.48128;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.49040) = -0.712534 \f]
START_TEST(s21_exp_745)
{
    double value = 0.49040;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.49952) = -0.694108 \f]
START_TEST(s21_exp_746)
{
    double value = 0.49952;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.50864) = -0.676015 \f]
START_TEST(s21_exp_747)
{
    double value = 0.50864;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.51776) = -0.658243 \f]
START_TEST(s21_exp_748)
{
    double value = 0.51776;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.52688) = -0.640782 \f]
START_TEST(s21_exp_749)
{
    double value = 0.52688;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.53600) = -0.623621 \f]
START_TEST(s21_exp_750)
{
    double value = 0.53600;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.54512) = -0.606749 \f]
START_TEST(s21_exp_751)
{
    double value = 0.54512;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.55424) = -0.590157 \f]
START_TEST(s21_exp_752)
{
    double value = 0.55424;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.56336) = -0.573836 \f]
START_TEST(s21_exp_753)
{
    double value = 0.56336;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.57248) = -0.557777 \f]
START_TEST(s21_exp_754)
{
    double value = 0.57248;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.58160) = -0.541972 \f]
START_TEST(s21_exp_755)
{
    double value = 0.58160;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.59072) = -0.526413 \f]
START_TEST(s21_exp_756)
{
    double value = 0.59072;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.59984) = -0.511092 \f]
START_TEST(s21_exp_757)
{
    double value = 0.59984;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.60896) = -0.496003 \f]
START_TEST(s21_exp_758)
{
    double value = 0.60896;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.61808) = -0.481137 \f]
START_TEST(s21_exp_759)
{
    double value = 0.61808;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.62720) = -0.466490 \f]
START_TEST(s21_exp_760)
{
    double value = 0.62720;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.63632) = -0.452054 \f]
START_TEST(s21_exp_761)
{
    double value = 0.63632;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.64544) = -0.437823 \f]
START_TEST(s21_exp_762)
{
    double value = 0.64544;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.65456) = -0.423792 \f]
START_TEST(s21_exp_763)
{
    double value = 0.65456;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.66368) = -0.409955 \f]
START_TEST(s21_exp_764)
{
    double value = 0.66368;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.67280) = -0.396307 \f]
START_TEST(s21_exp_765)
{
    double value = 0.67280;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.68192) = -0.382843 \f]
START_TEST(s21_exp_766)
{
    double value = 0.68192;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.69104) = -0.369558 \f]
START_TEST(s21_exp_767)
{
    double value = 0.69104;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.70016) = -0.356446 \f]
START_TEST(s21_exp_768)
{
    double value = 0.70016;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.70928) = -0.343505 \f]
START_TEST(s21_exp_769)
{
    double value = 0.70928;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.71840) = -0.330729 \f]
START_TEST(s21_exp_770)
{
    double value = 0.71840;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.72752) = -0.318114 \f]
START_TEST(s21_exp_771)
{
    double value = 0.72752;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.73664) = -0.305656 \f]
START_TEST(s21_exp_772)
{
    double value = 0.73664;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.74576) = -0.293351 \f]
START_TEST(s21_exp_773)
{
    double value = 0.74576;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.75488) = -0.281196 \f]
START_TEST(s21_exp_774)
{
    double value = 0.75488;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.76400) = -0.269187 \f]
START_TEST(s21_exp_775)
{
    double value = 0.76400;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.77312) = -0.257321 \f]
START_TEST(s21_exp_776)
{
    double value = 0.77312;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.78224) = -0.245594 \f]
START_TEST(s21_exp_777)
{
    double value = 0.78224;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.79136) = -0.234002 \f]
START_TEST(s21_exp_778)
{
    double value = 0.79136;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.80048) = -0.222544 \f]
START_TEST(s21_exp_779)
{
    double value = 0.80048;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.80960) = -0.211215 \f]
START_TEST(s21_exp_780)
{
    double value = 0.80960;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.81872) = -0.200013 \f]
START_TEST(s21_exp_781)
{
    double value = 0.81872;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.82784) = -0.188935 \f]
START_TEST(s21_exp_782)
{
    double value = 0.82784;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.83696) = -0.177979 \f]
START_TEST(s21_exp_783)
{
    double value = 0.83696;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.84608) = -0.167141 \f]
START_TEST(s21_exp_784)
{
    double value = 0.84608;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.85520) = -0.156420 \f]
START_TEST(s21_exp_785)
{
    double value = 0.85520;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.86432) = -0.145812 \f]
START_TEST(s21_exp_786)
{
    double value = 0.86432;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.87344) = -0.135316 \f]
START_TEST(s21_exp_787)
{
    double value = 0.87344;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.88256) = -0.124929 \f]
START_TEST(s21_exp_788)
{
    double value = 0.88256;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.89168) = -0.114648 \f]
START_TEST(s21_exp_789)
{
    double value = 0.89168;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.90080) = -0.104472 \f]
START_TEST(s21_exp_790)
{
    double value = 0.90080;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.90992) = -0.094399 \f]
START_TEST(s21_exp_791)
{
    double value = 0.90992;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.91904) = -0.084426 \f]
START_TEST(s21_exp_792)
{
    double value = 0.91904;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.92816) = -0.074551 \f]
START_TEST(s21_exp_793)
{
    double value = 0.92816;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.93728) = -0.064773 \f]
START_TEST(s21_exp_794)
{
    double value = 0.93728;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.94640) = -0.055090 \f]
START_TEST(s21_exp_795)
{
    double value = 0.94640;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.95552) = -0.045500 \f]
START_TEST(s21_exp_796)
{
    double value = 0.95552;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.96464) = -0.036000 \f]
START_TEST(s21_exp_797)
{
    double value = 0.96464;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.97376) = -0.026590 \f]
START_TEST(s21_exp_798)
{
    double value = 0.97376;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.98288) = -0.017268 \f]
START_TEST(s21_exp_799)
{
    double value = 0.98288;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09) = -2.407946 \f]
START_TEST(s21_exp_800)
{
    double value = 0.09;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09412) = -2.363185 \f]
START_TEST(s21_exp_801)
{
    double value = 0.09412;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.09824) = -2.320342 \f]
START_TEST(s21_exp_802)
{
    double value = 0.09824;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10236) = -2.279259 \f]
START_TEST(s21_exp_803)
{
    double value = 0.10236;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.10648) = -2.239798 \f]
START_TEST(s21_exp_804)
{
    double value = 0.10648;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11060) = -2.201835 \f]
START_TEST(s21_exp_805)
{
    double value = 0.11060;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11472) = -2.165261 \f]
START_TEST(s21_exp_806)
{
    double value = 0.11472;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.11884) = -2.129977 \f]
START_TEST(s21_exp_807)
{
    double value = 0.11884;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12296) = -2.095896 \f]
START_TEST(s21_exp_808)
{
    double value = 0.12296;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.12708) = -2.062938 \f]
START_TEST(s21_exp_809)
{
    double value = 0.12708;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13120) = -2.031032 \f]
START_TEST(s21_exp_810)
{
    double value = 0.13120;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13532) = -2.000113 \f]
START_TEST(s21_exp_811)
{
    double value = 0.13532;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.13944) = -1.970121 \f]
START_TEST(s21_exp_812)
{
    double value = 0.13944;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14356) = -1.941002 \f]
START_TEST(s21_exp_813)
{
    double value = 0.14356;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.14768) = -1.912708 \f]
START_TEST(s21_exp_814)
{
    double value = 0.14768;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15180) = -1.885191 \f]
START_TEST(s21_exp_815)
{
    double value = 0.15180;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.15592) = -1.858412 \f]
START_TEST(s21_exp_816)
{
    double value = 0.15592;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.16004) = -1.832331 \f]
START_TEST(s21_exp_817)
{
    double value = 0.16004;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.16416) = -1.806914 \f]
START_TEST(s21_exp_818)
{
    double value = 0.16416;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.16828) = -1.782126 \f]
START_TEST(s21_exp_819)
{
    double value = 0.16828;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.17240) = -1.757938 \f]
START_TEST(s21_exp_820)
{
    double value = 0.17240;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.17652) = -1.734321 \f]
START_TEST(s21_exp_821)
{
    double value = 0.17652;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.18064) = -1.711249 \f]
START_TEST(s21_exp_822)
{
    double value = 0.18064;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.18476) = -1.688698 \f]
START_TEST(s21_exp_823)
{
    double value = 0.18476;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.18888) = -1.666643 \f]
START_TEST(s21_exp_824)
{
    double value = 0.18888;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.19300) = -1.645065 \f]
START_TEST(s21_exp_825)
{
    double value = 0.19300;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.19712) = -1.623943 \f]
START_TEST(s21_exp_826)
{
    double value = 0.19712;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.20124) = -1.603257 \f]
START_TEST(s21_exp_827)
{
    double value = 0.20124;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.20536) = -1.582991 \f]
START_TEST(s21_exp_828)
{
    double value = 0.20536;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.20948) = -1.563127 \f]
START_TEST(s21_exp_829)
{
    double value = 0.20948;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.21360) = -1.543650 \f]
START_TEST(s21_exp_830)
{
    double value = 0.21360;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.21772) = -1.524545 \f]
START_TEST(s21_exp_831)
{
    double value = 0.21772;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.22184) = -1.505799 \f]
START_TEST(s21_exp_832)
{
    double value = 0.22184;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.22596) = -1.487397 \f]
START_TEST(s21_exp_833)
{
    double value = 0.22596;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.23008) = -1.469328 \f]
START_TEST(s21_exp_834)
{
    double value = 0.23008;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.23420) = -1.451580 \f]
START_TEST(s21_exp_835)
{
    double value = 0.23420;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.23832) = -1.434141 \f]
START_TEST(s21_exp_836)
{
    double value = 0.23832;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.24244) = -1.417001 \f]
START_TEST(s21_exp_837)
{
    double value = 0.24244;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.24656) = -1.400150 \f]
START_TEST(s21_exp_838)
{
    double value = 0.24656;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.25068) = -1.383578 \f]
START_TEST(s21_exp_839)
{
    double value = 0.25068;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.25480) = -1.367276 \f]
START_TEST(s21_exp_840)
{
    double value = 0.25480;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.25892) = -1.351236 \f]
START_TEST(s21_exp_841)
{
    double value = 0.25892;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.26304) = -1.335449 \f]
START_TEST(s21_exp_842)
{
    double value = 0.26304;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.26716) = -1.319908 \f]
START_TEST(s21_exp_843)
{
    double value = 0.26716;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.27128) = -1.304604 \f]
START_TEST(s21_exp_844)
{
    double value = 0.27128;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.27540) = -1.289531 \f]
START_TEST(s21_exp_845)
{
    double value = 0.27540;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.27952) = -1.274681 \f]
START_TEST(s21_exp_846)
{
    double value = 0.27952;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.28364) = -1.260049 \f]
START_TEST(s21_exp_847)
{
    double value = 0.28364;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.28776) = -1.245628 \f]
START_TEST(s21_exp_848)
{
    double value = 0.28776;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.29188) = -1.231413 \f]
START_TEST(s21_exp_849)
{
    double value = 0.29188;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.29600) = -1.217396 \f]
START_TEST(s21_exp_850)
{
    double value = 0.29600;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.30012) = -1.203573 \f]
START_TEST(s21_exp_851)
{
    double value = 0.30012;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.30424) = -1.189938 \f]
START_TEST(s21_exp_852)
{
    double value = 0.30424;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.30836) = -1.176487 \f]
START_TEST(s21_exp_853)
{
    double value = 0.30836;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.31248) = -1.163215 \f]
START_TEST(s21_exp_854)
{
    double value = 0.31248;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.31660) = -1.150116 \f]
START_TEST(s21_exp_855)
{
    double value = 0.31660;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.32072) = -1.137187 \f]
START_TEST(s21_exp_856)
{
    double value = 0.32072;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.32484) = -1.124423 \f]
START_TEST(s21_exp_857)
{
    double value = 0.32484;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.32896) = -1.111819 \f]
START_TEST(s21_exp_858)
{
    double value = 0.32896;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.33308) = -1.099373 \f]
START_TEST(s21_exp_859)
{
    double value = 0.33308;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.33720) = -1.087079 \f]
START_TEST(s21_exp_860)
{
    double value = 0.33720;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.34132) = -1.074935 \f]
START_TEST(s21_exp_861)
{
    double value = 0.34132;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.34544) = -1.062936 \f]
START_TEST(s21_exp_862)
{
    double value = 0.34544;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.34956) = -1.051080 \f]
START_TEST(s21_exp_863)
{
    double value = 0.34956;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.35368) = -1.039363 \f]
START_TEST(s21_exp_864)
{
    double value = 0.35368;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.35780) = -1.027781 \f]
START_TEST(s21_exp_865)
{
    double value = 0.35780;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.36192) = -1.016332 \f]
START_TEST(s21_exp_866)
{
    double value = 0.36192;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.36604) = -1.005013 \f]
START_TEST(s21_exp_867)
{
    double value = 0.36604;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.37016) = -0.993820 \f]
START_TEST(s21_exp_868)
{
    double value = 0.37016;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.37428) = -0.982751 \f]
START_TEST(s21_exp_869)
{
    double value = 0.37428;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.37840) = -0.971803 \f]
START_TEST(s21_exp_870)
{
    double value = 0.37840;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.38252) = -0.960974 \f]
START_TEST(s21_exp_871)
{
    double value = 0.38252;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.38664) = -0.950261 \f]
START_TEST(s21_exp_872)
{
    double value = 0.38664;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.39076) = -0.939662 \f]
START_TEST(s21_exp_873)
{
    double value = 0.39076;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.39488) = -0.929173 \f]
START_TEST(s21_exp_874)
{
    double value = 0.39488;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.39900) = -0.918794 \f]
START_TEST(s21_exp_875)
{
    double value = 0.39900;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.40312) = -0.908521 \f]
START_TEST(s21_exp_876)
{
    double value = 0.40312;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.40724) = -0.898353 \f]
START_TEST(s21_exp_877)
{
    double value = 0.40724;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.41136) = -0.888287 \f]
START_TEST(s21_exp_878)
{
    double value = 0.41136;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.41548) = -0.878321 \f]
START_TEST(s21_exp_879)
{
    double value = 0.41548;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.41960) = -0.868453 \f]
START_TEST(s21_exp_880)
{
    double value = 0.41960;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.42372) = -0.858682 \f]
START_TEST(s21_exp_881)
{
    double value = 0.42372;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.42784) = -0.849006 \f]
START_TEST(s21_exp_882)
{
    double value = 0.42784;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.43196) = -0.839422 \f]
START_TEST(s21_exp_883)
{
    double value = 0.43196;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.43608) = -0.829930 \f]
START_TEST(s21_exp_884)
{
    double value = 0.43608;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.44020) = -0.820526 \f]
START_TEST(s21_exp_885)
{
    double value = 0.44020;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.44432) = -0.811210 \f]
START_TEST(s21_exp_886)
{
    double value = 0.44432;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.44844) = -0.801980 \f]
START_TEST(s21_exp_887)
{
    double value = 0.44844;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.45256) = -0.792835 \f]
START_TEST(s21_exp_888)
{
    double value = 0.45256;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.45668) = -0.783772 \f]
START_TEST(s21_exp_889)
{
    double value = 0.45668;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.46080) = -0.774791 \f]
START_TEST(s21_exp_890)
{
    double value = 0.46080;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.46492) = -0.765890 \f]
START_TEST(s21_exp_891)
{
    double value = 0.46492;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.46904) = -0.757067 \f]
START_TEST(s21_exp_892)
{
    double value = 0.46904;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.47316) = -0.748322 \f]
START_TEST(s21_exp_893)
{
    double value = 0.47316;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.47728) = -0.739652 \f]
START_TEST(s21_exp_894)
{
    double value = 0.47728;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.48140) = -0.731057 \f]
START_TEST(s21_exp_895)
{
    double value = 0.48140;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.48552) = -0.722535 \f]
START_TEST(s21_exp_896)
{
    double value = 0.48552;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.48964) = -0.714085 \f]
START_TEST(s21_exp_897)
{
    double value = 0.48964;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.49376) = -0.705706 \f]
START_TEST(s21_exp_898)
{
    double value = 0.49376;

    s21_test_exp(value);
}

/// @brief \f[ exp(0.49788) = -0.697396 \f]
START_TEST(s21_exp_899)
{
    double value = 0.49788;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.001) = 0.001000 \f]
START_TEST(s21_exp_900)
{
    double value = 1.001;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.023) = 0.022739 \f]
START_TEST(s21_exp_901)
{
    double value = 1.023;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.045) = 0.044017 \f]
START_TEST(s21_exp_902)
{
    double value = 1.045;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.067) = 0.064851 \f]
START_TEST(s21_exp_903)
{
    double value = 1.067;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.089) = 0.085260 \f]
START_TEST(s21_exp_904)
{
    double value = 1.089;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.111) = 0.105261 \f]
START_TEST(s21_exp_905)
{
    double value = 1.111;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.133) = 0.124869 \f]
START_TEST(s21_exp_906)
{
    double value = 1.133;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.155) = 0.144100 \f]
START_TEST(s21_exp_907)
{
    double value = 1.155;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.177) = 0.162969 \f]
START_TEST(s21_exp_908)
{
    double value = 1.177;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.199) = 0.181488 \f]
START_TEST(s21_exp_909)
{
    double value = 1.199;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.221) = 0.199670 \f]
START_TEST(s21_exp_910)
{
    double value = 1.221;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.243) = 0.217528 \f]
START_TEST(s21_exp_911)
{
    double value = 1.243;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.265) = 0.235072 \f]
START_TEST(s21_exp_912)
{
    double value = 1.265;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.287) = 0.252314 \f]
START_TEST(s21_exp_913)
{
    double value = 1.287;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.309) = 0.269263 \f]
START_TEST(s21_exp_914)
{
    double value = 1.309;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.331) = 0.285931 \f]
START_TEST(s21_exp_915)
{
    double value = 1.331;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.353) = 0.302324 \f]
START_TEST(s21_exp_916)
{
    double value = 1.353;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.375) = 0.318454 \f]
START_TEST(s21_exp_917)
{
    double value = 1.375;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.397) = 0.334327 \f]
START_TEST(s21_exp_918)
{
    double value = 1.397;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.419) = 0.349952 \f]
START_TEST(s21_exp_919)
{
    double value = 1.419;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.441) = 0.365337 \f]
START_TEST(s21_exp_920)
{
    double value = 1.441;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.463) = 0.380489 \f]
START_TEST(s21_exp_921)
{
    double value = 1.463;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.485) = 0.395415 \f]
START_TEST(s21_exp_922)
{
    double value = 1.485;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.507) = 0.410121 \f]
START_TEST(s21_exp_923)
{
    double value = 1.507;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.529) = 0.424614 \f]
START_TEST(s21_exp_924)
{
    double value = 1.529;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.551) = 0.438900 \f]
START_TEST(s21_exp_925)
{
    double value = 1.551;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.573) = 0.452985 \f]
START_TEST(s21_exp_926)
{
    double value = 1.573;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.595) = 0.466874 \f]
START_TEST(s21_exp_927)
{
    double value = 1.595;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.617) = 0.480573 \f]
START_TEST(s21_exp_928)
{
    double value = 1.617;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.639) = 0.494086 \f]
START_TEST(s21_exp_929)
{
    double value = 1.639;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.661) = 0.507420 \f]
START_TEST(s21_exp_930)
{
    double value = 1.661;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.683) = 0.520578 \f]
START_TEST(s21_exp_931)
{
    double value = 1.683;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.705) = 0.533565 \f]
START_TEST(s21_exp_932)
{
    double value = 1.705;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.727) = 0.546386 \f]
START_TEST(s21_exp_933)
{
    double value = 1.727;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.749) = 0.559044 \f]
START_TEST(s21_exp_934)
{
    double value = 1.749;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.771) = 0.571544 \f]
START_TEST(s21_exp_935)
{
    double value = 1.771;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.793) = 0.583890 \f]
START_TEST(s21_exp_936)
{
    double value = 1.793;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.815) = 0.596085 \f]
START_TEST(s21_exp_937)
{
    double value = 1.815;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.837) = 0.608134 \f]
START_TEST(s21_exp_938)
{
    double value = 1.837;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.859) = 0.620039 \f]
START_TEST(s21_exp_939)
{
    double value = 1.859;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.881) = 0.631804 \f]
START_TEST(s21_exp_940)
{
    double value = 1.881;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.903) = 0.643432 \f]
START_TEST(s21_exp_941)
{
    double value = 1.903;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.925) = 0.654926 \f]
START_TEST(s21_exp_942)
{
    double value = 1.925;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.947) = 0.666290 \f]
START_TEST(s21_exp_943)
{
    double value = 1.947;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.969) = 0.677526 \f]
START_TEST(s21_exp_944)
{
    double value = 1.969;

    s21_test_exp(value);
}

/// @brief \f[ exp(1.991) = 0.688637 \f]
START_TEST(s21_exp_945)
{
    double value = 1.991;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.013) = 0.699626 \f]
START_TEST(s21_exp_946)
{
    double value = 2.013;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.035) = 0.710496 \f]
START_TEST(s21_exp_947)
{
    double value = 2.035;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.057) = 0.721249 \f]
START_TEST(s21_exp_948)
{
    double value = 2.057;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.079) = 0.731887 \f]
START_TEST(s21_exp_949)
{
    double value = 2.079;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.101) = 0.742413 \f]
START_TEST(s21_exp_950)
{
    double value = 2.101;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.123) = 0.752830 \f]
START_TEST(s21_exp_951)
{
    double value = 2.123;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.145) = 0.763140 \f]
START_TEST(s21_exp_952)
{
    double value = 2.145;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.167) = 0.773344 \f]
START_TEST(s21_exp_953)
{
    double value = 2.167;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.189) = 0.783445 \f]
START_TEST(s21_exp_954)
{
    double value = 2.189;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.211) = 0.793445 \f]
START_TEST(s21_exp_955)
{
    double value = 2.211;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.233) = 0.803346 \f]
START_TEST(s21_exp_956)
{
    double value = 2.233;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.255) = 0.813150 \f]
START_TEST(s21_exp_957)
{
    double value = 2.255;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.277) = 0.822859 \f]
START_TEST(s21_exp_958)
{
    double value = 2.277;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.299) = 0.832474 \f]
START_TEST(s21_exp_959)
{
    double value = 2.299;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.321) = 0.841998 \f]
START_TEST(s21_exp_960)
{
    double value = 2.321;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.343) = 0.851432 \f]
START_TEST(s21_exp_961)
{
    double value = 2.343;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.365) = 0.860778 \f]
START_TEST(s21_exp_962)
{
    double value = 2.365;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.387) = 0.870037 \f]
START_TEST(s21_exp_963)
{
    double value = 2.387;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.409) = 0.879212 \f]
START_TEST(s21_exp_964)
{
    double value = 2.409;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.431) = 0.888303 \f]
START_TEST(s21_exp_965)
{
    double value = 2.431;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.453) = 0.897312 \f]
START_TEST(s21_exp_966)
{
    double value = 2.453;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.475) = 0.906240 \f]
START_TEST(s21_exp_967)
{
    double value = 2.475;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.497) = 0.915090 \f]
START_TEST(s21_exp_968)
{
    double value = 2.497;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.519) = 0.923862 \f]
START_TEST(s21_exp_969)
{
    double value = 2.519;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.541) = 0.932558 \f]
START_TEST(s21_exp_970)
{
    double value = 2.541;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.563) = 0.941178 \f]
START_TEST(s21_exp_971)
{
    double value = 2.563;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.585) = 0.949726 \f]
START_TEST(s21_exp_972)
{
    double value = 2.585;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.607) = 0.958200 \f]
START_TEST(s21_exp_973)
{
    double value = 2.607;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.629) = 0.966604 \f]
START_TEST(s21_exp_974)
{
    double value = 2.629;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.651) = 0.974937 \f]
START_TEST(s21_exp_975)
{
    double value = 2.651;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.673) = 0.983201 \f]
START_TEST(s21_exp_976)
{
    double value = 2.673;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.695) = 0.991398 \f]
START_TEST(s21_exp_977)
{
    double value = 2.695;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.717) = 0.999528 \f]
START_TEST(s21_exp_978)
{
    double value = 2.717;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.739) = 1.007593 \f]
START_TEST(s21_exp_979)
{
    double value = 2.739;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.761) = 1.015593 \f]
START_TEST(s21_exp_980)
{
    double value = 2.761;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.783) = 1.023529 \f]
START_TEST(s21_exp_981)
{
    double value = 2.783;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.805) = 1.031404 \f]
START_TEST(s21_exp_982)
{
    double value = 2.805;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.827) = 1.039216 \f]
START_TEST(s21_exp_983)
{
    double value = 2.827;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.849) = 1.046968 \f]
START_TEST(s21_exp_984)
{
    double value = 2.849;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.871) = 1.054660 \f]
START_TEST(s21_exp_985)
{
    double value = 2.871;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.893) = 1.062294 \f]
START_TEST(s21_exp_986)
{
    double value = 2.893;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.915) = 1.069870 \f]
START_TEST(s21_exp_987)
{
    double value = 2.915;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.937) = 1.077389 \f]
START_TEST(s21_exp_988)
{
    double value = 2.937;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.959) = 1.084851 \f]
START_TEST(s21_exp_989)
{
    double value = 2.959;

    s21_test_exp(value);
}

/// @brief \f[ exp(2.981) = 1.092259 \f]
START_TEST(s21_exp_990)
{
    double value = 2.981;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.003) = 1.099612 \f]
START_TEST(s21_exp_991)
{
    double value = 3.003;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.025) = 1.106911 \f]
START_TEST(s21_exp_992)
{
    double value = 3.025;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.047) = 1.114158 \f]
START_TEST(s21_exp_993)
{
    double value = 3.047;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.069) = 1.121352 \f]
START_TEST(s21_exp_994)
{
    double value = 3.069;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.091) = 1.128495 \f]
START_TEST(s21_exp_995)
{
    double value = 3.091;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.113) = 1.135587 \f]
START_TEST(s21_exp_996)
{
    double value = 3.113;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.135) = 1.142629 \f]
START_TEST(s21_exp_997)
{
    double value = 3.135;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.157) = 1.149622 \f]
START_TEST(s21_exp_998)
{
    double value = 3.157;

    s21_test_exp(value);
}

/// @brief \f[ exp(3.179) = 1.156567 \f]
START_TEST(s21_exp_999)
{
    double value = 3.179;

    s21_test_exp(value);
}


/**
 * @brief first set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_first_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp first case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_0);
    tcase_add_test(tc_exp, s21_exp_1);
    tcase_add_test(tc_exp, s21_exp_2);
    tcase_add_test(tc_exp, s21_exp_3);
    tcase_add_test(tc_exp, s21_exp_4);
    tcase_add_test(tc_exp, s21_exp_5);
    tcase_add_test(tc_exp, s21_exp_6);
    tcase_add_test(tc_exp, s21_exp_7);
    tcase_add_test(tc_exp, s21_exp_8);
    tcase_add_test(tc_exp, s21_exp_9);
    tcase_add_test(tc_exp, s21_exp_10);
    tcase_add_test(tc_exp, s21_exp_11);
    tcase_add_test(tc_exp, s21_exp_12);
    tcase_add_test(tc_exp, s21_exp_13);
    tcase_add_test(tc_exp, s21_exp_14);
    tcase_add_test(tc_exp, s21_exp_15);
    tcase_add_test(tc_exp, s21_exp_16);
    tcase_add_test(tc_exp, s21_exp_17);
    tcase_add_test(tc_exp, s21_exp_18);
    tcase_add_test(tc_exp, s21_exp_19);
    tcase_add_test(tc_exp, s21_exp_20);
    tcase_add_test(tc_exp, s21_exp_21);
    tcase_add_test(tc_exp, s21_exp_22);
    tcase_add_test(tc_exp, s21_exp_23);
    tcase_add_test(tc_exp, s21_exp_24);
    tcase_add_test(tc_exp, s21_exp_25);
    tcase_add_test(tc_exp, s21_exp_26);
    tcase_add_test(tc_exp, s21_exp_27);
    tcase_add_test(tc_exp, s21_exp_28);
    tcase_add_test(tc_exp, s21_exp_29);
    tcase_add_test(tc_exp, s21_exp_30);
    tcase_add_test(tc_exp, s21_exp_31);
    tcase_add_test(tc_exp, s21_exp_32);
    tcase_add_test(tc_exp, s21_exp_33);
    tcase_add_test(tc_exp, s21_exp_34);
    tcase_add_test(tc_exp, s21_exp_35);
    tcase_add_test(tc_exp, s21_exp_36);
    tcase_add_test(tc_exp, s21_exp_37);
    tcase_add_test(tc_exp, s21_exp_38);
    tcase_add_test(tc_exp, s21_exp_39);
    tcase_add_test(tc_exp, s21_exp_40);
    tcase_add_test(tc_exp, s21_exp_41);
    tcase_add_test(tc_exp, s21_exp_42);
    tcase_add_test(tc_exp, s21_exp_43);
    tcase_add_test(tc_exp, s21_exp_44);
    tcase_add_test(tc_exp, s21_exp_45);
    tcase_add_test(tc_exp, s21_exp_46);
    tcase_add_test(tc_exp, s21_exp_47);
    tcase_add_test(tc_exp, s21_exp_48);
    tcase_add_test(tc_exp, s21_exp_49);
    tcase_add_test(tc_exp, s21_exp_50);
    tcase_add_test(tc_exp, s21_exp_51);
    tcase_add_test(tc_exp, s21_exp_52);
    tcase_add_test(tc_exp, s21_exp_53);
    tcase_add_test(tc_exp, s21_exp_54);
    tcase_add_test(tc_exp, s21_exp_55);
    tcase_add_test(tc_exp, s21_exp_56);
    tcase_add_test(tc_exp, s21_exp_57);
    tcase_add_test(tc_exp, s21_exp_58);
    tcase_add_test(tc_exp, s21_exp_59);
    tcase_add_test(tc_exp, s21_exp_60);
    tcase_add_test(tc_exp, s21_exp_61);
    tcase_add_test(tc_exp, s21_exp_62);
    tcase_add_test(tc_exp, s21_exp_63);
    tcase_add_test(tc_exp, s21_exp_64);
    tcase_add_test(tc_exp, s21_exp_65);
    tcase_add_test(tc_exp, s21_exp_66);
    tcase_add_test(tc_exp, s21_exp_67);
    tcase_add_test(tc_exp, s21_exp_68);
    tcase_add_test(tc_exp, s21_exp_69);
    tcase_add_test(tc_exp, s21_exp_70);
    tcase_add_test(tc_exp, s21_exp_71);
    tcase_add_test(tc_exp, s21_exp_72);
    tcase_add_test(tc_exp, s21_exp_73);
    tcase_add_test(tc_exp, s21_exp_74);
    tcase_add_test(tc_exp, s21_exp_75);
    tcase_add_test(tc_exp, s21_exp_76);
    tcase_add_test(tc_exp, s21_exp_77);
    tcase_add_test(tc_exp, s21_exp_78);
    tcase_add_test(tc_exp, s21_exp_79);
    tcase_add_test(tc_exp, s21_exp_80);
    tcase_add_test(tc_exp, s21_exp_81);
    tcase_add_test(tc_exp, s21_exp_82);
    tcase_add_test(tc_exp, s21_exp_83);
    tcase_add_test(tc_exp, s21_exp_84);
    tcase_add_test(tc_exp, s21_exp_85);
    tcase_add_test(tc_exp, s21_exp_86);
    tcase_add_test(tc_exp, s21_exp_87);
    tcase_add_test(tc_exp, s21_exp_88);
    tcase_add_test(tc_exp, s21_exp_89);
    tcase_add_test(tc_exp, s21_exp_90);
    tcase_add_test(tc_exp, s21_exp_91);
    tcase_add_test(tc_exp, s21_exp_92);
    tcase_add_test(tc_exp, s21_exp_93);
    tcase_add_test(tc_exp, s21_exp_94);
    tcase_add_test(tc_exp, s21_exp_95);
    tcase_add_test(tc_exp, s21_exp_96);
    tcase_add_test(tc_exp, s21_exp_97);
    tcase_add_test(tc_exp, s21_exp_98);
    tcase_add_test(tc_exp, s21_exp_99);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief second set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_second_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp second case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_100);
    tcase_add_test(tc_exp, s21_exp_101);
    tcase_add_test(tc_exp, s21_exp_102);
    tcase_add_test(tc_exp, s21_exp_103);
    tcase_add_test(tc_exp, s21_exp_104);
    tcase_add_test(tc_exp, s21_exp_105);
    tcase_add_test(tc_exp, s21_exp_106);
    tcase_add_test(tc_exp, s21_exp_107);
    tcase_add_test(tc_exp, s21_exp_108);
    tcase_add_test(tc_exp, s21_exp_109);
    tcase_add_test(tc_exp, s21_exp_110);
    tcase_add_test(tc_exp, s21_exp_111);
    tcase_add_test(tc_exp, s21_exp_112);
    tcase_add_test(tc_exp, s21_exp_113);
    tcase_add_test(tc_exp, s21_exp_114);
    tcase_add_test(tc_exp, s21_exp_115);
    tcase_add_test(tc_exp, s21_exp_116);
    tcase_add_test(tc_exp, s21_exp_117);
    tcase_add_test(tc_exp, s21_exp_118);
    tcase_add_test(tc_exp, s21_exp_119);
    tcase_add_test(tc_exp, s21_exp_120);
    tcase_add_test(tc_exp, s21_exp_121);
    tcase_add_test(tc_exp, s21_exp_122);
    tcase_add_test(tc_exp, s21_exp_123);
    tcase_add_test(tc_exp, s21_exp_124);
    tcase_add_test(tc_exp, s21_exp_125);
    tcase_add_test(tc_exp, s21_exp_126);
    tcase_add_test(tc_exp, s21_exp_127);
    tcase_add_test(tc_exp, s21_exp_128);
    tcase_add_test(tc_exp, s21_exp_129);
    tcase_add_test(tc_exp, s21_exp_130);
    tcase_add_test(tc_exp, s21_exp_131);
    tcase_add_test(tc_exp, s21_exp_132);
    tcase_add_test(tc_exp, s21_exp_133);
    tcase_add_test(tc_exp, s21_exp_134);
    tcase_add_test(tc_exp, s21_exp_135);
    tcase_add_test(tc_exp, s21_exp_136);
    tcase_add_test(tc_exp, s21_exp_137);
    tcase_add_test(tc_exp, s21_exp_138);
    tcase_add_test(tc_exp, s21_exp_139);
    tcase_add_test(tc_exp, s21_exp_140);
    tcase_add_test(tc_exp, s21_exp_141);
    tcase_add_test(tc_exp, s21_exp_142);
    tcase_add_test(tc_exp, s21_exp_143);
    tcase_add_test(tc_exp, s21_exp_144);
    tcase_add_test(tc_exp, s21_exp_145);
    tcase_add_test(tc_exp, s21_exp_146);
    tcase_add_test(tc_exp, s21_exp_147);
    tcase_add_test(tc_exp, s21_exp_148);
    tcase_add_test(tc_exp, s21_exp_149);
    tcase_add_test(tc_exp, s21_exp_150);
    tcase_add_test(tc_exp, s21_exp_151);
    tcase_add_test(tc_exp, s21_exp_152);
    tcase_add_test(tc_exp, s21_exp_153);
    tcase_add_test(tc_exp, s21_exp_154);
    tcase_add_test(tc_exp, s21_exp_155);
    tcase_add_test(tc_exp, s21_exp_156);
    tcase_add_test(tc_exp, s21_exp_157);
    tcase_add_test(tc_exp, s21_exp_158);
    tcase_add_test(tc_exp, s21_exp_159);
    tcase_add_test(tc_exp, s21_exp_160);
    tcase_add_test(tc_exp, s21_exp_161);
    tcase_add_test(tc_exp, s21_exp_162);
    tcase_add_test(tc_exp, s21_exp_163);
    tcase_add_test(tc_exp, s21_exp_164);
    tcase_add_test(tc_exp, s21_exp_165);
    tcase_add_test(tc_exp, s21_exp_166);
    tcase_add_test(tc_exp, s21_exp_167);
    tcase_add_test(tc_exp, s21_exp_168);
    tcase_add_test(tc_exp, s21_exp_169);
    tcase_add_test(tc_exp, s21_exp_170);
    tcase_add_test(tc_exp, s21_exp_171);
    tcase_add_test(tc_exp, s21_exp_172);
    tcase_add_test(tc_exp, s21_exp_173);
    tcase_add_test(tc_exp, s21_exp_174);
    tcase_add_test(tc_exp, s21_exp_175);
    tcase_add_test(tc_exp, s21_exp_176);
    tcase_add_test(tc_exp, s21_exp_177);
    tcase_add_test(tc_exp, s21_exp_178);
    tcase_add_test(tc_exp, s21_exp_179);
    tcase_add_test(tc_exp, s21_exp_180);
    tcase_add_test(tc_exp, s21_exp_181);
    tcase_add_test(tc_exp, s21_exp_182);
    tcase_add_test(tc_exp, s21_exp_183);
    tcase_add_test(tc_exp, s21_exp_184);
    tcase_add_test(tc_exp, s21_exp_185);
    tcase_add_test(tc_exp, s21_exp_186);
    tcase_add_test(tc_exp, s21_exp_187);
    tcase_add_test(tc_exp, s21_exp_188);
    tcase_add_test(tc_exp, s21_exp_189);
    tcase_add_test(tc_exp, s21_exp_190);
    tcase_add_test(tc_exp, s21_exp_191);
    tcase_add_test(tc_exp, s21_exp_192);
    tcase_add_test(tc_exp, s21_exp_193);
    tcase_add_test(tc_exp, s21_exp_194);
    tcase_add_test(tc_exp, s21_exp_195);
    tcase_add_test(tc_exp, s21_exp_196);
    tcase_add_test(tc_exp, s21_exp_197);
    tcase_add_test(tc_exp, s21_exp_198);
    tcase_add_test(tc_exp, s21_exp_199);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief third set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_third_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp third case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_200);
    tcase_add_test(tc_exp, s21_exp_201);
    tcase_add_test(tc_exp, s21_exp_202);
    tcase_add_test(tc_exp, s21_exp_203);
    tcase_add_test(tc_exp, s21_exp_204);
    tcase_add_test(tc_exp, s21_exp_205);
    tcase_add_test(tc_exp, s21_exp_206);
    tcase_add_test(tc_exp, s21_exp_207);
    tcase_add_test(tc_exp, s21_exp_208);
    tcase_add_test(tc_exp, s21_exp_209);
    tcase_add_test(tc_exp, s21_exp_210);
    tcase_add_test(tc_exp, s21_exp_211);
    tcase_add_test(tc_exp, s21_exp_212);
    tcase_add_test(tc_exp, s21_exp_213);
    tcase_add_test(tc_exp, s21_exp_214);
    tcase_add_test(tc_exp, s21_exp_215);
    tcase_add_test(tc_exp, s21_exp_216);
    tcase_add_test(tc_exp, s21_exp_217);
    tcase_add_test(tc_exp, s21_exp_218);
    tcase_add_test(tc_exp, s21_exp_219);
    tcase_add_test(tc_exp, s21_exp_220);
    tcase_add_test(tc_exp, s21_exp_221);
    tcase_add_test(tc_exp, s21_exp_222);
    tcase_add_test(tc_exp, s21_exp_223);
    tcase_add_test(tc_exp, s21_exp_224);
    tcase_add_test(tc_exp, s21_exp_225);
    tcase_add_test(tc_exp, s21_exp_226);
    tcase_add_test(tc_exp, s21_exp_227);
    tcase_add_test(tc_exp, s21_exp_228);
    tcase_add_test(tc_exp, s21_exp_229);
    tcase_add_test(tc_exp, s21_exp_230);
    tcase_add_test(tc_exp, s21_exp_231);
    tcase_add_test(tc_exp, s21_exp_232);
    tcase_add_test(tc_exp, s21_exp_233);
    tcase_add_test(tc_exp, s21_exp_234);
    tcase_add_test(tc_exp, s21_exp_235);
    tcase_add_test(tc_exp, s21_exp_236);
    tcase_add_test(tc_exp, s21_exp_237);
    tcase_add_test(tc_exp, s21_exp_238);
    tcase_add_test(tc_exp, s21_exp_239);
    tcase_add_test(tc_exp, s21_exp_240);
    tcase_add_test(tc_exp, s21_exp_241);
    tcase_add_test(tc_exp, s21_exp_242);
    tcase_add_test(tc_exp, s21_exp_243);
    tcase_add_test(tc_exp, s21_exp_244);
    tcase_add_test(tc_exp, s21_exp_245);
    tcase_add_test(tc_exp, s21_exp_246);
    tcase_add_test(tc_exp, s21_exp_247);
    tcase_add_test(tc_exp, s21_exp_248);
    tcase_add_test(tc_exp, s21_exp_249);
    tcase_add_test(tc_exp, s21_exp_250);
    tcase_add_test(tc_exp, s21_exp_251);
    tcase_add_test(tc_exp, s21_exp_252);
    tcase_add_test(tc_exp, s21_exp_253);
    tcase_add_test(tc_exp, s21_exp_254);
    tcase_add_test(tc_exp, s21_exp_255);
    tcase_add_test(tc_exp, s21_exp_256);
    tcase_add_test(tc_exp, s21_exp_257);
    tcase_add_test(tc_exp, s21_exp_258);
    tcase_add_test(tc_exp, s21_exp_259);
    tcase_add_test(tc_exp, s21_exp_260);
    tcase_add_test(tc_exp, s21_exp_261);
    tcase_add_test(tc_exp, s21_exp_262);
    tcase_add_test(tc_exp, s21_exp_263);
    tcase_add_test(tc_exp, s21_exp_264);
    tcase_add_test(tc_exp, s21_exp_265);
    tcase_add_test(tc_exp, s21_exp_266);
    tcase_add_test(tc_exp, s21_exp_267);
    tcase_add_test(tc_exp, s21_exp_268);
    tcase_add_test(tc_exp, s21_exp_269);
    tcase_add_test(tc_exp, s21_exp_270);
    tcase_add_test(tc_exp, s21_exp_271);
    tcase_add_test(tc_exp, s21_exp_272);
    tcase_add_test(tc_exp, s21_exp_273);
    tcase_add_test(tc_exp, s21_exp_274);
    tcase_add_test(tc_exp, s21_exp_275);
    tcase_add_test(tc_exp, s21_exp_276);
    tcase_add_test(tc_exp, s21_exp_277);
    tcase_add_test(tc_exp, s21_exp_278);
    tcase_add_test(tc_exp, s21_exp_279);
    tcase_add_test(tc_exp, s21_exp_280);
    tcase_add_test(tc_exp, s21_exp_281);
    tcase_add_test(tc_exp, s21_exp_282);
    tcase_add_test(tc_exp, s21_exp_283);
    tcase_add_test(tc_exp, s21_exp_284);
    tcase_add_test(tc_exp, s21_exp_285);
    tcase_add_test(tc_exp, s21_exp_286);
    tcase_add_test(tc_exp, s21_exp_287);
    tcase_add_test(tc_exp, s21_exp_288);
    tcase_add_test(tc_exp, s21_exp_289);
    tcase_add_test(tc_exp, s21_exp_290);
    tcase_add_test(tc_exp, s21_exp_291);
    tcase_add_test(tc_exp, s21_exp_292);
    tcase_add_test(tc_exp, s21_exp_293);
    tcase_add_test(tc_exp, s21_exp_294);
    tcase_add_test(tc_exp, s21_exp_295);
    tcase_add_test(tc_exp, s21_exp_296);
    tcase_add_test(tc_exp, s21_exp_297);
    tcase_add_test(tc_exp, s21_exp_298);
    tcase_add_test(tc_exp, s21_exp_299);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief forth set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_forth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp forth case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_300);
    tcase_add_test(tc_exp, s21_exp_301);
    tcase_add_test(tc_exp, s21_exp_302);
    tcase_add_test(tc_exp, s21_exp_303);
    tcase_add_test(tc_exp, s21_exp_304);
    tcase_add_test(tc_exp, s21_exp_305);
    tcase_add_test(tc_exp, s21_exp_306);
    tcase_add_test(tc_exp, s21_exp_307);
    tcase_add_test(tc_exp, s21_exp_308);
    tcase_add_test(tc_exp, s21_exp_309);
    tcase_add_test(tc_exp, s21_exp_310);
    tcase_add_test(tc_exp, s21_exp_311);
    tcase_add_test(tc_exp, s21_exp_312);
    tcase_add_test(tc_exp, s21_exp_313);
    tcase_add_test(tc_exp, s21_exp_314);
    tcase_add_test(tc_exp, s21_exp_315);
    tcase_add_test(tc_exp, s21_exp_316);
    tcase_add_test(tc_exp, s21_exp_317);
    tcase_add_test(tc_exp, s21_exp_318);
    tcase_add_test(tc_exp, s21_exp_319);
    tcase_add_test(tc_exp, s21_exp_320);
    tcase_add_test(tc_exp, s21_exp_321);
    tcase_add_test(tc_exp, s21_exp_322);
    tcase_add_test(tc_exp, s21_exp_323);
    tcase_add_test(tc_exp, s21_exp_324);
    tcase_add_test(tc_exp, s21_exp_325);
    tcase_add_test(tc_exp, s21_exp_326);
    tcase_add_test(tc_exp, s21_exp_327);
    tcase_add_test(tc_exp, s21_exp_328);
    tcase_add_test(tc_exp, s21_exp_329);
    tcase_add_test(tc_exp, s21_exp_330);
    tcase_add_test(tc_exp, s21_exp_331);
    tcase_add_test(tc_exp, s21_exp_332);
    tcase_add_test(tc_exp, s21_exp_333);
    tcase_add_test(tc_exp, s21_exp_334);
    tcase_add_test(tc_exp, s21_exp_335);
    tcase_add_test(tc_exp, s21_exp_336);
    tcase_add_test(tc_exp, s21_exp_337);
    tcase_add_test(tc_exp, s21_exp_338);
    tcase_add_test(tc_exp, s21_exp_339);
    tcase_add_test(tc_exp, s21_exp_340);
    tcase_add_test(tc_exp, s21_exp_341);
    tcase_add_test(tc_exp, s21_exp_342);
    tcase_add_test(tc_exp, s21_exp_343);
    tcase_add_test(tc_exp, s21_exp_344);
    tcase_add_test(tc_exp, s21_exp_345);
    tcase_add_test(tc_exp, s21_exp_346);
    tcase_add_test(tc_exp, s21_exp_347);
    tcase_add_test(tc_exp, s21_exp_348);
    tcase_add_test(tc_exp, s21_exp_349);
    tcase_add_test(tc_exp, s21_exp_350);
    tcase_add_test(tc_exp, s21_exp_351);
    tcase_add_test(tc_exp, s21_exp_352);
    tcase_add_test(tc_exp, s21_exp_353);
    tcase_add_test(tc_exp, s21_exp_354);
    tcase_add_test(tc_exp, s21_exp_355);
    tcase_add_test(tc_exp, s21_exp_356);
    tcase_add_test(tc_exp, s21_exp_357);
    tcase_add_test(tc_exp, s21_exp_358);
    tcase_add_test(tc_exp, s21_exp_359);
    tcase_add_test(tc_exp, s21_exp_360);
    tcase_add_test(tc_exp, s21_exp_361);
    tcase_add_test(tc_exp, s21_exp_362);
    tcase_add_test(tc_exp, s21_exp_363);
    tcase_add_test(tc_exp, s21_exp_364);
    tcase_add_test(tc_exp, s21_exp_365);
    tcase_add_test(tc_exp, s21_exp_366);
    tcase_add_test(tc_exp, s21_exp_367);
    tcase_add_test(tc_exp, s21_exp_368);
    tcase_add_test(tc_exp, s21_exp_369);
    tcase_add_test(tc_exp, s21_exp_370);
    tcase_add_test(tc_exp, s21_exp_371);
    tcase_add_test(tc_exp, s21_exp_372);
    tcase_add_test(tc_exp, s21_exp_373);
    tcase_add_test(tc_exp, s21_exp_374);
    tcase_add_test(tc_exp, s21_exp_375);
    tcase_add_test(tc_exp, s21_exp_376);
    tcase_add_test(tc_exp, s21_exp_377);
    tcase_add_test(tc_exp, s21_exp_378);
    tcase_add_test(tc_exp, s21_exp_379);
    tcase_add_test(tc_exp, s21_exp_380);
    tcase_add_test(tc_exp, s21_exp_381);
    tcase_add_test(tc_exp, s21_exp_382);
    tcase_add_test(tc_exp, s21_exp_383);
    tcase_add_test(tc_exp, s21_exp_384);
    tcase_add_test(tc_exp, s21_exp_385);
    tcase_add_test(tc_exp, s21_exp_386);
    tcase_add_test(tc_exp, s21_exp_387);
    tcase_add_test(tc_exp, s21_exp_388);
    tcase_add_test(tc_exp, s21_exp_389);
    tcase_add_test(tc_exp, s21_exp_390);
    tcase_add_test(tc_exp, s21_exp_391);
    tcase_add_test(tc_exp, s21_exp_392);
    tcase_add_test(tc_exp, s21_exp_393);
    tcase_add_test(tc_exp, s21_exp_394);
    tcase_add_test(tc_exp, s21_exp_395);
    tcase_add_test(tc_exp, s21_exp_396);
    tcase_add_test(tc_exp, s21_exp_397);
    tcase_add_test(tc_exp, s21_exp_398);
    tcase_add_test(tc_exp, s21_exp_399);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief fifth set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_fifth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp fifth case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_400);
    tcase_add_test(tc_exp, s21_exp_401);
    tcase_add_test(tc_exp, s21_exp_402);
    tcase_add_test(tc_exp, s21_exp_403);
    tcase_add_test(tc_exp, s21_exp_404);
    tcase_add_test(tc_exp, s21_exp_405);
    tcase_add_test(tc_exp, s21_exp_406);
    tcase_add_test(tc_exp, s21_exp_407);
    tcase_add_test(tc_exp, s21_exp_408);
    tcase_add_test(tc_exp, s21_exp_409);
    tcase_add_test(tc_exp, s21_exp_410);
    tcase_add_test(tc_exp, s21_exp_411);
    tcase_add_test(tc_exp, s21_exp_412);
    tcase_add_test(tc_exp, s21_exp_413);
    tcase_add_test(tc_exp, s21_exp_414);
    tcase_add_test(tc_exp, s21_exp_415);
    tcase_add_test(tc_exp, s21_exp_416);
    tcase_add_test(tc_exp, s21_exp_417);
    tcase_add_test(tc_exp, s21_exp_418);
    tcase_add_test(tc_exp, s21_exp_419);
    tcase_add_test(tc_exp, s21_exp_420);
    tcase_add_test(tc_exp, s21_exp_421);
    tcase_add_test(tc_exp, s21_exp_422);
    tcase_add_test(tc_exp, s21_exp_423);
    tcase_add_test(tc_exp, s21_exp_424);
    tcase_add_test(tc_exp, s21_exp_425);
    tcase_add_test(tc_exp, s21_exp_426);
    tcase_add_test(tc_exp, s21_exp_427);
    tcase_add_test(tc_exp, s21_exp_428);
    tcase_add_test(tc_exp, s21_exp_429);
    tcase_add_test(tc_exp, s21_exp_430);
    tcase_add_test(tc_exp, s21_exp_431);
    tcase_add_test(tc_exp, s21_exp_432);
    tcase_add_test(tc_exp, s21_exp_433);
    tcase_add_test(tc_exp, s21_exp_434);
    tcase_add_test(tc_exp, s21_exp_435);
    tcase_add_test(tc_exp, s21_exp_436);
    tcase_add_test(tc_exp, s21_exp_437);
    tcase_add_test(tc_exp, s21_exp_438);
    tcase_add_test(tc_exp, s21_exp_439);
    tcase_add_test(tc_exp, s21_exp_440);
    tcase_add_test(tc_exp, s21_exp_441);
    tcase_add_test(tc_exp, s21_exp_442);
    tcase_add_test(tc_exp, s21_exp_443);
    tcase_add_test(tc_exp, s21_exp_444);
    tcase_add_test(tc_exp, s21_exp_445);
    tcase_add_test(tc_exp, s21_exp_446);
    tcase_add_test(tc_exp, s21_exp_447);
    tcase_add_test(tc_exp, s21_exp_448);
    tcase_add_test(tc_exp, s21_exp_449);
    tcase_add_test(tc_exp, s21_exp_450);
    tcase_add_test(tc_exp, s21_exp_451);
    tcase_add_test(tc_exp, s21_exp_452);
    tcase_add_test(tc_exp, s21_exp_453);
    tcase_add_test(tc_exp, s21_exp_454);
    tcase_add_test(tc_exp, s21_exp_455);
    tcase_add_test(tc_exp, s21_exp_456);
    tcase_add_test(tc_exp, s21_exp_457);
    tcase_add_test(tc_exp, s21_exp_458);
    tcase_add_test(tc_exp, s21_exp_459);
    tcase_add_test(tc_exp, s21_exp_460);
    tcase_add_test(tc_exp, s21_exp_461);
    tcase_add_test(tc_exp, s21_exp_462);
    tcase_add_test(tc_exp, s21_exp_463);
    tcase_add_test(tc_exp, s21_exp_464);
    tcase_add_test(tc_exp, s21_exp_465);
    tcase_add_test(tc_exp, s21_exp_466);
    tcase_add_test(tc_exp, s21_exp_467);
    tcase_add_test(tc_exp, s21_exp_468);
    tcase_add_test(tc_exp, s21_exp_469);
    tcase_add_test(tc_exp, s21_exp_470);
    tcase_add_test(tc_exp, s21_exp_471);
    tcase_add_test(tc_exp, s21_exp_472);
    tcase_add_test(tc_exp, s21_exp_473);
    tcase_add_test(tc_exp, s21_exp_474);
    tcase_add_test(tc_exp, s21_exp_475);
    tcase_add_test(tc_exp, s21_exp_476);
    tcase_add_test(tc_exp, s21_exp_477);
    tcase_add_test(tc_exp, s21_exp_478);
    tcase_add_test(tc_exp, s21_exp_479);
    tcase_add_test(tc_exp, s21_exp_480);
    tcase_add_test(tc_exp, s21_exp_481);
    tcase_add_test(tc_exp, s21_exp_482);
    tcase_add_test(tc_exp, s21_exp_483);
    tcase_add_test(tc_exp, s21_exp_484);
    tcase_add_test(tc_exp, s21_exp_485);
    tcase_add_test(tc_exp, s21_exp_486);
    tcase_add_test(tc_exp, s21_exp_487);
    tcase_add_test(tc_exp, s21_exp_488);
    tcase_add_test(tc_exp, s21_exp_489);
    tcase_add_test(tc_exp, s21_exp_490);
    tcase_add_test(tc_exp, s21_exp_491);
    tcase_add_test(tc_exp, s21_exp_492);
    tcase_add_test(tc_exp, s21_exp_493);
    tcase_add_test(tc_exp, s21_exp_494);
    tcase_add_test(tc_exp, s21_exp_495);
    tcase_add_test(tc_exp, s21_exp_496);
    tcase_add_test(tc_exp, s21_exp_497);
    tcase_add_test(tc_exp, s21_exp_498);
    tcase_add_test(tc_exp, s21_exp_499);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief sixth set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_sixth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp sixth case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_500);
    tcase_add_test(tc_exp, s21_exp_501);
    tcase_add_test(tc_exp, s21_exp_502);
    tcase_add_test(tc_exp, s21_exp_503);
    tcase_add_test(tc_exp, s21_exp_504);
    tcase_add_test(tc_exp, s21_exp_505);
    tcase_add_test(tc_exp, s21_exp_506);
    tcase_add_test(tc_exp, s21_exp_507);
    tcase_add_test(tc_exp, s21_exp_508);
    tcase_add_test(tc_exp, s21_exp_509);
    tcase_add_test(tc_exp, s21_exp_510);
    tcase_add_test(tc_exp, s21_exp_511);
    tcase_add_test(tc_exp, s21_exp_512);
    tcase_add_test(tc_exp, s21_exp_513);
    tcase_add_test(tc_exp, s21_exp_514);
    tcase_add_test(tc_exp, s21_exp_515);
    tcase_add_test(tc_exp, s21_exp_516);
    tcase_add_test(tc_exp, s21_exp_517);
    tcase_add_test(tc_exp, s21_exp_518);
    tcase_add_test(tc_exp, s21_exp_519);
    tcase_add_test(tc_exp, s21_exp_520);
    tcase_add_test(tc_exp, s21_exp_521);
    tcase_add_test(tc_exp, s21_exp_522);
    tcase_add_test(tc_exp, s21_exp_523);
    tcase_add_test(tc_exp, s21_exp_524);
    tcase_add_test(tc_exp, s21_exp_525);
    tcase_add_test(tc_exp, s21_exp_526);
    tcase_add_test(tc_exp, s21_exp_527);
    tcase_add_test(tc_exp, s21_exp_528);
    tcase_add_test(tc_exp, s21_exp_529);
    tcase_add_test(tc_exp, s21_exp_530);
    tcase_add_test(tc_exp, s21_exp_531);
    tcase_add_test(tc_exp, s21_exp_532);
    tcase_add_test(tc_exp, s21_exp_533);
    tcase_add_test(tc_exp, s21_exp_534);
    tcase_add_test(tc_exp, s21_exp_535);
    tcase_add_test(tc_exp, s21_exp_536);
    tcase_add_test(tc_exp, s21_exp_537);
    tcase_add_test(tc_exp, s21_exp_538);
    tcase_add_test(tc_exp, s21_exp_539);
    tcase_add_test(tc_exp, s21_exp_540);
    tcase_add_test(tc_exp, s21_exp_541);
    tcase_add_test(tc_exp, s21_exp_542);
    tcase_add_test(tc_exp, s21_exp_543);
    tcase_add_test(tc_exp, s21_exp_544);
    tcase_add_test(tc_exp, s21_exp_545);
    tcase_add_test(tc_exp, s21_exp_546);
    tcase_add_test(tc_exp, s21_exp_547);
    tcase_add_test(tc_exp, s21_exp_548);
    tcase_add_test(tc_exp, s21_exp_549);
    tcase_add_test(tc_exp, s21_exp_550);
    tcase_add_test(tc_exp, s21_exp_551);
    tcase_add_test(tc_exp, s21_exp_552);
    tcase_add_test(tc_exp, s21_exp_553);
    tcase_add_test(tc_exp, s21_exp_554);
    tcase_add_test(tc_exp, s21_exp_555);
    tcase_add_test(tc_exp, s21_exp_556);
    tcase_add_test(tc_exp, s21_exp_557);
    tcase_add_test(tc_exp, s21_exp_558);
    tcase_add_test(tc_exp, s21_exp_559);
    tcase_add_test(tc_exp, s21_exp_560);
    tcase_add_test(tc_exp, s21_exp_561);
    tcase_add_test(tc_exp, s21_exp_562);
    tcase_add_test(tc_exp, s21_exp_563);
    tcase_add_test(tc_exp, s21_exp_564);
    tcase_add_test(tc_exp, s21_exp_565);
    tcase_add_test(tc_exp, s21_exp_566);
    tcase_add_test(tc_exp, s21_exp_567);
    tcase_add_test(tc_exp, s21_exp_568);
    tcase_add_test(tc_exp, s21_exp_569);
    tcase_add_test(tc_exp, s21_exp_570);
    tcase_add_test(tc_exp, s21_exp_571);
    tcase_add_test(tc_exp, s21_exp_572);
    tcase_add_test(tc_exp, s21_exp_573);
    tcase_add_test(tc_exp, s21_exp_574);
    tcase_add_test(tc_exp, s21_exp_575);
    tcase_add_test(tc_exp, s21_exp_576);
    tcase_add_test(tc_exp, s21_exp_577);
    tcase_add_test(tc_exp, s21_exp_578);
    tcase_add_test(tc_exp, s21_exp_579);
    tcase_add_test(tc_exp, s21_exp_580);
    tcase_add_test(tc_exp, s21_exp_581);
    tcase_add_test(tc_exp, s21_exp_582);
    tcase_add_test(tc_exp, s21_exp_583);
    tcase_add_test(tc_exp, s21_exp_584);
    tcase_add_test(tc_exp, s21_exp_585);
    tcase_add_test(tc_exp, s21_exp_586);
    tcase_add_test(tc_exp, s21_exp_587);
    tcase_add_test(tc_exp, s21_exp_588);
    tcase_add_test(tc_exp, s21_exp_589);
    tcase_add_test(tc_exp, s21_exp_590);
    tcase_add_test(tc_exp, s21_exp_591);
    tcase_add_test(tc_exp, s21_exp_592);
    tcase_add_test(tc_exp, s21_exp_593);
    tcase_add_test(tc_exp, s21_exp_594);
    tcase_add_test(tc_exp, s21_exp_595);
    tcase_add_test(tc_exp, s21_exp_596);
    tcase_add_test(tc_exp, s21_exp_597);
    tcase_add_test(tc_exp, s21_exp_598);
    tcase_add_test(tc_exp, s21_exp_599);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief seventh set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_seventh_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp seventh case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_600);
    tcase_add_test(tc_exp, s21_exp_601);
    tcase_add_test(tc_exp, s21_exp_602);
    tcase_add_test(tc_exp, s21_exp_603);
    tcase_add_test(tc_exp, s21_exp_604);
    tcase_add_test(tc_exp, s21_exp_605);
    tcase_add_test(tc_exp, s21_exp_606);
    tcase_add_test(tc_exp, s21_exp_607);
    tcase_add_test(tc_exp, s21_exp_608);
    tcase_add_test(tc_exp, s21_exp_609);
    tcase_add_test(tc_exp, s21_exp_610);
    tcase_add_test(tc_exp, s21_exp_611);
    tcase_add_test(tc_exp, s21_exp_612);
    tcase_add_test(tc_exp, s21_exp_613);
    tcase_add_test(tc_exp, s21_exp_614);
    tcase_add_test(tc_exp, s21_exp_615);
    tcase_add_test(tc_exp, s21_exp_616);
    tcase_add_test(tc_exp, s21_exp_617);
    tcase_add_test(tc_exp, s21_exp_618);
    tcase_add_test(tc_exp, s21_exp_619);
    tcase_add_test(tc_exp, s21_exp_620);
    tcase_add_test(tc_exp, s21_exp_621);
    tcase_add_test(tc_exp, s21_exp_622);
    tcase_add_test(tc_exp, s21_exp_623);
    tcase_add_test(tc_exp, s21_exp_624);
    tcase_add_test(tc_exp, s21_exp_625);
    tcase_add_test(tc_exp, s21_exp_626);
    tcase_add_test(tc_exp, s21_exp_627);
    tcase_add_test(tc_exp, s21_exp_628);
    tcase_add_test(tc_exp, s21_exp_629);
    tcase_add_test(tc_exp, s21_exp_630);
    tcase_add_test(tc_exp, s21_exp_631);
    tcase_add_test(tc_exp, s21_exp_632);
    tcase_add_test(tc_exp, s21_exp_633);
    tcase_add_test(tc_exp, s21_exp_634);
    tcase_add_test(tc_exp, s21_exp_635);
    tcase_add_test(tc_exp, s21_exp_636);
    tcase_add_test(tc_exp, s21_exp_637);
    tcase_add_test(tc_exp, s21_exp_638);
    tcase_add_test(tc_exp, s21_exp_639);
    tcase_add_test(tc_exp, s21_exp_640);
    tcase_add_test(tc_exp, s21_exp_641);
    tcase_add_test(tc_exp, s21_exp_642);
    tcase_add_test(tc_exp, s21_exp_643);
    tcase_add_test(tc_exp, s21_exp_644);
    tcase_add_test(tc_exp, s21_exp_645);
    tcase_add_test(tc_exp, s21_exp_646);
    tcase_add_test(tc_exp, s21_exp_647);
    tcase_add_test(tc_exp, s21_exp_648);
    tcase_add_test(tc_exp, s21_exp_649);
    tcase_add_test(tc_exp, s21_exp_650);
    tcase_add_test(tc_exp, s21_exp_651);
    tcase_add_test(tc_exp, s21_exp_652);
    tcase_add_test(tc_exp, s21_exp_653);
    tcase_add_test(tc_exp, s21_exp_654);
    tcase_add_test(tc_exp, s21_exp_655);
    tcase_add_test(tc_exp, s21_exp_656);
    tcase_add_test(tc_exp, s21_exp_657);
    tcase_add_test(tc_exp, s21_exp_658);
    tcase_add_test(tc_exp, s21_exp_659);
    tcase_add_test(tc_exp, s21_exp_660);
    tcase_add_test(tc_exp, s21_exp_661);
    tcase_add_test(tc_exp, s21_exp_662);
    tcase_add_test(tc_exp, s21_exp_663);
    tcase_add_test(tc_exp, s21_exp_664);
    tcase_add_test(tc_exp, s21_exp_665);
    tcase_add_test(tc_exp, s21_exp_666);
    tcase_add_test(tc_exp, s21_exp_667);
    tcase_add_test(tc_exp, s21_exp_668);
    tcase_add_test(tc_exp, s21_exp_669);
    tcase_add_test(tc_exp, s21_exp_670);
    tcase_add_test(tc_exp, s21_exp_671);
    tcase_add_test(tc_exp, s21_exp_672);
    tcase_add_test(tc_exp, s21_exp_673);
    tcase_add_test(tc_exp, s21_exp_674);
    tcase_add_test(tc_exp, s21_exp_675);
    tcase_add_test(tc_exp, s21_exp_676);
    tcase_add_test(tc_exp, s21_exp_677);
    tcase_add_test(tc_exp, s21_exp_678);
    tcase_add_test(tc_exp, s21_exp_679);
    tcase_add_test(tc_exp, s21_exp_680);
    tcase_add_test(tc_exp, s21_exp_681);
    tcase_add_test(tc_exp, s21_exp_682);
    tcase_add_test(tc_exp, s21_exp_683);
    tcase_add_test(tc_exp, s21_exp_684);
    tcase_add_test(tc_exp, s21_exp_685);
    tcase_add_test(tc_exp, s21_exp_686);
    tcase_add_test(tc_exp, s21_exp_687);
    tcase_add_test(tc_exp, s21_exp_688);
    tcase_add_test(tc_exp, s21_exp_689);
    tcase_add_test(tc_exp, s21_exp_690);
    tcase_add_test(tc_exp, s21_exp_691);
    tcase_add_test(tc_exp, s21_exp_692);
    tcase_add_test(tc_exp, s21_exp_693);
    tcase_add_test(tc_exp, s21_exp_694);
    tcase_add_test(tc_exp, s21_exp_695);
    tcase_add_test(tc_exp, s21_exp_696);
    tcase_add_test(tc_exp, s21_exp_697);
    tcase_add_test(tc_exp, s21_exp_698);
    tcase_add_test(tc_exp, s21_exp_699);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief eighth set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_eighth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp eighth case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_700);
    tcase_add_test(tc_exp, s21_exp_701);
    tcase_add_test(tc_exp, s21_exp_702);
    tcase_add_test(tc_exp, s21_exp_703);
    tcase_add_test(tc_exp, s21_exp_704);
    tcase_add_test(tc_exp, s21_exp_705);
    tcase_add_test(tc_exp, s21_exp_706);
    tcase_add_test(tc_exp, s21_exp_707);
    tcase_add_test(tc_exp, s21_exp_708);
    tcase_add_test(tc_exp, s21_exp_709);
    tcase_add_test(tc_exp, s21_exp_710);
    tcase_add_test(tc_exp, s21_exp_711);
    tcase_add_test(tc_exp, s21_exp_712);
    tcase_add_test(tc_exp, s21_exp_713);
    tcase_add_test(tc_exp, s21_exp_714);
    tcase_add_test(tc_exp, s21_exp_715);
    tcase_add_test(tc_exp, s21_exp_716);
    tcase_add_test(tc_exp, s21_exp_717);
    tcase_add_test(tc_exp, s21_exp_718);
    tcase_add_test(tc_exp, s21_exp_719);
    tcase_add_test(tc_exp, s21_exp_720);
    tcase_add_test(tc_exp, s21_exp_721);
    tcase_add_test(tc_exp, s21_exp_722);
    tcase_add_test(tc_exp, s21_exp_723);
    tcase_add_test(tc_exp, s21_exp_724);
    tcase_add_test(tc_exp, s21_exp_725);
    tcase_add_test(tc_exp, s21_exp_726);
    tcase_add_test(tc_exp, s21_exp_727);
    tcase_add_test(tc_exp, s21_exp_728);
    tcase_add_test(tc_exp, s21_exp_729);
    tcase_add_test(tc_exp, s21_exp_730);
    tcase_add_test(tc_exp, s21_exp_731);
    tcase_add_test(tc_exp, s21_exp_732);
    tcase_add_test(tc_exp, s21_exp_733);
    tcase_add_test(tc_exp, s21_exp_734);
    tcase_add_test(tc_exp, s21_exp_735);
    tcase_add_test(tc_exp, s21_exp_736);
    tcase_add_test(tc_exp, s21_exp_737);
    tcase_add_test(tc_exp, s21_exp_738);
    tcase_add_test(tc_exp, s21_exp_739);
    tcase_add_test(tc_exp, s21_exp_740);
    tcase_add_test(tc_exp, s21_exp_741);
    tcase_add_test(tc_exp, s21_exp_742);
    tcase_add_test(tc_exp, s21_exp_743);
    tcase_add_test(tc_exp, s21_exp_744);
    tcase_add_test(tc_exp, s21_exp_745);
    tcase_add_test(tc_exp, s21_exp_746);
    tcase_add_test(tc_exp, s21_exp_747);
    tcase_add_test(tc_exp, s21_exp_748);
    tcase_add_test(tc_exp, s21_exp_749);
    tcase_add_test(tc_exp, s21_exp_750);
    tcase_add_test(tc_exp, s21_exp_751);
    tcase_add_test(tc_exp, s21_exp_752);
    tcase_add_test(tc_exp, s21_exp_753);
    tcase_add_test(tc_exp, s21_exp_754);
    tcase_add_test(tc_exp, s21_exp_755);
    tcase_add_test(tc_exp, s21_exp_756);
    tcase_add_test(tc_exp, s21_exp_757);
    tcase_add_test(tc_exp, s21_exp_758);
    tcase_add_test(tc_exp, s21_exp_759);
    tcase_add_test(tc_exp, s21_exp_760);
    tcase_add_test(tc_exp, s21_exp_761);
    tcase_add_test(tc_exp, s21_exp_762);
    tcase_add_test(tc_exp, s21_exp_763);
    tcase_add_test(tc_exp, s21_exp_764);
    tcase_add_test(tc_exp, s21_exp_765);
    tcase_add_test(tc_exp, s21_exp_766);
    tcase_add_test(tc_exp, s21_exp_767);
    tcase_add_test(tc_exp, s21_exp_768);
    tcase_add_test(tc_exp, s21_exp_769);
    tcase_add_test(tc_exp, s21_exp_770);
    tcase_add_test(tc_exp, s21_exp_771);
    tcase_add_test(tc_exp, s21_exp_772);
    tcase_add_test(tc_exp, s21_exp_773);
    tcase_add_test(tc_exp, s21_exp_774);
    tcase_add_test(tc_exp, s21_exp_775);
    tcase_add_test(tc_exp, s21_exp_776);
    tcase_add_test(tc_exp, s21_exp_777);
    tcase_add_test(tc_exp, s21_exp_778);
    tcase_add_test(tc_exp, s21_exp_779);
    tcase_add_test(tc_exp, s21_exp_780);
    tcase_add_test(tc_exp, s21_exp_781);
    tcase_add_test(tc_exp, s21_exp_782);
    tcase_add_test(tc_exp, s21_exp_783);
    tcase_add_test(tc_exp, s21_exp_784);
    tcase_add_test(tc_exp, s21_exp_785);
    tcase_add_test(tc_exp, s21_exp_786);
    tcase_add_test(tc_exp, s21_exp_787);
    tcase_add_test(tc_exp, s21_exp_788);
    tcase_add_test(tc_exp, s21_exp_789);
    tcase_add_test(tc_exp, s21_exp_790);
    tcase_add_test(tc_exp, s21_exp_791);
    tcase_add_test(tc_exp, s21_exp_792);
    tcase_add_test(tc_exp, s21_exp_793);
    tcase_add_test(tc_exp, s21_exp_794);
    tcase_add_test(tc_exp, s21_exp_795);
    tcase_add_test(tc_exp, s21_exp_796);
    tcase_add_test(tc_exp, s21_exp_797);
    tcase_add_test(tc_exp, s21_exp_798);
    tcase_add_test(tc_exp, s21_exp_799);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief ninth set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_ninth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp ninth case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_800);
    tcase_add_test(tc_exp, s21_exp_801);
    tcase_add_test(tc_exp, s21_exp_802);
    tcase_add_test(tc_exp, s21_exp_803);
    tcase_add_test(tc_exp, s21_exp_804);
    tcase_add_test(tc_exp, s21_exp_805);
    tcase_add_test(tc_exp, s21_exp_806);
    tcase_add_test(tc_exp, s21_exp_807);
    tcase_add_test(tc_exp, s21_exp_808);
    tcase_add_test(tc_exp, s21_exp_809);
    tcase_add_test(tc_exp, s21_exp_810);
    tcase_add_test(tc_exp, s21_exp_811);
    tcase_add_test(tc_exp, s21_exp_812);
    tcase_add_test(tc_exp, s21_exp_813);
    tcase_add_test(tc_exp, s21_exp_814);
    tcase_add_test(tc_exp, s21_exp_815);
    tcase_add_test(tc_exp, s21_exp_816);
    tcase_add_test(tc_exp, s21_exp_817);
    tcase_add_test(tc_exp, s21_exp_818);
    tcase_add_test(tc_exp, s21_exp_819);
    tcase_add_test(tc_exp, s21_exp_820);
    tcase_add_test(tc_exp, s21_exp_821);
    tcase_add_test(tc_exp, s21_exp_822);
    tcase_add_test(tc_exp, s21_exp_823);
    tcase_add_test(tc_exp, s21_exp_824);
    tcase_add_test(tc_exp, s21_exp_825);
    tcase_add_test(tc_exp, s21_exp_826);
    tcase_add_test(tc_exp, s21_exp_827);
    tcase_add_test(tc_exp, s21_exp_828);
    tcase_add_test(tc_exp, s21_exp_829);
    tcase_add_test(tc_exp, s21_exp_830);
    tcase_add_test(tc_exp, s21_exp_831);
    tcase_add_test(tc_exp, s21_exp_832);
    tcase_add_test(tc_exp, s21_exp_833);
    tcase_add_test(tc_exp, s21_exp_834);
    tcase_add_test(tc_exp, s21_exp_835);
    tcase_add_test(tc_exp, s21_exp_836);
    tcase_add_test(tc_exp, s21_exp_837);
    tcase_add_test(tc_exp, s21_exp_838);
    tcase_add_test(tc_exp, s21_exp_839);
    tcase_add_test(tc_exp, s21_exp_840);
    tcase_add_test(tc_exp, s21_exp_841);
    tcase_add_test(tc_exp, s21_exp_842);
    tcase_add_test(tc_exp, s21_exp_843);
    tcase_add_test(tc_exp, s21_exp_844);
    tcase_add_test(tc_exp, s21_exp_845);
    tcase_add_test(tc_exp, s21_exp_846);
    tcase_add_test(tc_exp, s21_exp_847);
    tcase_add_test(tc_exp, s21_exp_848);
    tcase_add_test(tc_exp, s21_exp_849);
    tcase_add_test(tc_exp, s21_exp_850);
    tcase_add_test(tc_exp, s21_exp_851);
    tcase_add_test(tc_exp, s21_exp_852);
    tcase_add_test(tc_exp, s21_exp_853);
    tcase_add_test(tc_exp, s21_exp_854);
    tcase_add_test(tc_exp, s21_exp_855);
    tcase_add_test(tc_exp, s21_exp_856);
    tcase_add_test(tc_exp, s21_exp_857);
    tcase_add_test(tc_exp, s21_exp_858);
    tcase_add_test(tc_exp, s21_exp_859);
    tcase_add_test(tc_exp, s21_exp_860);
    tcase_add_test(tc_exp, s21_exp_861);
    tcase_add_test(tc_exp, s21_exp_862);
    tcase_add_test(tc_exp, s21_exp_863);
    tcase_add_test(tc_exp, s21_exp_864);
    tcase_add_test(tc_exp, s21_exp_865);
    tcase_add_test(tc_exp, s21_exp_866);
    tcase_add_test(tc_exp, s21_exp_867);
    tcase_add_test(tc_exp, s21_exp_868);
    tcase_add_test(tc_exp, s21_exp_869);
    tcase_add_test(tc_exp, s21_exp_870);
    tcase_add_test(tc_exp, s21_exp_871);
    tcase_add_test(tc_exp, s21_exp_872);
    tcase_add_test(tc_exp, s21_exp_873);
    tcase_add_test(tc_exp, s21_exp_874);
    tcase_add_test(tc_exp, s21_exp_875);
    tcase_add_test(tc_exp, s21_exp_876);
    tcase_add_test(tc_exp, s21_exp_877);
    tcase_add_test(tc_exp, s21_exp_878);
    tcase_add_test(tc_exp, s21_exp_879);
    tcase_add_test(tc_exp, s21_exp_880);
    tcase_add_test(tc_exp, s21_exp_881);
    tcase_add_test(tc_exp, s21_exp_882);
    tcase_add_test(tc_exp, s21_exp_883);
    tcase_add_test(tc_exp, s21_exp_884);
    tcase_add_test(tc_exp, s21_exp_885);
    tcase_add_test(tc_exp, s21_exp_886);
    tcase_add_test(tc_exp, s21_exp_887);
    tcase_add_test(tc_exp, s21_exp_888);
    tcase_add_test(tc_exp, s21_exp_889);
    tcase_add_test(tc_exp, s21_exp_890);
    tcase_add_test(tc_exp, s21_exp_891);
    tcase_add_test(tc_exp, s21_exp_892);
    tcase_add_test(tc_exp, s21_exp_893);
    tcase_add_test(tc_exp, s21_exp_894);
    tcase_add_test(tc_exp, s21_exp_895);
    tcase_add_test(tc_exp, s21_exp_896);
    tcase_add_test(tc_exp, s21_exp_897);
    tcase_add_test(tc_exp, s21_exp_898);
    tcase_add_test(tc_exp, s21_exp_899);
    suite_add_tcase(math, tc_exp);

    return math;
}

/**
 * @brief tenth set of tests
 *
 * @return Suite*
 */
Suite *s21_exp_tenth_case(void)
{
    Suite *math = suite_create("\ns21_math (s21_exp tenth case)\n");

    TCase *tc_exp = tcase_create("test_exp");
    tcase_add_test(tc_exp, s21_exp_900);
    tcase_add_test(tc_exp, s21_exp_901);
    tcase_add_test(tc_exp, s21_exp_902);
    tcase_add_test(tc_exp, s21_exp_903);
    tcase_add_test(tc_exp, s21_exp_904);
    tcase_add_test(tc_exp, s21_exp_905);
    tcase_add_test(tc_exp, s21_exp_906);
    tcase_add_test(tc_exp, s21_exp_907);
    tcase_add_test(tc_exp, s21_exp_908);
    tcase_add_test(tc_exp, s21_exp_909);
    tcase_add_test(tc_exp, s21_exp_910);
    tcase_add_test(tc_exp, s21_exp_911);
    tcase_add_test(tc_exp, s21_exp_912);
    tcase_add_test(tc_exp, s21_exp_913);
    tcase_add_test(tc_exp, s21_exp_914);
    tcase_add_test(tc_exp, s21_exp_915);
    tcase_add_test(tc_exp, s21_exp_916);
    tcase_add_test(tc_exp, s21_exp_917);
    tcase_add_test(tc_exp, s21_exp_918);
    tcase_add_test(tc_exp, s21_exp_919);
    tcase_add_test(tc_exp, s21_exp_920);
    tcase_add_test(tc_exp, s21_exp_921);
    tcase_add_test(tc_exp, s21_exp_922);
    tcase_add_test(tc_exp, s21_exp_923);
    tcase_add_test(tc_exp, s21_exp_924);
    tcase_add_test(tc_exp, s21_exp_925);
    tcase_add_test(tc_exp, s21_exp_926);
    tcase_add_test(tc_exp, s21_exp_927);
    tcase_add_test(tc_exp, s21_exp_928);
    tcase_add_test(tc_exp, s21_exp_929);
    tcase_add_test(tc_exp, s21_exp_930);
    tcase_add_test(tc_exp, s21_exp_931);
    tcase_add_test(tc_exp, s21_exp_932);
    tcase_add_test(tc_exp, s21_exp_933);
    tcase_add_test(tc_exp, s21_exp_934);
    tcase_add_test(tc_exp, s21_exp_935);
    tcase_add_test(tc_exp, s21_exp_936);
    tcase_add_test(tc_exp, s21_exp_937);
    tcase_add_test(tc_exp, s21_exp_938);
    tcase_add_test(tc_exp, s21_exp_939);
    tcase_add_test(tc_exp, s21_exp_940);
    tcase_add_test(tc_exp, s21_exp_941);
    tcase_add_test(tc_exp, s21_exp_942);
    tcase_add_test(tc_exp, s21_exp_943);
    tcase_add_test(tc_exp, s21_exp_944);
    tcase_add_test(tc_exp, s21_exp_945);
    tcase_add_test(tc_exp, s21_exp_946);
    tcase_add_test(tc_exp, s21_exp_947);
    tcase_add_test(tc_exp, s21_exp_948);
    tcase_add_test(tc_exp, s21_exp_949);
    tcase_add_test(tc_exp, s21_exp_950);
    tcase_add_test(tc_exp, s21_exp_951);
    tcase_add_test(tc_exp, s21_exp_952);
    tcase_add_test(tc_exp, s21_exp_953);
    tcase_add_test(tc_exp, s21_exp_954);
    tcase_add_test(tc_exp, s21_exp_955);
    tcase_add_test(tc_exp, s21_exp_956);
    tcase_add_test(tc_exp, s21_exp_957);
    tcase_add_test(tc_exp, s21_exp_958);
    tcase_add_test(tc_exp, s21_exp_959);
    tcase_add_test(tc_exp, s21_exp_960);
    tcase_add_test(tc_exp, s21_exp_961);
    tcase_add_test(tc_exp, s21_exp_962);
    tcase_add_test(tc_exp, s21_exp_963);
    tcase_add_test(tc_exp, s21_exp_964);
    tcase_add_test(tc_exp, s21_exp_965);
    tcase_add_test(tc_exp, s21_exp_966);
    tcase_add_test(tc_exp, s21_exp_967);
    tcase_add_test(tc_exp, s21_exp_968);
    tcase_add_test(tc_exp, s21_exp_969);
    tcase_add_test(tc_exp, s21_exp_970);
    tcase_add_test(tc_exp, s21_exp_971);
    tcase_add_test(tc_exp, s21_exp_972);
    tcase_add_test(tc_exp, s21_exp_973);
    tcase_add_test(tc_exp, s21_exp_974);
    tcase_add_test(tc_exp, s21_exp_975);
    tcase_add_test(tc_exp, s21_exp_976);
    tcase_add_test(tc_exp, s21_exp_977);
    tcase_add_test(tc_exp, s21_exp_978);
    tcase_add_test(tc_exp, s21_exp_979);
    tcase_add_test(tc_exp, s21_exp_980);
    tcase_add_test(tc_exp, s21_exp_981);
    tcase_add_test(tc_exp, s21_exp_982);
    tcase_add_test(tc_exp, s21_exp_983);
    tcase_add_test(tc_exp, s21_exp_984);
    tcase_add_test(tc_exp, s21_exp_985);
    tcase_add_test(tc_exp, s21_exp_986);
    tcase_add_test(tc_exp, s21_exp_987);
    tcase_add_test(tc_exp, s21_exp_988);
    tcase_add_test(tc_exp, s21_exp_989);
    tcase_add_test(tc_exp, s21_exp_990);
    tcase_add_test(tc_exp, s21_exp_991);
    tcase_add_test(tc_exp, s21_exp_992);
    tcase_add_test(tc_exp, s21_exp_993);
    tcase_add_test(tc_exp, s21_exp_994);
    tcase_add_test(tc_exp, s21_exp_995);
    tcase_add_test(tc_exp, s21_exp_996);
    tcase_add_test(tc_exp, s21_exp_997);
    tcase_add_test(tc_exp, s21_exp_998);
    tcase_add_test(tc_exp, s21_exp_999);
    suite_add_tcase(math, tc_exp);

    return math;
}




//------------------------------------------------------------------------------

/**
 * @brief Quickly check the functionality of the module s21_exp.
 *
 * @param[in] value Euler exponent.
 */
void s21_test_exp(double value) {
  long double original_func = exp(value);
  long double implementation = s21_exp(value);

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
  } else {
    printf("Test result: \033[0;32mTEST PASSED!\033[0m\n\n");
  }

#ifdef DEBUG
  s21_test_print(original_func, implementation);
#endif

  ck_assert_double_eq_tol(first, second, COMPARE_ACCURACY);
}
