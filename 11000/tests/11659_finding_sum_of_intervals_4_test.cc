#include "11000/src/11659_finding_sum_of_intervals_4.h"

#include "test_headers/test_helper.h"

class FindingSumOfIntervals4Test
    : public IOTestFixture<FindingSumOfIntervals4> {};

TEST_F(FindingSumOfIntervals4Test, SampleCase) {
  RunTest("5 3\n5 4 3 2 1\n1 3\n2 4\n5 5", "12\n9\n1\n");
}
