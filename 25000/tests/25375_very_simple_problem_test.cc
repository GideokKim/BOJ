#include "25000/src/25375_very_simple_problem.h"

#include "test_headers/test_helper.h"

class VerySimpleProblemTest : public IOTestFixture<VerySimpleProblem> {};

TEST_F(VerySimpleProblemTest, SampleCase) { RunTest("2\n1 4\n2 3", "1\n0\n"); }
