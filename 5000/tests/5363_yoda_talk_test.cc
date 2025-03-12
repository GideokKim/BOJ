#include "5000/src/5363_yoda_talk.h"

#include "test_headers/test_helper.h"

class YodaTalkTest : public IOTestFixture<YodaTalk> {};

TEST_F(YodaTalkTest, SampleCase) {
  RunTest(
      "4\nI will go now to find the Wookiee\nSolo found the death star near "
      "planet Kessel\nI'll fight Darth Maul here and now\nVader will find Luke "
      "before he can escape",
      "go now to find the Wookiee I will\nthe death star near planet Kessel "
      "Solo "
      "found\nDarth Maul here and now I'll fight\nfind Luke before he can "
      "escape "
      "Vader will\n");
}
