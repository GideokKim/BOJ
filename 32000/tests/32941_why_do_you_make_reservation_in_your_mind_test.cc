#include "32000/src/32941_why_do_you_make_reservation_in_your_mind.h"

#include "test_headers/test_helper.h"

class WhyDoYouMakeReservationInYourMindTest
    : public IOTestFixture<WhyDoYouMakeReservationInYourMind> {};

TEST_F(WhyDoYouMakeReservationInYourMindTest, SimpleCase) {
  RunTest(
      "12 5\n"
      "7\n"
      "5\n"
      "2 3 5 7 11\n"
      "4\n"
      "5 7 10 12\n"
      "3\n"
      "4 5 7\n"
      "6\n"
      "1 3 5 7 11 12\n"
      "12\n"
      "1 2 3 4 5 6 7 8 9 10 11 12\n"
      "2\n"
      "5 7\n"
      "9\n"
      "1 3 5 6 7 8 9 10 11",
      "YES");
}

TEST_F(WhyDoYouMakeReservationInYourMindTest, SimpleCase2) {
  RunTest(
      "7 3\n"
      "4\n"
      "1\n"
      "4\n"
      "6\n"
      "1 2 4 5 6 7\n"
      "3\n"
      "1 3 4\n"
      "2\n"
      "4 7",
      "NO");
}
