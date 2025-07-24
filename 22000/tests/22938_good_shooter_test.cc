#include "22000/src/22938_good_shooter.h"

#include "test_headers/test_helper.h"

class GoodShooterTest : public IOTestFixture<GoodShooter> {};

TEST_F(GoodShooterTest, SampleCase) { RunTest("0 0 1\n1 1 2", "YES"); }

TEST_F(GoodShooterTest, SampleCase2) { RunTest("0 0 1\n10 10 1", "NO"); }
