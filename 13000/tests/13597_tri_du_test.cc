#include "13000/src/13597_tri_du.h"

#include "test_headers/test_helper.h"

class TriDuTest : public IOTestFixture<TriDu> {};

TEST_F(TriDuTest, SampleCase) { RunTest("10 7", "10"); }

TEST_F(TriDuTest, SampleCase2) { RunTest("2 2", "2"); }
