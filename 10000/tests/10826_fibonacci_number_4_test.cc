#include "10000/src/10826_fibonacci_number_4.h"

#include "test_headers/test_helper.h"

class FibonacciNumber4Test : public IOTestFixture<FibonacciNumber4> {};

TEST_F(FibonacciNumber4Test, SimpleCase) { RunTest("10", "55"); }

TEST_F(FibonacciNumber4Test, EdgeCase1) { RunTest("0", "0"); }

TEST_F(FibonacciNumber4Test, EdgeCase2) {
  RunTest(
      "10000",
      "336447648764317832666216120051075433103021484606800639065647699746800814"
      "421666623681555955136337340255820653326808361593737347904838652682630408"
      "924630564318873545443695598274916066020998841839338646527313000888302692"
      "356736131351175792974378544137521305205043477016022647583189065278908551"
      "543661595829872796829875106312005754287834532155151038708182989697916131"
      "278562650331954871402142875326981879620469360978799003509623022910263681"
      "314931952756302278376284415403605844025721143349611800230912082870460889"
      "239623288354615057765832712525460935911282039252853934346209042452489294"
      "039017062338889910858410651831733604374707379085526317643257339937128719"
      "375877468974799263058370657428301616374089691784263786242128352581128205"
      "163702980893320999057079200643674262023897831114700540749984592503606335"
      "609338838319233867830561364353518921332797329081337326426526339897639227"
      "234078829281779535805709936910491754708089318410561463223382174656373212"
      "482263830921032977016480547262438423748624114530938122065649140327510866"
      "433945175121615265453613331113140424368548051067658434935238369596534280"
      "717687753283482343455573667197313927462736291082106792807847180353291311"
      "767789246590899386354593278945237776744061922403376386740040213303432974"
      "969020283281459334188268176838930720036347956231171031012919531697946076"
      "327375892535307725523759437884345040677155557790564504430166401194625809"
      "722167297586150269684431469520346149322911059706762432685159928347098912"
      "847067408620085871350162603120719031720860940812983215810772820763531866"
      "246112782455372085323653057759564300725177443150515396009051686032203491"
      "632226408852488524331580515348496224348482993809050704834824493274537326"
      "245677558790891871908036620580095947431500524025327097469953187707243768"
      "259074199396322659841474981936092852239450397071654431564213281576889080"
      "587831834049174345562705202235648464951961124602683139709750693826487066"
      "132645076650746115126775227486215986425307112984411826226610571635150692"
      "600298617049454250474913781151541399415506712562711971332527636319396069"
      "028956502882686083622410820505624307017949761711212330660733100599473668"
      "75");
}