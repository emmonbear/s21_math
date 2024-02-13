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

/// @brief \f[
/// log(123456789012345678901232123123312123123901234567890.123456789) =
/// 115.339976 \f]
START_TEST(s21_log_0) {
  double value = 123456789012345678901232123123312123123901234567890.123456789;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456790246913569024688912135657802025135802458013.246913578) =
/// 115.339976 \f]
START_TEST(s21_log_1) {
  double value = 123456790246913569024688912135657802025135802458013.246913578;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456791481481459148145701148003480926370370348136.370370367) =
/// 115.339976 \f]
START_TEST(s21_log_2) {
  double value = 123456791481481459148145701148003480926370370348136.370370367;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456792716049349271602490160349159827604938238259.493827156) =
/// 115.339976 \f]
START_TEST(s21_log_3) {
  double value = 123456792716049349271602490160349159827604938238259.493827156;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456793950617239395059279172694838728839506128382.617283945) =
/// 115.339976 \f]
START_TEST(s21_log_4) {
  double value = 123456793950617239395059279172694838728839506128382.617283945;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456795185185129518516068185040517630074074018505.740740734) =
/// 115.339976 \f]
START_TEST(s21_log_5) {
  double value = 123456795185185129518516068185040517630074074018505.740740734;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456796419753019641972857197386196531308641908628.864197523) =
/// 115.339976 \f]
START_TEST(s21_log_6) {
  double value = 123456796419753019641972857197386196531308641908628.864197523;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456797654320909765429646209731875432543209798751.987654312) =
/// 115.339976 \f]
START_TEST(s21_log_7) {
  double value = 123456797654320909765429646209731875432543209798751.987654312;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456798888888799888886435222077554333777777688875.111111101) =
/// 115.339976 \f]
START_TEST(s21_log_8) {
  double value = 123456798888888799888886435222077554333777777688875.111111101;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456800123456690012343224234423233235012345578998.234567890) =
/// 115.339976 \f]
START_TEST(s21_log_9) {
  double value = 123456800123456690012343224234423233235012345578998.234567890;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456801358024580135800013246768912136246913469121.358024679) =
/// 115.339976 \f]
START_TEST(s21_log_10) {
  double value = 123456801358024580135800013246768912136246913469121.358024679;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456802592592470259256802259114591037481481359244.481481468) =
/// 115.339976 \f]
START_TEST(s21_log_11) {
  double value = 123456802592592470259256802259114591037481481359244.481481468;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456803827160360382713591271460269938716049249367.604938257) =
/// 115.339976 \f]
START_TEST(s21_log_12) {
  double value = 123456803827160360382713591271460269938716049249367.604938257;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456805061728250506170380283805948839950617139490.728395046) =
/// 115.339976 \f]
START_TEST(s21_log_13) {
  double value = 123456805061728250506170380283805948839950617139490.728395046;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456806296296140629627169296151627741185185029613.851851835) =
/// 115.339976 \f]
START_TEST(s21_log_14) {
  double value = 123456806296296140629627169296151627741185185029613.851851835;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456807530864030753083958308497306642419752919736.975308624) =
/// 115.339976 \f]
START_TEST(s21_log_15) {
  double value = 123456807530864030753083958308497306642419752919736.975308624;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456808765431920876540747320842985543654320809860.098765413) =
/// 115.339976 \f]
START_TEST(s21_log_16) {
  double value = 123456808765431920876540747320842985543654320809860.098765413;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456809999999810999997536333188664444888888699983.222222202) =
/// 115.339976 \f]
START_TEST(s21_log_17) {
  double value = 123456809999999810999997536333188664444888888699983.222222202;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456811234567701123454325345534343346123456590106.345678991) =
/// 115.339976 \f]
START_TEST(s21_log_18) {
  double value = 123456811234567701123454325345534343346123456590106.345678991;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456812469135591246911114357880022247358024480229.469135780) =
/// 115.339976 \f]
START_TEST(s21_log_19) {
  double value = 123456812469135591246911114357880022247358024480229.469135780;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456813703703481370367903370225701148592592370352.592592569) =
/// 115.339976 \f]
START_TEST(s21_log_20) {
  double value = 123456813703703481370367903370225701148592592370352.592592569;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456814938271371493824692382571380049827160260475.716049358) =
/// 115.339976 \f]
START_TEST(s21_log_21) {
  double value = 123456814938271371493824692382571380049827160260475.716049358;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456816172839261617281481394917058951061728150598.839506147) =
/// 115.339976 \f]
START_TEST(s21_log_22) {
  double value = 123456816172839261617281481394917058951061728150598.839506147;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456817407407151740738270407262737852296296040721.962962936) =
/// 115.339976 \f]
START_TEST(s21_log_23) {
  double value = 123456817407407151740738270407262737852296296040721.962962936;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456818641975041864195059419608416753530863930845.086419725) =
/// 115.339976 \f]
START_TEST(s21_log_24) {
  double value = 123456818641975041864195059419608416753530863930845.086419725;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456819876542931987651848431954095654765431820968.209876514) =
/// 115.339976 \f]
START_TEST(s21_log_25) {
  double value = 123456819876542931987651848431954095654765431820968.209876514;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456821111110822111108637444299774555999999711091.333333303) =
/// 115.339976 \f]
START_TEST(s21_log_26) {
  double value = 123456821111110822111108637444299774555999999711091.333333303;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456822345678712234565426456645453457234567601214.456790092) =
/// 115.339976 \f]
START_TEST(s21_log_27) {
  double value = 123456822345678712234565426456645453457234567601214.456790092;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456823580246602358022215468991132358469135491337.580246881) =
/// 115.339976 \f]
START_TEST(s21_log_28) {
  double value = 123456823580246602358022215468991132358469135491337.580246881;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456824814814492481479004481336811259703703381460.703703670) =
/// 115.339976 \f]
START_TEST(s21_log_29) {
  double value = 123456824814814492481479004481336811259703703381460.703703670;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456826049382382604935793493682490160938271271583.827160459) =
/// 115.339976 \f]
START_TEST(s21_log_30) {
  double value = 123456826049382382604935793493682490160938271271583.827160459;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456827283950272728392582506028169062172839161706.950617248) =
/// 115.339976 \f]
START_TEST(s21_log_31) {
  double value = 123456827283950272728392582506028169062172839161706.950617248;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456828518518162851849371518373847963407407051830.074074037) =
/// 115.339976 \f]
START_TEST(s21_log_32) {
  double value = 123456828518518162851849371518373847963407407051830.074074037;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456829753086052975306160530719526864641974941953.197530826) =
/// 115.339976 \f]
START_TEST(s21_log_33) {
  double value = 123456829753086052975306160530719526864641974941953.197530826;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456830987653943098762949543065205765876542832076.320987615) =
/// 115.339976 \f]
START_TEST(s21_log_34) {
  double value = 123456830987653943098762949543065205765876542832076.320987615;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456832222221833222219738555410884667111110722199.444444404) =
/// 115.339976 \f]
START_TEST(s21_log_35) {
  double value = 123456832222221833222219738555410884667111110722199.444444404;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456833456789723345676527567756563568345678612322.567901193) =
/// 115.339976 \f]
START_TEST(s21_log_36) {
  double value = 123456833456789723345676527567756563568345678612322.567901193;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456834691357613469133316580102242469580246502445.691357982) =
/// 115.339976 \f]
START_TEST(s21_log_37) {
  double value = 123456834691357613469133316580102242469580246502445.691357982;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456835925925503592590105592447921370814814392568.814814771) =
/// 115.339976 \f]
START_TEST(s21_log_38) {
  double value = 123456835925925503592590105592447921370814814392568.814814771;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456837160493393716046894604793600272049382282691.938271560) =
/// 115.339976 \f]
START_TEST(s21_log_39) {
  double value = 123456837160493393716046894604793600272049382282691.938271560;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456838395061283839503683617139279173283950172815.061728349) =
/// 115.339976 \f]
START_TEST(s21_log_40) {
  double value = 123456838395061283839503683617139279173283950172815.061728349;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456839629629173962960472629484958074518518062938.185185138) =
/// 115.339976 \f]
START_TEST(s21_log_41) {
  double value = 123456839629629173962960472629484958074518518062938.185185138;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456840864197064086417261641830636975753085953061.308641927) =
/// 115.339976 \f]
START_TEST(s21_log_42) {
  double value = 123456840864197064086417261641830636975753085953061.308641927;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456842098764954209874050654176315876987653843184.432098716) =
/// 115.339976 \f]
START_TEST(s21_log_43) {
  double value = 123456842098764954209874050654176315876987653843184.432098716;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456843333332844333330839666521994778222221733307.555555505) =
/// 115.339976 \f]
START_TEST(s21_log_44) {
  double value = 123456843333332844333330839666521994778222221733307.555555505;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456844567900734456787628678867673679456789623430.679012294) =
/// 115.339976 \f]
START_TEST(s21_log_45) {
  double value = 123456844567900734456787628678867673679456789623430.679012294;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456845802468624580244417691213352580691357513553.802469083) =
/// 115.339976 \f]
START_TEST(s21_log_46) {
  double value = 123456845802468624580244417691213352580691357513553.802469083;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456847037036514703701206703559031481925925403676.925925872) =
/// 115.339976 \f]
START_TEST(s21_log_47) {
  double value = 123456847037036514703701206703559031481925925403676.925925872;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456848271604404827157995715904710383160493293800.049382661) =
/// 115.339976 \f]
START_TEST(s21_log_48) {
  double value = 123456848271604404827157995715904710383160493293800.049382661;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456849506172294950614784728250389284395061183923.172839450) =
/// 115.339976 \f]
START_TEST(s21_log_49) {
  double value = 123456849506172294950614784728250389284395061183923.172839450;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456850740740185074071573740596068185629629074046.296296239) =
/// 115.339976 \f]
START_TEST(s21_log_50) {
  double value = 123456850740740185074071573740596068185629629074046.296296239;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456851975308075197528362752941747086864196964169.419753028) =
/// 115.339976 \f]
START_TEST(s21_log_51) {
  double value = 123456851975308075197528362752941747086864196964169.419753028;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456853209875965320985151765287425988098764854292.543209817) =
/// 115.339976 \f]
START_TEST(s21_log_52) {
  double value = 123456853209875965320985151765287425988098764854292.543209817;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456854444443855444441940777633104889333332744415.666666606) =
/// 115.339976 \f]
START_TEST(s21_log_53) {
  double value = 123456854444443855444441940777633104889333332744415.666666606;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456855679011745567898729789978783790567900634538.790123395) =
/// 115.339976 \f]
START_TEST(s21_log_54) {
  double value = 123456855679011745567898729789978783790567900634538.790123395;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456856913579635691355518802324462691802468524661.913580184) =
/// 115.339976 \f]
START_TEST(s21_log_55) {
  double value = 123456856913579635691355518802324462691802468524661.913580184;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456858148147525814812307814670141593037036414785.037036973) =
/// 115.339976 \f]
START_TEST(s21_log_56) {
  double value = 123456858148147525814812307814670141593037036414785.037036973;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456859382715415938269096827015820494271604304908.160493762) =
/// 115.339976 \f]
START_TEST(s21_log_57) {
  double value = 123456859382715415938269096827015820494271604304908.160493762;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456860617283306061725885839361499395506172195031.283950551) =
/// 115.339976 \f]
START_TEST(s21_log_58) {
  double value = 123456860617283306061725885839361499395506172195031.283950551;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456861851851196185182674851707178296740740085154.407407340) =
/// 115.339976 \f]
START_TEST(s21_log_59) {
  double value = 123456861851851196185182674851707178296740740085154.407407340;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456863086419086308639463864052857197975307975277.530864129) =
/// 115.339976 \f]
START_TEST(s21_log_60) {
  double value = 123456863086419086308639463864052857197975307975277.530864129;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456864320986976432096252876398536099209875865400.654320918) =
/// 115.339976 \f]
START_TEST(s21_log_61) {
  double value = 123456864320986976432096252876398536099209875865400.654320918;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456865555554866555553041888744215000444443755523.777777707) =
/// 115.339976 \f]
START_TEST(s21_log_62) {
  double value = 123456865555554866555553041888744215000444443755523.777777707;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456866790122756679009830901089893901679011645646.901234496) =
/// 115.339976 \f]
START_TEST(s21_log_63) {
  double value = 123456866790122756679009830901089893901679011645646.901234496;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456868024690646802466619913435572802913579535770.024691285) =
/// 115.339976 \f]
START_TEST(s21_log_64) {
  double value = 123456868024690646802466619913435572802913579535770.024691285;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456869259258536925923408925781251704148147425893.148148074) =
/// 115.339976 \f]
START_TEST(s21_log_65) {
  double value = 123456869259258536925923408925781251704148147425893.148148074;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456870493826427049380197938126930605382715316016.271604863) =
/// 115.339976 \f]
START_TEST(s21_log_66) {
  double value = 123456870493826427049380197938126930605382715316016.271604863;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456871728394317172836986950472609506617283206139.395061652) =
/// 115.339976 \f]
START_TEST(s21_log_67) {
  double value = 123456871728394317172836986950472609506617283206139.395061652;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456872962962207296293775962818288407851851096262.518518441) =
/// 115.339976 \f]
START_TEST(s21_log_68) {
  double value = 123456872962962207296293775962818288407851851096262.518518441;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456874197530097419750564975163967309086418986385.641975230) =
/// 115.339976 \f]
START_TEST(s21_log_69) {
  double value = 123456874197530097419750564975163967309086418986385.641975230;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456875432097987543207353987509646210320986876508.765432019) =
/// 115.339976 \f]
START_TEST(s21_log_70) {
  double value = 123456875432097987543207353987509646210320986876508.765432019;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456876666665877666664142999855325111555554766631.888888808) =
/// 115.339976 \f]
START_TEST(s21_log_71) {
  double value = 123456876666665877666664142999855325111555554766631.888888808;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456877901233767790120932012201004012790122656755.012345597) =
/// 115.339976 \f]
START_TEST(s21_log_72) {
  double value = 123456877901233767790120932012201004012790122656755.012345597;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456879135801657913577721024546682914024690546878.135802386) =
/// 115.339976 \f]
START_TEST(s21_log_73) {
  double value = 123456879135801657913577721024546682914024690546878.135802386;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456880370369548037034510036892361815259258437001.259259175) =
/// 115.339976 \f]
START_TEST(s21_log_74) {
  double value = 123456880370369548037034510036892361815259258437001.259259175;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456881604937438160491299049238040716493826327124.382715964) =
/// 115.339976 \f]
START_TEST(s21_log_75) {
  double value = 123456881604937438160491299049238040716493826327124.382715964;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456882839505328283948088061583719617728394217247.506172753) =
/// 115.339976 \f]
START_TEST(s21_log_76) {
  double value = 123456882839505328283948088061583719617728394217247.506172753;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456884074073218407404877073929398518962962107370.629629542) =
/// 115.339976 \f]
START_TEST(s21_log_77) {
  double value = 123456884074073218407404877073929398518962962107370.629629542;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456885308641108530861666086275077420197529997493.753086331) =
/// 115.339976 \f]
START_TEST(s21_log_78) {
  double value = 123456885308641108530861666086275077420197529997493.753086331;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456886543208998654318455098620756321432097887616.876543120) =
/// 115.339976 \f]
START_TEST(s21_log_79) {
  double value = 123456886543208998654318455098620756321432097887616.876543120;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456887777776888777775244110966435222666665777739.999999909) =
/// 115.339976 \f]
START_TEST(s21_log_80) {
  double value = 123456887777776888777775244110966435222666665777739.999999909;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456889012344778901232033123312114123901233667863.123456698) =
/// 115.339976 \f]
START_TEST(s21_log_81) {
  double value = 123456889012344778901232033123312114123901233667863.123456698;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456890246912669024688822135657793025135801557986.246913487) =
/// 115.339976 \f]
START_TEST(s21_log_82) {
  double value = 123456890246912669024688822135657793025135801557986.246913487;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456891481480559148145611148003471926370369448109.370370276) =
/// 115.339977 \f]
START_TEST(s21_log_83) {
  double value = 123456891481480559148145611148003471926370369448109.370370276;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456892716048449271602400160349150827604937338232.493827065) =
/// 115.339977 \f]
START_TEST(s21_log_84) {
  double value = 123456892716048449271602400160349150827604937338232.493827065;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456893950616339395059189172694829728839505228355.617283854) =
/// 115.339977 \f]
START_TEST(s21_log_85) {
  double value = 123456893950616339395059189172694829728839505228355.617283854;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456895185184229518515978185040508630074073118478.740740643) =
/// 115.339977 \f]
START_TEST(s21_log_86) {
  double value = 123456895185184229518515978185040508630074073118478.740740643;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456896419752119641972767197386187531308641008601.864197432) =
/// 115.339977 \f]
START_TEST(s21_log_87) {
  double value = 123456896419752119641972767197386187531308641008601.864197432;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456897654320009765429556209731866432543208898724.987654221) =
/// 115.339977 \f]
START_TEST(s21_log_88) {
  double value = 123456897654320009765429556209731866432543208898724.987654221;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456898888887899888886345222077545333777776788848.111111010) =
/// 115.339977 \f]
START_TEST(s21_log_89) {
  double value = 123456898888887899888886345222077545333777776788848.111111010;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456900123455790012343134234423224235012344678971.234567799) =
/// 115.339977 \f]
START_TEST(s21_log_90) {
  double value = 123456900123455790012343134234423224235012344678971.234567799;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456901358023680135799923246768903136246912569094.358024588) =
/// 115.339977 \f]
START_TEST(s21_log_91) {
  double value = 123456901358023680135799923246768903136246912569094.358024588;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456902592591570259256712259114582037481480459217.481481377) =
/// 115.339977 \f]
START_TEST(s21_log_92) {
  double value = 123456902592591570259256712259114582037481480459217.481481377;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456903827159460382713501271460260938716048349340.604938166) =
/// 115.339977 \f]
START_TEST(s21_log_93) {
  double value = 123456903827159460382713501271460260938716048349340.604938166;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456905061727350506170290283805939839950616239463.728394955) =
/// 115.339977 \f]
START_TEST(s21_log_94) {
  double value = 123456905061727350506170290283805939839950616239463.728394955;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456906296295240629627079296151618741185184129586.851851744) =
/// 115.339977 \f]
START_TEST(s21_log_95) {
  double value = 123456906296295240629627079296151618741185184129586.851851744;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456907530863130753083868308497297642419752019709.975308533) =
/// 115.339977 \f]
START_TEST(s21_log_96) {
  double value = 123456907530863130753083868308497297642419752019709.975308533;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456908765431020876540657320842976543654319909833.098765322) =
/// 115.339977 \f]
START_TEST(s21_log_97) {
  double value = 123456908765431020876540657320842976543654319909833.098765322;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456909999998910999997446333188655444888887799956.222222111) =
/// 115.339977 \f]
START_TEST(s21_log_98) {
  double value = 123456909999998910999997446333188655444888887799956.222222111;

  s21_test_log(value);
}

/// @brief \f[
/// log(123456911234566801123454235345534334346123455690079.345678900) =
/// 115.339977 \f]
START_TEST(s21_log_99) {
  double value = 123456911234566801123454235345534334346123455690079.345678900;

  s21_test_log(value);
}

/// @brief \f[ log(0.002) = -6.214608 \f]
START_TEST(s21_log_100) {
  double value = 0.002;

  s21_test_log(value);
}

/// @brief \f[ log(0.0029) = -5.843045 \f]
START_TEST(s21_log_101) {
  double value = 0.0029;

  s21_test_log(value);
}

/// @brief \f[ log(0.0038) = -5.572754 \f]
START_TEST(s21_log_102) {
  double value = 0.0038;

  s21_test_log(value);
}

/// @brief \f[ log(0.0047) = -5.360193 \f]
START_TEST(s21_log_103) {
  double value = 0.0047;

  s21_test_log(value);
}

/// @brief \f[ log(0.0056) = -5.184989 \f]
START_TEST(s21_log_104) {
  double value = 0.0056;

  s21_test_log(value);
}

/// @brief \f[ log(0.0065) = -5.035953 \f]
START_TEST(s21_log_105) {
  double value = 0.0065;

  s21_test_log(value);
}

/// @brief \f[ log(0.0074) = -4.906275 \f]
START_TEST(s21_log_106) {
  double value = 0.0074;

  s21_test_log(value);
}

/// @brief \f[ log(0.0083) = -4.791500 \f]
START_TEST(s21_log_107) {
  double value = 0.0083;

  s21_test_log(value);
}

/// @brief \f[ log(0.0092) = -4.688552 \f]
START_TEST(s21_log_108) {
  double value = 0.0092;

  s21_test_log(value);
}

/// @brief \f[ log(0.0101) = -4.595220 \f]
START_TEST(s21_log_109) {
  double value = 0.0101;

  s21_test_log(value);
}

/// @brief \f[ log(0.0110) = -4.509860 \f]
START_TEST(s21_log_110) {
  double value = 0.0110;

  s21_test_log(value);
}

/// @brief \f[ log(0.0119) = -4.431217 \f]
START_TEST(s21_log_111) {
  double value = 0.0119;

  s21_test_log(value);
}

/// @brief \f[ log(0.0128) = -4.358310 \f]
START_TEST(s21_log_112) {
  double value = 0.0128;

  s21_test_log(value);
}

/// @brief \f[ log(0.0137) = -4.290359 \f]
START_TEST(s21_log_113) {
  double value = 0.0137;

  s21_test_log(value);
}

/// @brief \f[ log(0.0146) = -4.226734 \f]
START_TEST(s21_log_114) {
  double value = 0.0146;

  s21_test_log(value);
}

/// @brief \f[ log(0.0155) = -4.166915 \f]
START_TEST(s21_log_115) {
  double value = 0.0155;

  s21_test_log(value);
}

/// @brief \f[ log(0.0164) = -4.110474 \f]
START_TEST(s21_log_116) {
  double value = 0.0164;

  s21_test_log(value);
}

/// @brief \f[ log(0.0173) = -4.057049 \f]
START_TEST(s21_log_117) {
  double value = 0.0173;

  s21_test_log(value);
}

/// @brief \f[ log(0.0182) = -4.006334 \f]
START_TEST(s21_log_118) {
  double value = 0.0182;

  s21_test_log(value);
}

/// @brief \f[ log(0.0191) = -3.958067 \f]
START_TEST(s21_log_119) {
  double value = 0.0191;

  s21_test_log(value);
}

/// @brief \f[ log(0.0200) = -3.912023 \f]
START_TEST(s21_log_120) {
  double value = 0.0200;

  s21_test_log(value);
}

/// @brief \f[ log(0.0209) = -3.868006 \f]
START_TEST(s21_log_121) {
  double value = 0.0209;

  s21_test_log(value);
}

/// @brief \f[ log(0.0218) = -3.825845 \f]
START_TEST(s21_log_122) {
  double value = 0.0218;

  s21_test_log(value);
}

/// @brief \f[ log(0.0227) = -3.785390 \f]
START_TEST(s21_log_123) {
  double value = 0.0227;

  s21_test_log(value);
}

/// @brief \f[ log(0.0236) = -3.746509 \f]
START_TEST(s21_log_124) {
  double value = 0.0236;

  s21_test_log(value);
}

/// @brief \f[ log(0.0245) = -3.709082 \f]
START_TEST(s21_log_125) {
  double value = 0.0245;

  s21_test_log(value);
}

/// @brief \f[ log(0.0254) = -3.673006 \f]
START_TEST(s21_log_126) {
  double value = 0.0254;

  s21_test_log(value);
}

/// @brief \f[ log(0.0263) = -3.638186 \f]
START_TEST(s21_log_127) {
  double value = 0.0263;

  s21_test_log(value);
}

/// @brief \f[ log(0.0272) = -3.604538 \f]
START_TEST(s21_log_128) {
  double value = 0.0272;

  s21_test_log(value);
}

/// @brief \f[ log(0.0281) = -3.571986 \f]
START_TEST(s21_log_129) {
  double value = 0.0281;

  s21_test_log(value);
}

/// @brief \f[ log(0.0290) = -3.540459 \f]
START_TEST(s21_log_130) {
  double value = 0.0290;

  s21_test_log(value);
}

/// @brief \f[ log(0.0299) = -3.509897 \f]
START_TEST(s21_log_131) {
  double value = 0.0299;

  s21_test_log(value);
}

/// @brief \f[ log(0.0308) = -3.480241 \f]
START_TEST(s21_log_132) {
  double value = 0.0308;

  s21_test_log(value);
}

/// @brief \f[ log(0.0317) = -3.451439 \f]
START_TEST(s21_log_133) {
  double value = 0.0317;

  s21_test_log(value);
}

/// @brief \f[ log(0.0326) = -3.423443 \f]
START_TEST(s21_log_134) {
  double value = 0.0326;

  s21_test_log(value);
}

/// @brief \f[ log(0.0335) = -3.396210 \f]
START_TEST(s21_log_135) {
  double value = 0.0335;

  s21_test_log(value);
}

/// @brief \f[ log(0.0344) = -3.369699 \f]
START_TEST(s21_log_136) {
  double value = 0.0344;

  s21_test_log(value);
}

/// @brief \f[ log(0.0353) = -3.343872 \f]
START_TEST(s21_log_137) {
  double value = 0.0353;

  s21_test_log(value);
}

/// @brief \f[ log(0.0362) = -3.318696 \f]
START_TEST(s21_log_138) {
  double value = 0.0362;

  s21_test_log(value);
}

/// @brief \f[ log(0.0371) = -3.294138 \f]
START_TEST(s21_log_139) {
  double value = 0.0371;

  s21_test_log(value);
}

/// @brief \f[ log(0.0380) = -3.270169 \f]
START_TEST(s21_log_140) {
  double value = 0.0380;

  s21_test_log(value);
}

/// @brief \f[ log(0.0389) = -3.246761 \f]
START_TEST(s21_log_141) {
  double value = 0.0389;

  s21_test_log(value);
}

/// @brief \f[ log(0.0398) = -3.223888 \f]
START_TEST(s21_log_142) {
  double value = 0.0398;

  s21_test_log(value);
}

/// @brief \f[ log(0.0407) = -3.201527 \f]
START_TEST(s21_log_143) {
  double value = 0.0407;

  s21_test_log(value);
}

/// @brief \f[ log(0.0416) = -3.179655 \f]
START_TEST(s21_log_144) {
  double value = 0.0416;

  s21_test_log(value);
}

/// @brief \f[ log(0.0425) = -3.158251 \f]
START_TEST(s21_log_145) {
  double value = 0.0425;

  s21_test_log(value);
}

/// @brief \f[ log(0.0434) = -3.137296 \f]
START_TEST(s21_log_146) {
  double value = 0.0434;

  s21_test_log(value);
}

/// @brief \f[ log(0.0443) = -3.116771 \f]
START_TEST(s21_log_147) {
  double value = 0.0443;

  s21_test_log(value);
}

/// @brief \f[ log(0.0452) = -3.096658 \f]
START_TEST(s21_log_148) {
  double value = 0.0452;

  s21_test_log(value);
}

/// @brief \f[ log(0.0461) = -3.076942 \f]
START_TEST(s21_log_149) {
  double value = 0.0461;

  s21_test_log(value);
}

/// @brief \f[ log(0.0470) = -3.057608 \f]
START_TEST(s21_log_150) {
  double value = 0.0470;

  s21_test_log(value);
}

/// @brief \f[ log(0.0479) = -3.038640 \f]
START_TEST(s21_log_151) {
  double value = 0.0479;

  s21_test_log(value);
}

/// @brief \f[ log(0.0488) = -3.020025 \f]
START_TEST(s21_log_152) {
  double value = 0.0488;

  s21_test_log(value);
}

/// @brief \f[ log(0.0497) = -3.001750 \f]
START_TEST(s21_log_153) {
  double value = 0.0497;

  s21_test_log(value);
}

/// @brief \f[ log(0.0506) = -2.983804 \f]
START_TEST(s21_log_154) {
  double value = 0.0506;

  s21_test_log(value);
}

/// @brief \f[ log(0.0515) = -2.966173 \f]
START_TEST(s21_log_155) {
  double value = 0.0515;

  s21_test_log(value);
}

/// @brief \f[ log(0.0524) = -2.948849 \f]
START_TEST(s21_log_156) {
  double value = 0.0524;

  s21_test_log(value);
}

/// @brief \f[ log(0.0533) = -2.931819 \f]
START_TEST(s21_log_157) {
  double value = 0.0533;

  s21_test_log(value);
}

/// @brief \f[ log(0.0542) = -2.915074 \f]
START_TEST(s21_log_158) {
  double value = 0.0542;

  s21_test_log(value);
}

/// @brief \f[ log(0.0551) = -2.898606 \f]
START_TEST(s21_log_159) {
  double value = 0.0551;

  s21_test_log(value);
}

/// @brief \f[ log(0.0560) = -2.882404 \f]
START_TEST(s21_log_160) {
  double value = 0.0560;

  s21_test_log(value);
}

/// @brief \f[ log(0.0569) = -2.866460 \f]
START_TEST(s21_log_161) {
  double value = 0.0569;

  s21_test_log(value);
}

/// @brief \f[ log(0.0578) = -2.850767 \f]
START_TEST(s21_log_162) {
  double value = 0.0578;

  s21_test_log(value);
}

/// @brief \f[ log(0.0587) = -2.835316 \f]
START_TEST(s21_log_163) {
  double value = 0.0587;

  s21_test_log(value);
}

/// @brief \f[ log(0.0596) = -2.820100 \f]
START_TEST(s21_log_164) {
  double value = 0.0596;

  s21_test_log(value);
}

/// @brief \f[ log(0.0605) = -2.805112 \f]
START_TEST(s21_log_165) {
  double value = 0.0605;

  s21_test_log(value);
}

/// @brief \f[ log(0.0614) = -2.790345 \f]
START_TEST(s21_log_166) {
  double value = 0.0614;

  s21_test_log(value);
}

/// @brief \f[ log(0.0623) = -2.775794 \f]
START_TEST(s21_log_167) {
  double value = 0.0623;

  s21_test_log(value);
}

/// @brief \f[ log(0.0632) = -2.761451 \f]
START_TEST(s21_log_168) {
  double value = 0.0632;

  s21_test_log(value);
}

/// @brief \f[ log(0.0641) = -2.747311 \f]
START_TEST(s21_log_169) {
  double value = 0.0641;

  s21_test_log(value);
}

/// @brief \f[ log(0.0650) = -2.733368 \f]
START_TEST(s21_log_170) {
  double value = 0.0650;

  s21_test_log(value);
}

/// @brief \f[ log(0.0659) = -2.719617 \f]
START_TEST(s21_log_171) {
  double value = 0.0659;

  s21_test_log(value);
}

/// @brief \f[ log(0.0668) = -2.706052 \f]
START_TEST(s21_log_172) {
  double value = 0.0668;

  s21_test_log(value);
}

/// @brief \f[ log(0.0677) = -2.692669 \f]
START_TEST(s21_log_173) {
  double value = 0.0677;

  s21_test_log(value);
}

/// @brief \f[ log(0.0686) = -2.679463 \f]
START_TEST(s21_log_174) {
  double value = 0.0686;

  s21_test_log(value);
}

/// @brief \f[ log(0.0695) = -2.666429 \f]
START_TEST(s21_log_175) {
  double value = 0.0695;

  s21_test_log(value);
}

/// @brief \f[ log(0.0704) = -2.653562 \f]
START_TEST(s21_log_176) {
  double value = 0.0704;

  s21_test_log(value);
}

/// @brief \f[ log(0.0713) = -2.640859 \f]
START_TEST(s21_log_177) {
  double value = 0.0713;

  s21_test_log(value);
}

/// @brief \f[ log(0.0722) = -2.628315 \f]
START_TEST(s21_log_178) {
  double value = 0.0722;

  s21_test_log(value);
}

/// @brief \f[ log(0.0731) = -2.615927 \f]
START_TEST(s21_log_179) {
  double value = 0.0731;

  s21_test_log(value);
}

/// @brief \f[ log(0.0740) = -2.603690 \f]
START_TEST(s21_log_180) {
  double value = 0.0740;

  s21_test_log(value);
}

/// @brief \f[ log(0.0749) = -2.591601 \f]
START_TEST(s21_log_181) {
  double value = 0.0749;

  s21_test_log(value);
}

/// @brief \f[ log(0.0758) = -2.579657 \f]
START_TEST(s21_log_182) {
  double value = 0.0758;

  s21_test_log(value);
}

/// @brief \f[ log(0.0767) = -2.567854 \f]
START_TEST(s21_log_183) {
  double value = 0.0767;

  s21_test_log(value);
}

/// @brief \f[ log(0.0776) = -2.556188 \f]
START_TEST(s21_log_184) {
  double value = 0.0776;

  s21_test_log(value);
}

/// @brief \f[ log(0.0785) = -2.544657 \f]
START_TEST(s21_log_185) {
  double value = 0.0785;

  s21_test_log(value);
}

/// @brief \f[ log(0.0794) = -2.533257 \f]
START_TEST(s21_log_186) {
  double value = 0.0794;

  s21_test_log(value);
}

/// @brief \f[ log(0.0803) = -2.521986 \f]
START_TEST(s21_log_187) {
  double value = 0.0803;

  s21_test_log(value);
}

/// @brief \f[ log(0.0812) = -2.510840 \f]
START_TEST(s21_log_188) {
  double value = 0.0812;

  s21_test_log(value);
}

/// @brief \f[ log(0.0821) = -2.499817 \f]
START_TEST(s21_log_189) {
  double value = 0.0821;

  s21_test_log(value);
}

/// @brief \f[ log(0.0830) = -2.488915 \f]
START_TEST(s21_log_190) {
  double value = 0.0830;

  s21_test_log(value);
}

/// @brief \f[ log(0.0839) = -2.478130 \f]
START_TEST(s21_log_191) {
  double value = 0.0839;

  s21_test_log(value);
}

/// @brief \f[ log(0.0848) = -2.467460 \f]
START_TEST(s21_log_192) {
  double value = 0.0848;

  s21_test_log(value);
}

/// @brief \f[ log(0.0857) = -2.456902 \f]
START_TEST(s21_log_193) {
  double value = 0.0857;

  s21_test_log(value);
}

/// @brief \f[ log(0.0866) = -2.446455 \f]
START_TEST(s21_log_194) {
  double value = 0.0866;

  s21_test_log(value);
}

/// @brief \f[ log(0.0875) = -2.436116 \f]
START_TEST(s21_log_195) {
  double value = 0.0875;

  s21_test_log(value);
}

/// @brief \f[ log(0.0884) = -2.425883 \f]
START_TEST(s21_log_196) {
  double value = 0.0884;

  s21_test_log(value);
}

/// @brief \f[ log(0.0893) = -2.415754 \f]
START_TEST(s21_log_197) {
  double value = 0.0893;

  s21_test_log(value);
}

/// @brief \f[ log(0.0902) = -2.405726 \f]
START_TEST(s21_log_198) {
  double value = 0.0902;

  s21_test_log(value);
}

/// @brief \f[ log(0.0911) = -2.395797 \f]
START_TEST(s21_log_199) {
  double value = 0.0911;

  s21_test_log(value);
}

/// @brief \f[ log(1.2123) = 0.192519 \f]
START_TEST(s21_log_200) {
  double value = 1.2123;

  s21_test_log(value);
}

/// @brief \f[ log(1.3354) = 0.289231 \f]
START_TEST(s21_log_201) {
  double value = 1.3354;

  s21_test_log(value);
}

/// @brief \f[ log(1.4585) = 0.377409 \f]
START_TEST(s21_log_202) {
  double value = 1.4585;

  s21_test_log(value);
}

/// @brief \f[ log(1.5816) = 0.458437 \f]
START_TEST(s21_log_203) {
  double value = 1.5816;

  s21_test_log(value);
}

/// @brief \f[ log(1.7047) = 0.533389 \f]
START_TEST(s21_log_204) {
  double value = 1.7047;

  s21_test_log(value);
}

/// @brief \f[ log(1.8278) = 0.603113 \f]
START_TEST(s21_log_205) {
  double value = 1.8278;

  s21_test_log(value);
}

/// @brief \f[ log(1.9509) = 0.668291 \f]
START_TEST(s21_log_206) {
  double value = 1.9509;

  s21_test_log(value);
}

/// @brief \f[ log(2.0740) = 0.729479 \f]
START_TEST(s21_log_207) {
  double value = 2.0740;

  s21_test_log(value);
}

/// @brief \f[ log(2.1971) = 0.787138 \f]
START_TEST(s21_log_208) {
  double value = 2.1971;

  s21_test_log(value);
}

/// @brief \f[ log(2.3202) = 0.841653 \f]
START_TEST(s21_log_209) {
  double value = 2.3202;

  s21_test_log(value);
}

/// @brief \f[ log(2.4433) = 0.893350 \f]
START_TEST(s21_log_210) {
  double value = 2.4433;

  s21_test_log(value);
}

/// @brief \f[ log(2.5664) = 0.942504 \f]
START_TEST(s21_log_211) {
  double value = 2.5664;

  s21_test_log(value);
}

/// @brief \f[ log(2.6895) = 0.989355 \f]
START_TEST(s21_log_212) {
  double value = 2.6895;

  s21_test_log(value);
}

/// @brief \f[ log(2.8126) = 1.034109 \f]
START_TEST(s21_log_213) {
  double value = 2.8126;

  s21_test_log(value);
}

/// @brief \f[ log(2.9357) = 1.076946 \f]
START_TEST(s21_log_214) {
  double value = 2.9357;

  s21_test_log(value);
}

/// @brief \f[ log(3.0588) = 1.118023 \f]
START_TEST(s21_log_215) {
  double value = 3.0588;

  s21_test_log(value);
}

/// @brief \f[ log(3.1819) = 1.157479 \f]
START_TEST(s21_log_216) {
  double value = 3.1819;

  s21_test_log(value);
}

/// @brief \f[ log(3.3050) = 1.195436 \f]
START_TEST(s21_log_217) {
  double value = 3.3050;

  s21_test_log(value);
}

/// @brief \f[ log(3.4281) = 1.232006 \f]
START_TEST(s21_log_218) {
  double value = 3.4281;

  s21_test_log(value);
}

/// @brief \f[ log(3.5512) = 1.267286 \f]
START_TEST(s21_log_219) {
  double value = 3.5512;

  s21_test_log(value);
}

/// @brief \f[ log(3.6743) = 1.301363 \f]
START_TEST(s21_log_220) {
  double value = 3.6743;

  s21_test_log(value);
}

/// @brief \f[ log(3.7974) = 1.334317 \f]
START_TEST(s21_log_221) {
  double value = 3.7974;

  s21_test_log(value);
}

/// @brief \f[ log(3.9205) = 1.366219 \f]
START_TEST(s21_log_222) {
  double value = 3.9205;

  s21_test_log(value);
}

/// @brief \f[ log(4.0436) = 1.397135 \f]
START_TEST(s21_log_223) {
  double value = 4.0436;

  s21_test_log(value);
}

/// @brief \f[ log(4.1667) = 1.427124 \f]
START_TEST(s21_log_224) {
  double value = 4.1667;

  s21_test_log(value);
}

/// @brief \f[ log(4.2898) = 1.456240 \f]
START_TEST(s21_log_225) {
  double value = 4.2898;

  s21_test_log(value);
}

/// @brief \f[ log(4.4129) = 1.484532 \f]
START_TEST(s21_log_226) {
  double value = 4.4129;

  s21_test_log(value);
}

/// @brief \f[ log(4.5360) = 1.512046 \f]
START_TEST(s21_log_227) {
  double value = 4.5360;

  s21_test_log(value);
}

/// @brief \f[ log(4.6591) = 1.538822 \f]
START_TEST(s21_log_228) {
  double value = 4.6591;

  s21_test_log(value);
}

/// @brief \f[ log(4.7822) = 1.564901 \f]
START_TEST(s21_log_229) {
  double value = 4.7822;

  s21_test_log(value);
}

/// @brief \f[ log(4.9053) = 1.590316 \f]
START_TEST(s21_log_230) {
  double value = 4.9053;

  s21_test_log(value);
}

/// @brief \f[ log(5.0284) = 1.615102 \f]
START_TEST(s21_log_231) {
  double value = 5.0284;

  s21_test_log(value);
}

/// @brief \f[ log(5.1515) = 1.639288 \f]
START_TEST(s21_log_232) {
  double value = 5.1515;

  s21_test_log(value);
}

/// @brief \f[ log(5.2746) = 1.662903 \f]
START_TEST(s21_log_233) {
  double value = 5.2746;

  s21_test_log(value);
}

/// @brief \f[ log(5.3977) = 1.685973 \f]
START_TEST(s21_log_234) {
  double value = 5.3977;

  s21_test_log(value);
}

/// @brief \f[ log(5.5208) = 1.708523 \f]
START_TEST(s21_log_235) {
  double value = 5.5208;

  s21_test_log(value);
}

/// @brief \f[ log(5.6439) = 1.730575 \f]
START_TEST(s21_log_236) {
  double value = 5.6439;

  s21_test_log(value);
}

/// @brief \f[ log(5.7670) = 1.752152 \f]
START_TEST(s21_log_237) {
  double value = 5.7670;

  s21_test_log(value);
}

/// @brief \f[ log(5.8901) = 1.773273 \f]
START_TEST(s21_log_238) {
  double value = 5.8901;

  s21_test_log(value);
}

/// @brief \f[ log(6.0132) = 1.793957 \f]
START_TEST(s21_log_239) {
  double value = 6.0132;

  s21_test_log(value);
}

/// @brief \f[ log(6.1363) = 1.814222 \f]
START_TEST(s21_log_240) {
  double value = 6.1363;

  s21_test_log(value);
}

/// @brief \f[ log(6.2594) = 1.834084 \f]
START_TEST(s21_log_241) {
  double value = 6.2594;

  s21_test_log(value);
}

/// @brief \f[ log(6.3825) = 1.853560 \f]
START_TEST(s21_log_242) {
  double value = 6.3825;

  s21_test_log(value);
}

/// @brief \f[ log(6.5056) = 1.872663 \f]
START_TEST(s21_log_243) {
  double value = 6.5056;

  s21_test_log(value);
}

/// @brief \f[ log(6.6287) = 1.891409 \f]
START_TEST(s21_log_244) {
  double value = 6.6287;

  s21_test_log(value);
}

/// @brief \f[ log(6.7518) = 1.909809 \f]
START_TEST(s21_log_245) {
  double value = 6.7518;

  s21_test_log(value);
}

/// @brief \f[ log(6.8749) = 1.927877 \f]
START_TEST(s21_log_246) {
  double value = 6.8749;

  s21_test_log(value);
}

/// @brief \f[ log(6.9980) = 1.945624 \f]
START_TEST(s21_log_247) {
  double value = 6.9980;

  s21_test_log(value);
}

/// @brief \f[ log(7.1211) = 1.963062 \f]
START_TEST(s21_log_248) {
  double value = 7.1211;

  s21_test_log(value);
}

/// @brief \f[ log(7.2442) = 1.980201 \f]
START_TEST(s21_log_249) {
  double value = 7.2442;

  s21_test_log(value);
}

/// @brief \f[ log(7.3673) = 1.997051 \f]
START_TEST(s21_log_250) {
  double value = 7.3673;

  s21_test_log(value);
}

/// @brief \f[ log(7.4904) = 2.013622 \f]
START_TEST(s21_log_251) {
  double value = 7.4904;

  s21_test_log(value);
}

/// @brief \f[ log(7.6135) = 2.029923 \f]
START_TEST(s21_log_252) {
  double value = 7.6135;

  s21_test_log(value);
}

/// @brief \f[ log(7.7366) = 2.045962 \f]
START_TEST(s21_log_253) {
  double value = 7.7366;

  s21_test_log(value);
}

/// @brief \f[ log(7.8597) = 2.061748 \f]
START_TEST(s21_log_254) {
  double value = 7.8597;

  s21_test_log(value);
}

/// @brief \f[ log(7.9828) = 2.077289 \f]
START_TEST(s21_log_255) {
  double value = 7.9828;

  s21_test_log(value);
}

/// @brief \f[ log(8.1059) = 2.092592 \f]
START_TEST(s21_log_256) {
  double value = 8.1059;

  s21_test_log(value);
}

/// @brief \f[ log(8.2290) = 2.107665 \f]
START_TEST(s21_log_257) {
  double value = 8.2290;

  s21_test_log(value);
}

/// @brief \f[ log(8.3521) = 2.122513 \f]
START_TEST(s21_log_258) {
  double value = 8.3521;

  s21_test_log(value);
}

/// @brief \f[ log(8.4752) = 2.137144 \f]
START_TEST(s21_log_259) {
  double value = 8.4752;

  s21_test_log(value);
}

/// @brief \f[ log(8.5983) = 2.151565 \f]
START_TEST(s21_log_260) {
  double value = 8.5983;

  s21_test_log(value);
}

/// @brief \f[ log(8.7214) = 2.165780 \f]
START_TEST(s21_log_261) {
  double value = 8.7214;

  s21_test_log(value);
}

/// @brief \f[ log(8.8445) = 2.179796 \f]
START_TEST(s21_log_262) {
  double value = 8.8445;

  s21_test_log(value);
}

/// @brief \f[ log(8.9676) = 2.193618 \f]
START_TEST(s21_log_263) {
  double value = 8.9676;

  s21_test_log(value);
}

/// @brief \f[ log(9.0907) = 2.207252 \f]
START_TEST(s21_log_264) {
  double value = 9.0907;

  s21_test_log(value);
}

/// @brief \f[ log(9.2138) = 2.220702 \f]
START_TEST(s21_log_265) {
  double value = 9.2138;

  s21_test_log(value);
}

/// @brief \f[ log(9.3369) = 2.233974 \f]
START_TEST(s21_log_266) {
  double value = 9.3369;

  s21_test_log(value);
}

/// @brief \f[ log(9.4600) = 2.247072 \f]
START_TEST(s21_log_267) {
  double value = 9.4600;

  s21_test_log(value);
}

/// @brief \f[ log(9.5831) = 2.260001 \f]
START_TEST(s21_log_268) {
  double value = 9.5831;

  s21_test_log(value);
}

/// @brief \f[ log(9.7062) = 2.272765 \f]
START_TEST(s21_log_269) {
  double value = 9.7062;

  s21_test_log(value);
}

/// @brief \f[ log(9.8293) = 2.285368 \f]
START_TEST(s21_log_270) {
  double value = 9.8293;

  s21_test_log(value);
}

/// @brief \f[ log(9.9524) = 2.297814 \f]
START_TEST(s21_log_271) {
  double value = 9.9524;

  s21_test_log(value);
}

/// @brief \f[ log(10.0755) = 2.310107 \f]
START_TEST(s21_log_272) {
  double value = 10.0755;

  s21_test_log(value);
}

/// @brief \f[ log(10.1986) = 2.322250 \f]
START_TEST(s21_log_273) {
  double value = 10.1986;

  s21_test_log(value);
}

/// @brief \f[ log(10.3217) = 2.334248 \f]
START_TEST(s21_log_274) {
  double value = 10.3217;

  s21_test_log(value);
}

/// @brief \f[ log(10.4448) = 2.346104 \f]
START_TEST(s21_log_275) {
  double value = 10.4448;

  s21_test_log(value);
}

/// @brief \f[ log(10.5679) = 2.357821 \f]
START_TEST(s21_log_276) {
  double value = 10.5679;

  s21_test_log(value);
}

/// @brief \f[ log(10.6910) = 2.369402 \f]
START_TEST(s21_log_277) {
  double value = 10.6910;

  s21_test_log(value);
}

/// @brief \f[ log(10.8141) = 2.380851 \f]
START_TEST(s21_log_278) {
  double value = 10.8141;

  s21_test_log(value);
}

/// @brief \f[ log(10.9372) = 2.392170 \f]
START_TEST(s21_log_279) {
  double value = 10.9372;

  s21_test_log(value);
}

/// @brief \f[ log(11.0603) = 2.403362 \f]
START_TEST(s21_log_280) {
  double value = 11.0603;

  s21_test_log(value);
}

/// @brief \f[ log(11.1834) = 2.414431 \f]
START_TEST(s21_log_281) {
  double value = 11.1834;

  s21_test_log(value);
}

/// @brief \f[ log(11.3065) = 2.425378 \f]
START_TEST(s21_log_282) {
  double value = 11.3065;

  s21_test_log(value);
}

/// @brief \f[ log(11.4296) = 2.436206 \f]
START_TEST(s21_log_283) {
  double value = 11.4296;

  s21_test_log(value);
}

/// @brief \f[ log(11.5527) = 2.446919 \f]
START_TEST(s21_log_284) {
  double value = 11.5527;

  s21_test_log(value);
}

/// @brief \f[ log(11.6758) = 2.457518 \f]
START_TEST(s21_log_285) {
  double value = 11.6758;

  s21_test_log(value);
}

/// @brief \f[ log(11.7989) = 2.468006 \f]
START_TEST(s21_log_286) {
  double value = 11.7989;

  s21_test_log(value);
}

/// @brief \f[ log(11.9220) = 2.478385 \f]
START_TEST(s21_log_287) {
  double value = 11.9220;

  s21_test_log(value);
}

/// @brief \f[ log(12.0451) = 2.488658 \f]
START_TEST(s21_log_288) {
  double value = 12.0451;

  s21_test_log(value);
}

/// @brief \f[ log(12.1682) = 2.498826 \f]
START_TEST(s21_log_289) {
  double value = 12.1682;

  s21_test_log(value);
}

/// @brief \f[ log(12.2913) = 2.508892 \f]
START_TEST(s21_log_290) {
  double value = 12.2913;

  s21_test_log(value);
}

/// @brief \f[ log(12.4144) = 2.518857 \f]
START_TEST(s21_log_291) {
  double value = 12.4144;

  s21_test_log(value);
}

/// @brief \f[ log(12.5375) = 2.528724 \f]
START_TEST(s21_log_292) {
  double value = 12.5375;

  s21_test_log(value);
}

/// @brief \f[ log(12.6606) = 2.538495 \f]
START_TEST(s21_log_293) {
  double value = 12.6606;

  s21_test_log(value);
}

/// @brief \f[ log(12.7837) = 2.548171 \f]
START_TEST(s21_log_294) {
  double value = 12.7837;

  s21_test_log(value);
}

/// @brief \f[ log(12.9068) = 2.557754 \f]
START_TEST(s21_log_295) {
  double value = 12.9068;

  s21_test_log(value);
}

/// @brief \f[ log(13.0299) = 2.567247 \f]
START_TEST(s21_log_296) {
  double value = 13.0299;

  s21_test_log(value);
}

/// @brief \f[ log(13.1530) = 2.576650 \f]
START_TEST(s21_log_297) {
  double value = 13.1530;

  s21_test_log(value);
}

/// @brief \f[ log(13.2761) = 2.585965 \f]
START_TEST(s21_log_298) {
  double value = 13.2761;

  s21_test_log(value);
}

/// @brief \f[ log(13.3992) = 2.595195 \f]
START_TEST(s21_log_299) {
  double value = 13.3992;

  s21_test_log(value);
}

/// @brief \f[ log(12.1) = 2.493205 \f]
START_TEST(s21_log_300) {
  double value = 12.1;

  s21_test_log(value);
}

/// @brief \f[ log(133.222) = 4.892017 \f]
START_TEST(s21_log_301) {
  double value = 133.222;

  s21_test_log(value);
}

/// @brief \f[ log(254.344) = 5.538688 \f]
START_TEST(s21_log_302) {
  double value = 254.344;

  s21_test_log(value);
}

/// @brief \f[ log(375.466) = 5.928168 \f]
START_TEST(s21_log_303) {
  double value = 375.466;

  s21_test_log(value);
}

/// @brief \f[ log(496.588) = 6.207761 \f]
START_TEST(s21_log_304) {
  double value = 496.588;

  s21_test_log(value);
}

/// @brief \f[ log(617.710) = 6.426019 \f]
START_TEST(s21_log_305) {
  double value = 617.710;

  s21_test_log(value);
}

/// @brief \f[ log(738.832) = 6.605071 \f]
START_TEST(s21_log_306) {
  double value = 738.832;

  s21_test_log(value);
}

/// @brief \f[ log(859.954) = 6.756879 \f]
START_TEST(s21_log_307) {
  double value = 859.954;

  s21_test_log(value);
}

/// @brief \f[ log(981.076) = 6.888650 \f]
START_TEST(s21_log_308) {
  double value = 981.076;

  s21_test_log(value);
}

/// @brief \f[ log(1102.198) = 7.005062 \f]
START_TEST(s21_log_309) {
  double value = 1102.198;

  s21_test_log(value);
}

/// @brief \f[ log(1223.320) = 7.109324 \f]
START_TEST(s21_log_310) {
  double value = 1223.320;

  s21_test_log(value);
}

/// @brief \f[ log(1344.442) = 7.203734 \f]
START_TEST(s21_log_311) {
  double value = 1344.442;

  s21_test_log(value);
}

/// @brief \f[ log(1465.564) = 7.289995 \f]
START_TEST(s21_log_312) {
  double value = 1465.564;

  s21_test_log(value);
}

/// @brief \f[ log(1586.686) = 7.369403 \f]
START_TEST(s21_log_313) {
  double value = 1586.686;

  s21_test_log(value);
}

/// @brief \f[ log(1707.808) = 7.442966 \f]
START_TEST(s21_log_314) {
  double value = 1707.808;

  s21_test_log(value);
}

/// @brief \f[ log(1828.930) = 7.511486 \f]
START_TEST(s21_log_315) {
  double value = 1828.930;

  s21_test_log(value);
}

/// @brief \f[ log(1950.052) = 7.575611 \f]
START_TEST(s21_log_316) {
  double value = 1950.052;

  s21_test_log(value);
}

/// @brief \f[ log(2071.174) = 7.635871 \f]
START_TEST(s21_log_317) {
  double value = 2071.174;

  s21_test_log(value);
}

/// @brief \f[ log(2192.296) = 7.692705 \f]
START_TEST(s21_log_318) {
  double value = 2192.296;

  s21_test_log(value);
}

/// @brief \f[ log(2313.418) = 7.746481 \f]
START_TEST(s21_log_319) {
  double value = 2313.418;

  s21_test_log(value);
}

/// @brief \f[ log(2434.540) = 7.797513 \f]
START_TEST(s21_log_320) {
  double value = 2434.540;

  s21_test_log(value);
}

/// @brief \f[ log(2555.662) = 7.846067 \f]
START_TEST(s21_log_321) {
  double value = 2555.662;

  s21_test_log(value);
}

/// @brief \f[ log(2676.784) = 7.892371 \f]
START_TEST(s21_log_322) {
  double value = 2676.784;

  s21_test_log(value);
}

/// @brief \f[ log(2797.906) = 7.936627 \f]
START_TEST(s21_log_323) {
  double value = 2797.906;

  s21_test_log(value);
}

/// @brief \f[ log(2919.028) = 7.979006 \f]
START_TEST(s21_log_324) {
  double value = 2919.028;

  s21_test_log(value);
}

/// @brief \f[ log(3040.150) = 8.019662 \f]
START_TEST(s21_log_325) {
  double value = 3040.150;

  s21_test_log(value);
}

/// @brief \f[ log(3161.272) = 8.058730 \f]
START_TEST(s21_log_326) {
  double value = 3161.272;

  s21_test_log(value);
}

/// @brief \f[ log(3282.394) = 8.096328 \f]
START_TEST(s21_log_327) {
  double value = 3282.394;

  s21_test_log(value);
}

/// @brief \f[ log(3403.516) = 8.132564 \f]
START_TEST(s21_log_328) {
  double value = 3403.516;

  s21_test_log(value);
}

/// @brief \f[ log(3524.638) = 8.167533 \f]
START_TEST(s21_log_329) {
  double value = 3524.638;

  s21_test_log(value);
}

/// @brief \f[ log(3645.760) = 8.201320 \f]
START_TEST(s21_log_330) {
  double value = 3645.760;

  s21_test_log(value);
}

/// @brief \f[ log(3766.882) = 8.234003 \f]
START_TEST(s21_log_331) {
  double value = 3766.882;

  s21_test_log(value);
}

/// @brief \f[ log(3888.004) = 8.265651 \f]
START_TEST(s21_log_332) {
  double value = 3888.004;

  s21_test_log(value);
}

/// @brief \f[ log(4009.126) = 8.296329 \f]
START_TEST(s21_log_333) {
  double value = 4009.126;

  s21_test_log(value);
}

/// @brief \f[ log(4130.248) = 8.326093 \f]
START_TEST(s21_log_334) {
  double value = 4130.248;

  s21_test_log(value);
}

/// @brief \f[ log(4251.370) = 8.354997 \f]
START_TEST(s21_log_335) {
  double value = 4251.370;

  s21_test_log(value);
}

/// @brief \f[ log(4372.492) = 8.383088 \f]
START_TEST(s21_log_336) {
  double value = 4372.492;

  s21_test_log(value);
}

/// @brief \f[ log(4493.614) = 8.410413 \f]
START_TEST(s21_log_337) {
  double value = 4493.614;

  s21_test_log(value);
}

/// @brief \f[ log(4614.736) = 8.437010 \f]
START_TEST(s21_log_338) {
  double value = 4614.736;

  s21_test_log(value);
}

/// @brief \f[ log(4735.858) = 8.462918 \f]
START_TEST(s21_log_339) {
  double value = 4735.858;

  s21_test_log(value);
}

/// @brief \f[ log(4856.980) = 8.488172 \f]
START_TEST(s21_log_340) {
  double value = 4856.980;

  s21_test_log(value);
}

/// @brief \f[ log(4978.102) = 8.512804 \f]
START_TEST(s21_log_341) {
  double value = 4978.102;

  s21_test_log(value);
}

/// @brief \f[ log(5099.224) = 8.536844 \f]
START_TEST(s21_log_342) {
  double value = 5099.224;

  s21_test_log(value);
}

/// @brief \f[ log(5220.346) = 8.560319 \f]
START_TEST(s21_log_343) {
  double value = 5220.346;

  s21_test_log(value);
}

/// @brief \f[ log(5341.468) = 8.583256 \f]
START_TEST(s21_log_344) {
  double value = 5341.468;

  s21_test_log(value);
}

/// @brief \f[ log(5462.590) = 8.605678 \f]
START_TEST(s21_log_345) {
  double value = 5462.590;

  s21_test_log(value);
}

/// @brief \f[ log(5583.712) = 8.627609 \f]
START_TEST(s21_log_346) {
  double value = 5583.712;

  s21_test_log(value);
}

/// @brief \f[ log(5704.834) = 8.649069 \f]
START_TEST(s21_log_347) {
  double value = 5704.834;

  s21_test_log(value);
}

/// @brief \f[ log(5825.956) = 8.670078 \f]
START_TEST(s21_log_348) {
  double value = 5825.956;

  s21_test_log(value);
}

/// @brief \f[ log(5947.078) = 8.690655 \f]
START_TEST(s21_log_349) {
  double value = 5947.078;

  s21_test_log(value);
}

/// @brief \f[ log(6068.200) = 8.710817 \f]
START_TEST(s21_log_350) {
  double value = 6068.200;

  s21_test_log(value);
}

/// @brief \f[ log(6189.322) = 8.730581 \f]
START_TEST(s21_log_351) {
  double value = 6189.322;

  s21_test_log(value);
}

/// @brief \f[ log(6310.444) = 8.749961 \f]
START_TEST(s21_log_352) {
  double value = 6310.444;

  s21_test_log(value);
}

/// @brief \f[ log(6431.566) = 8.768973 \f]
START_TEST(s21_log_353) {
  double value = 6431.566;

  s21_test_log(value);
}

/// @brief \f[ log(6552.688) = 8.787631 \f]
START_TEST(s21_log_354) {
  double value = 6552.688;

  s21_test_log(value);
}

/// @brief \f[ log(6673.810) = 8.805946 \f]
START_TEST(s21_log_355) {
  double value = 6673.810;

  s21_test_log(value);
}

/// @brief \f[ log(6794.932) = 8.823932 \f]
START_TEST(s21_log_356) {
  double value = 6794.932;

  s21_test_log(value);
}

/// @brief \f[ log(6916.054) = 8.841601 \f]
START_TEST(s21_log_357) {
  double value = 6916.054;

  s21_test_log(value);
}

/// @brief \f[ log(7037.176) = 8.858962 \f]
START_TEST(s21_log_358) {
  double value = 7037.176;

  s21_test_log(value);
}

/// @brief \f[ log(7158.298) = 8.876028 \f]
START_TEST(s21_log_359) {
  double value = 7158.298;

  s21_test_log(value);
}

/// @brief \f[ log(7279.420) = 8.892806 \f]
START_TEST(s21_log_360) {
  double value = 7279.420;

  s21_test_log(value);
}

/// @brief \f[ log(7400.542) = 8.909309 \f]
START_TEST(s21_log_361) {
  double value = 7400.542;

  s21_test_log(value);
}

/// @brief \f[ log(7521.664) = 8.925543 \f]
START_TEST(s21_log_362) {
  double value = 7521.664;

  s21_test_log(value);
}

/// @brief \f[ log(7642.786) = 8.941517 \f]
START_TEST(s21_log_363) {
  double value = 7642.786;

  s21_test_log(value);
}

/// @brief \f[ log(7763.908) = 8.957241 \f]
START_TEST(s21_log_364) {
  double value = 7763.908;

  s21_test_log(value);
}

/// @brief \f[ log(7885.030) = 8.972721 \f]
START_TEST(s21_log_365) {
  double value = 7885.030;

  s21_test_log(value);
}

/// @brief \f[ log(8006.152) = 8.987966 \f]
START_TEST(s21_log_366) {
  double value = 8006.152;

  s21_test_log(value);
}

/// @brief \f[ log(8127.274) = 9.002981 \f]
START_TEST(s21_log_367) {
  double value = 8127.274;

  s21_test_log(value);
}

/// @brief \f[ log(8248.396) = 9.017774 \f]
START_TEST(s21_log_368) {
  double value = 8248.396;

  s21_test_log(value);
}

/// @brief \f[ log(8369.518) = 9.032352 \f]
START_TEST(s21_log_369) {
  double value = 8369.518;

  s21_test_log(value);
}

/// @brief \f[ log(8490.640) = 9.046720 \f]
START_TEST(s21_log_370) {
  double value = 8490.640;

  s21_test_log(value);
}

/// @brief \f[ log(8611.762) = 9.060884 \f]
START_TEST(s21_log_371) {
  double value = 8611.762;

  s21_test_log(value);
}

/// @brief \f[ log(8732.884) = 9.074851 \f]
START_TEST(s21_log_372) {
  double value = 8732.884;

  s21_test_log(value);
}

/// @brief \f[ log(8854.006) = 9.088625 \f]
START_TEST(s21_log_373) {
  double value = 8854.006;

  s21_test_log(value);
}

/// @brief \f[ log(8975.128) = 9.102212 \f]
START_TEST(s21_log_374) {
  double value = 8975.128;

  s21_test_log(value);
}

/// @brief \f[ log(9096.250) = 9.115618 \f]
START_TEST(s21_log_375) {
  double value = 9096.250;

  s21_test_log(value);
}

/// @brief \f[ log(9217.372) = 9.128845 \f]
START_TEST(s21_log_376) {
  double value = 9217.372;

  s21_test_log(value);
}

/// @brief \f[ log(9338.494) = 9.141900 \f]
START_TEST(s21_log_377) {
  double value = 9338.494;

  s21_test_log(value);
}

/// @brief \f[ log(9459.616) = 9.154787 \f]
START_TEST(s21_log_378) {
  double value = 9459.616;

  s21_test_log(value);
}

/// @brief \f[ log(9580.738) = 9.167510 \f]
START_TEST(s21_log_379) {
  double value = 9580.738;

  s21_test_log(value);
}

/// @brief \f[ log(9701.860) = 9.180073 \f]
START_TEST(s21_log_380) {
  double value = 9701.860;

  s21_test_log(value);
}

/// @brief \f[ log(9822.982) = 9.192480 \f]
START_TEST(s21_log_381) {
  double value = 9822.982;

  s21_test_log(value);
}

/// @brief \f[ log(9944.104) = 9.204735 \f]
START_TEST(s21_log_382) {
  double value = 9944.104;

  s21_test_log(value);
}

/// @brief \f[ log(10065.226) = 9.216842 \f]
START_TEST(s21_log_383) {
  double value = 10065.226;

  s21_test_log(value);
}

/// @brief \f[ log(10186.348) = 9.228804 \f]
START_TEST(s21_log_384) {
  double value = 10186.348;

  s21_test_log(value);
}

/// @brief \f[ log(10307.470) = 9.240624 \f]
START_TEST(s21_log_385) {
  double value = 10307.470;

  s21_test_log(value);
}

/// @brief \f[ log(10428.592) = 9.252307 \f]
START_TEST(s21_log_386) {
  double value = 10428.592;

  s21_test_log(value);
}

/// @brief \f[ log(10549.714) = 9.263854 \f]
START_TEST(s21_log_387) {
  double value = 10549.714;

  s21_test_log(value);
}

/// @brief \f[ log(10670.836) = 9.275270 \f]
START_TEST(s21_log_388) {
  double value = 10670.836;

  s21_test_log(value);
}

/// @brief \f[ log(10791.958) = 9.286557 \f]
START_TEST(s21_log_389) {
  double value = 10791.958;

  s21_test_log(value);
}

/// @brief \f[ log(10913.080) = 9.297717 \f]
START_TEST(s21_log_390) {
  double value = 10913.080;

  s21_test_log(value);
}

/// @brief \f[ log(11034.202) = 9.308755 \f]
START_TEST(s21_log_391) {
  double value = 11034.202;

  s21_test_log(value);
}

/// @brief \f[ log(11155.324) = 9.319672 \f]
START_TEST(s21_log_392) {
  double value = 11155.324;

  s21_test_log(value);
}

/// @brief \f[ log(11276.446) = 9.330471 \f]
START_TEST(s21_log_393) {
  double value = 11276.446;

  s21_test_log(value);
}

/// @brief \f[ log(11397.568) = 9.341155 \f]
START_TEST(s21_log_394) {
  double value = 11397.568;

  s21_test_log(value);
}

/// @brief \f[ log(11518.690) = 9.351726 \f]
START_TEST(s21_log_395) {
  double value = 11518.690;

  s21_test_log(value);
}

/// @brief \f[ log(11639.812) = 9.362187 \f]
START_TEST(s21_log_396) {
  double value = 11639.812;

  s21_test_log(value);
}

/// @brief \f[ log(11760.934) = 9.372539 \f]
START_TEST(s21_log_397) {
  double value = 11760.934;

  s21_test_log(value);
}

/// @brief \f[ log(11882.056) = 9.382785 \f]
START_TEST(s21_log_398) {
  double value = 11882.056;

  s21_test_log(value);
}

/// @brief \f[ log(12003.178) = 9.392927 \f]
START_TEST(s21_log_399) {
  double value = 12003.178;

  s21_test_log(value);
}

/// @brief \f[ log(1.213) = 0.193097 \f]
START_TEST(s21_log_400) {
  double value = 1.213;

  s21_test_log(value);
}

/// @brief \f[ log(1.447) = 0.369492 \f]
START_TEST(s21_log_401) {
  double value = 1.447;

  s21_test_log(value);
}

/// @brief \f[ log(1.681) = 0.519389 \f]
START_TEST(s21_log_402) {
  double value = 1.681;

  s21_test_log(value);
}

/// @brief \f[ log(1.915) = 0.649718 \f]
START_TEST(s21_log_403) {
  double value = 1.915;

  s21_test_log(value);
}

/// @brief \f[ log(2.149) = 0.765003 \f]
START_TEST(s21_log_404) {
  double value = 2.149;

  s21_test_log(value);
}

/// @brief \f[ log(2.383) = 0.868360 \f]
START_TEST(s21_log_405) {
  double value = 2.383;

  s21_test_log(value);
}

/// @brief \f[ log(2.617) = 0.962029 \f]
START_TEST(s21_log_406) {
  double value = 2.617;

  s21_test_log(value);
}

/// @brief \f[ log(2.851) = 1.047670 \f]
START_TEST(s21_log_407) {
  double value = 2.851;

  s21_test_log(value);
}

/// @brief \f[ log(3.085) = 1.126552 \f]
START_TEST(s21_log_408) {
  double value = 3.085;

  s21_test_log(value);
}

/// @brief \f[ log(3.319) = 1.199664 \f]
START_TEST(s21_log_409) {
  double value = 3.319;

  s21_test_log(value);
}

/// @brief \f[ log(3.553) = 1.267792 \f]
START_TEST(s21_log_410) {
  double value = 3.553;

  s21_test_log(value);
}

/// @brief \f[ log(3.787) = 1.331574 \f]
START_TEST(s21_log_411) {
  double value = 3.787;

  s21_test_log(value);
}

/// @brief \f[ log(4.021) = 1.391531 \f]
START_TEST(s21_log_412) {
  double value = 4.021;

  s21_test_log(value);
}

/// @brief \f[ log(4.255) = 1.448095 \f]
START_TEST(s21_log_413) {
  double value = 4.255;

  s21_test_log(value);
}

/// @brief \f[ log(4.489) = 1.501630 \f]
START_TEST(s21_log_414) {
  double value = 4.489;

  s21_test_log(value);
}

/// @brief \f[ log(4.723) = 1.552444 \f]
START_TEST(s21_log_415) {
  double value = 4.723;

  s21_test_log(value);
}

/// @brief \f[ log(4.957) = 1.600801 \f]
START_TEST(s21_log_416) {
  double value = 4.957;

  s21_test_log(value);
}

/// @brief \f[ log(5.191) = 1.646926 \f]
START_TEST(s21_log_417) {
  double value = 5.191;

  s21_test_log(value);
}

/// @brief \f[ log(5.425) = 1.691018 \f]
START_TEST(s21_log_418) {
  double value = 5.425;

  s21_test_log(value);
}

/// @brief \f[ log(5.659) = 1.733247 \f]
START_TEST(s21_log_419) {
  double value = 5.659;

  s21_test_log(value);
}

/// @brief \f[ log(5.893) = 1.773765 \f]
START_TEST(s21_log_420) {
  double value = 5.893;

  s21_test_log(value);
}

/// @brief \f[ log(6.127) = 1.812705 \f]
START_TEST(s21_log_421) {
  double value = 6.127;

  s21_test_log(value);
}

/// @brief \f[ log(6.361) = 1.850186 \f]
START_TEST(s21_log_422) {
  double value = 6.361;

  s21_test_log(value);
}

/// @brief \f[ log(6.595) = 1.886312 \f]
START_TEST(s21_log_423) {
  double value = 6.595;

  s21_test_log(value);
}

/// @brief \f[ log(6.829) = 1.921178 \f]
START_TEST(s21_log_424) {
  double value = 6.829;

  s21_test_log(value);
}

/// @brief \f[ log(7.063) = 1.954870 \f]
START_TEST(s21_log_425) {
  double value = 7.063;

  s21_test_log(value);
}

/// @brief \f[ log(7.297) = 1.987463 \f]
START_TEST(s21_log_426) {
  double value = 7.297;

  s21_test_log(value);
}

/// @brief \f[ log(7.531) = 2.019028 \f]
START_TEST(s21_log_427) {
  double value = 7.531;

  s21_test_log(value);
}

/// @brief \f[ log(7.765) = 2.049626 \f]
START_TEST(s21_log_428) {
  double value = 7.765;

  s21_test_log(value);
}

/// @brief \f[ log(7.999) = 2.079317 \f]
START_TEST(s21_log_429) {
  double value = 7.999;

  s21_test_log(value);
}

/// @brief \f[ log(8.233) = 2.108150 \f]
START_TEST(s21_log_430) {
  double value = 8.233;

  s21_test_log(value);
}

/// @brief \f[ log(8.467) = 2.136176 \f]
START_TEST(s21_log_431) {
  double value = 8.467;

  s21_test_log(value);
}

/// @brief \f[ log(8.701) = 2.163438 \f]
START_TEST(s21_log_432) {
  double value = 8.701;

  s21_test_log(value);
}

/// @brief \f[ log(8.935) = 2.189976 \f]
START_TEST(s21_log_433) {
  double value = 8.935;

  s21_test_log(value);
}

/// @brief \f[ log(9.169) = 2.215828 \f]
START_TEST(s21_log_434) {
  double value = 9.169;

  s21_test_log(value);
}

/// @brief \f[ log(9.403) = 2.241029 \f]
START_TEST(s21_log_435) {
  double value = 9.403;

  s21_test_log(value);
}

/// @brief \f[ log(9.637) = 2.265610 \f]
START_TEST(s21_log_436) {
  double value = 9.637;

  s21_test_log(value);
}

/// @brief \f[ log(9.871) = 2.289601 \f]
START_TEST(s21_log_437) {
  double value = 9.871;

  s21_test_log(value);
}

/// @brief \f[ log(10.105) = 2.313030 \f]
START_TEST(s21_log_438) {
  double value = 10.105;

  s21_test_log(value);
}

/// @brief \f[ log(10.339) = 2.335923 \f]
START_TEST(s21_log_439) {
  double value = 10.339;

  s21_test_log(value);
}

/// @brief \f[ log(10.573) = 2.358304 \f]
START_TEST(s21_log_440) {
  double value = 10.573;

  s21_test_log(value);
}

/// @brief \f[ log(10.807) = 2.380194 \f]
START_TEST(s21_log_441) {
  double value = 10.807;

  s21_test_log(value);
}

/// @brief \f[ log(11.041) = 2.401616 \f]
START_TEST(s21_log_442) {
  double value = 11.041;

  s21_test_log(value);
}

/// @brief \f[ log(11.275) = 2.422588 \f]
START_TEST(s21_log_443) {
  double value = 11.275;

  s21_test_log(value);
}

/// @brief \f[ log(11.509) = 2.443129 \f]
START_TEST(s21_log_444) {
  double value = 11.509;

  s21_test_log(value);
}

/// @brief \f[ log(11.743) = 2.463257 \f]
START_TEST(s21_log_445) {
  double value = 11.743;

  s21_test_log(value);
}

/// @brief \f[ log(11.977) = 2.482988 \f]
START_TEST(s21_log_446) {
  double value = 11.977;

  s21_test_log(value);
}

/// @brief \f[ log(12.211) = 2.502337 \f]
START_TEST(s21_log_447) {
  double value = 12.211;

  s21_test_log(value);
}

/// @brief \f[ log(12.445) = 2.521319 \f]
START_TEST(s21_log_448) {
  double value = 12.445;

  s21_test_log(value);
}

/// @brief \f[ log(12.679) = 2.539947 \f]
START_TEST(s21_log_449) {
  double value = 12.679;

  s21_test_log(value);
}

/// @brief \f[ log(12.913) = 2.558235 \f]
START_TEST(s21_log_450) {
  double value = 12.913;

  s21_test_log(value);
}

/// @brief \f[ log(13.147) = 2.576194 \f]
START_TEST(s21_log_451) {
  double value = 13.147;

  s21_test_log(value);
}

/// @brief \f[ log(13.381) = 2.593836 \f]
START_TEST(s21_log_452) {
  double value = 13.381;

  s21_test_log(value);
}

/// @brief \f[ log(13.615) = 2.611172 \f]
START_TEST(s21_log_453) {
  double value = 13.615;

  s21_test_log(value);
}

/// @brief \f[ log(13.849) = 2.628213 \f]
START_TEST(s21_log_454) {
  double value = 13.849;

  s21_test_log(value);
}

/// @brief \f[ log(14.083) = 2.644968 \f]
START_TEST(s21_log_455) {
  double value = 14.083;

  s21_test_log(value);
}

/// @brief \f[ log(14.317) = 2.661448 \f]
START_TEST(s21_log_456) {
  double value = 14.317;

  s21_test_log(value);
}

/// @brief \f[ log(14.551) = 2.677660 \f]
START_TEST(s21_log_457) {
  double value = 14.551;

  s21_test_log(value);
}

/// @brief \f[ log(14.785) = 2.693613 \f]
START_TEST(s21_log_458) {
  double value = 14.785;

  s21_test_log(value);
}

/// @brief \f[ log(15.019) = 2.709316 \f]
START_TEST(s21_log_459) {
  double value = 15.019;

  s21_test_log(value);
}

/// @brief \f[ log(15.253) = 2.724776 \f]
START_TEST(s21_log_460) {
  double value = 15.253;

  s21_test_log(value);
}

/// @brief \f[ log(15.487) = 2.740001 \f]
START_TEST(s21_log_461) {
  double value = 15.487;

  s21_test_log(value);
}

/// @brief \f[ log(15.721) = 2.754997 \f]
START_TEST(s21_log_462) {
  double value = 15.721;

  s21_test_log(value);
}

/// @brief \f[ log(15.955) = 2.769772 \f]
START_TEST(s21_log_463) {
  double value = 15.955;

  s21_test_log(value);
}

/// @brief \f[ log(16.189) = 2.784332 \f]
START_TEST(s21_log_464) {
  double value = 16.189;

  s21_test_log(value);
}

/// @brief \f[ log(16.423) = 2.798683 \f]
START_TEST(s21_log_465) {
  double value = 16.423;

  s21_test_log(value);
}

/// @brief \f[ log(16.657) = 2.812831 \f]
START_TEST(s21_log_466) {
  double value = 16.657;

  s21_test_log(value);
}

/// @brief \f[ log(16.891) = 2.826781 \f]
START_TEST(s21_log_467) {
  double value = 16.891;

  s21_test_log(value);
}

/// @brief \f[ log(17.125) = 2.840539 \f]
START_TEST(s21_log_468) {
  double value = 17.125;

  s21_test_log(value);
}

/// @brief \f[ log(17.359) = 2.854111 \f]
START_TEST(s21_log_469) {
  double value = 17.359;

  s21_test_log(value);
}

/// @brief \f[ log(17.593) = 2.867501 \f]
START_TEST(s21_log_470) {
  double value = 17.593;

  s21_test_log(value);
}

/// @brief \f[ log(17.827) = 2.880714 \f]
START_TEST(s21_log_471) {
  double value = 17.827;

  s21_test_log(value);
}

/// @brief \f[ log(18.061) = 2.893755 \f]
START_TEST(s21_log_472) {
  double value = 18.061;

  s21_test_log(value);
}

/// @brief \f[ log(18.295) = 2.906628 \f]
START_TEST(s21_log_473) {
  double value = 18.295;

  s21_test_log(value);
}

/// @brief \f[ log(18.529) = 2.919337 \f]
START_TEST(s21_log_474) {
  double value = 18.529;

  s21_test_log(value);
}

/// @brief \f[ log(18.763) = 2.931887 \f]
START_TEST(s21_log_475) {
  double value = 18.763;

  s21_test_log(value);
}

/// @brief \f[ log(18.997) = 2.944281 \f]
START_TEST(s21_log_476) {
  double value = 18.997;

  s21_test_log(value);
}

/// @brief \f[ log(19.231) = 2.956524 \f]
START_TEST(s21_log_477) {
  double value = 19.231;

  s21_test_log(value);
}

/// @brief \f[ log(19.465) = 2.968618 \f]
START_TEST(s21_log_478) {
  double value = 19.465;

  s21_test_log(value);
}

/// @brief \f[ log(19.699) = 2.980568 \f]
START_TEST(s21_log_479) {
  double value = 19.699;

  s21_test_log(value);
}

/// @brief \f[ log(19.933) = 2.992377 \f]
START_TEST(s21_log_480) {
  double value = 19.933;

  s21_test_log(value);
}

/// @brief \f[ log(20.167) = 3.004048 \f]
START_TEST(s21_log_481) {
  double value = 20.167;

  s21_test_log(value);
}

/// @brief \f[ log(20.401) = 3.015584 \f]
START_TEST(s21_log_482) {
  double value = 20.401;

  s21_test_log(value);
}

/// @brief \f[ log(20.635) = 3.026989 \f]
START_TEST(s21_log_483) {
  double value = 20.635;

  s21_test_log(value);
}

/// @brief \f[ log(20.869) = 3.038265 \f]
START_TEST(s21_log_484) {
  double value = 20.869;

  s21_test_log(value);
}

/// @brief \f[ log(21.103) = 3.049415 \f]
START_TEST(s21_log_485) {
  double value = 21.103;

  s21_test_log(value);
}

/// @brief \f[ log(21.337) = 3.060443 \f]
START_TEST(s21_log_486) {
  double value = 21.337;

  s21_test_log(value);
}

/// @brief \f[ log(21.571) = 3.071350 \f]
START_TEST(s21_log_487) {
  double value = 21.571;

  s21_test_log(value);
}

/// @brief \f[ log(21.805) = 3.082139 \f]
START_TEST(s21_log_488) {
  double value = 21.805;

  s21_test_log(value);
}

/// @brief \f[ log(22.039) = 3.092814 \f]
START_TEST(s21_log_489) {
  double value = 22.039;

  s21_test_log(value);
}

/// @brief \f[ log(22.273) = 3.103375 \f]
START_TEST(s21_log_490) {
  double value = 22.273;

  s21_test_log(value);
}

/// @brief \f[ log(22.507) = 3.113826 \f]
START_TEST(s21_log_491) {
  double value = 22.507;

  s21_test_log(value);
}

/// @brief \f[ log(22.741) = 3.124169 \f]
START_TEST(s21_log_492) {
  double value = 22.741;

  s21_test_log(value);
}

/// @brief \f[ log(22.975) = 3.134407 \f]
START_TEST(s21_log_493) {
  double value = 22.975;

  s21_test_log(value);
}

/// @brief \f[ log(23.209) = 3.144540 \f]
START_TEST(s21_log_494) {
  double value = 23.209;

  s21_test_log(value);
}

/// @brief \f[ log(23.443) = 3.154572 \f]
START_TEST(s21_log_495) {
  double value = 23.443;

  s21_test_log(value);
}

/// @brief \f[ log(23.677) = 3.164504 \f]
START_TEST(s21_log_496) {
  double value = 23.677;

  s21_test_log(value);
}

/// @brief \f[ log(23.911) = 3.174339 \f]
START_TEST(s21_log_497) {
  double value = 23.911;

  s21_test_log(value);
}

/// @brief \f[ log(24.145) = 3.184077 \f]
START_TEST(s21_log_498) {
  double value = 24.145;

  s21_test_log(value);
}

/// @brief \f[ log(24.379) = 3.193722 \f]
START_TEST(s21_log_499) {
  double value = 24.379;

  s21_test_log(value);
}

/// @brief \f[ log(12.2113) = 2.502362 \f]
START_TEST(s21_log_500) {
  double value = 12.2113;

  s21_test_log(value);
}

/// @brief \f[ log(13.4113) = 2.596098 \f]
START_TEST(s21_log_501) {
  double value = 13.4113;

  s21_test_log(value);
}

/// @brief \f[ log(14.6113) = 2.681795 \f]
START_TEST(s21_log_502) {
  double value = 14.6113;

  s21_test_log(value);
}

/// @brief \f[ log(15.8113) = 2.760725 \f]
START_TEST(s21_log_503) {
  double value = 15.8113;

  s21_test_log(value);
}

/// @brief \f[ log(17.0113) = 2.833878 \f]
START_TEST(s21_log_504) {
  double value = 17.0113;

  s21_test_log(value);
}

/// @brief \f[ log(18.2113) = 2.902042 \f]
START_TEST(s21_log_505) {
  double value = 18.2113;

  s21_test_log(value);
}

/// @brief \f[ log(19.4113) = 2.965855 \f]
START_TEST(s21_log_506) {
  double value = 19.4113;

  s21_test_log(value);
}

/// @brief \f[ log(20.6113) = 3.025839 \f]
START_TEST(s21_log_507) {
  double value = 20.6113;

  s21_test_log(value);
}

/// @brief \f[ log(21.8113) = 3.082428 \f]
START_TEST(s21_log_508) {
  double value = 21.8113;

  s21_test_log(value);
}

/// @brief \f[ log(23.0113) = 3.135985 \f]
START_TEST(s21_log_509) {
  double value = 23.0113;

  s21_test_log(value);
}

/// @brief \f[ log(24.2113) = 3.186819 \f]
START_TEST(s21_log_510) {
  double value = 24.2113;

  s21_test_log(value);
}

/// @brief \f[ log(25.4113) = 3.235194 \f]
START_TEST(s21_log_511) {
  double value = 25.4113;

  s21_test_log(value);
}

/// @brief \f[ log(26.6113) = 3.281336 \f]
START_TEST(s21_log_512) {
  double value = 26.6113;

  s21_test_log(value);
}

/// @brief \f[ log(27.8113) = 3.325442 \f]
START_TEST(s21_log_513) {
  double value = 27.8113;

  s21_test_log(value);
}

/// @brief \f[ log(29.0113) = 3.367685 \f]
START_TEST(s21_log_514) {
  double value = 29.0113;

  s21_test_log(value);
}

/// @brief \f[ log(30.2113) = 3.408216 \f]
START_TEST(s21_log_515) {
  double value = 30.2113;

  s21_test_log(value);
}

/// @brief \f[ log(31.4113) = 3.447168 \f]
START_TEST(s21_log_516) {
  double value = 31.4113;

  s21_test_log(value);
}

/// @brief \f[ log(32.6113) = 3.484659 \f]
START_TEST(s21_log_517) {
  double value = 32.6113;

  s21_test_log(value);
}

/// @brief \f[ log(33.8113) = 3.520795 \f]
START_TEST(s21_log_518) {
  double value = 33.8113;

  s21_test_log(value);
}

/// @brief \f[ log(35.0113) = 3.555671 \f]
START_TEST(s21_log_519) {
  double value = 35.0113;

  s21_test_log(value);
}

/// @brief \f[ log(36.2113) = 3.589371 \f]
START_TEST(s21_log_520) {
  double value = 36.2113;

  s21_test_log(value);
}

/// @brief \f[ log(37.4113) = 3.621973 \f]
START_TEST(s21_log_521) {
  double value = 37.4113;

  s21_test_log(value);
}

/// @brief \f[ log(38.6113) = 3.653545 \f]
START_TEST(s21_log_522) {
  double value = 38.6113;

  s21_test_log(value);
}

/// @brief \f[ log(39.8113) = 3.684151 \f]
START_TEST(s21_log_523) {
  double value = 39.8113;

  s21_test_log(value);
}

/// @brief \f[ log(41.0113) = 3.713848 \f]
START_TEST(s21_log_524) {
  double value = 41.0113;

  s21_test_log(value);
}

/// @brief \f[ log(42.2113) = 3.742688 \f]
START_TEST(s21_log_525) {
  double value = 42.2113;

  s21_test_log(value);
}

/// @brief \f[ log(43.4113) = 3.770720 \f]
START_TEST(s21_log_526) {
  double value = 43.4113;

  s21_test_log(value);
}

/// @brief \f[ log(44.6113) = 3.797987 \f]
START_TEST(s21_log_527) {
  double value = 44.6113;

  s21_test_log(value);
}

/// @brief \f[ log(45.8113) = 3.824531 \f]
START_TEST(s21_log_528) {
  double value = 45.8113;

  s21_test_log(value);
}

/// @brief \f[ log(47.0113) = 3.850388 \f]
START_TEST(s21_log_529) {
  double value = 47.0113;

  s21_test_log(value);
}

/// @brief \f[ log(48.2113) = 3.875593 \f]
START_TEST(s21_log_530) {
  double value = 48.2113;

  s21_test_log(value);
}

/// @brief \f[ log(49.4113) = 3.900179 \f]
START_TEST(s21_log_531) {
  double value = 49.4113;

  s21_test_log(value);
}

/// @brief \f[ log(50.6113) = 3.924175 \f]
START_TEST(s21_log_532) {
  double value = 50.6113;

  s21_test_log(value);
}

/// @brief \f[ log(51.8113) = 3.947608 \f]
START_TEST(s21_log_533) {
  double value = 51.8113;

  s21_test_log(value);
}

/// @brief \f[ log(53.0113) = 3.970505 \f]
START_TEST(s21_log_534) {
  double value = 53.0113;

  s21_test_log(value);
}

/// @brief \f[ log(54.2113) = 3.992889 \f]
START_TEST(s21_log_535) {
  double value = 54.2113;

  s21_test_log(value);
}

/// @brief \f[ log(55.4113) = 4.014784 \f]
START_TEST(s21_log_536) {
  double value = 55.4113;

  s21_test_log(value);
}

/// @brief \f[ log(56.6113) = 4.036209 \f]
START_TEST(s21_log_537) {
  double value = 56.6113;

  s21_test_log(value);
}

/// @brief \f[ log(57.8113) = 4.057184 \f]
START_TEST(s21_log_538) {
  double value = 57.8113;

  s21_test_log(value);
}

/// @brief \f[ log(59.0113) = 4.077729 \f]
START_TEST(s21_log_539) {
  double value = 59.0113;

  s21_test_log(value);
}

/// @brief \f[ log(60.2113) = 4.097860 \f]
START_TEST(s21_log_540) {
  double value = 60.2113;

  s21_test_log(value);
}

/// @brief \f[ log(61.4113) = 4.117594 \f]
START_TEST(s21_log_541) {
  double value = 61.4113;

  s21_test_log(value);
}

/// @brief \f[ log(62.6113) = 4.136946 \f]
START_TEST(s21_log_542) {
  double value = 62.6113;

  s21_test_log(value);
}

/// @brief \f[ log(63.8113) = 4.155930 \f]
START_TEST(s21_log_543) {
  double value = 63.8113;

  s21_test_log(value);
}

/// @brief \f[ log(65.0113) = 4.174561 \f]
START_TEST(s21_log_544) {
  double value = 65.0113;

  s21_test_log(value);
}

/// @brief \f[ log(66.2113) = 4.192851 \f]
START_TEST(s21_log_545) {
  double value = 66.2113;

  s21_test_log(value);
}

/// @brief \f[ log(67.4113) = 4.210813 \f]
START_TEST(s21_log_546) {
  double value = 67.4113;

  s21_test_log(value);
}

/// @brief \f[ log(68.6113) = 4.228457 \f]
START_TEST(s21_log_547) {
  double value = 68.6113;

  s21_test_log(value);
}

/// @brief \f[ log(69.8113) = 4.245796 \f]
START_TEST(s21_log_548) {
  double value = 69.8113;

  s21_test_log(value);
}

/// @brief \f[ log(71.0113) = 4.262839 \f]
START_TEST(s21_log_549) {
  double value = 71.0113;

  s21_test_log(value);
}

/// @brief \f[ log(72.2113) = 4.279597 \f]
START_TEST(s21_log_550) {
  double value = 72.2113;

  s21_test_log(value);
}

/// @brief \f[ log(73.4113) = 4.296078 \f]
START_TEST(s21_log_551) {
  double value = 73.4113;

  s21_test_log(value);
}

/// @brief \f[ log(74.6113) = 4.312292 \f]
START_TEST(s21_log_552) {
  double value = 74.6113;

  s21_test_log(value);
}

/// @brief \f[ log(75.8113) = 4.328247 \f]
START_TEST(s21_log_553) {
  double value = 75.8113;

  s21_test_log(value);
}

/// @brief \f[ log(77.0113) = 4.343952 \f]
START_TEST(s21_log_554) {
  double value = 77.0113;

  s21_test_log(value);
}

/// @brief \f[ log(78.2113) = 4.359414 \f]
START_TEST(s21_log_555) {
  double value = 78.2113;

  s21_test_log(value);
}

/// @brief \f[ log(79.4113) = 4.374641 \f]
START_TEST(s21_log_556) {
  double value = 79.4113;

  s21_test_log(value);
}

/// @brief \f[ log(80.6113) = 4.389639 \f]
START_TEST(s21_log_557) {
  double value = 80.6113;

  s21_test_log(value);
}

/// @brief \f[ log(81.8113) = 4.404415 \f]
START_TEST(s21_log_558) {
  double value = 81.8113;

  s21_test_log(value);
}

/// @brief \f[ log(83.0113) = 4.418977 \f]
START_TEST(s21_log_559) {
  double value = 83.0113;

  s21_test_log(value);
}

/// @brief \f[ log(84.2113) = 4.433329 \f]
START_TEST(s21_log_560) {
  double value = 84.2113;

  s21_test_log(value);
}

/// @brief \f[ log(85.4113) = 4.447478 \f]
START_TEST(s21_log_561) {
  double value = 85.4113;

  s21_test_log(value);
}

/// @brief \f[ log(86.6113) = 4.461430 \f]
START_TEST(s21_log_562) {
  double value = 86.6113;

  s21_test_log(value);
}

/// @brief \f[ log(87.8113) = 4.475190 \f]
START_TEST(s21_log_563) {
  double value = 87.8113;

  s21_test_log(value);
}

/// @brief \f[ log(89.0113) = 4.488763 \f]
START_TEST(s21_log_564) {
  double value = 89.0113;

  s21_test_log(value);
}

/// @brief \f[ log(90.2113) = 4.502155 \f]
START_TEST(s21_log_565) {
  double value = 90.2113;

  s21_test_log(value);
}

/// @brief \f[ log(91.4113) = 4.515369 \f]
START_TEST(s21_log_566) {
  double value = 91.4113;

  s21_test_log(value);
}

/// @brief \f[ log(92.6113) = 4.528411 \f]
START_TEST(s21_log_567) {
  double value = 92.6113;

  s21_test_log(value);
}

/// @brief \f[ log(93.8113) = 4.541285 \f]
START_TEST(s21_log_568) {
  double value = 93.8113;

  s21_test_log(value);
}

/// @brief \f[ log(95.0113) = 4.553996 \f]
START_TEST(s21_log_569) {
  double value = 95.0113;

  s21_test_log(value);
}

/// @brief \f[ log(96.2113) = 4.566547 \f]
START_TEST(s21_log_570) {
  double value = 96.2113;

  s21_test_log(value);
}

/// @brief \f[ log(97.4113) = 4.578942 \f]
START_TEST(s21_log_571) {
  double value = 97.4113;

  s21_test_log(value);
}

/// @brief \f[ log(98.6113) = 4.591186 \f]
START_TEST(s21_log_572) {
  double value = 98.6113;

  s21_test_log(value);
}

/// @brief \f[ log(99.8113) = 4.603281 \f]
START_TEST(s21_log_573) {
  double value = 99.8113;

  s21_test_log(value);
}

/// @brief \f[ log(101.0113) = 4.615232 \f]
START_TEST(s21_log_574) {
  double value = 101.0113;

  s21_test_log(value);
}

/// @brief \f[ log(102.2113) = 4.627042 \f]
START_TEST(s21_log_575) {
  double value = 102.2113;

  s21_test_log(value);
}

/// @brief \f[ log(103.4113) = 4.638714 \f]
START_TEST(s21_log_576) {
  double value = 103.4113;

  s21_test_log(value);
}

/// @brief \f[ log(104.6113) = 4.650252 \f]
START_TEST(s21_log_577) {
  double value = 104.6113;

  s21_test_log(value);
}

/// @brief \f[ log(105.8113) = 4.661657 \f]
START_TEST(s21_log_578) {
  double value = 105.8113;

  s21_test_log(value);
}

/// @brief \f[ log(107.0113) = 4.672934 \f]
START_TEST(s21_log_579) {
  double value = 107.0113;

  s21_test_log(value);
}

/// @brief \f[ log(108.2113) = 4.684086 \f]
START_TEST(s21_log_580) {
  double value = 108.2113;

  s21_test_log(value);
}

/// @brief \f[ log(109.4113) = 4.695114 \f]
START_TEST(s21_log_581) {
  double value = 109.4113;

  s21_test_log(value);
}

/// @brief \f[ log(110.6113) = 4.706022 \f]
START_TEST(s21_log_582) {
  double value = 110.6113;

  s21_test_log(value);
}

/// @brief \f[ log(111.8113) = 4.716813 \f]
START_TEST(s21_log_583) {
  double value = 111.8113;

  s21_test_log(value);
}

/// @brief \f[ log(113.0113) = 4.727488 \f]
START_TEST(s21_log_584) {
  double value = 113.0113;

  s21_test_log(value);
}

/// @brief \f[ log(114.2113) = 4.738050 \f]
START_TEST(s21_log_585) {
  double value = 114.2113;

  s21_test_log(value);
}

/// @brief \f[ log(115.4113) = 4.748502 \f]
START_TEST(s21_log_586) {
  double value = 115.4113;

  s21_test_log(value);
}

/// @brief \f[ log(116.6113) = 4.758846 \f]
START_TEST(s21_log_587) {
  double value = 116.6113;

  s21_test_log(value);
}

/// @brief \f[ log(117.8113) = 4.769084 \f]
START_TEST(s21_log_588) {
  double value = 117.8113;

  s21_test_log(value);
}

/// @brief \f[ log(119.0113) = 4.779218 \f]
START_TEST(s21_log_589) {
  double value = 119.0113;

  s21_test_log(value);
}

/// @brief \f[ log(120.2113) = 4.789251 \f]
START_TEST(s21_log_590) {
  double value = 120.2113;

  s21_test_log(value);
}

/// @brief \f[ log(121.4113) = 4.799184 \f]
START_TEST(s21_log_591) {
  double value = 121.4113;

  s21_test_log(value);
}

/// @brief \f[ log(122.6113) = 4.809019 \f]
START_TEST(s21_log_592) {
  double value = 122.6113;

  s21_test_log(value);
}

/// @brief \f[ log(123.8113) = 4.818759 \f]
START_TEST(s21_log_593) {
  double value = 123.8113;

  s21_test_log(value);
}

/// @brief \f[ log(125.0113) = 4.828404 \f]
START_TEST(s21_log_594) {
  double value = 125.0113;

  s21_test_log(value);
}

/// @brief \f[ log(126.2113) = 4.837957 \f]
START_TEST(s21_log_595) {
  double value = 126.2113;

  s21_test_log(value);
}

/// @brief \f[ log(127.4113) = 4.847420 \f]
START_TEST(s21_log_596) {
  double value = 127.4113;

  s21_test_log(value);
}

/// @brief \f[ log(128.6113) = 4.856795 \f]
START_TEST(s21_log_597) {
  double value = 128.6113;

  s21_test_log(value);
}

/// @brief \f[ log(129.8113) = 4.866082 \f]
START_TEST(s21_log_598) {
  double value = 129.8113;

  s21_test_log(value);
}

/// @brief \f[ log(131.0113) = 4.875284 \f]
START_TEST(s21_log_599) {
  double value = 131.0113;

  s21_test_log(value);
}

/// @brief \f[ log(1.0212) = 0.020978 \f]
START_TEST(s21_log_600) {
  double value = 1.0212;

  s21_test_log(value);
}

/// @brief \f[ log(2.2342) = 0.803883 \f]
START_TEST(s21_log_601) {
  double value = 2.2342;

  s21_test_log(value);
}

/// @brief \f[ log(3.4472) = 1.237562 \f]
START_TEST(s21_log_602) {
  double value = 3.4472;

  s21_test_log(value);
}

/// @brief \f[ log(4.6602) = 1.539058 \f]
START_TEST(s21_log_603) {
  double value = 4.6602;

  s21_test_log(value);
}

/// @brief \f[ log(5.8732) = 1.770400 \f]
START_TEST(s21_log_604) {
  double value = 5.8732;

  s21_test_log(value);
}

/// @brief \f[ log(7.0862) = 1.958149 \f]
START_TEST(s21_log_605) {
  double value = 7.0862;

  s21_test_log(value);
}

/// @brief \f[ log(8.2992) = 2.116159 \f]
START_TEST(s21_log_606) {
  double value = 8.2992;

  s21_test_log(value);
}

/// @brief \f[ log(9.5122) = 2.252575 \f]
START_TEST(s21_log_607) {
  double value = 9.5122;

  s21_test_log(value);
}

/// @brief \f[ log(10.7252) = 2.372596 \f]
START_TEST(s21_log_608) {
  double value = 10.7252;

  s21_test_log(value);
}

/// @brief \f[ log(11.9382) = 2.479743 \f]
START_TEST(s21_log_609) {
  double value = 11.9382;

  s21_test_log(value);
}

/// @brief \f[ log(13.1512) = 2.576513 \f]
START_TEST(s21_log_610) {
  double value = 13.1512;

  s21_test_log(value);
}

/// @brief \f[ log(14.3642) = 2.664739 \f]
START_TEST(s21_log_611) {
  double value = 14.3642;

  s21_test_log(value);
}

/// @brief \f[ log(15.5772) = 2.745808 \f]
START_TEST(s21_log_612) {
  double value = 15.5772;

  s21_test_log(value);
}

/// @brief \f[ log(16.7902) = 2.820795 \f]
START_TEST(s21_log_613) {
  double value = 16.7902;

  s21_test_log(value);
}

/// @brief \f[ log(18.0032) = 2.890550 \f]
START_TEST(s21_log_614) {
  double value = 18.0032;

  s21_test_log(value);
}

/// @brief \f[ log(19.2162) = 2.955754 \f]
START_TEST(s21_log_615) {
  double value = 19.2162;

  s21_test_log(value);
}

/// @brief \f[ log(20.4292) = 3.016965 \f]
START_TEST(s21_log_616) {
  double value = 20.4292;

  s21_test_log(value);
}

/// @brief \f[ log(21.6422) = 3.074645 \f]
START_TEST(s21_log_617) {
  double value = 21.6422;

  s21_test_log(value);
}

/// @brief \f[ log(22.8552) = 3.129179 \f]
START_TEST(s21_log_618) {
  double value = 22.8552;

  s21_test_log(value);
}

/// @brief \f[ log(24.0682) = 3.180891 \f]
START_TEST(s21_log_619) {
  double value = 24.0682;

  s21_test_log(value);
}

/// @brief \f[ log(25.2812) = 3.230061 \f]
START_TEST(s21_log_620) {
  double value = 25.2812;

  s21_test_log(value);
}

/// @brief \f[ log(26.4942) = 3.276926 \f]
START_TEST(s21_log_621) {
  double value = 26.4942;

  s21_test_log(value);
}

/// @brief \f[ log(27.7072) = 3.321692 \f]
START_TEST(s21_log_622) {
  double value = 27.7072;

  s21_test_log(value);
}

/// @brief \f[ log(28.9202) = 3.364540 \f]
START_TEST(s21_log_623) {
  double value = 28.9202;

  s21_test_log(value);
}

/// @brief \f[ log(30.1332) = 3.405628 \f]
START_TEST(s21_log_624) {
  double value = 30.1332;

  s21_test_log(value);
}

/// @brief \f[ log(31.3462) = 3.445093 \f]
START_TEST(s21_log_625) {
  double value = 31.3462;

  s21_test_log(value);
}

/// @brief \f[ log(32.5592) = 3.483060 \f]
START_TEST(s21_log_626) {
  double value = 32.5592;

  s21_test_log(value);
}

/// @brief \f[ log(33.7722) = 3.519638 \f]
START_TEST(s21_log_627) {
  double value = 33.7722;

  s21_test_log(value);
}

/// @brief \f[ log(34.9852) = 3.554925 \f]
START_TEST(s21_log_628) {
  double value = 34.9852;

  s21_test_log(value);
}

/// @brief \f[ log(36.1982) = 3.589009 \f]
START_TEST(s21_log_629) {
  double value = 36.1982;

  s21_test_log(value);
}

/// @brief \f[ log(37.4112) = 3.621970 \f]
START_TEST(s21_log_630) {
  double value = 37.4112;

  s21_test_log(value);
}

/// @brief \f[ log(38.6242) = 3.653879 \f]
START_TEST(s21_log_631) {
  double value = 38.6242;

  s21_test_log(value);
}

/// @brief \f[ log(39.8372) = 3.684801 \f]
START_TEST(s21_log_632) {
  double value = 39.8372;

  s21_test_log(value);
}

/// @brief \f[ log(41.0502) = 3.714796 \f]
START_TEST(s21_log_633) {
  double value = 41.0502;

  s21_test_log(value);
}

/// @brief \f[ log(42.2632) = 3.743917 \f]
START_TEST(s21_log_634) {
  double value = 42.2632;

  s21_test_log(value);
}

/// @brief \f[ log(43.4762) = 3.772214 \f]
START_TEST(s21_log_635) {
  double value = 43.4762;

  s21_test_log(value);
}

/// @brief \f[ log(44.6892) = 3.799732 \f]
START_TEST(s21_log_636) {
  double value = 44.6892;

  s21_test_log(value);
}

/// @brief \f[ log(45.9022) = 3.826513 \f]
START_TEST(s21_log_637) {
  double value = 45.9022;

  s21_test_log(value);
}

/// @brief \f[ log(47.1152) = 3.852596 \f]
START_TEST(s21_log_638) {
  double value = 47.1152;

  s21_test_log(value);
}

/// @brief \f[ log(48.3282) = 3.878015 \f]
START_TEST(s21_log_639) {
  double value = 48.3282;

  s21_test_log(value);
}

/// @brief \f[ log(49.5412) = 3.902805 \f]
START_TEST(s21_log_640) {
  double value = 49.5412;

  s21_test_log(value);
}

/// @brief \f[ log(50.7542) = 3.926994 \f]
START_TEST(s21_log_641) {
  double value = 50.7542;

  s21_test_log(value);
}

/// @brief \f[ log(51.9672) = 3.950613 \f]
START_TEST(s21_log_642) {
  double value = 51.9672;

  s21_test_log(value);
}

/// @brief \f[ log(53.1802) = 3.973686 \f]
START_TEST(s21_log_643) {
  double value = 53.1802;

  s21_test_log(value);
}

/// @brief \f[ log(54.3932) = 3.996239 \f]
START_TEST(s21_log_644) {
  double value = 54.3932;

  s21_test_log(value);
}

/// @brief \f[ log(55.6062) = 4.018295 \f]
START_TEST(s21_log_645) {
  double value = 55.6062;

  s21_test_log(value);
}

/// @brief \f[ log(56.8192) = 4.039874 \f]
START_TEST(s21_log_646) {
  double value = 56.8192;

  s21_test_log(value);
}

/// @brief \f[ log(58.0322) = 4.060998 \f]
START_TEST(s21_log_647) {
  double value = 58.0322;

  s21_test_log(value);
}

/// @brief \f[ log(59.2452) = 4.081685 \f]
START_TEST(s21_log_648) {
  double value = 59.2452;

  s21_test_log(value);
}

/// @brief \f[ log(60.4582) = 4.101952 \f]
START_TEST(s21_log_649) {
  double value = 60.4582;

  s21_test_log(value);
}

/// @brief \f[ log(61.6712) = 4.121817 \f]
START_TEST(s21_log_650) {
  double value = 61.6712;

  s21_test_log(value);
}

/// @brief \f[ log(62.8842) = 4.141295 \f]
START_TEST(s21_log_651) {
  double value = 62.8842;

  s21_test_log(value);
}

/// @brief \f[ log(64.0972) = 4.160401 \f]
START_TEST(s21_log_652) {
  double value = 64.0972;

  s21_test_log(value);
}

/// @brief \f[ log(65.3102) = 4.179148 \f]
START_TEST(s21_log_653) {
  double value = 65.3102;

  s21_test_log(value);
}

/// @brief \f[ log(66.5232) = 4.197551 \f]
START_TEST(s21_log_654) {
  double value = 66.5232;

  s21_test_log(value);
}

/// @brief \f[ log(67.7362) = 4.215621 \f]
START_TEST(s21_log_655) {
  double value = 67.7362;

  s21_test_log(value);
}

/// @brief \f[ log(68.9492) = 4.233370 \f]
START_TEST(s21_log_656) {
  double value = 68.9492;

  s21_test_log(value);
}

/// @brief \f[ log(70.1622) = 4.250810 \f]
START_TEST(s21_log_657) {
  double value = 70.1622;

  s21_test_log(value);
}

/// @brief \f[ log(71.3752) = 4.267950 \f]
START_TEST(s21_log_658) {
  double value = 71.3752;

  s21_test_log(value);
}

/// @brief \f[ log(72.5882) = 4.284802 \f]
START_TEST(s21_log_659) {
  double value = 72.5882;

  s21_test_log(value);
}

/// @brief \f[ log(73.8012) = 4.301375 \f]
START_TEST(s21_log_660) {
  double value = 73.8012;

  s21_test_log(value);
}

/// @brief \f[ log(75.0142) = 4.317677 \f]
START_TEST(s21_log_661) {
  double value = 75.0142;

  s21_test_log(value);
}

/// @brief \f[ log(76.2272) = 4.333718 \f]
START_TEST(s21_log_662) {
  double value = 76.2272;

  s21_test_log(value);
}

/// @brief \f[ log(77.4402) = 4.349506 \f]
START_TEST(s21_log_663) {
  double value = 77.4402;

  s21_test_log(value);
}

/// @brief \f[ log(78.6532) = 4.365048 \f]
START_TEST(s21_log_664) {
  double value = 78.6532;

  s21_test_log(value);
}

/// @brief \f[ log(79.8662) = 4.380353 \f]
START_TEST(s21_log_665) {
  double value = 79.8662;

  s21_test_log(value);
}

/// @brief \f[ log(81.0792) = 4.395426 \f]
START_TEST(s21_log_666) {
  double value = 81.0792;

  s21_test_log(value);
}

/// @brief \f[ log(82.2922) = 4.410276 \f]
START_TEST(s21_log_667) {
  double value = 82.2922;

  s21_test_log(value);
}

/// @brief \f[ log(83.5052) = 4.424909 \f]
START_TEST(s21_log_668) {
  double value = 83.5052;

  s21_test_log(value);
}

/// @brief \f[ log(84.7182) = 4.439330 \f]
START_TEST(s21_log_669) {
  double value = 84.7182;

  s21_test_log(value);
}

/// @brief \f[ log(85.9312) = 4.453547 \f]
START_TEST(s21_log_670) {
  double value = 85.9312;

  s21_test_log(value);
}

/// @brief \f[ log(87.1442) = 4.467564 \f]
START_TEST(s21_log_671) {
  double value = 87.1442;

  s21_test_log(value);
}

/// @brief \f[ log(88.3572) = 4.481388 \f]
START_TEST(s21_log_672) {
  double value = 88.3572;

  s21_test_log(value);
}

/// @brief \f[ log(89.5702) = 4.495023 \f]
START_TEST(s21_log_673) {
  double value = 89.5702;

  s21_test_log(value);
}

/// @brief \f[ log(90.7832) = 4.508474 \f]
START_TEST(s21_log_674) {
  double value = 90.7832;

  s21_test_log(value);
}

/// @brief \f[ log(91.9962) = 4.521747 \f]
START_TEST(s21_log_675) {
  double value = 91.9962;

  s21_test_log(value);
}

/// @brief \f[ log(93.2092) = 4.534846 \f]
START_TEST(s21_log_676) {
  double value = 93.2092;

  s21_test_log(value);
}

/// @brief \f[ log(94.4222) = 4.547776 \f]
START_TEST(s21_log_677) {
  double value = 94.4222;

  s21_test_log(value);
}

/// @brief \f[ log(95.6352) = 4.560541 \f]
START_TEST(s21_log_678) {
  double value = 95.6352;

  s21_test_log(value);
}

/// @brief \f[ log(96.8482) = 4.573145 \f]
START_TEST(s21_log_679) {
  double value = 96.8482;

  s21_test_log(value);
}

/// @brief \f[ log(98.0612) = 4.585592 \f]
START_TEST(s21_log_680) {
  double value = 98.0612;

  s21_test_log(value);
}

/// @brief \f[ log(99.2742) = 4.597886 \f]
START_TEST(s21_log_681) {
  double value = 99.2742;

  s21_test_log(value);
}

/// @brief \f[ log(100.4872) = 4.610030 \f]
START_TEST(s21_log_682) {
  double value = 100.4872;

  s21_test_log(value);
}

/// @brief \f[ log(101.7002) = 4.622029 \f]
START_TEST(s21_log_683) {
  double value = 101.7002;

  s21_test_log(value);
}

/// @brief \f[ log(102.9132) = 4.633886 \f]
START_TEST(s21_log_684) {
  double value = 102.9132;

  s21_test_log(value);
}

/// @brief \f[ log(104.1262) = 4.645604 \f]
START_TEST(s21_log_685) {
  double value = 104.1262;

  s21_test_log(value);
}

/// @brief \f[ log(105.3392) = 4.657186 \f]
START_TEST(s21_log_686) {
  double value = 105.3392;

  s21_test_log(value);
}

/// @brief \f[ log(106.5522) = 4.668635 \f]
START_TEST(s21_log_687) {
  double value = 106.5522;

  s21_test_log(value);
}

/// @brief \f[ log(107.7652) = 4.679955 \f]
START_TEST(s21_log_688) {
  double value = 107.7652;

  s21_test_log(value);
}

/// @brief \f[ log(108.9782) = 4.691148 \f]
START_TEST(s21_log_689) {
  double value = 108.9782;

  s21_test_log(value);
}

/// @brief \f[ log(110.1912) = 4.702217 \f]
START_TEST(s21_log_690) {
  double value = 110.1912;

  s21_test_log(value);
}

/// @brief \f[ log(111.4042) = 4.713165 \f]
START_TEST(s21_log_691) {
  double value = 111.4042;

  s21_test_log(value);
}

/// @brief \f[ log(112.6172) = 4.723994 \f]
START_TEST(s21_log_692) {
  double value = 112.6172;

  s21_test_log(value);
}

/// @brief \f[ log(113.8302) = 4.734708 \f]
START_TEST(s21_log_693) {
  double value = 113.8302;

  s21_test_log(value);
}

/// @brief \f[ log(115.0432) = 4.745308 \f]
START_TEST(s21_log_694) {
  double value = 115.0432;

  s21_test_log(value);
}

/// @brief \f[ log(116.2562) = 4.755796 \f]
START_TEST(s21_log_695) {
  double value = 116.2562;

  s21_test_log(value);
}

/// @brief \f[ log(117.4692) = 4.766176 \f]
START_TEST(s21_log_696) {
  double value = 117.4692;

  s21_test_log(value);
}

/// @brief \f[ log(118.6822) = 4.776449 \f]
START_TEST(s21_log_697) {
  double value = 118.6822;

  s21_test_log(value);
}

/// @brief \f[ log(119.8952) = 4.786618 \f]
START_TEST(s21_log_698) {
  double value = 119.8952;

  s21_test_log(value);
}

/// @brief \f[ log(121.1082) = 4.796684 \f]
START_TEST(s21_log_699) {
  double value = 121.1082;

  s21_test_log(value);
}

/// @brief \f[ log(1.23) = 0.207014 \f]
START_TEST(s21_log_700) {
  double value = 1.23;

  s21_test_log(value);
}

/// @brief \f[ log(2.751312) = 1.012078 \f]
START_TEST(s21_log_701) {
  double value = 2.751312;

  s21_test_log(value);
}

/// @brief \f[ log(4.272624) = 1.452228 \f]
START_TEST(s21_log_702) {
  double value = 4.272624;

  s21_test_log(value);
}

/// @brief \f[ log(5.793936) = 1.756812 \f]
START_TEST(s21_log_703) {
  double value = 5.793936;

  s21_test_log(value);
}

/// @brief \f[ log(7.315248) = 1.989961 \f]
START_TEST(s21_log_704) {
  double value = 7.315248;

  s21_test_log(value);
}

/// @brief \f[ log(8.836560) = 2.178898 \f]
START_TEST(s21_log_705) {
  double value = 8.836560;

  s21_test_log(value);
}

/// @brief \f[ log(10.357872) = 2.337747 \f]
START_TEST(s21_log_706) {
  double value = 10.357872;

  s21_test_log(value);
}

/// @brief \f[ log(11.879184) = 2.474788 \f]
START_TEST(s21_log_707) {
  double value = 11.879184;

  s21_test_log(value);
}

/// @brief \f[ log(13.400496) = 2.595292 \f]
START_TEST(s21_log_708) {
  double value = 13.400496;

  s21_test_log(value);
}

/// @brief \f[ log(14.921808) = 2.702824 \f]
START_TEST(s21_log_709) {
  double value = 14.921808;

  s21_test_log(value);
}

/// @brief \f[ log(16.443120) = 2.799907 \f]
START_TEST(s21_log_710) {
  double value = 16.443120;

  s21_test_log(value);
}

/// @brief \f[ log(17.964432) = 2.888394 \f]
START_TEST(s21_log_711) {
  double value = 17.964432;

  s21_test_log(value);
}

/// @brief \f[ log(19.485744) = 2.969683 \f]
START_TEST(s21_log_712) {
  double value = 19.485744;

  s21_test_log(value);
}

/// @brief \f[ log(21.007056) = 3.044858 \f]
START_TEST(s21_log_713) {
  double value = 21.007056;

  s21_test_log(value);
}

/// @brief \f[ log(22.528368) = 3.114775 \f]
START_TEST(s21_log_714) {
  double value = 22.528368;

  s21_test_log(value);
}

/// @brief \f[ log(24.049680) = 3.180122 \f]
START_TEST(s21_log_715) {
  double value = 24.049680;

  s21_test_log(value);
}

/// @brief \f[ log(25.570992) = 3.241459 \f]
START_TEST(s21_log_716) {
  double value = 25.570992;

  s21_test_log(value);
}

/// @brief \f[ log(27.092304) = 3.299250 \f]
START_TEST(s21_log_717) {
  double value = 27.092304;

  s21_test_log(value);
}

/// @brief \f[ log(28.613616) = 3.353883 \f]
START_TEST(s21_log_718) {
  double value = 28.613616;

  s21_test_log(value);
}

/// @brief \f[ log(30.134928) = 3.405685 \f]
START_TEST(s21_log_719) {
  double value = 30.134928;

  s21_test_log(value);
}

/// @brief \f[ log(31.656240) = 3.454935 \f]
START_TEST(s21_log_720) {
  double value = 31.656240;

  s21_test_log(value);
}

/// @brief \f[ log(33.177552) = 3.501874 \f]
START_TEST(s21_log_721) {
  double value = 33.177552;

  s21_test_log(value);
}

/// @brief \f[ log(34.698864) = 3.546707 \f]
START_TEST(s21_log_722) {
  double value = 34.698864;

  s21_test_log(value);
}

/// @brief \f[ log(36.220176) = 3.589616 \f]
START_TEST(s21_log_723) {
  double value = 36.220176;

  s21_test_log(value);
}

/// @brief \f[ log(37.741488) = 3.630760 \f]
START_TEST(s21_log_724) {
  double value = 37.741488;

  s21_test_log(value);
}

/// @brief \f[ log(39.262800) = 3.670278 \f]
START_TEST(s21_log_725) {
  double value = 39.262800;

  s21_test_log(value);
}

/// @brief \f[ log(40.784112) = 3.708293 \f]
START_TEST(s21_log_726) {
  double value = 40.784112;

  s21_test_log(value);
}

/// @brief \f[ log(42.305424) = 3.744915 \f]
START_TEST(s21_log_727) {
  double value = 42.305424;

  s21_test_log(value);
}

/// @brief \f[ log(43.826736) = 3.780244 \f]
START_TEST(s21_log_728) {
  double value = 43.826736;

  s21_test_log(value);
}

/// @brief \f[ log(45.348048) = 3.814367 \f]
START_TEST(s21_log_729) {
  double value = 45.348048;

  s21_test_log(value);
}

/// @brief \f[ log(46.869360) = 3.847364 \f]
START_TEST(s21_log_730) {
  double value = 46.869360;

  s21_test_log(value);
}

/// @brief \f[ log(48.390672) = 3.879307 \f]
START_TEST(s21_log_731) {
  double value = 48.390672;

  s21_test_log(value);
}

/// @brief \f[ log(49.911984) = 3.910261 \f]
START_TEST(s21_log_732) {
  double value = 49.911984;

  s21_test_log(value);
}

/// @brief \f[ log(51.433296) = 3.940286 \f]
START_TEST(s21_log_733) {
  double value = 51.433296;

  s21_test_log(value);
}

/// @brief \f[ log(52.954608) = 3.969435 \f]
START_TEST(s21_log_734) {
  double value = 52.954608;

  s21_test_log(value);
}

/// @brief \f[ log(54.475920) = 3.997759 \f]
START_TEST(s21_log_735) {
  double value = 54.475920;

  s21_test_log(value);
}

/// @brief \f[ log(55.997232) = 4.025302 \f]
START_TEST(s21_log_736) {
  double value = 55.997232;

  s21_test_log(value);
}

/// @brief \f[ log(57.518544) = 4.052107 \f]
START_TEST(s21_log_737) {
  double value = 57.518544;

  s21_test_log(value);
}

/// @brief \f[ log(59.039856) = 4.078213 \f]
START_TEST(s21_log_738) {
  double value = 59.039856;

  s21_test_log(value);
}

/// @brief \f[ log(60.561168) = 4.103654 \f]
START_TEST(s21_log_739) {
  double value = 60.561168;

  s21_test_log(value);
}

/// @brief \f[ log(62.082480) = 4.128464 \f]
START_TEST(s21_log_740) {
  double value = 62.082480;

  s21_test_log(value);
}

/// @brief \f[ log(63.603792) = 4.152673 \f]
START_TEST(s21_log_741) {
  double value = 63.603792;

  s21_test_log(value);
}

/// @brief \f[ log(65.125104) = 4.176310 \f]
START_TEST(s21_log_742) {
  double value = 65.125104;

  s21_test_log(value);
}

/// @brief \f[ log(66.646416) = 4.199401 \f]
START_TEST(s21_log_743) {
  double value = 66.646416;

  s21_test_log(value);
}

/// @brief \f[ log(68.167728) = 4.221971 \f]
START_TEST(s21_log_744) {
  double value = 68.167728;

  s21_test_log(value);
}

/// @brief \f[ log(69.689040) = 4.244043 \f]
START_TEST(s21_log_745) {
  double value = 69.689040;

  s21_test_log(value);
}

/// @brief \f[ log(71.210352) = 4.265638 \f]
START_TEST(s21_log_746) {
  double value = 71.210352;

  s21_test_log(value);
}

/// @brief \f[ log(72.731664) = 4.286777 \f]
START_TEST(s21_log_747) {
  double value = 72.731664;

  s21_test_log(value);
}

/// @brief \f[ log(74.252976) = 4.307478 \f]
START_TEST(s21_log_748) {
  double value = 74.252976;

  s21_test_log(value);
}

/// @brief \f[ log(75.774288) = 4.327759 \f]
START_TEST(s21_log_749) {
  double value = 75.774288;

  s21_test_log(value);
}

/// @brief \f[ log(77.295600) = 4.347637 \f]
START_TEST(s21_log_750) {
  double value = 77.295600;

  s21_test_log(value);
}

/// @brief \f[ log(78.816912) = 4.367128 \f]
START_TEST(s21_log_751) {
  double value = 78.816912;

  s21_test_log(value);
}

/// @brief \f[ log(80.338224) = 4.386246 \f]
START_TEST(s21_log_752) {
  double value = 80.338224;

  s21_test_log(value);
}

/// @brief \f[ log(81.859536) = 4.405005 \f]
START_TEST(s21_log_753) {
  double value = 81.859536;

  s21_test_log(value);
}

/// @brief \f[ log(83.380848) = 4.423419 \f]
START_TEST(s21_log_754) {
  double value = 83.380848;

  s21_test_log(value);
}

/// @brief \f[ log(84.902160) = 4.441500 \f]
START_TEST(s21_log_755) {
  double value = 84.902160;

  s21_test_log(value);
}

/// @brief \f[ log(86.423472) = 4.459259 \f]
START_TEST(s21_log_756) {
  double value = 86.423472;

  s21_test_log(value);
}

/// @brief \f[ log(87.944784) = 4.476709 \f]
START_TEST(s21_log_757) {
  double value = 87.944784;

  s21_test_log(value);
}

/// @brief \f[ log(89.466096) = 4.493860 \f]
START_TEST(s21_log_758) {
  double value = 89.466096;

  s21_test_log(value);
}

/// @brief \f[ log(90.987408) = 4.510721 \f]
START_TEST(s21_log_759) {
  double value = 90.987408;

  s21_test_log(value);
}

/// @brief \f[ log(92.508720) = 4.527303 \f]
START_TEST(s21_log_760) {
  double value = 92.508720;

  s21_test_log(value);
}

/// @brief \f[ log(94.030032) = 4.543614 \f]
START_TEST(s21_log_761) {
  double value = 94.030032;

  s21_test_log(value);
}

/// @brief \f[ log(95.551344) = 4.559664 \f]
START_TEST(s21_log_762) {
  double value = 95.551344;

  s21_test_log(value);
}

/// @brief \f[ log(97.072656) = 4.575460 \f]
START_TEST(s21_log_763) {
  double value = 97.072656;

  s21_test_log(value);
}

/// @brief \f[ log(98.593968) = 4.591010 \f]
START_TEST(s21_log_764) {
  double value = 98.593968;

  s21_test_log(value);
}

/// @brief \f[ log(100.115280) = 4.606322 \f]
START_TEST(s21_log_765) {
  double value = 100.115280;

  s21_test_log(value);
}

/// @brief \f[ log(101.636592) = 4.621404 \f]
START_TEST(s21_log_766) {
  double value = 101.636592;

  s21_test_log(value);
}

/// @brief \f[ log(103.157904) = 4.636261 \f]
START_TEST(s21_log_767) {
  double value = 103.157904;

  s21_test_log(value);
}

/// @brief \f[ log(104.679216) = 4.650901 \f]
START_TEST(s21_log_768) {
  double value = 104.679216;

  s21_test_log(value);
}

/// @brief \f[ log(106.200528) = 4.665329 \f]
START_TEST(s21_log_769) {
  double value = 106.200528;

  s21_test_log(value);
}

/// @brief \f[ log(107.721840) = 4.679552 \f]
START_TEST(s21_log_770) {
  double value = 107.721840;

  s21_test_log(value);
}

/// @brief \f[ log(109.243152) = 4.693576 \f]
START_TEST(s21_log_771) {
  double value = 109.243152;

  s21_test_log(value);
}

/// @brief \f[ log(110.764464) = 4.707406 \f]
START_TEST(s21_log_772) {
  double value = 110.764464;

  s21_test_log(value);
}

/// @brief \f[ log(112.285776) = 4.721047 \f]
START_TEST(s21_log_773) {
  double value = 112.285776;

  s21_test_log(value);
}

/// @brief \f[ log(113.807088) = 4.734505 \f]
START_TEST(s21_log_774) {
  double value = 113.807088;

  s21_test_log(value);
}

/// @brief \f[ log(115.328400) = 4.747784 \f]
START_TEST(s21_log_775) {
  double value = 115.328400;

  s21_test_log(value);
}

/// @brief \f[ log(116.849712) = 4.760889 \f]
START_TEST(s21_log_776) {
  double value = 116.849712;

  s21_test_log(value);
}

/// @brief \f[ log(118.371024) = 4.773824 \f]
START_TEST(s21_log_777) {
  double value = 118.371024;

  s21_test_log(value);
}

/// @brief \f[ log(119.892336) = 4.786594 \f]
START_TEST(s21_log_778) {
  double value = 119.892336;

  s21_test_log(value);
}

/// @brief \f[ log(121.413648) = 4.799203 \f]
START_TEST(s21_log_779) {
  double value = 121.413648;

  s21_test_log(value);
}

/// @brief \f[ log(122.934960) = 4.811655 \f]
START_TEST(s21_log_780) {
  double value = 122.934960;

  s21_test_log(value);
}

/// @brief \f[ log(124.456272) = 4.823954 \f]
START_TEST(s21_log_781) {
  double value = 124.456272;

  s21_test_log(value);
}

/// @brief \f[ log(125.977584) = 4.836104 \f]
START_TEST(s21_log_782) {
  double value = 125.977584;

  s21_test_log(value);
}

/// @brief \f[ log(127.498896) = 4.848108 \f]
START_TEST(s21_log_783) {
  double value = 127.498896;

  s21_test_log(value);
}

/// @brief \f[ log(129.020208) = 4.859969 \f]
START_TEST(s21_log_784) {
  double value = 129.020208;

  s21_test_log(value);
}

/// @brief \f[ log(130.541520) = 4.871691 \f]
START_TEST(s21_log_785) {
  double value = 130.541520;

  s21_test_log(value);
}

/// @brief \f[ log(132.062832) = 4.883278 \f]
START_TEST(s21_log_786) {
  double value = 132.062832;

  s21_test_log(value);
}

/// @brief \f[ log(133.584144) = 4.894732 \f]
START_TEST(s21_log_787) {
  double value = 133.584144;

  s21_test_log(value);
}

/// @brief \f[ log(135.105456) = 4.906056 \f]
START_TEST(s21_log_788) {
  double value = 135.105456;

  s21_test_log(value);
}

/// @brief \f[ log(136.626768) = 4.917253 \f]
START_TEST(s21_log_789) {
  double value = 136.626768;

  s21_test_log(value);
}

/// @brief \f[ log(138.148080) = 4.928326 \f]
START_TEST(s21_log_790) {
  double value = 138.148080;

  s21_test_log(value);
}

/// @brief \f[ log(139.669392) = 4.939278 \f]
START_TEST(s21_log_791) {
  double value = 139.669392;

  s21_test_log(value);
}

/// @brief \f[ log(141.190704) = 4.950111 \f]
START_TEST(s21_log_792) {
  double value = 141.190704;

  s21_test_log(value);
}

/// @brief \f[ log(142.712016) = 4.960829 \f]
START_TEST(s21_log_793) {
  double value = 142.712016;

  s21_test_log(value);
}

/// @brief \f[ log(144.233328) = 4.971432 \f]
START_TEST(s21_log_794) {
  double value = 144.233328;

  s21_test_log(value);
}

/// @brief \f[ log(145.754640) = 4.981925 \f]
START_TEST(s21_log_795) {
  double value = 145.754640;

  s21_test_log(value);
}

/// @brief \f[ log(147.275952) = 4.992308 \f]
START_TEST(s21_log_796) {
  double value = 147.275952;

  s21_test_log(value);
}

/// @brief \f[ log(148.797264) = 5.002585 \f]
START_TEST(s21_log_797) {
  double value = 148.797264;

  s21_test_log(value);
}

/// @brief \f[ log(150.318576) = 5.012757 \f]
START_TEST(s21_log_798) {
  double value = 150.318576;

  s21_test_log(value);
}

/// @brief \f[ log(151.839888) = 5.022827 \f]
START_TEST(s21_log_799) {
  double value = 151.839888;

  s21_test_log(value);
}

/// @brief \f[ log(2.1) = 0.741937 \f]
START_TEST(s21_log_800) {
  double value = 2.1;

  s21_test_log(value);
}

/// @brief \f[ log(3.61111) = 1.284015 \f]
START_TEST(s21_log_801) {
  double value = 3.61111;

  s21_test_log(value);
}

/// @brief \f[ log(5.12222) = 1.633588 \f]
START_TEST(s21_log_802) {
  double value = 5.12222;

  s21_test_log(value);
}

/// @brief \f[ log(6.63333) = 1.892107 \f]
START_TEST(s21_log_803) {
  double value = 6.63333;

  s21_test_log(value);
}

/// @brief \f[ log(8.14444) = 2.097335 \f]
START_TEST(s21_log_804) {
  double value = 8.14444;

  s21_test_log(value);
}

/// @brief \f[ log(9.65555) = 2.267533 \f]
START_TEST(s21_log_805) {
  double value = 9.65555;

  s21_test_log(value);
}

/// @brief \f[ log(11.16666) = 2.412933 \f]
START_TEST(s21_log_806) {
  double value = 11.16666;

  s21_test_log(value);
}

/// @brief \f[ log(12.67777) = 2.539850 \f]
START_TEST(s21_log_807) {
  double value = 12.67777;

  s21_test_log(value);
}

/// @brief \f[ log(14.18888) = 2.652459 \f]
START_TEST(s21_log_808) {
  double value = 14.18888;

  s21_test_log(value);
}

/// @brief \f[ log(15.69999) = 2.753660 \f]
START_TEST(s21_log_809) {
  double value = 15.69999;

  s21_test_log(value);
}

/// @brief \f[ log(17.21110) = 2.845555 \f]
START_TEST(s21_log_810) {
  double value = 17.21110;

  s21_test_log(value);
}

/// @brief \f[ log(18.72221) = 2.929711 \f]
START_TEST(s21_log_811) {
  double value = 18.72221;

  s21_test_log(value);
}

/// @brief \f[ log(20.23332) = 3.007331 \f]
START_TEST(s21_log_812) {
  double value = 20.23332;

  s21_test_log(value);
}

/// @brief \f[ log(21.74443) = 3.079358 \f]
START_TEST(s21_log_813) {
  double value = 21.74443;

  s21_test_log(value);
}

/// @brief \f[ log(23.25554) = 3.146543 \f]
START_TEST(s21_log_814) {
  double value = 23.25554;

  s21_test_log(value);
}

/// @brief \f[ log(24.76665) = 3.209498 \f]
START_TEST(s21_log_815) {
  double value = 24.76665;

  s21_test_log(value);
}

/// @brief \f[ log(26.27776) = 3.268723 \f]
START_TEST(s21_log_816) {
  double value = 26.27776;

  s21_test_log(value);
}

/// @brief \f[ log(27.78887) = 3.324636 \f]
START_TEST(s21_log_817) {
  double value = 27.78887;

  s21_test_log(value);
}

/// @brief \f[ log(29.29998) = 3.377587 \f]
START_TEST(s21_log_818) {
  double value = 29.29998;

  s21_test_log(value);
}

/// @brief \f[ log(30.81109) = 3.427875 \f]
START_TEST(s21_log_819) {
  double value = 30.81109;

  s21_test_log(value);
}

/// @brief \f[ log(32.32220) = 3.475754 \f]
START_TEST(s21_log_820) {
  double value = 32.32220;

  s21_test_log(value);
}

/// @brief \f[ log(33.83331) = 3.521446 \f]
START_TEST(s21_log_821) {
  double value = 33.83331;

  s21_test_log(value);
}

/// @brief \f[ log(35.34442) = 3.565141 \f]
START_TEST(s21_log_822) {
  double value = 35.34442;

  s21_test_log(value);
}

/// @brief \f[ log(36.85553) = 3.607006 \f]
START_TEST(s21_log_823) {
  double value = 36.85553;

  s21_test_log(value);
}

/// @brief \f[ log(38.36664) = 3.647188 \f]
START_TEST(s21_log_824) {
  double value = 38.36664;

  s21_test_log(value);
}

/// @brief \f[ log(39.87775) = 3.685819 \f]
START_TEST(s21_log_825) {
  double value = 39.87775;

  s21_test_log(value);
}

/// @brief \f[ log(41.38886) = 3.723012 \f]
START_TEST(s21_log_826) {
  double value = 41.38886;

  s21_test_log(value);
}

/// @brief \f[ log(42.89997) = 3.758871 \f]
START_TEST(s21_log_827) {
  double value = 42.89997;

  s21_test_log(value);
}

/// @brief \f[ log(44.41108) = 3.793489 \f]
START_TEST(s21_log_828) {
  double value = 44.41108;

  s21_test_log(value);
}

/// @brief \f[ log(45.92219) = 3.826948 \f]
START_TEST(s21_log_829) {
  double value = 45.92219;

  s21_test_log(value);
}

/// @brief \f[ log(47.43330) = 3.859325 \f]
START_TEST(s21_log_830) {
  double value = 47.43330;

  s21_test_log(value);
}

/// @brief \f[ log(48.94441) = 3.890685 \f]
START_TEST(s21_log_831) {
  double value = 48.94441;

  s21_test_log(value);
}

/// @brief \f[ log(50.45552) = 3.921092 \f]
START_TEST(s21_log_832) {
  double value = 50.45552;

  s21_test_log(value);
}

/// @brief \f[ log(51.96663) = 3.950602 \f]
START_TEST(s21_log_833) {
  double value = 51.96663;

  s21_test_log(value);
}

/// @brief \f[ log(53.47774) = 3.979265 \f]
START_TEST(s21_log_834) {
  double value = 53.47774;

  s21_test_log(value);
}

/// @brief \f[ log(54.98885) = 4.007130 \f]
START_TEST(s21_log_835) {
  double value = 54.98885;

  s21_test_log(value);
}

/// @brief \f[ log(56.49996) = 4.034240 \f]
START_TEST(s21_log_836) {
  double value = 56.49996;

  s21_test_log(value);
}

/// @brief \f[ log(58.01107) = 4.060634 \f]
START_TEST(s21_log_837) {
  double value = 58.01107;

  s21_test_log(value);
}

/// @brief \f[ log(59.52218) = 4.086349 \f]
START_TEST(s21_log_838) {
  double value = 59.52218;

  s21_test_log(value);
}

/// @brief \f[ log(61.03329) = 4.111419 \f]
START_TEST(s21_log_839) {
  double value = 61.03329;

  s21_test_log(value);
}

/// @brief \f[ log(62.54440) = 4.135877 \f]
START_TEST(s21_log_840) {
  double value = 62.54440;

  s21_test_log(value);
}

/// @brief \f[ log(64.05551) = 4.159750 \f]
START_TEST(s21_log_841) {
  double value = 64.05551;

  s21_test_log(value);
}

/// @brief \f[ log(65.56662) = 4.183067 \f]
START_TEST(s21_log_842) {
  double value = 65.56662;

  s21_test_log(value);
}

/// @brief \f[ log(67.07773) = 4.205852 \f]
START_TEST(s21_log_843) {
  double value = 67.07773;

  s21_test_log(value);
}

/// @brief \f[ log(68.58884) = 4.228130 \f]
START_TEST(s21_log_844) {
  double value = 68.58884;

  s21_test_log(value);
}

/// @brief \f[ log(70.09995) = 4.249922 \f]
START_TEST(s21_log_845) {
  double value = 70.09995;

  s21_test_log(value);
}

/// @brief \f[ log(71.61106) = 4.271250 \f]
START_TEST(s21_log_846) {
  double value = 71.61106;

  s21_test_log(value);
}

/// @brief \f[ log(73.12217) = 4.292132 \f]
START_TEST(s21_log_847) {
  double value = 73.12217;

  s21_test_log(value);
}

/// @brief \f[ log(74.63328) = 4.312587 \f]
START_TEST(s21_log_848) {
  double value = 74.63328;

  s21_test_log(value);
}

/// @brief \f[ log(76.14439) = 4.332631 \f]
START_TEST(s21_log_849) {
  double value = 76.14439;

  s21_test_log(value);
}

/// @brief \f[ log(77.65550) = 4.352282 \f]
START_TEST(s21_log_850) {
  double value = 77.65550;

  s21_test_log(value);
}

/// @brief \f[ log(79.16661) = 4.371555 \f]
START_TEST(s21_log_851) {
  double value = 79.16661;

  s21_test_log(value);
}

/// @brief \f[ log(80.67772) = 4.390462 \f]
START_TEST(s21_log_852) {
  double value = 80.67772;

  s21_test_log(value);
}

/// @brief \f[ log(82.18883) = 4.409019 \f]
START_TEST(s21_log_853) {
  double value = 82.18883;

  s21_test_log(value);
}

/// @brief \f[ log(83.69994) = 4.427238 \f]
START_TEST(s21_log_854) {
  double value = 83.69994;

  s21_test_log(value);
}

/// @brief \f[ log(85.21105) = 4.445131 \f]
START_TEST(s21_log_855) {
  double value = 85.21105;

  s21_test_log(value);
}

/// @brief \f[ log(86.72216) = 4.462709 \f]
START_TEST(s21_log_856) {
  double value = 86.72216;

  s21_test_log(value);
}

/// @brief \f[ log(88.23327) = 4.479984 \f]
START_TEST(s21_log_857) {
  double value = 88.23327;

  s21_test_log(value);
}

/// @brief \f[ log(89.74438) = 4.496965 \f]
START_TEST(s21_log_858) {
  double value = 89.74438;

  s21_test_log(value);
}

/// @brief \f[ log(91.25549) = 4.513663 \f]
START_TEST(s21_log_859) {
  double value = 91.25549;

  s21_test_log(value);
}

/// @brief \f[ log(92.76660) = 4.530087 \f]
START_TEST(s21_log_860) {
  double value = 92.76660;

  s21_test_log(value);
}

/// @brief \f[ log(94.27771) = 4.546245 \f]
START_TEST(s21_log_861) {
  double value = 94.27771;

  s21_test_log(value);
}

/// @brief \f[ log(95.78882) = 4.562146 \f]
START_TEST(s21_log_862) {
  double value = 95.78882;

  s21_test_log(value);
}

/// @brief \f[ log(97.29993) = 4.577798 \f]
START_TEST(s21_log_863) {
  double value = 97.29993;

  s21_test_log(value);
}

/// @brief \f[ log(98.81104) = 4.593209 \f]
START_TEST(s21_log_864) {
  double value = 98.81104;

  s21_test_log(value);
}

/// @brief \f[ log(100.32215) = 4.608387 \f]
START_TEST(s21_log_865) {
  double value = 100.32215;

  s21_test_log(value);
}

/// @brief \f[ log(101.83326) = 4.623337 \f]
START_TEST(s21_log_866) {
  double value = 101.83326;

  s21_test_log(value);
}

/// @brief \f[ log(103.34437) = 4.638067 \f]
START_TEST(s21_log_867) {
  double value = 103.34437;

  s21_test_log(value);
}

/// @brief \f[ log(104.85548) = 4.652583 \f]
START_TEST(s21_log_868) {
  double value = 104.85548;

  s21_test_log(value);
}

/// @brief \f[ log(106.36659) = 4.666892 \f]
START_TEST(s21_log_869) {
  double value = 106.36659;

  s21_test_log(value);
}

/// @brief \f[ log(107.87770) = 4.680998 \f]
START_TEST(s21_log_870) {
  double value = 107.87770;

  s21_test_log(value);
}

/// @brief \f[ log(109.38881) = 4.694909 \f]
START_TEST(s21_log_871) {
  double value = 109.38881;

  s21_test_log(value);
}

/// @brief \f[ log(110.89992) = 4.708628 \f]
START_TEST(s21_log_872) {
  double value = 110.89992;

  s21_test_log(value);
}

/// @brief \f[ log(112.41103) = 4.722162 \f]
START_TEST(s21_log_873) {
  double value = 112.41103;

  s21_test_log(value);
}

/// @brief \f[ log(113.92214) = 4.735515 \f]
START_TEST(s21_log_874) {
  double value = 113.92214;

  s21_test_log(value);
}

/// @brief \f[ log(115.43325) = 4.748692 \f]
START_TEST(s21_log_875) {
  double value = 115.43325;

  s21_test_log(value);
}

/// @brief \f[ log(116.94436) = 4.761698 \f]
START_TEST(s21_log_876) {
  double value = 116.94436;

  s21_test_log(value);
}

/// @brief \f[ log(118.45547) = 4.774537 \f]
START_TEST(s21_log_877) {
  double value = 118.45547;

  s21_test_log(value);
}

/// @brief \f[ log(119.96658) = 4.787213 \f]
START_TEST(s21_log_878) {
  double value = 119.96658;

  s21_test_log(value);
}

/// @brief \f[ log(121.47769) = 4.799731 \f]
START_TEST(s21_log_879) {
  double value = 121.47769;

  s21_test_log(value);
}

/// @brief \f[ log(122.98880) = 4.812093 \f]
START_TEST(s21_log_880) {
  double value = 122.98880;

  s21_test_log(value);
}

/// @brief \f[ log(124.49991) = 4.824305 \f]
START_TEST(s21_log_881) {
  double value = 124.49991;

  s21_test_log(value);
}

/// @brief \f[ log(126.01102) = 4.836369 \f]
START_TEST(s21_log_882) {
  double value = 126.01102;

  s21_test_log(value);
}

/// @brief \f[ log(127.52213) = 4.848290 \f]
START_TEST(s21_log_883) {
  double value = 127.52213;

  s21_test_log(value);
}

/// @brief \f[ log(129.03324) = 4.860070 \f]
START_TEST(s21_log_884) {
  double value = 129.03324;

  s21_test_log(value);
}

/// @brief \f[ log(130.54435) = 4.871713 \f]
START_TEST(s21_log_885) {
  double value = 130.54435;

  s21_test_log(value);
}

/// @brief \f[ log(132.05546) = 4.883222 \f]
START_TEST(s21_log_886) {
  double value = 132.05546;

  s21_test_log(value);
}

/// @brief \f[ log(133.56657) = 4.894600 \f]
START_TEST(s21_log_887) {
  double value = 133.56657;

  s21_test_log(value);
}

/// @brief \f[ log(135.07768) = 4.905850 \f]
START_TEST(s21_log_888) {
  double value = 135.07768;

  s21_test_log(value);
}

/// @brief \f[ log(136.58879) = 4.916975 \f]
START_TEST(s21_log_889) {
  double value = 136.58879;

  s21_test_log(value);
}

/// @brief \f[ log(138.09990) = 4.927977 \f]
START_TEST(s21_log_890) {
  double value = 138.09990;

  s21_test_log(value);
}

/// @brief \f[ log(139.61101) = 4.938860 \f]
START_TEST(s21_log_891) {
  double value = 139.61101;

  s21_test_log(value);
}

/// @brief \f[ log(141.12212) = 4.949626 \f]
START_TEST(s21_log_892) {
  double value = 141.12212;

  s21_test_log(value);
}

/// @brief \f[ log(142.63323) = 4.960277 \f]
START_TEST(s21_log_893) {
  double value = 142.63323;

  s21_test_log(value);
}

/// @brief \f[ log(144.14434) = 4.970815 \f]
START_TEST(s21_log_894) {
  double value = 144.14434;

  s21_test_log(value);
}

/// @brief \f[ log(145.65545) = 4.981244 \f]
START_TEST(s21_log_895) {
  double value = 145.65545;

  s21_test_log(value);
}

/// @brief \f[ log(147.16656) = 4.991565 \f]
START_TEST(s21_log_896) {
  double value = 147.16656;

  s21_test_log(value);
}

/// @brief \f[ log(148.67767) = 5.001781 \f]
START_TEST(s21_log_897) {
  double value = 148.67767;

  s21_test_log(value);
}

/// @brief \f[ log(150.18878) = 5.011893 \f]
START_TEST(s21_log_898) {
  double value = 150.18878;

  s21_test_log(value);
}

/// @brief \f[ log(151.69989) = 5.021904 \f]
START_TEST(s21_log_899) {
  double value = 151.69989;

  s21_test_log(value);
}

/// @brief \f[ log(11122.321) = 9.316709 \f]
START_TEST(s21_log_900) {
  double value = 11122.321;

  s21_test_log(value);
}

/// @brief \f[ log(1242245.44491) = 14.032431 \f]
START_TEST(s21_log_901) {
  double value = 1242245.44491;

  s21_test_log(value);
}

/// @brief \f[ log(2473368.56882) = 14.721092 \f]
START_TEST(s21_log_902) {
  double value = 2473368.56882;

  s21_test_log(value);
}

/// @brief \f[ log(3704491.69273) = 15.125057 \f]
START_TEST(s21_log_903) {
  double value = 3704491.69273;

  s21_test_log(value);
}

/// @brief \f[ log(4935614.81664) = 15.411988 \f]
START_TEST(s21_log_904) {
  double value = 4935614.81664;

  s21_test_log(value);
}

/// @brief \f[ log(6166737.94055) = 15.634681 \f]
START_TEST(s21_log_905) {
  double value = 6166737.94055;

  s21_test_log(value);
}

/// @brief \f[ log(7397861.06446) = 15.816701 \f]
START_TEST(s21_log_906) {
  double value = 7397861.06446;

  s21_test_log(value);
}

/// @brief \f[ log(8628984.18837) = 15.970637 \f]
START_TEST(s21_log_907) {
  double value = 8628984.18837;

  s21_test_log(value);
}

/// @brief \f[ log(9860107.31228) = 16.104008 \f]
START_TEST(s21_log_908) {
  double value = 9860107.31228;

  s21_test_log(value);
}

/// @brief \f[ log(11091230.43619) = 16.221665 \f]
START_TEST(s21_log_909) {
  double value = 11091230.43619;

  s21_test_log(value);
}

/// @brief \f[ log(12322353.56010) = 16.326926 \f]
START_TEST(s21_log_910) {
  double value = 12322353.56010;

  s21_test_log(value);
}

/// @brief \f[ log(13553476.68401) = 16.422154 \f]
START_TEST(s21_log_911) {
  double value = 13553476.68401;

  s21_test_log(value);
}

/// @brief \f[ log(14784599.80792) = 16.509097 \f]
START_TEST(s21_log_912) {
  double value = 14784599.80792;

  s21_test_log(value);
}

/// @brief \f[ log(16015722.93183) = 16.589081 \f]
START_TEST(s21_log_913) {
  double value = 16015722.93183;

  s21_test_log(value);
}

/// @brief \f[ log(17246846.05574) = 16.663140 \f]
START_TEST(s21_log_914) {
  double value = 17246846.05574;

  s21_test_log(value);
}

/// @brief \f[ log(18477969.17965) = 16.732090 \f]
START_TEST(s21_log_915) {
  double value = 18477969.17965;

  s21_test_log(value);
}

/// @brief \f[ log(19709092.30356) = 16.796591 \f]
START_TEST(s21_log_916) {
  double value = 19709092.30356;

  s21_test_log(value);
}

/// @brief \f[ log(20940215.42747) = 16.857182 \f]
START_TEST(s21_log_917) {
  double value = 20940215.42747;

  s21_test_log(value);
}

/// @brief \f[ log(22171338.55138) = 16.914311 \f]
START_TEST(s21_log_918) {
  double value = 22171338.55138;

  s21_test_log(value);
}

/// @brief \f[ log(23402461.67529) = 16.968352 \f]
START_TEST(s21_log_919) {
  double value = 23402461.67529;

  s21_test_log(value);
}

/// @brief \f[ log(24633584.79920) = 17.019621 \f]
START_TEST(s21_log_920) {
  double value = 24633584.79920;

  s21_test_log(value);
}

/// @brief \f[ log(25864707.92311) = 17.068390 \f]
START_TEST(s21_log_921) {
  double value = 25864707.92311;

  s21_test_log(value);
}

/// @brief \f[ log(27095831.04702) = 17.114890 \f]
START_TEST(s21_log_922) {
  double value = 27095831.04702;

  s21_test_log(value);
}

/// @brief \f[ log(28326954.17093) = 17.159324 \f]
START_TEST(s21_log_923) {
  double value = 28326954.17093;

  s21_test_log(value);
}

/// @brief \f[ log(29558077.29484) = 17.201868 \f]
START_TEST(s21_log_924) {
  double value = 29558077.29484;

  s21_test_log(value);
}

/// @brief \f[ log(30789200.41875) = 17.242675 \f]
START_TEST(s21_log_925) {
  double value = 30789200.41875;

  s21_test_log(value);
}

/// @brief \f[ log(32020323.54266) = 17.281881 \f]
START_TEST(s21_log_926) {
  double value = 32020323.54266;

  s21_test_log(value);
}

/// @brief \f[ log(33251446.66657) = 17.319609 \f]
START_TEST(s21_log_927) {
  double value = 33251446.66657;

  s21_test_log(value);
}

/// @brief \f[ log(34482569.79048) = 17.355965 \f]
START_TEST(s21_log_928) {
  double value = 34482569.79048;

  s21_test_log(value);
}

/// @brief \f[ log(35713692.91439) = 17.391045 \f]
START_TEST(s21_log_929) {
  double value = 35713692.91439;

  s21_test_log(value);
}

/// @brief \f[ log(36944816.03830) = 17.424936 \f]
START_TEST(s21_log_930) {
  double value = 36944816.03830;

  s21_test_log(value);
}

/// @brief \f[ log(38175939.16221) = 17.457716 \f]
START_TEST(s21_log_931) {
  double value = 38175939.16221;

  s21_test_log(value);
}

/// @brief \f[ log(39407062.28612) = 17.489456 \f]
START_TEST(s21_log_932) {
  double value = 39407062.28612;

  s21_test_log(value);
}

/// @brief \f[ log(40638185.41003) = 17.520219 \f]
START_TEST(s21_log_933) {
  double value = 40638185.41003;

  s21_test_log(value);
}

/// @brief \f[ log(41869308.53394) = 17.550064 \f]
START_TEST(s21_log_934) {
  double value = 41869308.53394;

  s21_test_log(value);
}

/// @brief \f[ log(43100431.65785) = 17.579044 \f]
START_TEST(s21_log_935) {
  double value = 43100431.65785;

  s21_test_log(value);
}

/// @brief \f[ log(44331554.78176) = 17.607207 \f]
START_TEST(s21_log_936) {
  double value = 44331554.78176;

  s21_test_log(value);
}

/// @brief \f[ log(45562677.90567) = 17.634599 \f]
START_TEST(s21_log_937) {
  double value = 45562677.90567;

  s21_test_log(value);
}

/// @brief \f[ log(46793801.02958) = 17.661261 \f]
START_TEST(s21_log_938) {
  double value = 46793801.02958;

  s21_test_log(value);
}

/// @brief \f[ log(48024924.15349) = 17.687231 \f]
START_TEST(s21_log_939) {
  double value = 48024924.15349;

  s21_test_log(value);
}

/// @brief \f[ log(49256047.27740) = 17.712543 \f]
START_TEST(s21_log_940) {
  double value = 49256047.27740;

  s21_test_log(value);
}

/// @brief \f[ log(50487170.40131) = 17.737230 \f]
START_TEST(s21_log_941) {
  double value = 50487170.40131;

  s21_test_log(value);
}

/// @brief \f[ log(51718293.52522) = 17.761322 \f]
START_TEST(s21_log_942) {
  double value = 51718293.52522;

  s21_test_log(value);
}

/// @brief \f[ log(52949416.64913) = 17.784848 \f]
START_TEST(s21_log_943) {
  double value = 52949416.64913;

  s21_test_log(value);
}

/// @brief \f[ log(54180539.77304) = 17.807832 \f]
START_TEST(s21_log_944) {
  double value = 54180539.77304;

  s21_test_log(value);
}

/// @brief \f[ log(55411662.89695) = 17.830301 \f]
START_TEST(s21_log_945) {
  double value = 55411662.89695;

  s21_test_log(value);
}

/// @brief \f[ log(56642786.02086) = 17.852275 \f]
START_TEST(s21_log_946) {
  double value = 56642786.02086;

  s21_test_log(value);
}

/// @brief \f[ log(57873909.14477) = 17.873777 \f]
START_TEST(s21_log_947) {
  double value = 57873909.14477;

  s21_test_log(value);
}

/// @brief \f[ log(59105032.26868) = 17.894827 \f]
START_TEST(s21_log_948) {
  double value = 59105032.26868;

  s21_test_log(value);
}

/// @brief \f[ log(60336155.39259) = 17.915442 \f]
START_TEST(s21_log_949) {
  double value = 60336155.39259;

  s21_test_log(value);
}

/// @brief \f[ log(61567278.51650) = 17.935641 \f]
START_TEST(s21_log_950) {
  double value = 61567278.51650;

  s21_test_log(value);
}

/// @brief \f[ log(62798401.64041) = 17.955440 \f]
START_TEST(s21_log_951) {
  double value = 62798401.64041;

  s21_test_log(value);
}

/// @brief \f[ log(64029524.76432) = 17.974855 \f]
START_TEST(s21_log_952) {
  double value = 64029524.76432;

  s21_test_log(value);
}

/// @brief \f[ log(65260647.88823) = 17.993900 \f]
START_TEST(s21_log_953) {
  double value = 65260647.88823;

  s21_test_log(value);
}

/// @brief \f[ log(66491771.01214) = 18.012589 \f]
START_TEST(s21_log_954) {
  double value = 66491771.01214;

  s21_test_log(value);
}

/// @brief \f[ log(67722894.13605) = 18.030935 \f]
START_TEST(s21_log_955) {
  double value = 67722894.13605;

  s21_test_log(value);
}

/// @brief \f[ log(68954017.25996) = 18.048950 \f]
START_TEST(s21_log_956) {
  double value = 68954017.25996;

  s21_test_log(value);
}

/// @brief \f[ log(70185140.38387) = 18.066647 \f]
START_TEST(s21_log_957) {
  double value = 70185140.38387;

  s21_test_log(value);
}

/// @brief \f[ log(71416263.50778) = 18.084036 \f]
START_TEST(s21_log_958) {
  double value = 71416263.50778;

  s21_test_log(value);
}

/// @brief \f[ log(72647386.63169) = 18.101128 \f]
START_TEST(s21_log_959) {
  double value = 72647386.63169;

  s21_test_log(value);
}

/// @brief \f[ log(73878509.75560) = 18.117933 \f]
START_TEST(s21_log_960) {
  double value = 73878509.75560;

  s21_test_log(value);
}

/// @brief \f[ log(75109632.87951) = 18.134459 \f]
START_TEST(s21_log_961) {
  double value = 75109632.87951;

  s21_test_log(value);
}

/// @brief \f[ log(76340756.00342) = 18.150718 \f]
START_TEST(s21_log_962) {
  double value = 76340756.00342;

  s21_test_log(value);
}

/// @brief \f[ log(77571879.12733) = 18.166716 \f]
START_TEST(s21_log_963) {
  double value = 77571879.12733;

  s21_test_log(value);
}

/// @brief \f[ log(78803002.25124) = 18.182462 \f]
START_TEST(s21_log_964) {
  double value = 78803002.25124;

  s21_test_log(value);
}

/// @brief \f[ log(80034125.37515) = 18.197964 \f]
START_TEST(s21_log_965) {
  double value = 80034125.37515;

  s21_test_log(value);
}

/// @brief \f[ log(81265248.49906) = 18.213229 \f]
START_TEST(s21_log_966) {
  double value = 81265248.49906;

  s21_test_log(value);
}

/// @brief \f[ log(82496371.62297) = 18.228265 \f]
START_TEST(s21_log_967) {
  double value = 82496371.62297;

  s21_test_log(value);
}

/// @brief \f[ log(83727494.74688) = 18.243078 \f]
START_TEST(s21_log_968) {
  double value = 83727494.74688;

  s21_test_log(value);
}

/// @brief \f[ log(84958617.87079) = 18.257675 \f]
START_TEST(s21_log_969) {
  double value = 84958617.87079;

  s21_test_log(value);
}

/// @brief \f[ log(86189740.99470) = 18.272062 \f]
START_TEST(s21_log_970) {
  double value = 86189740.99470;

  s21_test_log(value);
}

/// @brief \f[ log(87420864.11861) = 18.286245 \f]
START_TEST(s21_log_971) {
  double value = 87420864.11861;

  s21_test_log(value);
}

/// @brief \f[ log(88651987.24252) = 18.300229 \f]
START_TEST(s21_log_972) {
  double value = 88651987.24252;

  s21_test_log(value);
}

/// @brief \f[ log(89883110.36643) = 18.314021 \f]
START_TEST(s21_log_973) {
  double value = 89883110.36643;

  s21_test_log(value);
}

/// @brief \f[ log(91114233.49034) = 18.327625 \f]
START_TEST(s21_log_974) {
  double value = 91114233.49034;

  s21_test_log(value);
}

/// @brief \f[ log(92345356.61425) = 18.341046 \f]
START_TEST(s21_log_975) {
  double value = 92345356.61425;

  s21_test_log(value);
}

/// @brief \f[ log(93576479.73816) = 18.354290 \f]
START_TEST(s21_log_976) {
  double value = 93576479.73816;

  s21_test_log(value);
}

/// @brief \f[ log(94807602.86207) = 18.367360 \f]
START_TEST(s21_log_977) {
  double value = 94807602.86207;

  s21_test_log(value);
}

/// @brief \f[ log(96038725.98598) = 18.380262 \f]
START_TEST(s21_log_978) {
  double value = 96038725.98598;

  s21_test_log(value);
}

/// @brief \f[ log(97269849.10989) = 18.393000 \f]
START_TEST(s21_log_979) {
  double value = 97269849.10989;

  s21_test_log(value);
}

/// @brief \f[ log(98500972.23380) = 18.405577 \f]
START_TEST(s21_log_980) {
  double value = 98500972.23380;

  s21_test_log(value);
}

/// @brief \f[ log(99732095.35771) = 18.417998 \f]
START_TEST(s21_log_981) {
  double value = 99732095.35771;

  s21_test_log(value);
}

/// @brief \f[ log(100963218.48162) = 18.430267 \f]
START_TEST(s21_log_982) {
  double value = 100963218.48162;

  s21_test_log(value);
}

/// @brief \f[ log(102194341.60553) = 18.442387 \f]
START_TEST(s21_log_983) {
  double value = 102194341.60553;

  s21_test_log(value);
}

/// @brief \f[ log(103425464.72944) = 18.454362 \f]
START_TEST(s21_log_984) {
  double value = 103425464.72944;

  s21_test_log(value);
}

/// @brief \f[ log(104656587.85335) = 18.466195 \f]
START_TEST(s21_log_985) {
  double value = 104656587.85335;

  s21_test_log(value);
}

/// @brief \f[ log(105887710.97726) = 18.477890 \f]
START_TEST(s21_log_986) {
  double value = 105887710.97726;

  s21_test_log(value);
}

/// @brief \f[ log(107118834.10117) = 18.489449 \f]
START_TEST(s21_log_987) {
  double value = 107118834.10117;

  s21_test_log(value);
}

/// @brief \f[ log(108349957.22508) = 18.500877 \f]
START_TEST(s21_log_988) {
  double value = 108349957.22508;

  s21_test_log(value);
}

/// @brief \f[ log(109581080.34899) = 18.512175 \f]
START_TEST(s21_log_989) {
  double value = 109581080.34899;

  s21_test_log(value);
}

/// @brief \f[ log(110812203.47290) = 18.523347 \f]
START_TEST(s21_log_990) {
  double value = 110812203.47290;

  s21_test_log(value);
}

/// @brief \f[ log(112043326.59681) = 18.534396 \f]
START_TEST(s21_log_991) {
  double value = 112043326.59681;

  s21_test_log(value);
}

/// @brief \f[ log(113274449.72072) = 18.545324 \f]
START_TEST(s21_log_992) {
  double value = 113274449.72072;

  s21_test_log(value);
}

/// @brief \f[ log(114505572.84463) = 18.556134 \f]
START_TEST(s21_log_993) {
  double value = 114505572.84463;

  s21_test_log(value);
}

/// @brief \f[ log(115736695.96854) = 18.566828 \f]
START_TEST(s21_log_994) {
  double value = 115736695.96854;

  s21_test_log(value);
}

/// @brief \f[ log(116967819.09245) = 18.577409 \f]
START_TEST(s21_log_995) {
  double value = 116967819.09245;

  s21_test_log(value);
}

/// @brief \f[ log(118198942.21636) = 18.587880 \f]
START_TEST(s21_log_996) {
  double value = 118198942.21636;

  s21_test_log(value);
}

/// @brief \f[ log(119430065.34027) = 18.598242 \f]
START_TEST(s21_log_997) {
  double value = 119430065.34027;

  s21_test_log(value);
}

/// @brief \f[ log(120661188.46418) = 18.608497 \f]
START_TEST(s21_log_998) {
  double value = 120661188.46418;

  s21_test_log(value);
}

/// @brief \f[ log(121892311.58809) = 18.618649 \f]
START_TEST(s21_log_999) {
  double value = 121892311.58809;

  s21_test_log(value);
}

/**
 * @brief first set of tests
 *
 * @return Suite*
 */
Suite *s21_log_first_case(void) {
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
Suite *s21_log_second_case(void) {
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
Suite *s21_log_third_case(void) {
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
Suite *s21_log_fourth_case(void) {
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
Suite *s21_log_fifth_case(void) {
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
Suite *s21_log_sixth_case(void) {
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
Suite *s21_log_seventh_case(void) {
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
Suite *s21_log_eighth_case(void) {
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
Suite *s21_log_ninth_case(void) {
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
Suite *s21_log_tenth_case(void) {
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

  s21_test_print(original_func, implementation);

  ck_assert_double_eq_tol(first, second, COMPARE_ACCURACY);
}
