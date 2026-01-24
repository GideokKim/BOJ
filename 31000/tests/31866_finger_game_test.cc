#include "31000/src/31866_finger_game.h"

#include "test_headers/test_helper.h"

class FingerGameTest : public IOTestFixture<FingerGame> {};

TEST_F(FingerGameTest, SimpleCase) { RunTest("0 5", "<"); }

TEST_F(FingerGameTest, SimpleCase2) { RunTest("0 4", ">"); }

TEST_F(FingerGameTest, SimpleCase3) { RunTest("3 3", "="); }
