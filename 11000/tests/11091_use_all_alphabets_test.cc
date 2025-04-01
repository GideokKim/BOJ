#include "11000/src/11091_use_all_alphabets.h"

#include "test_headers/test_helper.h"

class UseAllAlphabetsTest : public IOTestFixture<UseAllAlphabets> {};

TEST_F(UseAllAlphabetsTest, SampleCase) {
  RunTest(
      "3\n"
      "The quick brown fox jumps over the lazy dog.\n"
      "ZYXW, vu TSR Ponm lkj ihgfd CBA.\n"
      ".,?!' 92384 abcde FGHIJ",
      "pangram\n"
      "missing eq\n"
      "missing klmnopqrstuvwxyz\n");
}
