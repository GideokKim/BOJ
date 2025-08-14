#include "29000/src/29725_chess_newbie.h"

#include "test_headers/test_helper.h"

class ChessNewbieTest : public IOTestFixture<ChessNewbie> {};

TEST_F(ChessNewbieTest, SimpleCase) {
  RunTest(
      "rnbqkbnk\npppppppp\n........\n........\n........\n........"
      "\nPPPPPPPP\nRNBQKBNK",
      "0");
}

TEST_F(ChessNewbieTest, SimpleCase2) {
  RunTest(
      "RRRRRRRR\nRRRRRRRR\nRRRRRRRR\nRRRRRRRR\nrrrrrrrr\nrrrrrrrr\nrrrrrrrr\nrr"
      "rrrrrk",
      "5");
}

TEST_F(ChessNewbieTest, SimpleCase3) {
  RunTest(
      "rrrrrrrr\nrrrrrrrr\nrrrrrrrr\nrrrrrrrr\nrrrrrrrr\nrrrrrrrr\nrrrrrrrr\nrr"
      "rrrrrr",
      "-320");
}
