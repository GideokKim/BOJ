#include "3000/src/3230_who_gets_medal.h"

#include "test_headers/test_helper.h"

class WhoGetsMedalTest : public IOTestFixture<WhoGetsMedal> {};

TEST_F(WhoGetsMedalTest, SampleCase) {
  RunTest("3 3\n1\n2\n3\n1\n1\n1", "1\n2\n3\n");
}

TEST_F(WhoGetsMedalTest, SampleCase2) {
  RunTest("4 3\n1\n1\n2\n2\n1\n2\n1", "2\n3\n4\n");
}

TEST_F(WhoGetsMedalTest, SampleCase3) {
  RunTest("5 4\n1\n2\n1\n4\n3\n1\n1\n3\n2", "5\n3\n2\n");
}
