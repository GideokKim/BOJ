#include "9000/src/9465_stickers.h"

#include "test_headers/test_helper.h"

class StickersTest : public IOTestFixture<Stickers> {};

TEST_F(StickersTest, SampleCase) {
  RunTest(
      "2\n5\n50 10 100 20 40\n30 50 70 10 60\n7\n10 30 10 50 100 20 40\n20 40 "
      "30 50 60 20 80",
      "260\n290\n");
}
