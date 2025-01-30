#include "28000/src/28278_stack2.h"

#include "test_headers/test_helper.h"

class Stack2Test : public IOTestFixture<Stack2> {};

TEST_F(Stack2Test, SimpleCase) {
  RunTest(
      "9\n"
      "4\n"
      "1 3\n"
      "1 5\n"
      "3\n"
      "2\n"
      "5\n"
      "2\n"
      "2\n"
      "5",
      "1\n"
      "2\n"
      "5\n"
      "3\n"
      "3\n"
      "-1\n"
      "-1\n");
}
