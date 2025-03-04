#include "11000/src/11053_longest_increasing_subsequence.h"

#include "test_headers/test_helper.h"

class LongestIncreasingSubsequenceTest
    : public IOTestFixture<LongestIncreasingSubsequence> {};

TEST_F(LongestIncreasingSubsequenceTest, SampleCase) {
  RunTest("6\n10 20 10 30 20 50", "4");
}
