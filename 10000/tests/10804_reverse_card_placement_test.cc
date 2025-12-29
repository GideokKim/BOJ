#include "10000/src/10804_reverse_card_placement.h"

#include "test_headers/test_helper.h"

class ReverseCardPlacementTest : public IOTestFixture<ReverseCardPlacement> {};

TEST_F(ReverseCardPlacementTest, SampleCase) {
  RunTest("5 10\n9 13\n1 2\n3 4\n5 6\n1 2\n3 4\n5 6\n1 20\n1 20",
          "1 2 3 4 10 9 8 7 13 12 11 5 6 14 15 16 17 18 19 20 ");
}

TEST_F(ReverseCardPlacementTest, SampleCase2) {
  RunTest("1 1\n2 2\n3 3\n4 4\n5 5\n6 6\n7 7\n8 8\n9 9\n10 10",
          "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ");
}

TEST_F(ReverseCardPlacementTest, SampleCase3) {
  RunTest("1 20\n2 19\n3 18\n4 17\n5 16\n6 15\n7 14\n8 13\n9 12\n10 11",
          "20 2 18 4 16 6 14 8 12 10 11 9 13 7 15 5 17 3 19 1 ");
}