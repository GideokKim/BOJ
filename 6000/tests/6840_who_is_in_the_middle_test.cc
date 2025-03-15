#include "6000/src/6840_who_is_in_the_middle.h"

#include "test_headers/test_helper.h"

class WhoIsInTheMiddleTest : public IOTestFixture<WhoIsInTheMiddle> {};

TEST_F(WhoIsInTheMiddleTest, SampleCase) { RunTest("10\n5\n8", "8\n"); }
