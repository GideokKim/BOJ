#include "34000/src/34543_stamp_tour.h"

#include "test_headers/test_helper.h"

class StampTourTest : public IOTestFixture<StampTour> {};

TEST_F(StampTourTest, SampleCase) { RunTest("2\n1000", "20"); }

TEST_F(StampTourTest, SampleCase2) { RunTest("3\n1500", "35"); }
