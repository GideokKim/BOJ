#include "4000/src/4806_count_line.h"

#include "test_headers/test_helper.h"

class CountLineTest : public IOTestFixture<CountLine> {};

TEST_F(CountLineTest, SimpleCase) { RunTest("one\nand two\nthree", "3"); }
