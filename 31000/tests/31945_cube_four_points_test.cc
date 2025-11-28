#include "31000/src/31945_cube_four_points.h"

#include "test_headers/test_helper.h"

class CubeFourPointsTest : public IOTestFixture<CubeFourPoints> {};

TEST_F(CubeFourPointsTest, SimpleCase) {
  RunTest("2\n5 0 4 1\n1 2 6 5", "YES\nNO\n");
}
