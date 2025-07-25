#include "31000/src/31067_race_rally.h"

#include "test_headers/test_helper.h"

class RaceRallyTest : public IOTestFixture<RaceRally> {};

TEST_F(RaceRallyTest, SampleCase) { RunTest("3 2\n4 3 4", "2"); }

TEST_F(RaceRallyTest, SampleCase2) { RunTest("3 5\n7 5 5", "-1"); }

TEST_F(RaceRallyTest, SampleCase3) { RunTest("6 5\n2 4 3 9 5 8", "3"); }
