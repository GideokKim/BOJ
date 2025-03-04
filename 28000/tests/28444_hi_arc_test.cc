#include "28000/src/28444_hi_arc.h"

#include "test_headers/test_helper.h"

class HiArcTest : public IOTestFixture<HiArc> {};

TEST_F(HiArcTest, SampleCase) { RunTest("4 6 1 2 3", "18"); }
