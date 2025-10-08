#include "5000/src/5585_coin.h"

#include "test_headers/test_helper.h"

class Coin_Test : public IOTestFixture<Coin> {};

TEST_F(Coin_Test, SampleCase) { RunTest("380", "4"); }

TEST_F(Coin_Test, SampleCase2) { RunTest("1", "15"); }
