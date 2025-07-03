#include "17000/src/17094_serious_problem.h"

#include "test_headers/test_helper.h"

class SeriousProblemTest : public IOTestFixture<SeriousProblem> {};

TEST_F(SeriousProblemTest, SimpleCase) { RunTest("12\n222eee222eee", "yee"); }

TEST_F(SeriousProblemTest, SimpleCase2) { RunTest("3\n22e", "2"); }

TEST_F(SeriousProblemTest, SimpleCase3) { RunTest("3\ne2e", "e"); }