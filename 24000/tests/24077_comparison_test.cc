#include "24000/src/24077_comparison.h"

#include "test_headers/test_helper.h"

class ComparisonTest : public IOTestFixture<Comparison> {};

TEST_F(ComparisonTest, SampleCase) {
  RunTest(
      "5 4\n"
      "3 8 10 5 5\n"
      "1 5 4 9",
      "8");
}

TEST_F(ComparisonTest, SampleCase2) {
  RunTest(
      "3 5\n"
      "2000 2000 2000\n"
      "1 1 1 1 1",
      "0");
}

TEST_F(ComparisonTest, SampleCase3) {
  RunTest(
      "10 10\n"
      "3 1 4 1 5 9 2 6 5 3\n"
      "2 7 1 8 2 8 1 8 2 8",
      "58");
}
