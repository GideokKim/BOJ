#include "30000/src/30009_position_zero.h"

#include "test_headers/test_helper.h"

class PositionZeroTest : public IOTestFixture<PositionZero> {};

TEST_F(PositionZeroTest, SimpleCase) { RunTest("3\n1 2 2\n-1\n1\n5", "1 1"); }
