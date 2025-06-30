#include "14000/src/14215_three_sticks.h"

#include "test_headers/test_helper.h"

class ThreeSticksTest : public IOTestFixture<ThreeSticks> {};

TEST_F(ThreeSticksTest, SampleCase) { RunTest("1 2 3", "5"); }

TEST_F(ThreeSticksTest, SampleCase2) { RunTest("2 2 2", "6"); }

TEST_F(ThreeSticksTest, SampleCase3) { RunTest("1 100 1", "3"); }

TEST_F(ThreeSticksTest, SampleCase4) { RunTest("41 64 16", "113"); }