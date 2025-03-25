#include "1000/src/1916_get_minimum_cost.h"

#include "test_headers/test_helper.h"

class GetMinimumCostTest : public IOTestFixture<GetMinimumCost> {};

TEST_F(GetMinimumCostTest, SampleCase) {
  RunTest("5\n8\n1 2 2\n1 3 3\n1 4 1\n1 5 10\n2 4 2\n3 4 1\n3 5 1\n4 5 3\n1 5",
          "4");
}
