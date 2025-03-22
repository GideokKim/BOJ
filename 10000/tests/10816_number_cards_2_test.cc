#include "10000/src/10816_number_cards_2.h"

#include "test_headers/test_helper.h"

class NumberCards2Test : public IOTestFixture<NumberCards2> {};

TEST_F(NumberCards2Test, SampleCase) {
  RunTest("10\n6 3 2 10 10 10 -10 -10 7 3\n8\n10 9 -5 2 3 4 5 -10\n",
          "3 0 0 1 2 0 0 2 ");
}
