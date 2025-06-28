#include "16000/src/16546_missing_runners.h"

#include "test_headers/test_helper.h"

class MissingRunnersTest : public IOTestFixture<MissingRunners> {};

TEST_F(MissingRunnersTest, SampleCase) { RunTest("5\n1 5 2 3", "4"); }
