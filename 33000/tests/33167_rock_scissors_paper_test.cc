#include "33000/src/33167_rock_scissors_paper.h"

#include "test_headers/test_helper.h"

class RockScissorsPaperTest : public IOTestFixture<RockScissorsPaper> {};

TEST_F(RockScissorsPaperTest, SampleCase) { RunTest("3\nRSR\nPPR", "1 1"); }

TEST_F(RockScissorsPaperTest, SampleCase2) {
  RunTest("5\nRRRRR\nPPPPP", "0 5");
}

TEST_F(RockScissorsPaperTest, SampleCase3) { RunTest("4\nRSRR\nRPRR", "1 0"); }

TEST_F(RockScissorsPaperTest, SampleCase4) {
  RunTest("6\nRSSRSS\nPPRRRP", "2 3");
}
