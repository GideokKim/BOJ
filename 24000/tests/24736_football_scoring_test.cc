#include "24000/src/24736_football_scoring.h"

#include "test_headers/test_helper.h"

class FootballScoringTest : public IOTestFixture<FootballScoring> {};

TEST_F(FootballScoringTest, SampleCase) {
  RunTest("1 3 0 0 1\n3 1 1 1 1", "17 26");
}
