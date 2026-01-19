#include "1000/src/1236_guard_castle.h"

#include "test_headers/test_helper.h"

class GuardCastleTest : public IOTestFixture<GuardCastle> {};

TEST_F(GuardCastleTest, SampleCase) {
  RunTest("4 4\n....\n....\n....\n....", "4");
}

TEST_F(GuardCastleTest, SampleCase2) {
  RunTest("3 5\nXX...\n.XX..\n...XX", "0");
}

TEST_F(GuardCastleTest, SampleCase3) {
  RunTest("5 8\n....XXXX\n........\nXX.X.XX.\n........\n........", "3");
}