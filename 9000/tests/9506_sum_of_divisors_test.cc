#include "9000/src/9506_sum_of_divisors.h"

#include "test_headers/test_helper.h"

class SumOfDivisorsTest : public IOTestFixture<SumOfDivisors> {};

TEST_F(SumOfDivisorsTest, SampleCase) {
  RunTest("6\n12\n28\n-1\n",
          "6 = 1 + 2 + 3\n12 is NOT perfect.\n28 = 1 + 2 + 4 + 7 + 14\n");
}
