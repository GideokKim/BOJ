#include "../src/1002-turret.h"

#include <gtest/gtest.h>

#include <sstream>

struct TurretTestCase {
  int x1, y1, r1, x2, y2, r2;
  int expected;
};

class TurretTest : public testing::Test {
 protected:
  void verify_turret(const TurretTestCase& test_case) {
    int result = check_turret_enemy(test_case.x1, test_case.y1, test_case.r1,
                                    test_case.x2, test_case.y2, test_case.r2);
    EXPECT_EQ(result, test_case.expected);
  }
};

TEST_F(TurretTest, MultipleTestCases) {
  std::vector<TurretTestCase> test_cases = {
      {0, 0, 2, 2, 0, 3, 2}, {0, 0, 13, 40, 0, 37, 2},
      {0, 0, 3, 0, 7, 4, 1}, {1, 0, 2, 0, 0, 1, 1},
      {1, 1, 1, 1, 1, 5, 0}, {1000, 0, 1, -1000, 0, 1, 0},
      {1, 1, 1, 1, 1, 1, -1}};

  for (const auto& test_case : test_cases) {
    verify_turret(test_case);
  }
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}