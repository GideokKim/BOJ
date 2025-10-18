#include "1000/src/1526_largest_gold_minsu.h"

#include "test_headers/test_helper.h"

class LargestGoldMinsuTest : public IOTestFixture<LargestGoldMinsu> {};

TEST_F(LargestGoldMinsuTest, SampleCase) { RunTest("100", "77"); }

TEST_F(LargestGoldMinsuTest, SampleCase2) { RunTest("75", "74"); }

TEST_F(LargestGoldMinsuTest, SampleCase3) { RunTest("5", "4"); }

TEST_F(LargestGoldMinsuTest, SampleCase4) { RunTest("474747", "474747"); }
