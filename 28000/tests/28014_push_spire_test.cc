#include "28000/src/28014_push_spire.h"

#include "test_headers/test_helper.h"

class PushSpireTest : public IOTestFixture<PushSpire> {};

TEST_F(PushSpireTest, SampleCase) { RunTest("6\n1 3 2 5 8 1", "4"); }

TEST_F(PushSpireTest, SampleCase2) { RunTest("8\n1 2 3 4 5 6 7 8", "8"); }
