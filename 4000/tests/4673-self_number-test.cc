#include "../src/4673-self_number.h"

#include <gtest/gtest.h>

#include <sstream>
#include <vector>

struct SelfNumberTestCase {
  int N;
  std::vector<int> expected;
};

class SelfNumberTest : public testing::Test {
 protected:
  void verify_self_number(const SelfNumberTestCase& test_case) {
    std::vector<int> result = check_self_number(test_case.N);
    EXPECT_EQ(result, test_case.expected);
  }
};

TEST_F(SelfNumberTest, MultipleTestCases) {
  std::vector<SelfNumberTestCase> test_cases = {
      {100, {1, 3, 5, 7, 9, 20, 31, 42, 53, 64, 75, 86, 97}}};

  for (const auto& test_case : test_cases) {
    verify_self_number(test_case);
  }
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}