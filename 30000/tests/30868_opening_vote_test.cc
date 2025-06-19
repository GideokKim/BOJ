#include "30000/src/30868_opening_vote.h"

#include "test_headers/test_helper.h"

class OpeningVoteTest : public IOTestFixture<OpeningVote> {};

TEST_F(OpeningVoteTest, SimpleCase) {
  RunTest("3\n12\n1\n5", "++++ ++++ ||\n|\n++++ \n");
}
