#include "15000/src/15232_rectangles.h"

#include "test_headers/test_helper.h"

class RectanglesTest : public IOTestFixture<Rectangles> {};

TEST_F(RectanglesTest, SampleCase) { RunTest("3\n5", "*****\n*****\n*****\n"); }
