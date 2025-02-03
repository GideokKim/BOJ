#include "18000/src/18258_queue2.h"

#include "test_headers/test_helper.h"

class Queue2Test : public IOTestFixture<Queue2> {};

TEST_F(Queue2Test, SimpleCase) {
  RunTest(
      "15\n"
      "push 1\n"
      "push 2\n"
      "front\n"
      "back\n"
      "size\n"
      "empty\n"
      "pop\n"
      "pop\n"
      "pop\n"
      "size\n"
      "empty\n"
      "pop\n"
      "push 3\n"
      "empty\n"
      "front",
      "1\n2\n2\n0\n1\n2\n-1\n0\n1\n-1\n0\n3\n");
}
