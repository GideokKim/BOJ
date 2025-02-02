#include "10000/src/10845_queue.h"

#include "test_headers/test_helper.h"

class QueueTest : public IOTestFixture<Queue> {};

TEST_F(QueueTest, SimpleCase) {
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
