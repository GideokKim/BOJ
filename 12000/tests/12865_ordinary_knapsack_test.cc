#include "12000/src/12865_ordinary_knapsack.h"

#include "test_headers/test_helper.h"

class OrdinaryKnapsackTest : public IOTestFixture<OrdinaryKnapsack> {};

TEST_F(OrdinaryKnapsackTest, SimpleCase) {
  RunTest("4 7\n6 13\n4 8\n3 6\n5 12", "14");
}
