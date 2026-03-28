#include "31000/src/31995_place_game_piece.h"

#include "test_headers/test_helper.h"

class PlaceGamePieceTest : public IOTestFixture<PlaceGamePiece> {};

TEST_F(PlaceGamePieceTest, SimpleCase) { RunTest("3\n2", "4"); }

TEST_F(PlaceGamePieceTest, SimpleCase2) { RunTest("30\n1", "0"); }

TEST_F(PlaceGamePieceTest, SimpleCase3) { RunTest("13\n27", "624"); }