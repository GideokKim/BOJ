#include "26000/src/26517_continuous.h"

#include "test_headers/test_helper.h"

class ContinuousTest : public IOTestFixture<Continuous> {};

TEST_F(ContinuousTest, SimpleCase) { RunTest("2\n6 2 5 4", "Yes 14"); }

TEST_F(ContinuousTest, SimpleCase2) { RunTest("-7\n-9 -6 -7 -8", "No"); }
