#include "19000/src/19637_please_write_if_instead.h"

#include "test_headers/test_helper.h"

class PleaseWriteIfInsteadTest : public IOTestFixture<PleaseWriteIfInstead> {};

TEST_F(PleaseWriteIfInsteadTest, SimpleCase) {
  RunTest(
      "3 8\nWEAK 10000\nNORMAL 100000\nSTRONG "
      "1000000\n0\n9999\n10000\n10001\n50000\n100000\n500000\n1000000",
      "WEAK\nWEAK\nWEAK\nNORMAL\nNORMAL\nNORMAL\nSTRONG\nSTRONG\n");
}

TEST_F(PleaseWriteIfInsteadTest, SimpleCase2) {
  RunTest("3 5\nB 100\nA 100\nC 1000\n99\n100\n101\n500\n1000",
          "B\nB\nC\nC\nC\n");
}
