#include "6000/src/6221_the_bale_tower.h"

#include "test_headers/test_helper.h"

class BaleTowerTest : public IOTestFixture<BaleTower> {};

TEST_F(BaleTowerTest, SampleCase) {
  RunTest(
      "6\n"
      "6 9\n"
      "10 12\n"
      "9 11\n"
      "8 10\n"
      "7 8\n"
      "5 3",
      "5");
}
