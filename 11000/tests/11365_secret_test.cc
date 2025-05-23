#include "11000/src/11365_secret.h"

#include "test_headers/test_helper.h"

class SecretTest : public IOTestFixture<Secret> {};

TEST_F(SecretTest, SampleCase) {
  RunTest(
      "!edoc doog a tahW\n"
      "noitacitsufbo\n"
      "erafraw enirambus detcirtsernu yraurbeF fo tsrif eht no nigeb ot "
      "dnetni eW\n"
      "lla sees rodroM fo drol eht ,ssertrof sih nihtiw delaecnoC\n"
      "END",
      "What a good code!\n"
      "obfustication\n"
      "We intend to begin on the first of February unrestricted submarine "
      "warfare\n"
      "Concealed within his fortress, the lord of Mordor sees all\n");
}
