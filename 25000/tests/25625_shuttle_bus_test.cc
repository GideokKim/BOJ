#include "25000/src/25625_shuttle_bus.h"

#include "test_headers/test_helper.h"

class ShuttleBusTest : public IOTestFixture<ShuttleBus> {};

TEST_F(ShuttleBusTest, SampleCase) { RunTest("10 3", "13"); }

TEST_F(ShuttleBusTest, SampleCase2) { RunTest("10 12", "2"); }
