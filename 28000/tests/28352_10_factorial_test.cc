#include "28000/src/28352_10_factorial.h"

#include "test_headers/test_helper.h"

class FactorialTest : public IOTestFixture<Factorial> {};

TEST_F(FactorialTest, SimpleCase) { RunTest("10", "6"); }

TEST_F(FactorialTest, SimpleCase2) { RunTest("17", "588107520"); }