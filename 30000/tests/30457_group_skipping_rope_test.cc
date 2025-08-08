#include "30000/src/30457_group_skipping_rope.h"

#include "test_headers/test_helper.h"

class GroupSkippingRopeTest : public IOTestFixture<GroupSkippingRope> {};

TEST_F(GroupSkippingRopeTest, SampleCase) { RunTest("5\n1 2 3 4 5", "5"); }

TEST_F(GroupSkippingRopeTest, SampleCase2) {
  RunTest("10\n1 3 2 4 2 4 4 3 2 7", "8");
}

TEST_F(GroupSkippingRopeTest, SampleCase3) {
  RunTest("5\n10 10 10 10 10", "2");
}
