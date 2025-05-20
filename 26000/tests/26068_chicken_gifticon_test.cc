#include "26000/src/26068_chicken_gifticon.h"

#include "test_headers/test_helper.h"

class ChickenGifticonTest : public IOTestFixture<ChickenGifticon> {};

TEST_F(ChickenGifticonTest, SimpleCase1) { RunTest("3\nD-86\nD-8\nD-6", "3"); }

TEST_F(ChickenGifticonTest, SimpleCase2) {
  RunTest("4\nD-98\nD-5\nD-94\nD-2", "2");
}