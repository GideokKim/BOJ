#include "14000/src/14916_change.h"

#include "test_headers/test_helper.h"

class ChangeTest : public IOTestFixture<Change> {};

TEST_F(ChangeTest, SampleCase) { RunTest("13", "5"); }

TEST_F(ChangeTest, SampleCase2) { RunTest("14", "4"); }

TEST_F(ChangeTest, SampleCase3) { RunTest("3", "-1"); }