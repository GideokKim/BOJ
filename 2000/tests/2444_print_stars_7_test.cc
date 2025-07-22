#include "2000/src/2444_print_stars_7.h"

#include "test_headers/test_helper.h"

class PrintStars7Test : public IOTestFixture<PrintStars7> {};

TEST_F(PrintStars7Test, SampleCase) {
  RunTest("5",
          "    *\n   ***\n  *****\n *******\n*********\n *******"
          "\n  *****\n   ***\n    *\n");
}
