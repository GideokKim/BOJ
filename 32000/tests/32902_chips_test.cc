#include "32000/src/32902_chips.h"

#include "test_headers/test_helper.h"

class ChipsTest : public IOTestFixture<Chips> {};

TEST_F(ChipsTest, SimpleCase) { RunTest("3 4", "5 13"); }

TEST_F(ChipsTest, SimpleCase2) { RunTest("49 15", "16 736"); }
