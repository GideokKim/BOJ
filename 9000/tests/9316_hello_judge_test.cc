#include "9000/src/9316_hello_judge.h"

#include "test_headers/test_helper.h"

class HelloJudgeTest : public IOTestFixture<HelloJudge> {};

TEST_F(HelloJudgeTest, SimpleCase) {
  RunTest("3",
          "Hello World, Judge 1!\n"
          "Hello World, Judge 2!\n"
          "Hello World, Judge 3!\n");
}
