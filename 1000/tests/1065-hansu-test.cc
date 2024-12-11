#include "../src/1065-hansu.h"

#include <gtest/gtest.h>

#include <sstream>

struct HansuTestCase {
  int N;
  int expected;
};

class HansuTest : public testing::Test {
 protected:
  void verify_hansu(const HansuTestCase& test_case) {
    int result = check_hansu(test_case.N);
    EXPECT_EQ(result, test_case.expected);
  }
};

TEST_F(HansuTest, MultipleTestCases) {
  std::vector<HansuTestCase> test_cases = {
      {110, 99}, {1, 1}, {210, 105}, {1000, 144}, {500, 119}};

  for (const auto& test_case : test_cases) {
    verify_hansu(test_case);
  }
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}