#include "34000/src/34073_doro.h"

#include "test_headers/test_helper.h"

class DoroTest : public IOTestFixture<Doro> {};

TEST_F(DoroTest, SampleCase) {
  RunTest(
      "13\nyou can get badge and background if you solve at least one problem",
      "youDORO canDORO getDORO badgeDORO andDORO backgroundDORO ifDORO youDORO "
      "solveDORO atDORO leastDORO oneDORO problemDORO ");
}

TEST_F(DoroTest, SampleCase2) {
  RunTest("2\nblue archive", "blueDORO archiveDORO ");
}

TEST_F(DoroTest, SampleCase3) {
  RunTest("3\ni love you", "iDORO loveDORO youDORO ");
}
