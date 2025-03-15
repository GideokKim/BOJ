#include "1000/src/1932_integer_triangle.h"

#include "test_headers/test_helper.h"

class IntegerTriangleTest : public IOTestFixture<IntegerTriangle> {};

TEST_F(IntegerTriangleTest, SampleCase) {
  RunTest("5\n7\n3 8\n8 1 0\n2 7 4 4\n4 5 2 6 5", "30");
}
