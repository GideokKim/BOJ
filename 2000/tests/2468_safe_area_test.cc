#include "2000/src/2468_safe_area.h"

#include "test_headers/test_helper.h"

class SafeAreaTest : public IOTestFixture<SafeArea> {};

TEST_F(SafeAreaTest, SampleCase) {
  RunTest("5\n6 8 2 6 2\n3 2 3 4 6\n6 7 3 3 2\n7 2 5 3 6\n8 9 5 2 7", "5");
}

TEST_F(SafeAreaTest, SampleCase2) {
  RunTest(
      "7\n9 9 9 9 9 9 9\n9 2 1 2 1 2 9\n9 1 8 7 8 1 9\n9 2 7 9 7 2 9\n9 "
      "1 8 7 8 1 9\n9 2 1 2 1 2 9\n9 9 9 9 9 9 9",
      "6");
}
