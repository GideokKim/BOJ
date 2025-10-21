#include "2000/src/2446_print_stars_9.h"

#include "test_headers/test_helper.h"

class PrintStars9Test : public IOTestFixture<PrintStars9> {};

TEST_F(PrintStars9Test, SampleCase) {
  RunTest("5",
          "*********\n *******\n  *****\n   ***\n    *\n   ***\n  *****\n "
          "*******\n*********\n");
}
