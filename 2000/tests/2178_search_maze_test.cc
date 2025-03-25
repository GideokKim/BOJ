#include "2000/src/2178_search_maze.h"

#include "test_headers/test_helper.h"

class SearchMazeTest : public IOTestFixture<SearchMaze> {};

TEST_F(SearchMazeTest, SampleCase) {
  RunTest("4 6\n101111\n101010\n101011\n111011", "15");
}

TEST_F(SearchMazeTest, SampleCase2) {
  RunTest("4 6\n110110\n110110\n111111\n111101", "9");
}

TEST_F(SearchMazeTest, SampleCase3) {
  RunTest("2 25\n1011101110111011101110111\n1110111011101110111011101", "38");
}

TEST_F(SearchMazeTest, SampleCase4) {
  RunTest("7 7\n1011111\n1110001\n1000001\n1000001\n1000001\n1000001\n1111111",
          "13");
}