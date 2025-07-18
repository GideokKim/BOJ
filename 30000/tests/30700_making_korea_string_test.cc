#include "30000/src/30700_making_korea_string.h"

#include "test_headers/test_helper.h"

class MakingKoreaStringTest : public IOTestFixture<MakingKoreaString> {};

TEST_F(MakingKoreaStringTest, SimpleCase) {
  RunTest("KEKRORKAKROEKREORKA", "5");
}

TEST_F(MakingKoreaStringTest, SimpleCase2) { RunTest("OOOOOOOREA", "0"); }

TEST_F(MakingKoreaStringTest, SimpleCase3) { RunTest("KEROKRKKAKAOA", "3"); }
