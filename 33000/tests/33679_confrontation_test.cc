#include "33000/src/33679_confrontation.h"

#include "test_headers/test_helper.h"

class ConfrontationTest : public IOTestFixture<Confrontation> {};

TEST_F(ConfrontationTest, SampleCase) {
  RunTest(
      "6\n"
      "5 2 9 8 4 6\n"
      "1 6 2 5 3 4",
      "HG Win!");
}

TEST_F(ConfrontationTest, SampleCase2) {
  RunTest(
      "5\n"
      "2 3 4 5 1\n"
      "1 2 3 4 1",
      "YJ Win!");
}

TEST_F(ConfrontationTest, SampleCase3) {
  RunTest(
      "5\n"
      "1 2 3 4 5\n"
      "3 4 5 1 2",
      "Both Win!");
}

TEST_F(ConfrontationTest, SampleCase4) {
  RunTest(
      "2\n"
      "1 2\n"
      "2 1",
      "Both Win!");
}

TEST_F(ConfrontationTest, SampleCase5) {
  RunTest(
      "5\n"
      "1 2 3 4 5\n"
      "1 2 3 5 4",
      "YJ Win!");
}
