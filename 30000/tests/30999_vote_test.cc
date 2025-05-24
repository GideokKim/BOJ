#include "30000/src/30999_vote.h"

#include "test_headers/test_helper.h"

class VoteTest : public IOTestFixture<Vote> {};

TEST_F(VoteTest, SimpleCase) { RunTest("2 3\nOOX\nOXX", "1"); }

TEST_F(VoteTest, SimpleCase2) { RunTest("3 3\nOOX\nOOX\nOOX", "3"); }

TEST_F(VoteTest, SimpleCase3) { RunTest("3 3\nOXO\nXXO\nOOO", "2"); }
