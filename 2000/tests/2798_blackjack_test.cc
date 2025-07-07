#include "2000/src/2798_blackjack.h"

#include "test_headers/test_helper.h"

class BlackjackTest : public IOTestFixture<Blackjack> {};

TEST_F(BlackjackTest, SampleCase) { RunTest("5 21\n5 6 7 8 9", "21"); }

TEST_F(BlackjackTest, SampleCase2) {
  RunTest("10 500\n93 181 245 214 315 36 185 138 216 355", "497");
}