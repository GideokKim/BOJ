#include "9000/src/9063_earth.h"

#include "test_headers/test_helper.h"

class EarthTest : public IOTestFixture<Earth> {};

TEST_F(EarthTest, SampleCase) {
  RunTest("3\n20 24\n40 21\n10 12", "360");
}

TEST_F(EarthTest, SampleCase2) {
  RunTest("1\n15 13", "0");
}

TEST_F(EarthTest, SampleCase3) {
  RunTest("4\n2 1\n3 2\n5 2\n3 4", "9");
}
