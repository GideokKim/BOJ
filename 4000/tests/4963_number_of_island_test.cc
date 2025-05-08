#include "4000/src/4963_number_of_island.h"

#include "test_headers/test_helper.h"

class NumberOfIslandTest : public IOTestFixture<NumberOfIsland> {};

TEST_F(NumberOfIslandTest, SimpleCase) {
  RunTest(
      "1 1\n0\n2 2\n0 1\n1 0\n3 2\n1 1 1\n1 1 1\n5 4\n1 0 1 0 0\n1 0 0 0 0\n1 "
      "0 1 0 1\n1 0 0 1 0\n5 4\n1 1 1 0 1\n1 0 1 0 1\n1 0 1 0 1\n1 0 1 1 1\n5 "
      "5\n1 0 1 0 1\n0 0 0 0 0\n1 0 1 0 1\n0 0 0 0 0\n1 0 1 0 1\n0 0",
      "0\n1\n1\n3\n1\n9\n");
}
