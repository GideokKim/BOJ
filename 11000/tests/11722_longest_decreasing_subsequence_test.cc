#include "11000/src/11722_longest_decreasing_subsequence.h"

#include "test_headers/test_helper.h"

class LongestDecreasingSubsequenceTest
    : public IOTestFixture<LongestDecreasingSubsequence> {};

TEST_F(LongestDecreasingSubsequenceTest, SampleCase) {
  RunTest("6\n10 30 10 20 20 10", "3");
}
