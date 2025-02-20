#include "25000/src/25494_simple_problem_small.h"

#include "test_headers/test_helper.h"

class SimpleProblemSmallTest : public IOTestFixture<SimpleProblemSmall> {};

TEST_F(SimpleProblemSmallTest, SampleCase) {
  RunTest("2\n1 2 3\n3 2 4", "1\n2\n");
}
