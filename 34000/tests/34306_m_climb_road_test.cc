#include "34000/src/34306_m_climb_road.h"

#include "test_headers/test_helper.h"

class MClimbRoadTest : public IOTestFixture<MClimbRoad> {};

TEST_F(MClimbRoadTest, SampleCase) { RunTest("3\n50", "316"); }

TEST_F(MClimbRoadTest, SampleCase2) { RunTest("2\n500", "21"); }
