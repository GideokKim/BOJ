#include "7000/src/7600_how_many_letters.h"

#include "test_headers/test_helper.h"

class HowManyLettersTest : public IOTestFixture<HowManyLetters> {};

TEST_F(HowManyLettersTest, SimpleCase) {
  RunTest(
      "The quick brown fox jumped over the lazy dogs.\n"
      "2 + 2 = 4\n"
      "New Zealand Programming Contest.\n"
      "#",
      "26\n0\n16\n");
}
