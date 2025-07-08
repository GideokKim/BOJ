#include "24000/src/24075_calculation.h"

#include "test_headers/test_helper.h"

class CalculationTest : public IOTestFixture<Calculation> {};

TEST_F(CalculationTest, SampleCase) { RunTest("-2 1", "-1\n-3"); }

TEST_F(CalculationTest, SampleCase2) { RunTest("-3 -4", "1\n-7"); }

TEST_F(CalculationTest, SampleCase3) { RunTest("5 0", "5\n5"); }
