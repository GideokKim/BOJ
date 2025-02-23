#include "17000/src/17427_sum_of_divisors_2.h"

#include "test_headers/test_helper.h"

class SumOfDivisors2Test : public IOTestFixture<SumOfDivisors2> {};

TEST_F(SumOfDivisors2Test, SimpleCase) { RunTest("1", "1"); }

TEST_F(SumOfDivisors2Test, SimpleCase2) { RunTest("2", "4"); }

TEST_F(SumOfDivisors2Test, SimpleCase3) { RunTest("10", "87"); }

TEST_F(SumOfDivisors2Test, SimpleCase4) { RunTest("70", "4065"); }

TEST_F(SumOfDivisors2Test, SimpleCase5) { RunTest("10000", "82256014"); }