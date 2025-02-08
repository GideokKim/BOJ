#include "7000/src/7891_can_you_add_this.h"

#include "test_headers/test_helper.h"

class CanYouAddThisTest : public IOTestFixture<CanYouAddThis> {};

TEST_F(CanYouAddThisTest, SimpleCase) {
  RunTest("4\n-100 100\n2 3\n0 110101\n-1000000000 1",
          "0\n5\n110101\n-999999999\n");
}
