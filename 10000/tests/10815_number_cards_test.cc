#include "10000/src/10815_number_cards.h"

#include "test_headers/test_helper.h"

class NumberCardsTest : public IOTestFixture<NumberCards> {};

TEST_F(NumberCardsTest, SampleCase) {
  RunTest("5\n6 3 2 10 -10\n8\n10 9 -5 2 3 4 5 -10\n", "1 0 0 1 1 0 0 1 ");
}
