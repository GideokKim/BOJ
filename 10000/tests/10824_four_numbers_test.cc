#include "10000/src/10824_four_numbers.h"

#include "test_headers/test_helper.h"

class FourNumbersTest : public IOTestFixture<FourNumbers> {};

TEST_F(FourNumbersTest, SimpleCase) { RunTest("10 20 30 40", "4060"); }
