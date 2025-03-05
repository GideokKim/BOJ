#include "24000/src/24228_chopsticks.h"

#include "test_headers/test_helper.h"

class ChopsticksTest : public IOTestFixture<Chopsticks> {};

TEST_F(ChopsticksTest, SampleCase) { RunTest("2 1", "3"); }

TEST_F(ChopsticksTest, SampleCase2) { RunTest("3 4", "10"); }
