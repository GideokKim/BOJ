#include "15000/src/15624_fibonacci_number_7.h"

#include "test_headers/test_helper.h"

class FibonacciNumber7Test : public IOTestFixture<FibonacciNumber7> {};

TEST_F(FibonacciNumber7Test, SampleCase) { RunTest("10", "55"); }

TEST_F(FibonacciNumber7Test, SampleCase2) { RunTest("1000", "517691607"); }