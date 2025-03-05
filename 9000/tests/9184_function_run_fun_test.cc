#include "9000/src/9184_function_run_fun.h"

#include "test_headers/test_helper.h"

class FunctionRunFunTest : public IOTestFixture<FunctionRunFun> {};

TEST_F(FunctionRunFunTest, SampleCase) {
  RunTest("1 1 1\n2 2 2\n10 4 6\n50 50 50\n-1 7 18\n-1 -1 -1",
          "w(1, 1, 1) = 2\nw(2, 2, 2) = 4\nw(10, 4, 6) = 523\nw(50, 50, 50) = "
          "1048576\nw(-1, 7, 18) = 1\n");
}