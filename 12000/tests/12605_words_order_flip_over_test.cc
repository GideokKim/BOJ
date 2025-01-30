#include "12000/src/12605_words_order_flip_over.h"

#include "test_headers/test_helper.h"

class WordsOrderFlipOverTest : public IOTestFixture<WordsOrderFlipOver> {};

TEST_F(WordsOrderFlipOverTest, SimpleCase) {
  RunTest("3\nthis is a test\nfoobar\nall your base",
          "Case #1: test a is this\n"
          "Case #2: foobar\n"
          "Case #3: base your all\n");
}
