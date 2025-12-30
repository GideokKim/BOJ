#include "7000/src/7567_bowl.h"

#include "test_headers/test_helper.h"

class BowlTest : public IOTestFixture<Bowl> {};

TEST_F(BowlTest, SimpleCase) { RunTest("((((", "25"); }

TEST_F(BowlTest, SimpleCase2) { RunTest("()()()))(", "80"); }
