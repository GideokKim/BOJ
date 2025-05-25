#include "1000/src/1788_extended_fibonacci.h"

#include "test_headers/test_helper.h"

class ExtendedFibonacciTest : public IOTestFixture<ExtendedFibonacci> {};

TEST_F(ExtendedFibonacciTest, SampleCase) { RunTest("-2", "-1\n1"); }

TEST_F(ExtendedFibonacciTest, SampleCase2) { RunTest("0", "0\n0"); }

TEST_F(ExtendedFibonacciTest, SampleCase3) { RunTest("10", "1\n55"); }

TEST_F(ExtendedFibonacciTest, SampleCase4) { RunTest("-7", "1\n13"); }