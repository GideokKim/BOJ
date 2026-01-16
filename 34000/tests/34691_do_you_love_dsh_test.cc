#include "34000/src/34691_do_you_love_dsh.h"

#include "test_headers/test_helper.h"

class DoYouLoveDshTest : public IOTestFixture<DoYouLoveDsh> {};

TEST_F(DoYouLoveDshTest, SampleCase) {
  RunTest("animal\nflower\ntree\nend",
          "Panthera tigris\nForsythia koreana\nPinus densiflora\n");
}

TEST_F(DoYouLoveDshTest, SampleCase2) {
  RunTest("flower\nflower\nflower\nflower\nend",
          "Forsythia koreana\nForsythia koreana\nForsythia koreana\nForsythia "
          "koreana\n");
}
