#include "31000/src/31922_this_competition_is_mine_now.h"

#include "test_headers/test_helper.h"

class ThisCompetitionIsMineNowTest
    : public IOTestFixture<ThisCompetitionIsMineNow> {};

TEST_F(ThisCompetitionIsMineNowTest, SimpleCase) {
  RunTest("500 300 500", "1000");
}

TEST_F(ThisCompetitionIsMineNowTest, EdgeCase) {
  RunTest("500 2000 1000", "2000");
}
