#include "31000/src/31833_not_found.h"

#include "test_headers/test_helper.h"

class NotFoundTest : public IOTestFixture<NotFound> {};

TEST_F(NotFoundTest, SimpleCase) {
  RunTest("5\n5 4 3 2 1\n1 2 34 5 6", "54321");
}

TEST_F(NotFoundTest, SimpleCase2) {
  RunTest("9\n99 99 99 99 99 99 99 99 99\n99 99 99 99 99 99 99 99 99",
          "999999999999999999");
}
