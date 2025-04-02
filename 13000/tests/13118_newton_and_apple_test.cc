#include "13000/src/13118_newton_and_apple.h"

#include "test_headers/test_helper.h"

class NewtonAndAppleTest : public IOTestFixture<NewtonAndApple> {};

TEST_F(NewtonAndAppleTest, SampleCase) { RunTest("-5 -2 1 5\n1 4 2", "3"); }
