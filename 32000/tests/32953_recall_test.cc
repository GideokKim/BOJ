#include "32000/src/32953_recall.h"

#include "test_headers/test_helper.h"

class RecallTest : public IOTestFixture<Recall> {};

TEST_F(RecallTest, SimpleCase) {
  RunTest(
      "3 2\n3\n12500001 12500002 12500003\n5\n12500001 12500003 12500005 "
      "12500007 12500009\n4\n12500001 12500004 12500007 12500010",
      "3");
}

TEST_F(RecallTest, SimpleCase2) {
  RunTest(
      "3 2\n3\n12599999 12599998 12599997\n1\n12599996\n2\n12599995 12599994",
      "0");
}