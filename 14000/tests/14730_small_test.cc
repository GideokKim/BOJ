#include "14000/src/14730_small.h"

#include "test_headers/test_helper.h"

class SmallTest : public IOTestFixture<Small> {};

TEST_F(SmallTest, SampleCase) { RunTest("3\n3 3\n2 2\n1 1", "14"); }
