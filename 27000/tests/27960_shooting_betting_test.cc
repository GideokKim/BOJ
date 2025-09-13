#include "27000/src/27960_shooting_betting.h"

#include "test_headers/test_helper.h"

class ShootingBettingTest : public IOTestFixture<ShootingBetting> {};

TEST_F(ShootingBettingTest, SampleCase) { RunTest("55 73", "126"); }

TEST_F(ShootingBettingTest, SampleCase2) { RunTest("105 47", "70"); }

TEST_F(ShootingBettingTest, SampleCase3) { RunTest("197 197", "0"); }
