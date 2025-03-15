#include "6000/src/6603_lotto.h"

#include "test_headers/test_helper.h"

class LottoTest : public IOTestFixture<Lotto> {};

TEST_F(LottoTest, SampleCase) {
  RunTest(
      "7 1 2 3 4 5 6 7\n"
      "8 1 2 3 5 8 13 21 34\n"
      "0",
      "1 2 3 5 8 13\n1 2 3 5 8 21\n1 2 3 5 8 34\n1 2 3 5 13 21\n1 2 3 5 13 "
      "34\n1 2 3 5 21 34\n1 2 3 8 13 21\n1 2 3 8 13 34\n1 2 3 8 21 34\n1 2 3 "
      "13 21 34\n1 2 5 8 13 21\n1 2 5 8 13 34\n1 2 5 8 21 34\n1 2 5 13 21 "
      "34\n1 2 8 13 21 34\n1 3 5 8 13 21\n1 3 5 8 13 34\n1 3 5 8 21 34\n1 3 5 "
      "13 21 34\n1 3 8 13 21 34\n1 5 8 13 21 34\n2 3 5 8 13 21\n2 3 5 8 13 "
      "34\n2 3 5 8 21 34\n2 3 5 13 21 34\n2 3 8 13 21 34\n2 5 8 13 21 34\n3 5 "
      "8 13 21 34\n\n");
}

TEST_F(LottoTest, MinimumCase) {
  RunTest("6 1 2 3 4 5 6\n0", "1 2 3 4 5 6\n\n");
}
