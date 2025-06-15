#include "32000/src/32642_billiards.h"

#include "test_headers/test_helper.h"

class BilliardsTest : public IOTestFixture<Billiards> {};

TEST_F(BilliardsTest, SimpleCase) { RunTest("5\n0 0 0 0 0", "-15"); }

TEST_F(BilliardsTest, SimpleCase2) { RunTest("6\n1 1 0 0 1 0", "5"); }
