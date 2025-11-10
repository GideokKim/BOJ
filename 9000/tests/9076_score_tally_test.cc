#include "9000/src/9076_score_tally.h"

#include "test_headers/test_helper.h"

class ScoreTallyTest : public IOTestFixture<ScoreTally> {};

TEST_F(ScoreTallyTest, SampleCase) {
  RunTest("4\n10 8 5 7 9\n10 9 10 9 5\n10 3 5 9 10\n1 2 3 6 9",
          "24\n28\nKIN\nKIN\n");
}