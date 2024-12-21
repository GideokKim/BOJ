#include "../src/1924-2007.h"

#include <gtest/gtest.h>

#include <sstream>

struct DayOfWeekTestCase {
  int day, month;
  std::string expected;
};

class DayOfWeekTest : public testing::Test {
 protected:
  void verify_day_of_week(const DayOfWeekTestCase& test_case) {
    std::string result = check_day_of_week(test_case.day, test_case.month);
    EXPECT_EQ(result, test_case.expected);
  }
};

TEST_F(DayOfWeekTest, MultipleTestCases) {
  std::vector<DayOfWeekTestCase> test_cases = {
      {1, 1, "MON"}, {14, 3, "WED"}, {2, 9, "SUN"}, {25, 12, "TUE"}};

  for (const auto& test_case : test_cases) {
    verify_day_of_week(test_case);
  }
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}