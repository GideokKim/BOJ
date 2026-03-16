#include "27000/src/27219_robinson_crusoe.h"

#include "test_headers/test_helper.h"

class RobinsonCrusoeTest : public IOTestFixture<RobinsonCrusoe> {};

TEST_F(RobinsonCrusoeTest, SampleCase) { RunTest("13", "VVIII"); }
