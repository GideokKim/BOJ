#include "34000/src/34511_polyominonal_puzzle.h"

#include "test_headers/test_helper.h"

class PolyominonalPuzzleTest : public IOTestFixture<PolyominonalPuzzle> {};

TEST_F(PolyominonalPuzzleTest, SampleCase) {
  RunTest(
      "8 "
      "16\n..XXXXXXXXXXXX..\n..XXXXXXXXXXXX..\n..XXX.XXXXXXXX..\n..XXX.."
      "XXXXXXX.."
      "\nYYYYYYYYXXXYYYYY\nYYYYYYYYYXYYYYYY\nYYYYYYYYYYYYYYYY\nYYYYYYYYYYYYYYY"
      "Y",
      "14");
}

TEST_F(PolyominonalPuzzleTest, SampleCase2) {
  RunTest("5 6\nYXXXXX\nYYXXXX\nYYYXXX\nYYYXXX\nYYYYYX", "9");
}
