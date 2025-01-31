#include "9000/src/9613_gcd_sum.h"

#include "test_headers/test_helper.h"

class GcdSumTest : public IOTestFixture<GcdSum> {};

TEST_F(GcdSumTest, SampleCase) {
  RunTest("3\n4 10 20 30 40\n3 7 5 12\n3 125 15 25", "70\n3\n35\n");
}
