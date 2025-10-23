#include "34000/src/34027_is_this_square.h"

#include "test_headers/test_helper.h"

class IsThisSquareTest : public IOTestFixture<IsThisSquare> {};

TEST_F(IsThisSquareTest, SampleCase) {
  RunTest("10\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10",
          "1\n0\n0\n1\n0\n0\n0\n0\n1\n0\n");
}

TEST_F(IsThisSquareTest, SampleCase2) {
  RunTest("6\n11\n12\n13\n14\n15\n16", "0\n0\n0\n0\n0\n1\n");
}
