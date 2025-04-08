#include "24000/src/24079_moving.h"

#include "test_headers/test_helper.h"

class MovingTest : public IOTestFixture<Moving> {};

TEST_F(MovingTest, SampleCase) { RunTest("2\n3\n4", "0"); }

TEST_F(MovingTest, SampleCase2) { RunTest("3\n4\n10", "1"); }
