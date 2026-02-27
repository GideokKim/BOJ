#include "14000/src/14710_broken_clock.h"

#include "test_headers/test_helper.h"

class BrokenClockTest : public IOTestFixture<BrokenClock> {};

TEST_F(BrokenClockTest, SampleCase) { RunTest("180 0", "O"); }

TEST_F(BrokenClockTest, SampleCase2) { RunTest("0 180", "X"); }
