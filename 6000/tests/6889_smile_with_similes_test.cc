#include "6000/src/6889_smile_with_similes.h"

#include "test_headers/test_helper.h"

class SmileWithSimilesTest : public IOTestFixture<SmileWithSimiles> {};

TEST_F(SmileWithSimilesTest, SampleCase) {
  RunTest("3\n2\nEasy\nSmart\nSoft\npie\nrock",
          "Easy as pie\nEasy as rock\nSmart as pie\nSmart as rock\nSoft as "
          "pie\nSoft as rock\n");
}
