#include "25000/src/25591_puang_and_jongyun.h"

#include "test_headers/test_helper.h"

class PuangAndJongyunTest : public IOTestFixture<PuangAndJongyun> {};

TEST_F(PuangAndJongyunTest, SampleCase) {
  RunTest("97 96", "3 4 93 12 0 12\n93 12");
}

TEST_F(PuangAndJongyunTest, SampleCase2) {
  RunTest("48 49", "52 51 -3 2652 26 52\n23 52");
}

TEST_F(PuangAndJongyunTest, SampleCase3) {
  RunTest("19 32", "81 68 -49 5508 55 8\n6 8");
}
