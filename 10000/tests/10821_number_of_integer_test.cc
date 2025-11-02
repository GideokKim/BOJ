#include "10000/src/10821_number_of_integer.h"

#include "test_headers/test_helper.h"

class NumberOfIntegerTest : public IOTestFixture<NumberOfInteger> {};

TEST_F(NumberOfIntegerTest, SimpleCase) { RunTest("10,20,30,50,100", "5"); }

TEST_F(NumberOfIntegerTest, SimpleCase2) { RunTest("1000", "1"); }