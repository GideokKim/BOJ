#include "10000/src/10101_remember_triangle.h"

#include "test_headers/test_helper.h"

class RememberTriangleTest : public IOTestFixture<RememberTriangle> {};

TEST_F(RememberTriangleTest, SimpleCase) { RunTest("60\n70\n50", "Scalene"); }

TEST_F(RememberTriangleTest, SimpleCase2) {
  RunTest("60\n60\n60", "Equilateral");
}
