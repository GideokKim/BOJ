#include "11000/src/11131_balancing_weights.h"

#include "test_headers/test_helper.h"

class BalancingWeightsTest : public IOTestFixture<BalancingWeights> {};

TEST_F(BalancingWeightsTest, SampleCase) {
  RunTest(
      "3\n"
      "3\n"
      "-2 0 2\n"
      "1\n"
      "4\n"
      "4\n"
      "4 -2 0 -3",
      "Equilibrium\n"
      "Right\n"
      "Left\n");
}
