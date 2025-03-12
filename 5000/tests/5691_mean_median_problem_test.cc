#include "5000/src/5691_mean_median_problem.h"

#include "test_headers/test_helper.h"

class MeanMedianProblemTest : public IOTestFixture<MeanMedianProblem> {};

TEST_F(MeanMedianProblemTest, SampleCase) {
  RunTest("1 2\n6 10\n1 1000000000\n0 0", "0\n2\n-999999998\n");
}
