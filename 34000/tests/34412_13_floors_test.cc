#include "34000/src/34412_13_floors.h"

#include "test_headers/test_helper.h"

class ThirteenFloorsTest : public IOTestFixture<ThirteenFloors> {};

TEST_F(ThirteenFloorsTest, SampleCase) { RunTest("12", "12"); }

TEST_F(ThirteenFloorsTest, SampleCase2) { RunTest("13", "14"); }

TEST_F(ThirteenFloorsTest, SampleCase3) { RunTest("14", "15"); }