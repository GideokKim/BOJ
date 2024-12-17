#include "../src/10757-big_number_a_plus_b.h"

#include <gtest/gtest.h>

#include <sstream>

TEST(BigNumberAplusB, CorrectSum) {
  // 입력 준비
  std::stringstream input("9223372036854775807 9223372036854775808\n");

  // 테스트 실행
  std::string result = check_big_number_a_plus_b(input);

  // 결과 검증
  EXPECT_EQ(result, "18446744073709551615");
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}