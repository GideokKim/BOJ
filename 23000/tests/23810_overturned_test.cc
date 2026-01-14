#include "23000/src/23810_overturned.h"

#include "test_headers/test_helper.h"

class OverturnedTest : public IOTestFixture<Overturned> {};

TEST_F(OverturnedTest, SimpleCase) { RunTest("1", "@@@@@\n@\n@@@@@\n@\n@\n"); }

TEST_F(OverturnedTest, SimpleCase2) {
  RunTest("3",
          "@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@\n@@@\n@@@\n@@@\n@@"
          "@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@\n@@@\n@@@\n@@@\n@@@"
          "\n@@@\n@@@\n");
}
