#include "2000/src/2752_three_number_sorting.h"

#include "test_headers/test_helper.h"

class ThreeNumberSortingTest : public IOTestFixture<ThreeNumberSorting> {};

TEST_F(ThreeNumberSortingTest, SampleCase) { RunTest("3 1 2", "1 2 3 "); }
