#include "5000/src/5622_dial.h"

#include "test_headers/test_helper.h"

class DialProblemTest : public IOTestFixture<DialProblem> {};

TEST_F(DialProblemTest, SampleCase) { RunTest("WA", "13"); }

TEST_F(DialProblemTest, SampleCase2) { RunTest("UNUCIC", "36"); }