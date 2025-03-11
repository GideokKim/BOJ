#include "9000/src/9251_lcs.h"

#include "test_headers/test_helper.h"

class LCS_Test : public IOTestFixture<LCS> {};

TEST_F(LCS_Test, SampleCase) { RunTest("ACAYKP\nCAPCAK", "4"); }
