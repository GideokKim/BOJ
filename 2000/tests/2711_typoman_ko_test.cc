#include "2000/src/2711_typoman_ko.h"

#include "test_headers/test_helper.h"

class TypomanTest : public IOTestFixture<Typoman> {};

TEST_F(TypomanTest, SimpleCase) {
  RunTest(
      "4\n"
      "4 MISSPELL\n"
      "1 PROGRAMMING\n"
      "7 CONTEST\n"
      "3 BALLOON",
      "MISPELL\n"
      "ROGRAMMING\n"
      "CONTES\n"
      "BALOON\n");
}
