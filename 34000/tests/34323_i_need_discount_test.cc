#include "34000/src/34323_i_need_discount.h"

#include "test_headers/test_helper.h"

class INeedDiscountTest : public IOTestFixture<INeedDiscount> {};

TEST_F(INeedDiscountTest, SampleCase) { RunTest("40 1 100", "100"); }

TEST_F(INeedDiscountTest, SampleCase2) { RunTest("40 2 100", "180"); }

TEST_F(INeedDiscountTest, SampleCase3) { RunTest("10 10 101", "999"); }
