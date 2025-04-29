#include "29000/src/29736_bsil_friends.h"

#include "test_headers/test_helper.h"

class BsilFriendsTest : public IOTestFixture<BsilFriends> {};

TEST_F(BsilFriendsTest, SimpleCase) { RunTest("10 100\n50 10", "21"); }

TEST_F(BsilFriendsTest, SimpleCase2) { RunTest("25 75\n10 5", "IMPOSSIBLE"); }
