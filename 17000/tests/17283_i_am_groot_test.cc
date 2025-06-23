#include "17000/src/17283_i_am_groot.h"

#include "test_headers/test_helper.h"

class IAmGrootTest : public IOTestFixture<IAmGroot> {};

TEST_F(IAmGrootTest, SimpleCase) { RunTest("500\n30", "584"); }
