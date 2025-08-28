#include "30000/src/30394_calipers.h"

#include "test_headers/test_helper.h"

class CalipersTest : public IOTestFixture<Calipers> {};

TEST_F(CalipersTest, SimpleCase) { RunTest("3\n1 2\n2 5\n4 2", "3"); }
