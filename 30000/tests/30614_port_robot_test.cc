#include "30000/src/30614_port_robot.h"

#include "test_headers/test_helper.h"

class PortRobotTest : public IOTestFixture<PortRobot> {};

TEST_F(PortRobotTest, SampleCase) { RunTest("8\nDdaacCAA", "0"); }

TEST_F(PortRobotTest, SampleCase2) { RunTest("14\naabcdDCBdDAbBA", "1"); }

TEST_F(PortRobotTest, SampleCase3) { RunTest("13\naabcdDCBdDAbB", "0"); }
