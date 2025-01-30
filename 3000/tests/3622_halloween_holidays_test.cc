#include "3000/src/3622_halloween_holidays.h"

#include "test_headers/test_helper.h"

class HalloweenHolidaysTest : public IOTestFixture<HalloweenHolidays> {};

TEST_F(HalloweenHolidaysTest, SampleCase) { RunTest("2 1 5 3 6", "Yes"); }
