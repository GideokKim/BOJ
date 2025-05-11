#include "1000/src/1504_specific_shortest_path.h"

#include "test_headers/test_helper.h"

class SpecificShortestPathTest : public IOTestFixture<SpecificShortestPath> {};

TEST_F(SpecificShortestPathTest, SampleCase) {
  RunTest("4 6\n1 2 3\n2 3 3\n3 4 1\n1 3 5\n2 4 5\n1 4 4\n2 3", "7");
}
