#include "2000/src/2445_print_stars_8.h"

#include "test_headers/test_helper.h"

class PrintStars8Test : public IOTestFixture<PrintStars8> {};

TEST_F(PrintStars8Test, SampleCase) {
  RunTest("5",
          "*        *\n**      **\n***    ***\n****  ****\n**********\n****  "
          "****\n***    ***\n**      **\n*        *\n");
}
