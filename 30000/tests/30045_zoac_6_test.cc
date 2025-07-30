#include "30000/src/30045_zoac_6.h"

#include "test_headers/test_helper.h"

class Zoac6Test : public IOTestFixture<Zoac6> {};

TEST_F(Zoac6Test, SimpleCase) {
  RunTest("4\nzoacisgoodcontest\n2018to2023\nhello\nJOIN", "2");
}

TEST_F(Zoac6Test, SimpleCase2) {
  RunTest("4\nSPOILER\nHARD\nOI01OI\nOioioI", "2");
}
