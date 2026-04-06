#include "32000/src/32400_dart_board.h"

#include "test_headers/test_helper.h"

class DartBoardTest : public IOTestFixture<DartBoard> {};

TEST_F(DartBoardTest, SimpleCase) {
  RunTest("20 1 18 4 13 6 10 15 2 17 3 19 7 16 8 11 14 9 12 5", "Bob");
}

TEST_F(DartBoardTest, SimpleCase2) {
  RunTest("1 20 11 2 3 4 5 6 7 8 9 10 12 13 14 15 16 17 18 19", "Alice");
}
