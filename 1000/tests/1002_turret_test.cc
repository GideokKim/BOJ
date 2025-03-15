#include "1000/src/1002_turret.h"

#include "test_headers/test_helper.h"

class TurretTest : public IOTestFixture<Turret> {};

TEST_F(TurretTest, SampleCase) {
  RunTest("3\n0 0 13 40 0 37\n0 0 3 0 7 4\n1 1 1 1 1 5", "2\n1\n0\n");
}
