#include "26000/src/26529_bunnies.h"

#include "test_headers/test_helper.h"

class BunniesTest : public IOTestFixture<Bunnies> {};

TEST_F(BunniesTest, SimpleCase) {
  RunTest("3\n0\n5\n45", "1\n8\n1836311903\n");
}
