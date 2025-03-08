#include "1000/src/1149_rgb_street.h"

#include "test_headers/test_helper.h"

class RgbStreetTest : public IOTestFixture<RgbStreet> {};

TEST_F(RgbStreetTest, SampleCase) {
  RunTest("3\n26 40 83\n49 60 57\n13 89 99", "96");
}

TEST_F(RgbStreetTest, SampleCase2) {
  RunTest("3\n1 100 100\n100 1 100\n100 100 1", "3");
}

TEST_F(RgbStreetTest, SampleCase3) {
  RunTest("3\n1 100 100\n100 100 100\n1 100 100", "102");
}

TEST_F(RgbStreetTest, SampleCase4) {
  RunTest("6\n30 19 5\n64 77 64\n15 19 97\n4 71 57\n90 86 84\n93 32 91", "208");
}

TEST_F(RgbStreetTest, SampleCase5) {
  RunTest(
      "8\n71 39 44\n32 83 55\n51 37 63\n89 29 100\n83 58 11\n65 13 15\n47 25 "
      "29\n60 66 19",
      "253");
}
