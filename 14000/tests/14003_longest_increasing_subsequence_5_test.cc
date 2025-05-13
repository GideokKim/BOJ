#include "14000/src/14003_longest_increasing_subsequence_5.h"

#include "test_headers/test_helper.h"

class LongestIncreasingSubsequence5Test
    : public IOTestFixture<LongestIncreasingSubsequence5> {};

TEST_F(LongestIncreasingSubsequence5Test, SampleCase) {
  RunTest("6\n10 20 10 30 20 50", "4\n10 20 30 50 ");
}

TEST_F(LongestIncreasingSubsequence5Test, SampleCase2) {
  RunTest("6\n10 20 10 30 20 50 25", "4\n10 20 30 50 ");
}

TEST_F(LongestIncreasingSubsequence5Test, SampleCase3) {
  RunTest("6\n10 20 10 30 20 50", "4\n10 20 30 50 ");
}
