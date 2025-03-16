#include "25000/src/25238_gahee_defence_rate.h"
#include "test_headers/test_helper.h"

class GaheeDefenceRateTest : public IOTestFixture<GaheeDefenceRate> {};

TEST_F(GaheeDefenceRateTest, SampleCase) { RunTest("200 20\n", "0"); }

TEST_F(GaheeDefenceRateTest, SampleCase2) { RunTest("90 0\n", "1"); }

TEST_F(GaheeDefenceRateTest, SampleCase3) { RunTest("336 71\n", "1"); }
