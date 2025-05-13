#include "1000/src/1100_white_cells.h"

#include "test_headers/test_helper.h"

class WhiteCellsTest : public IOTestFixture<WhiteCells> {};

TEST_F(WhiteCellsTest, SampleCase) {
  RunTest(
      ".F.F...F\nF...F.F.\n...F.F.F\nF.F...F.\n.F...F..\nF...F.F.\n.F.F.F.F\n.."
      "FF..F.",
      "1");
}

TEST_F(WhiteCellsTest, SampleCase2) {
  RunTest(
      "........\n........\n........\n........\n........\n........\n........\n.."
      "......",
      "0");
}

TEST_F(WhiteCellsTest, SampleCase3) {
  RunTest(
      "FFFFFFFF\nFFFFFFFF\nFFFFFFFF\nFFFFFFFF\nFFFFFFFF\nFFFFFFFF\nFFFFFFFF\n"
      "FFFFFFFF",
      "32");
}

TEST_F(WhiteCellsTest, SampleCase4) {
  RunTest(
      "........\n..F.....\n.....F..\n.....F..\n........\n........\n.......F\n."
      "F......",
      "2");
}
