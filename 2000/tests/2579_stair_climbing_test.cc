#include "2000/src/2579_stair_climbing.h"

#include "test_headers/test_helper.h"

class StairClimbingTest : public IOTestFixture<StairClimbing> {};

TEST_F(StairClimbingTest, SimpleCase) {
  RunTest("6\n10\n20\n15\n25\n10\n20", "75");
}

TEST_F(StairClimbingTest, SimpleCase2) { RunTest("3\n10\n20\n15", "35"); }

TEST_F(StairClimbingTest, SimpleCase3) { RunTest("2\n10\n20", "30"); }

TEST_F(StairClimbingTest, SimpleCase4) { RunTest("1\n10", "10"); }
