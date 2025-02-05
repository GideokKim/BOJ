#include "27000/src/27433_factorial_2.h"

#include "test_headers/test_helper.h"

class Factorial2Test : public IOTestFixture<Factorial2> {};

TEST_F(Factorial2Test, SampleCase) { RunTest("10", "3628800"); }

TEST_F(Factorial2Test, SampleCase2) { RunTest("0", "1"); }

TEST_F(Factorial2Test, SampleCase3) { RunTest("20", "2432902008176640000"); }