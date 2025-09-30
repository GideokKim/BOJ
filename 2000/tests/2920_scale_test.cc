#include "2000/src/2920_scale.h"

#include "test_headers/test_helper.h"

class ScaleTest : public IOTestFixture<Scale> {};

TEST_F(ScaleTest, SampleCase) { RunTest("1 2 3 4 5 6 7 8", "ascending"); }

TEST_F(ScaleTest, SampleCase2) { RunTest("8 7 6 5 4 3 2 1", "descending"); }

TEST_F(ScaleTest, SampleCase3) { RunTest("8 1 7 2 6 3 5 4", "mixed"); }
