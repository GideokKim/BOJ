#include "2000/src/2108_statistics.h"

#include "test_headers/test_helper.h"

class StatisticsTest : public IOTestFixture<Statistics> {};

TEST_F(StatisticsTest, SampleCase) {
  RunTest("5\n1\n3\n8\n-2\n2", "2\n2\n1\n10\n");
}

TEST_F(StatisticsTest, SampleCase2) {
  RunTest("1\n4000", "4000\n4000\n4000\n0\n");
}

TEST_F(StatisticsTest, SampleCase3) {
  RunTest("5\n-1\n-2\n-3\n-1\n-2", "-2\n-2\n-1\n2\n");
}

TEST_F(StatisticsTest, SampleCase4) { RunTest("3\n0\n0\n-1", "0\n0\n0\n1\n"); }
