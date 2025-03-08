#include "26000/src/26711_a_plus_b.h"

#include "test_headers/test_helper.h"

class APlusBTest : public IOTestFixture<APlusB> {};

TEST_F(APlusBTest, SimpleCase) { RunTest("1997\n25", "2022"); }
