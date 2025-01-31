#include "5000/src/5347_lcm.h"

#include "test_headers/test_helper.h"

class LcmTest : public IOTestFixture<Lcm> {};

TEST_F(LcmTest, SampleCase) {
  RunTest("3\n15 21\n33 22\n9 10", "105\n66\n90\n");
}
