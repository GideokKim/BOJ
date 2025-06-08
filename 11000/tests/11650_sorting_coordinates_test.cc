#include "11000/src/11650_sorting_coordinates.h"

#include "test_headers/test_helper.h"

class SortingCoordinatesTest : public IOTestFixture<SortingCoordinates> {};

TEST_F(SortingCoordinatesTest, SampleCase) {
  RunTest("5\n3 4\n1 1\n1 -1\n2 2\n3 3", "1 -1\n1 1\n2 2\n3 3\n3 4\n");
}

TEST_F(SortingCoordinatesTest, SampleCase2) {
  RunTest("5\n3 4\n1 1\n1 -2\n2 2\n3 3", "1 -2\n1 1\n2 2\n3 3\n3 4\n");
}

TEST_F(SortingCoordinatesTest, SampleCase3) {
  RunTest("5\n3 4\n1 3\n1 -2\n2 2\n3 3", "1 -2\n1 3\n2 2\n3 3\n3 4\n");
}
