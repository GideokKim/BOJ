#include "10000/src/10768_special_day.h"

#include "test_headers/test_helper.h"

class SpecialDayTest : public IOTestFixture<SpecialDay> {};

TEST_F(SpecialDayTest, SimpleCase1) { RunTest("1\n7", "Before"); }

TEST_F(SpecialDayTest, SimpleCase2) { RunTest("8\n31", "After"); }

TEST_F(SpecialDayTest, SimpleCase3) { RunTest("2\n18", "Special"); }
