#include "12000/src/12927_power_switch.h"

#include "test_headers/test_helper.h"

class PowerSwitchTest : public IOTestFixture<PowerSwitch> {};

TEST_F(PowerSwitchTest, SimpleCase) { RunTest("YYYYYY", "1"); }

TEST_F(PowerSwitchTest, SimpleCase2) { RunTest("YNYNYNYNY", "2"); }

TEST_F(PowerSwitchTest, SimpleCase3) { RunTest("NNNNNNNNNN", "0"); }

TEST_F(PowerSwitchTest, SimpleCase4) { RunTest("YYYNYYYNYYYNYYNYYYYN", "4"); }
