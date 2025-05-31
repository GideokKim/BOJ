#include "2000/src/2083_rugby_club.h"

#include "test_headers/test_helper.h"

class RugbyClubTest : public IOTestFixture<RugbyClub> {};

TEST_F(RugbyClubTest, SampleCase) {
  RunTest("Joe 16 34\nBill 18 65\nBilly 17 65\nSam 17 85\n0 0",
          "Joe Junior\nBill Senior\nBilly Junior\nSam Senior\n");
}
