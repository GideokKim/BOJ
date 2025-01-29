#include "17000/src/17224_why_did_apc_become_subtask_competition.h"

#include "test_headers/test_helper.h"

class WhyDidAPCBecomeSubtaskCompetitionTest
    : public IOTestFixture<WhyDidAPCBecomeSubtaskCompetition> {};

TEST_F(WhyDidAPCBecomeSubtaskCompetitionTest, SimpleCase) {
  RunTest("4 8 4\n1 8\n4 5\n6 20\n9 12", "380");
}

TEST_F(WhyDidAPCBecomeSubtaskCompetitionTest, SimpleCase2) {
  RunTest("8 7 5\n1 3\n2 5\n3 5\n4 8\n5 8\n6 9\n7 10", "660");
}

TEST_F(WhyDidAPCBecomeSubtaskCompetitionTest, SimpleCase3) {
  RunTest("8 9 5\n1 8\n3 10\n4 5\n5 20\n7 12\n8 15\n9 50\n14 14", "580");
}