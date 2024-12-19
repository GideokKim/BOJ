#include "../src/1541-lost_parenthesis.h"

#include <gtest/gtest.h>

#include <sstream>

struct LostParenthesisTestCase {
  std::string expression;
  int expected;
};

class LostParenthesisTest : public testing::Test {
 protected:
  void verify_lost_parenthesis(const LostParenthesisTestCase& test_case) {
    int result = check_lost_parenthesis(test_case.expression);
    EXPECT_EQ(result, test_case.expected);
  }
};

TEST_F(LostParenthesisTest, MultipleTestCases) {
  std::vector<LostParenthesisTestCase> test_cases = {
      {"55-50+40", -35},
      {"10+20+30+40", 100},
      {"1+2+3+4-5-6-7-8-9-10", -35},
      {"00009-00009", 0},
      {"1-2+3-4+5-6+7-8+9-10", -53},
      {"1-2-3-4-5-6-7-8-9-10", -53},
      {"1+10", 11}};

  for (const auto& test_case : test_cases) {
    verify_lost_parenthesis(test_case);
  }
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}