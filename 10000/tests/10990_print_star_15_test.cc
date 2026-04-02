#include "10000/src/10990_print_star_15.h"

#include "test_headers/test_helper.h"

class PrintStar15Test : public IOTestFixture<PrintStar15> {};

TEST_F(PrintStar15Test, SimpleCase) { RunTest("1", "*\n"); }

TEST_F(PrintStar15Test, SimpleCase2) { RunTest("2", " *\n* *\n"); }

TEST_F(PrintStar15Test, SimpleCase3) { RunTest("3", "  *\n * *\n*   *\n"); }

TEST_F(PrintStar15Test, SimpleCase4) {
  RunTest("4", "   *\n  * *\n *   *\n*     *\n");
}