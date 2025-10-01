#include "21000/src/21603_k_2k_game.h"

#include "test_headers/test_helper.h"

class K2kGameTest : public IOTestFixture<K2kGame> {};

TEST_F(K2kGameTest, SimpleCase) { RunTest("9 4", "7\n1 2 3 5 6 7 9 "); }

TEST_F(K2kGameTest, SimpleCase2) {
  RunTest("16 12", "12\n1 3 5 6 7 8 9 10 11 13 15 16 ");
}