#include "1000/src/1316_group_word_checker.h"

#include "test_headers/test_helper.h"

class GroupWordCheckerTest : public IOTestFixture<GroupWordChecker> {};

TEST_F(GroupWordCheckerTest, SampleCase) {
  RunTest("3\nhappy\nnew\nyear", "3");
}

TEST_F(GroupWordCheckerTest, SampleCase2) {
  RunTest("4\naba\nabab\nabac\nabc", "1");
}

TEST_F(GroupWordCheckerTest, SampleCase3) {
  RunTest("5\nab\naa\naca\nba\nbb", "4");
}

TEST_F(GroupWordCheckerTest, SampleCase4) { RunTest("2\nyzyzy\nzyzyz", "0"); }

TEST_F(GroupWordCheckerTest, SampleCase5) { RunTest("1\nz", "1"); }

TEST_F(GroupWordCheckerTest, SampleCase6) {
  RunTest("9\naaa\naaazbz\nbabb\naazz\nazbz\naabbaa\nabacc\naba\nzzaz", "2");
}
