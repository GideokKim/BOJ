#include "29000/src/29751_triangle.h"

#include "test_headers/test_helper.h"

class TriangleTest : public IOTestFixture<Triangle> {};

TEST_F(TriangleTest, SimpleCase) { RunTest("1 1", "0.5"); }

TEST_F(TriangleTest, SimpleCase2) { RunTest("2 3", "3.0"); }
