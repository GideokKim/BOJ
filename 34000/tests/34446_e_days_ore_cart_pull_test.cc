#include "34000/src/34446_e_days_ore_cart_pull.h"

#include "test_headers/test_helper.h"

class EDaysOreCartPullTest : public IOTestFixture<EDaysOreCartPull> {};

TEST_F(EDaysOreCartPullTest, SampleCase) { RunTest("12\n1024\n74", "24"); }
