#include "27000/src/27328_three_way_comparison.h"

#include "test_headers/test_helper.h"

class ThreeWayComparisonTest : public IOTestFixture<ThreeWayComparison> {};

TEST_F(ThreeWayComparisonTest, SampleCase) { RunTest("3 7", "-1"); }

TEST_F(ThreeWayComparisonTest, SampleCase2) { RunTest("10 10", "0"); }

TEST_F(ThreeWayComparisonTest, SampleCase3) { RunTest("1000 1", "1"); }
