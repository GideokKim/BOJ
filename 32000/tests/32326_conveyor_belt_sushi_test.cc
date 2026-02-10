#include "32000/src/32326_conveyor_belt_sushi.h"

#include "test_headers/test_helper.h"

class ConveyorBeltSushiTest : public IOTestFixture<ConveyorBeltSushi> {};

TEST_F(ConveyorBeltSushiTest, SimpleCase) { RunTest("0\n2\n4", "28"); }
