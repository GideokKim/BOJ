#include "2000/src/2742_print_n.h"

#include "test_headers/test_helper.h"

class PrintNTest : public IOTestFixture<PrintN> {};

TEST_F(PrintNTest, SimpleCase) { RunTest("5", "5\n4\n3\n2\n1\n"); }
