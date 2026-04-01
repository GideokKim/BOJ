#include "30000/src/30794_club_audition.h"

#include "test_headers/test_helper.h"

class ClubAuditionTest : public IOTestFixture<ClubAudition> {};

TEST_F(ClubAuditionTest, SimpleCase) { RunTest("6 miss", "0"); }

TEST_F(ClubAuditionTest, SimpleCase2) { RunTest("7 perfect", "7000"); }
