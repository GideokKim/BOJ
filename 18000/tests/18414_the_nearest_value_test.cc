#include "18000/src/18414_the_nearest_value.h"

#include "test_headers/test_helper.h"

class TheNearestValueTest : public IOTestFixture<TheNearestValue> {};

TEST_F(TheNearestValueTest, SimpleCase) { RunTest("8 3 6", "6"); }

TEST_F(TheNearestValueTest, SimpleCase2) { RunTest("7 3 10", "7"); }

TEST_F(TheNearestValueTest, SimpleCase3) { RunTest("8 10 10", "10"); }