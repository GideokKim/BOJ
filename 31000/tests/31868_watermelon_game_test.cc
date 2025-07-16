#include "31000/src/31868_watermelon_game.h"

#include "test_headers/test_helper.h"

class WatermelonGameTest : public IOTestFixture<WatermelonGame> {};

TEST_F(WatermelonGameTest, SimpleCase) { RunTest("3 10", "2"); }
