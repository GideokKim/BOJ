#include "32000/src/32801_generalized_fizzbuzz.h"

#include "test_headers/test_helper.h"

class GeneralizedFizzBuzzTest : public IOTestFixture<GeneralizedFizzBuzz> {};

TEST_F(GeneralizedFizzBuzzTest, SimpleCase) { RunTest("17 3 5", "4 2 1"); }

TEST_F(GeneralizedFizzBuzzTest, SimpleCase2) { RunTest("10 3 3", "0 0 3"); }
