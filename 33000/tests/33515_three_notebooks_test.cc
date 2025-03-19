#include "33000/src/33515_three_notebooks.h"

#include "test_headers/test_helper.h"

class ThreeNotebooksTest : public IOTestFixture<ThreeNotebooks> {};

TEST_F(ThreeNotebooksTest, SampleCase) { RunTest("10 12", "10"); }

TEST_F(ThreeNotebooksTest, SampleCase2) { RunTest("5 5", "5"); }