#include "10000/src/10093_numbers.h"

#include "test_headers/test_helper.h"

class NumbersTest : public IOTestFixture<Numbers> {};

TEST_F(NumbersTest, SimpleCase) { RunTest("8 14", "5\n9 10 11 12 13 "); }
