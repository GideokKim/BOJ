#include "11000/src/11051_binomial_coefficient_2.h"

#include "test_headers/test_helper.h"

class BinomialCoefficient2Test : public IOTestFixture<BinomialCoefficient2> {};

TEST_F(BinomialCoefficient2Test, SampleCase) { RunTest("5 2", "10"); }

TEST_F(BinomialCoefficient2Test, SampleCase2) { RunTest("1000 1000", "1"); }
