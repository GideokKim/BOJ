#include "11000/src/11665_cubic_intersection.h"

#include "test_headers/test_helper.h"

class CubicIntersectionTest : public IOTestFixture<CubicIntersection> {};

TEST_F(CubicIntersectionTest, SampleCase) {
  RunTest("2\n1 1 1 2 2 2\n2 2 2 3 3 3", "0");
}

TEST_F(CubicIntersectionTest, SampleCase2) {
  RunTest("2\n1 1 1 3 3 3\n2 2 2 3 3 3", "1");
}

TEST_F(CubicIntersectionTest, SampleCase3) {
  RunTest("2\n1 1 1 7 7 7\n2 3 4 7 8 9", "60");
}

TEST_F(CubicIntersectionTest, SampleCase4) {
  RunTest("3\n1 1 1 7 7 7\n2 3 4 7 8 9\n4 3 2 9 8 7", "36");
}

TEST_F(CubicIntersectionTest, SampleCase5) { RunTest("1\n1 2 3 4 5 6", "27"); }
