#include "21000/src/21300_bottle_return.h"

#include "test_headers/test_helper.h"

class BottleReturnTest : public IOTestFixture<BottleReturn> {};

TEST_F(BottleReturnTest, SimpleCase) { RunTest("0 0 0 23 3 100", "630"); }
