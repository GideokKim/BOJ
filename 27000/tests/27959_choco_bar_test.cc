#include "27000/src/27959_choco_bar.h"

#include "test_headers/test_helper.h"

class ChocoBarTest : public IOTestFixture<ChocoBar> {};

TEST_F(ChocoBarTest, SampleCase) { RunTest("30 300", "Yes"); }

TEST_F(ChocoBarTest, SampleCase2) { RunTest("5 10000", "No"); }

TEST_F(ChocoBarTest, SampleCase3) { RunTest("7 785", "No"); }
