#include "14000/src/14606_pizza_small.h"

#include "test_headers/test_helper.h"

class PizzaSmallTest : public IOTestFixture<PizzaSmall> {};

TEST_F(PizzaSmallTest, SampleCase) { RunTest("1", "0"); }

TEST_F(PizzaSmallTest, SampleCase2) { RunTest("3", "3"); }

TEST_F(PizzaSmallTest, SampleCase3) { RunTest("5", "10"); }

TEST_F(PizzaSmallTest, SampleCase4) { RunTest("8", "28"); }
