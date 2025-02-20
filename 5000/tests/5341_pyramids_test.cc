#include "5000/src/5341_pyramids.h"

#include "test_headers/test_helper.h"

class PyramidsTest : public IOTestFixture<Pyramids> {};

TEST_F(PyramidsTest, SampleCase) { RunTest("4\n6\n0", "10\n21\n"); }
