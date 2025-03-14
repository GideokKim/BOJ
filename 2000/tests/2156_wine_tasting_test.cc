#include "2000/src/2156_wine_tasting.h"

#include "test_headers/test_helper.h"

class WineTastingTest : public IOTestFixture<WineTasting> {};

TEST_F(WineTastingTest, SimpleCase) { RunTest("6\n6\n10\n13\n9\n8\n1", "33"); }
