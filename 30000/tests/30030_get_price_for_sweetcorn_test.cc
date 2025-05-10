#include "30000/src/30030_get_price_for_sweetcorn.h"

#include "test_headers/test_helper.h"

class GetPriceForSweetCornTest : public IOTestFixture<GetPriceForSweetCorn> {};

TEST_F(GetPriceForSweetCornTest, SimpleCase) { RunTest("1100", "1000"); }

TEST_F(GetPriceForSweetCornTest, SimpleCase2) { RunTest("2970", "2700"); }

TEST_F(GetPriceForSweetCornTest, SimpleCase3) { RunTest("9900", "9000"); }
