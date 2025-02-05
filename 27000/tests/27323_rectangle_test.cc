#include "27000/src/27323_rectangle.h"

#include "test_headers/test_helper.h"

class RectangleTest : public IOTestFixture<Rectangle> {};

TEST_F(RectangleTest, SampleCase) { RunTest("2\n3", "6"); }

TEST_F(RectangleTest, SampleCase2) { RunTest("100\n1", "100"); }

TEST_F(RectangleTest, SampleCase3) { RunTest("4\n4", "16"); }
