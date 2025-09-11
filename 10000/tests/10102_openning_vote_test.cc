#include "10000/src/10102_openning_vote.h"

#include "test_headers/test_helper.h"

class OpeningVoteTest : public IOTestFixture<OpeningVote> {};

TEST_F(OpeningVoteTest, SimpleCase) { RunTest("6\nABBABB", "B"); }
