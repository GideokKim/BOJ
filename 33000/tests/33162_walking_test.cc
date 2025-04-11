#include "33000/src/33162_walking.h"

#include "test_headers/test_helper.h"

class WalkingTest : public IOTestFixture<Walking> {};

TEST_F(WalkingTest, SampleCase) { RunTest("3", "4"); }

TEST_F(WalkingTest, SampleCase2) { RunTest("6", "3"); }

TEST_F(WalkingTest, SampleCase3) { RunTest("1", "3"); }

TEST_F(WalkingTest, SampleCase4) { RunTest("37", "21"); }
