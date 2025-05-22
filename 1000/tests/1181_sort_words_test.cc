#include "1000/src/1181_sort_words.h"

#include "test_headers/test_helper.h"

class SortWordsTest : public IOTestFixture<SortWords> {};

TEST_F(SortWordsTest, SampleCase) {
  RunTest(
      "13\nbut\ni\nwont\nhesitate\nno\nmore\nno\nmore\nit\ncannot\nwait\n"
      "im\nyours",
      "i\n"
      "im\n"
      "it\n"
      "no\n"
      "but\n"
      "more\n"
      "wait\n"
      "wont\n"
      "yours\n"
      "cannot\n"
      "hesitate\n");
}
