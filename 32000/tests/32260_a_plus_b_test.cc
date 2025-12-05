#include "32000/src/32260_a_plus_b.h"

#include "test_headers/test_helper.h"

class APlusBTest : public IOTestFixture<APlusB> {};

TEST_F(APlusBTest, SimpleCase) { RunTest("1 2", "3"); }
