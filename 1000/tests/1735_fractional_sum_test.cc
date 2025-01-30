#include "1000/src/1735_fractional_sum.h"

#include "test_headers/test_helper.h"

class FractionalSumTest : public IOTestFixture<FractionalSum> {};

TEST_F(FractionalSumTest, SampleCase) { RunTest("2 7\n3 5", "31 35"); }

TEST_F(FractionalSumTest, SampleCase2) { RunTest("1 3\n2 3", "1 1"); }