#include "32000/src/32399_hambuger_sort.h"

#include "test_headers/test_helper.h"

class HambugerSortTest : public IOTestFixture<HambugerSort> {};

TEST_F(HambugerSortTest, SimpleCase) { RunTest("1)(", "1"); }

TEST_F(HambugerSortTest, SimpleCase2) { RunTest(")1(", "2"); }

TEST_F(HambugerSortTest, SimpleCase3) { RunTest("(1)", "0"); }

TEST_F(HambugerSortTest, SimpleCase4) { RunTest("1()", "1"); }
