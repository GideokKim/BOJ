#include "28000/src/28490_area.h"

#include "test_headers/test_helper.h"

class AreaTest : public IOTestFixture<Area> {};

TEST_F(AreaTest, SampleCase) { RunTest("3\n5 9\n19 4\n8 10", "80"); }

TEST_F(AreaTest, SampleCase2) { RunTest("5\n8 2\n4 9\n3 8\n1 7\n9 4", "36"); }
