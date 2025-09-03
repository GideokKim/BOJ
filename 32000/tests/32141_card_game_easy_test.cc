#include "32000/src/32141_card_game_easy.h"

#include "test_headers/test_helper.h"

class CardGameEasyTest : public IOTestFixture<CardGameEasy> {};

TEST_F(CardGameEasyTest, SimpleCase) { RunTest("4 5\n1 2 4 5", "3"); }

TEST_F(CardGameEasyTest, SimpleCase2) { RunTest("4 15\n1 2 4 5", "-1"); }
