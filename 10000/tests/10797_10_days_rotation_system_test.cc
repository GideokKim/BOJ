#include "10000/src/10797_10_days_rotation_system.h"

#include "test_headers/test_helper.h"

class TenDaysRotationSystemTest : public IOTestFixture<TenDaysRotationSystem> {
};

TEST_F(TenDaysRotationSystemTest, SampleCase) { RunTest("1\n1 2 3 4 5", "1"); }

TEST_F(TenDaysRotationSystemTest, SampleCase2) { RunTest("3\n1 2 3 5 3", "2"); }

TEST_F(TenDaysRotationSystemTest, SampleCase3) { RunTest("5\n1 3 0 7 4", "0"); }