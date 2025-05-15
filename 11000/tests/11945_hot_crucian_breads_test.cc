#include "11000/src/11945_hot_crucian_breads.h"

#include "test_headers/test_helper.h"

class HotCrucianBreadsTest : public IOTestFixture<HotCrucianBreads> {};

TEST_F(HotCrucianBreadsTest, SampleCase) {
  RunTest("5 7\n0010000\n0111010\n1111111\n0111010\n0010000",
          "0000100\n0101110\n1111111\n0101110\n0000100\n");
}
