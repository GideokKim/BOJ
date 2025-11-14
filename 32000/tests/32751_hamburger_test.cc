#include "32000/src/32751_hamburger.h"

#include "test_headers/test_helper.h"

class HamburgerTest : public IOTestFixture<Hamburger> {};

TEST_F(HamburgerTest, SimpleCase) { RunTest("5\n2 1 1 1\nabdca", "Yes"); }

TEST_F(HamburgerTest, SimpleCase2) { RunTest("2\n2 2 1 0\naa", "No"); }
