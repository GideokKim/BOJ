#include "34000/src/34455_donut_shop.h"

#include "test_headers/test_helper.h"

class DonutShopTest : public IOTestFixture<DonutShop> {};

TEST_F(DonutShopTest, SampleCase) {
  RunTest("10\n3\n+\n24\n-\n6\n-\n12", "16");
}
