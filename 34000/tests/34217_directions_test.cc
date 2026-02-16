#include "34000/src/34217_directions.h"

#include "test_headers/test_helper.h"

class DirectionsTest : public IOTestFixture<Directions> {};

TEST_F(DirectionsTest, SampleCase) { RunTest("66 71\n19 18", "Hanyang Univ."); }

TEST_F(DirectionsTest, SampleCase2) { RunTest("16 7\n11 13", "Yongdap"); }

TEST_F(DirectionsTest, SampleCase3) { RunTest("31 33\n17 15", "Either"); }
