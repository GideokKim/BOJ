#include "9000/src/9012_parenthesis.h"

#include "test_headers/test_helper.h"

class ParenthesisTest : public IOTestFixture<Parenthesis> {};

TEST_F(ParenthesisTest, SampleCase) {
  RunTest(
      "6\n(())())\n(((()())()\n(()())((()))\n((()()(()))(((())))()\n()()()()(()"
      "()())()\n(()((())()(",
      "NO\nNO\nYES\nNO\nYES\nNO\n");
}

TEST_F(ParenthesisTest, SampleCase2) {
  RunTest("3\n((\n))\n())(()", "NO\nNO\nNO\n");
}
