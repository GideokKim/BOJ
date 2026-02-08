#include "34000/src/34424_flatter_land.h"

#include "test_headers/test_helper.h"

class FlatterLandTest : public IOTestFixture<FlatterLand> {};

TEST_F(FlatterLandTest, SampleCase) { RunTest("3\n6", "12"); }

TEST_F(FlatterLandTest, SampleCase2) { RunTest("5\n10", "40"); }