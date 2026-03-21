#include "2000/src/2966_take_test.h"

#include "test_headers/test_helper.h"

class TakeTestTest : public IOTestFixture<TakeTest> {};

TEST_F(TakeTestTest, SampleCase) { RunTest("5\nBAACC", "3\nBruno\n"); }

TEST_F(TakeTestTest, SampleCase2) {
  RunTest("9\nAAAABBBBB", "4\nAdrian\nBruno\nGoran\n");
}
