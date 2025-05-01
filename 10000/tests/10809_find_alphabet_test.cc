#include "10000/src/10809_find_alphabet.h"

#include "test_headers/test_helper.h"

class FindAlphabetTest : public IOTestFixture<FindAlphabet> {};

TEST_F(FindAlphabetTest, SampleCase) {
  RunTest("baekjoon",
          "1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 "
          "-1 ");
}
