#include "32000/src/32755_wall_of_4_hours.h"

#include "test_headers/test_helper.h"

class WallOf4HoursTest : public IOTestFixture<WallOf4Hours> {};

TEST_F(WallOf4HoursTest, SimpleCase) { RunTest("80\n99", "high speed rail"); }

TEST_F(WallOf4HoursTest, SimpleCase2) { RunTest("99\n98", "flight"); }
