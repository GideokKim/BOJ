#include "1000/src/1003_fibonacci_function.h"

#include "test_headers/test_helper.h"

class FibonacciFunctionTest : public IOTestFixture<FibonacciFunction> {};

TEST_F(FibonacciFunctionTest, SampleCase) {
  RunTest("3\n0\n1\n3", "1 0\n0 1\n1 2\n");
}

TEST_F(FibonacciFunctionTest, SampleCase2) {
  RunTest("2\n6\n22", "5 8\n10946 17711\n");
}
