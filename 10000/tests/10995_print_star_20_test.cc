#include "10000/src/10995_print_star_20.h"

#include "test_headers/test_helper.h"

class PrintStar20Test : public IOTestFixture<PrintStar20> {};

TEST_F(PrintStar20Test, SimpleCase) { RunTest("1", "*\n"); }

TEST_F(PrintStar20Test, SimpleCase2) { RunTest("2", "* *\n * *\n"); }

TEST_F(PrintStar20Test, SimpleCase3) { RunTest("3", "* * *\n * * *\n* * *\n"); }

TEST_F(PrintStar20Test, SimpleCase4) {
  RunTest("4", "* * * *\n * * * *\n* * * *\n * * * *\n");
}