#include "31000/src/31561_clock_tower.h"

#include "test_headers/test_helper.h"

class ClockTowerTest : public IOTestFixture<ClockTower> {};

TEST_F(ClockTowerTest, SampleCase) { RunTest("16", "8.0"); }

TEST_F(ClockTowerTest, SampleCase2) { RunTest("47", "40.5"); }