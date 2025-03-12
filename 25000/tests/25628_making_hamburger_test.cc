#include "25000/src/25628_making_hamburger.h"

#include "test_headers/test_helper.h"

class MakingHamburgerTest : public IOTestFixture<MakingHamburger> {};

TEST_F(MakingHamburgerTest, SampleCase) { RunTest("6 3", "3"); }

TEST_F(MakingHamburgerTest, SampleCase2) { RunTest("5 4", "2"); }

TEST_F(MakingHamburgerTest, SampleCase3) { RunTest("1 7", "0"); }
