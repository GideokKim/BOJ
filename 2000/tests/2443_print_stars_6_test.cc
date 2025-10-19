#include "2000/src/2443_print_stars_6.h"

#include "test_headers/test_helper.h"

class PrintStars6Test : public IOTestFixture<PrintStars6> {};

TEST_F(PrintStars6Test, SampleCase) {
  RunTest("5", "*********\n *******\n  *****\n   ***\n    *\n");
}
