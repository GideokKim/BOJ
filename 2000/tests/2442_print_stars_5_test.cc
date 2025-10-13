#include "2000/src/2442_print_stars_5.h"

#include "test_headers/test_helper.h"

class PrintStars5Test : public IOTestFixture<PrintStars5> {};

TEST_F(PrintStars5Test, SampleCase) {
  RunTest("5", "    *\n   ***\n  *****\n *******\n*********\n");
}
