#include "17000/src/17450_buy_snacks.h"

#include "test_headers/test_helper.h"

class BuySnacksTest : public IOTestFixture<BuySnacks> {};

TEST_F(BuySnacksTest, SimpleCase) { RunTest("8 5\n6 6\n7 5", "N"); }
