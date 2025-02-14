#include "31000/src/31712_pinkbean_raid.h"

#include "test_headers/test_helper.h"

class PinkBeanRaidTest : public IOTestFixture<PinkBeanRaid> {};

TEST_F(PinkBeanRaidTest, SampleCase) {
  RunTest("12 19\n8 18\n6 15\n102", "12");
}

TEST_F(PinkBeanRaidTest, SampleCase2) {
  RunTest("11 896\n334 396\n326 789\n1701", "0");
}
