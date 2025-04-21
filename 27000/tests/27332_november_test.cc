#include "27000/src/27332_november.h"

#include "test_headers/test_helper.h"

class NovemberTest : public IOTestFixture<November> {};

TEST_F(NovemberTest, SampleCase) { RunTest("19\n1", "1"); }

TEST_F(NovemberTest, SampleCase2) { RunTest("3\n4", "0"); }

TEST_F(NovemberTest, SampleCase3) { RunTest("8\n3", "1"); }
