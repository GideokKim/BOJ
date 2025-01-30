#include "21000/src/21955_split.h"

#include "test_headers/test_helper.h"

class SplitTest : public IOTestFixture<Split> {};

TEST_F(SplitTest, SampleCase) { RunTest("2341", "23 41"); }

TEST_F(SplitTest, SampleCase2) { RunTest("238445", "238 445"); }
