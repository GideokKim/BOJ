#include "15000/src/15820_why_wrong.h"

#include "test_headers/test_helper.h"

class WhyWrongTest : public IOTestFixture<WhyWrong> {};

TEST_F(WhyWrongTest, SampleCase) { RunTest("2 0\n1 1\n-1 -1", "Accepted"); }

TEST_F(WhyWrongTest, SampleCase2) { RunTest("2 0\n1 1\n-1 0", "Wrong Answer"); }

TEST_F(WhyWrongTest, SampleCase3) {
  RunTest("2 3\n1 1\n-1 -1\n10 10\n2147483647 0\n0 0", "Why Wrong!!!");
}
