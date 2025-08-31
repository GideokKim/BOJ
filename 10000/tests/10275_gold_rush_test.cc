#include "10000/src/10275_gold_rush.h"

#include "test_headers/test_helper.h"

class GoldRushTest : public IOTestFixture<GoldRush> {};

TEST_F(GoldRushTest, SimpleCase) {
  RunTest(
      "3\n"
      "2 2 2\n"
      "2 1 3\n"
      "10 1000 24",
      "1\n2\n7\n");
}
