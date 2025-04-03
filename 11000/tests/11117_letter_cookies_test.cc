#include "11000/src/11117_letter_cookies.h"

#include "test_headers/test_helper.h"

class LetterCookiesTest : public IOTestFixture<LetterCookies> {};

TEST_F(LetterCookiesTest, SampleCase) {
  RunTest(
      "1\n"
      "ABANANACOOKIE\n"
      "4\n"
      "BANANA\n"
      "LETTER\n"
      "COOKIES\n"
      "CAN",
      "YES\n"
      "NO\n"
      "NO\n"
      "YES\n");
}
