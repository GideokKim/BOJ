#include "27000/src/27327_hour.h"

#include "test_headers/test_helper.h"

class HourTest : public IOTestFixture<Hour> {};

TEST_F(HourTest, SampleCase) { RunTest("3", "72"); }

TEST_F(HourTest, SampleCase2) { RunTest("100", "2400"); }
