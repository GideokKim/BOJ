#include "14000/src/14914_split_apple_and_banana.h"

#include "test_headers/test_helper.h"

class SplitAppleAndBananaTest : public IOTestFixture<SplitAppleAndBanana> {};

TEST_F(SplitAppleAndBananaTest, SampleCase) {
  RunTest("4 8", "1 4 8\n2 2 4\n4 1 2\n");
}
