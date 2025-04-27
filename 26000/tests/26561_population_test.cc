#include "26000/src/26561_population.h"

#include "test_headers/test_helper.h"

class PopulationTest : public IOTestFixture<Population> {};

TEST_F(PopulationTest, SimpleCase) {
  RunTest("3\n12 14\n530 200\n4786 3543", "13\n552\n5165\n");
}
