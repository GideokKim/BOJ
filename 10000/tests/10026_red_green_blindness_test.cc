#include "10000/src/10026_red_green_blindness.h"

#include "test_headers/test_helper.h"

class RedGreenBlindnessTest : public IOTestFixture<RedGreenBlindness> {};

TEST_F(RedGreenBlindnessTest, SimpleCase) {
  RunTest("5\nRRRBB\nGGBBB\nBBBRR\nBBRRR\nRRRRR", "4 3");
}
