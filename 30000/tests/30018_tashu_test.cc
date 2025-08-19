#include "30000/src/30018_tashu.h"

#include "test_headers/test_helper.h"

class TashuTest : public IOTestFixture<Tashu> {};

TEST_F(TashuTest, SimpleCase) { RunTest("4\n3 1 4 2\n2 2 3 3", "2"); }

TEST_F(TashuTest, SimpleCase2) { RunTest("3\n1 1 5\n4 2 1", "4"); }

TEST_F(TashuTest, SimpleCase3) { RunTest("2\n2 1\n2 1", "0"); }