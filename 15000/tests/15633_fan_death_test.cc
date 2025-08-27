#include "15000/src/15633_fan_death.h"

#include "test_headers/test_helper.h"

class FanDeathTest : public IOTestFixture<FanDeath> {};

TEST_F(FanDeathTest, SampleCase) { RunTest("5", "6"); }

TEST_F(FanDeathTest, SampleCase1) { RunTest("1", "-19"); }
