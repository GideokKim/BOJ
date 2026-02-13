#include "14000/src/14471_point_card.h"

#include "test_headers/test_helper.h"

class PointCardTest : public IOTestFixture<PointCard> {};

TEST_F(PointCardTest, SampleCase) {
  RunTest("4 5\n1 7\n6 2\n3 5\n4 4\n0 8", "4");
}

TEST_F(PointCardTest, SampleCase2) { RunTest("5 4\n5 5\n8 2\n3 7\n8 2", "0"); }
