#include "32000/src/32710_multiplication_table.h"

#include "test_headers/test_helper.h"

class MultiplicationTableTest : public IOTestFixture<MultiplicationTable> {};

TEST_F(MultiplicationTableTest, SimpleCase) { RunTest("5", "1"); }

TEST_F(MultiplicationTableTest, SimpleCase2) { RunTest("13", "0"); }
