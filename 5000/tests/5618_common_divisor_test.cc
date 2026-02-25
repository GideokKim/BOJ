#include "5000/src/5618_common_divisor.h"

#include "test_headers/test_helper.h"

class CommonDivisorTest : public IOTestFixture<CommonDivisor> {};

TEST_F(CommonDivisorTest, SampleCase) { RunTest("2\n75 125", "1\n5\n25\n"); }

TEST_F(CommonDivisorTest, SampleCase2) {
  RunTest("3\n110 22 88", "1\n2\n11\n22\n");
}

TEST_F(CommonDivisorTest, SampleCase3) { RunTest("3\n66 11 3", "1\n"); }
