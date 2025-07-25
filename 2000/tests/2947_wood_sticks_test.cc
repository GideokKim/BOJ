#include "2000/src/2947_wood_sticks.h"

#include "test_headers/test_helper.h"

class WoodSticksTest : public IOTestFixture<WoodSticks> {};

TEST_F(WoodSticksTest, SampleCase) {
  RunTest("2 1 5 3 4", "1 2 5 3 4 \n1 2 3 5 4 \n1 2 3 4 5 \n");
}

TEST_F(WoodSticksTest, SampleCase2) {
  RunTest("2 3 4 5 1", "2 3 4 1 5 \n2 3 1 4 5 \n2 1 3 4 5 \n1 2 3 4 5 \n");
}
