#include "10000/src/10828_stack.h"

#include "test_headers/test_helper.h"

class StackTest : public IOTestFixture<Stack> {};

TEST_F(StackTest, SimpleCase) {
  RunTest(
      "14\n"
      "push 1\n"
      "push 2\n"
      "top\n"
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
      "top",
      "2\n2\n0\n2\n1\n-1\n0\n1\n-1\n0\n3\n");
}

TEST_F(StackTest, SimpleCase2) {
  RunTest(
      "7\n"
      "pop\n"
      "top\n"
      "push 123\n"
      "top\n"
      "pop\n"
      "top\n"
      "pop",
      "-1\n-1\n123\n123\n-1\n-1\n");
}
