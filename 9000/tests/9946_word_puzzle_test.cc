#include "9000/src/9946_word_puzzle.h"

#include "test_headers/test_helper.h"

class WordPuzzleTest : public IOTestFixture<WordPuzzle> {};

TEST_F(WordPuzzleTest, SampleCase) {
  RunTest(
      "testing\nintestg\nabc\naabbbcccc\nabcabcbcc\naabbbcccc\nabc\nxyz\nEND\n"
      "END",
      "Case 1: same\nCase 2: different\nCase 3: same\nCase 4: different\n");
}
