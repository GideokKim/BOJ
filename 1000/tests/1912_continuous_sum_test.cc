#include "1000/src/1912_continuous_sum.h"

#include "test_headers/test_helper.h"

class ContinuousSumTest : public IOTestFixture<ContinuousSum> {};

TEST_F(ContinuousSumTest, SampleCase) {
  RunTest("10\n10 -4 3 1 5 6 -35 12 21 -1", "33");
}

TEST_F(ContinuousSumTest, SampleCase2) {
  RunTest("10\n2 1 -4 3 4 -4 6 5 -5 1", "14");
}

TEST_F(ContinuousSumTest, SampleCase3) { RunTest("5\n-1 -2 -3 -4 -5", "-1"); }