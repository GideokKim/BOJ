#include "17000/src/17608_bar.h"

#include "test_headers/test_helper.h"

class BarTest : public IOTestFixture<Bar> {};

TEST_F(BarTest, SimpleCase) { RunTest("6\n6\n9\n7\n6\n4\n6", "3"); }

TEST_F(BarTest, SimpleCase2) { RunTest("5\n5\n4\n3\n2\n1", "5"); }