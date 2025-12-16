#include "19000/src/19572_drought_small.h"

#include "test_headers/test_helper.h"

class DroughtSmallTest : public IOTestFixture<DroughtSmall> {};

TEST_F(DroughtSmallTest, SimpleCase) { RunTest("4 4 4", "1\n2.0 2.0 2.0 "); }

TEST_F(DroughtSmallTest, SimpleCase2) { RunTest("1 2 3", "-1\n"); }

TEST_F(DroughtSmallTest, SimpleCase3) { RunTest("1 2 5", "-1\n"); }

TEST_F(DroughtSmallTest, SimpleCase4) { RunTest("5 8 6", "1\n3.5 1.5 4.5 "); }