#include "30000/src/30822_count_uospc.h"

#include "test_headers/test_helper.h"

class CountUospcTest : public IOTestFixture<CountUospc> {};

TEST_F(CountUospcTest, HappyCase) { RunTest("9\nsuspicion", "1"); }

TEST_F(CountUospcTest, CryCase) { RunTest("19\nprocessyourpurchase", "2"); }
