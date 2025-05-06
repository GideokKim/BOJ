#include "9000/src/9656_stone_game_2.h"

#include "test_headers/test_helper.h"

class StoneGame2Test : public IOTestFixture<StoneGame2> {};

TEST_F(StoneGame2Test, SampleCase) { RunTest("1", "CY"); }

TEST_F(StoneGame2Test, SampleCase2) { RunTest("2", "SK"); }

TEST_F(StoneGame2Test, SampleCase3) { RunTest("3", "CY"); }

TEST_F(StoneGame2Test, SampleCase4) { RunTest("4", "SK"); }

TEST_F(StoneGame2Test, SampleCase5) { RunTest("5", "CY"); }

TEST_F(StoneGame2Test, SampleCase6) { RunTest("6", "SK"); }
