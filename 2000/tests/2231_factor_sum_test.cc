#include "2000/src/2231_factor_sum.h"

#include "test_headers/test_helper.h"

class FactorSumTest : public IOTestFixture<FactorSum> {};

TEST_F(FactorSumTest, SampleCase) { RunTest("216", "198"); }

TEST_F(FactorSumTest, SampleCase2) { RunTest("1", "0"); }