#include "11000/src/11651_sorting_coordinates_2.h"

#include "test_headers/test_helper.h"

class SortingCoordinates2Test : public IOTestFixture<SortingCoordinates2> {};

TEST_F(SortingCoordinates2Test, SampleCase) {
  RunTest("5\n0 4\n1 2\n1 -1\n2 2\n3 3", "1 -1\n1 2\n2 2\n3 3\n0 4\n");
}
