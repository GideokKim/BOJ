#include "24000/src/24273_green_big_top.h"

#include "test_headers/test_helper.h"

class GreenBigTopTest : public IOTestFixture<GreenBigTop> {};

TEST_F(GreenBigTopTest, SampleCase) { RunTest("1", "2"); }

TEST_F(GreenBigTopTest, SampleCase2) { RunTest("2", "4"); }
