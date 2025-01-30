#include "28000/src/28224_final_price.h"

#include "test_headers/test_helper.h"

class FinalPriceTest : public IOTestFixture<FinalPrice> {};

TEST_F(FinalPriceTest, SampleCase) { RunTest("2\n11\n68", "79"); }

TEST_F(FinalPriceTest, SampleCase2) { RunTest("4\n110\n-5\n0\n27", "132"); }
