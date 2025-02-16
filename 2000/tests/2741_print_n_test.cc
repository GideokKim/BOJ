#include "2000/src/2741_print_n.h"

#include "test_headers/test_helper.h"

class PrintNTest : public IOTestFixture<PrintN> {};

TEST_F(PrintNTest, SimpleCase) { RunTest("5", "1\n2\n3\n4\n5\n"); }
