#include "17000/src/17388_waglewagle_skh.h"

#include "test_headers/test_helper.h"

class WagleWagleTest : public IOTestFixture<WagleWagle> {};

TEST_F(WagleWagleTest, SimpleCase) { RunTest("31 41 59", "OK"); }

TEST_F(WagleWagleTest, SimpleCase2) { RunTest("1 2 3", "Soongsil"); }

TEST_F(WagleWagleTest, SimpleCase3) { RunTest("19 8 9", "Korea"); }

TEST_F(WagleWagleTest, SimpleCase4) { RunTest("45 33 21", "Hanyang"); }
