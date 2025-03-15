#include "2000/src/2566_maximum_value.h"

#include "test_headers/test_helper.h"

class MaximumValueTest : public IOTestFixture<MaximumValue> {};

TEST_F(MaximumValueTest, SampleCase) {
  RunTest(
      "3 23 85 34 17 74 25 52 65\n10 7 39 42 88 52 14 72 63\n87 42 18 78 53 "
      "45 18 84 53\n34 28 64 85 12 16 75 36 55\n21 77 45 35 28 75 90 76 1\n25 "
      "87 65 15 28 11 37 28 74\n65 27 75 41 7 89 78 64 39\n47 47 70 45 23 65 "
      "3 41 44\n87 13 82 38 31 12 29 29 80",
      "90\n5 7\n");
}
