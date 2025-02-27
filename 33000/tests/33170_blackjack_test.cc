#include "33000/src/33170_blackjack.h"

#include "test_headers/test_helper.h"

class BlackjackTest : public IOTestFixture<Blackjack> {};

TEST_F(BlackjackTest, SimpleCase) {
  RunTest("5\n10\n6", "1");
}

TEST_F(BlackjackTest, SimpleCase2) {
  RunTest("7\n8\n13", "0");
}
