#include "11000/src/11054_longest_bitonic_subsequence.h"

#include "test_headers/test_helper.h"

class LongestBitonicSubsequenceTest
    : public IOTestFixture<LongestBitonicSubsequence> {};

TEST_F(LongestBitonicSubsequenceTest, SampleCase) {
  RunTest("10\n1 5 2 1 4 3 4 5 2 1", "7");
}
