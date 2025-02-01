#include "1000/src/1764_no_hear_and_no_see.h"

#include "test_headers/test_helper.h"

class NoHearAndNoSeeTest : public IOTestFixture<NoHearAndNoSee> {};

TEST_F(NoHearAndNoSeeTest, SampleCase) {
  RunTest(
      "3 4\n"
      "ohhenrie\n"
      "charlie\n"
      "baesangwook\n"
      "obama\n"
      "baesangwook\n"
      "ohhenrie\n"
      "clinton",
      "2\nbaesangwook\nohhenrie\n");
}
