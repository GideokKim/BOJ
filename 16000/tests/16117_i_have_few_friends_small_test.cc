#include "16000/src/16117_i_have_few_friends_small.h"

#include "test_headers/test_helper.h"

class IHaveFewFriendsSmallTest : public IOTestFixture<IHaveFewFriendsSmall> {};

TEST_F(IHaveFewFriendsSmallTest, SampleCase) {
  RunTest("1q2w3e4r5t6y\nqwerty", "1");
}

TEST_F(IHaveFewFriendsSmallTest, SampleCase2) {
  RunTest("1ovey0uS2\nveS", "0");
}
