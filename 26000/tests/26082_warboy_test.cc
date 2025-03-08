#include "26000/src/26082_warboy.h"

#include "test_headers/test_helper.h"

class WarboyTest : public IOTestFixture<Warboy> {};

TEST_F(WarboyTest, SimpleCase) { RunTest("10 100 7", "210"); }
