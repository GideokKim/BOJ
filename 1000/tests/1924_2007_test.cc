#include "1000/src/1924_2007.h"

#include "test_headers/test_helper.h"

class DayOfWeekTest : public IOTestFixture<DayOfWeek> {};

TEST_F(DayOfWeekTest, SampleCase) { RunTest("1 1\n", "MON"); }

TEST_F(DayOfWeekTest, SampleCase2) { RunTest("14 3\n", "WED"); }

TEST_F(DayOfWeekTest, SampleCase3) { RunTest("2 9\n", "SUN"); }

TEST_F(DayOfWeekTest, SampleCase4) { RunTest("25 12\n", "TUE"); }