#include "../src/25304-receipt.h"

#include <gtest/gtest.h>

#include <sstream>

TEST(Receipt, CorrectTotal) {
  // 입력 준비
  std::stringstream input("20000 5\n30000 2\n10000 6\n5000 8\n");

  // 테스트 실행
  std::string result = check_receipt(260000, 4, input);

  // 결과 검증
  EXPECT_EQ(result, "Yes");
}

TEST(Receipt, IncorrectTotal) {
  // 입력 준비
  std::stringstream input("20000 5\n30000 2\n10000 6\n5000 8\n");

  // 테스트 실행
  std::string result = check_receipt(250000, 4, input);

  // 결과 검증
  EXPECT_EQ(result, "No");
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}