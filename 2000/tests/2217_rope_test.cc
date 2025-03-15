#include "2000/src/2217_rope.h"

#include "test_headers/test_helper.h"

class RopeTest : public IOTestFixture<Rope> {};

TEST_F(RopeTest, SampleCase) { RunTest("2\n10\n15", "20"); }
