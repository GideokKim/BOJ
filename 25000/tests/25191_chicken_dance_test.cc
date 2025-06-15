#include "25000/src/25191_chicken_dance.h"

#include "test_headers/test_helper.h"

class ChickenDanceTest : public IOTestFixture<ChickenDance> {};

TEST_F(ChickenDanceTest, SampleCase) { RunTest("5\n4 2", "4"); }

TEST_F(ChickenDanceTest, AllFCase) { RunTest("3\n4 2", "3"); }