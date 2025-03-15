#include "2000/src/2355_sigma.h"

#include "test_headers/test_helper.h"

class SigmaTest : public IOTestFixture<Sigma> {};

TEST_F(SigmaTest, SampleCase) { RunTest("1 2", "3"); }
