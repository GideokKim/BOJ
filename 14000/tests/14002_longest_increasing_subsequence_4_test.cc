#include "14000/src/14002_longest_increasing_subsequence_4.h"

#include "test_headers/test_helper.h"

class LongestIncreasingSubsequence4Test
    : public IOTestFixture<LongestIncreasingSubsequence4> {};

TEST_F(LongestIncreasingSubsequence4Test, SampleCase) {
  RunTest("6\n10 20 10 30 20 50", "4\n10 20 30 50 ");
}
