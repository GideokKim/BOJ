#include "1000/src/1032_cmd.h"

#include "test_headers/test_helper.h"

class CmdTest : public IOTestFixture<Cmd> {};

TEST_F(CmdTest, SampleCase) {
  RunTest(
      "3\n"
      "config.sys\n"
      "config.inf\n"
      "configures",
      "config????");
}

TEST_F(CmdTest, SampleCase2) {
  RunTest(
      "2\n"
      "contest.txt\n"
      "context.txt",
      "conte?t.txt");
}

TEST_F(CmdTest, SampleCase3) {
  RunTest(
      "4\n"
      "a\n"
      "a\n"
      "b\n"
      "b",
      "?");
}

TEST_F(CmdTest, SampleCase4) {
  RunTest(
      "1\n"
      "onlyonefile",
      "onlyonefile");
}
