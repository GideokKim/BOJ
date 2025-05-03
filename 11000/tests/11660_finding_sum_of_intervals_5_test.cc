#include "11000/src/11660_finding_sum_of_intervals_5.h"

#include "test_headers/test_helper.h"

class FindingSumOfIntervals5Test
    : public IOTestFixture<FindingSumOfIntervals5> {};

TEST_F(FindingSumOfIntervals5Test, SampleCase) {
  RunTest("4 3\n1 2 3 4\n2 3 4 5\n3 4 5 6\n4 5 6 7\n2 2 3 4\n3 4 3 4\n1 1 4 4",
          "27\n6\n64\n");
}

TEST_F(FindingSumOfIntervals5Test, SampleCase2) {
  RunTest("2 4\n1 2\n3 4\n1 1 1 1\n1 2 1 2\n2 1 2 1\n2 2 2 2", "1\n2\n3\n4\n");
}
