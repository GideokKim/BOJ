#include "23000/src/23805_print_at.h"

#include "test_headers/test_helper.h"

class PrintAtTest : public IOTestFixture<PrintAt> {};

TEST_F(PrintAtTest, SimpleCase) {
  RunTest("1", "@@@ @\n@ @ @\n@ @ @\n@ @ @\n@ @@@\n");
}

TEST_F(PrintAtTest, SimpleCase2) {
  RunTest("3",
          "@@@@@@@@@   @@@\n@@@@@@@@@   @@@\n@@@@@@@@@   @@@\n@@@   @@@   "
          "@@@\n@@@   @@@   @@@\n@@@   @@@   @@@\n@@@   @@@   @@@\n@@@   @@@   "
          "@@@\n@@@   @@@   @@@\n@@@   @@@   @@@\n@@@   @@@   @@@\n@@@   @@@   "
          "@@@\n@@@   @@@@@@@@@\n@@@   @@@@@@@@@\n@@@   @@@@@@@@@\n");
}
