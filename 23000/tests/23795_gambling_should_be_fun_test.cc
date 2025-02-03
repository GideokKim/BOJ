#include "23000/src/23795_gambling_should_be_fun.h"

#include "test_headers/test_helper.h"

class GamblingShouldBeFunTest : public IOTestFixture<GamblingShouldBeFun> {};

TEST_F(GamblingShouldBeFunTest, SimpleCase) {
  RunTest(
      "1\n"
      "2\n"
      "3\n"
      "4\n"
      "5\n"
      "6\n"
      "7\n"
      "8\n"
      "9\n"
      "10\n"
      "-1",
      "55");
}
