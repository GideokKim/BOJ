#include "24000/src/24086_height.h"

#include "test_headers/test_helper.h"

class HeightTest : public IOTestFixture<Height> {};

TEST_F(HeightTest, SampleCase) { RunTest("150\n155", "5"); }

TEST_F(HeightTest, SampleCase2) { RunTest("100\n101", "1"); }

TEST_F(HeightTest, SampleCase3) { RunTest("100\n200", "100"); }
