#include "30000/src/30979_caring_for_kindergarten.h"

#include <gtest/gtest.h>

TEST(CaringForKindergartenTest, HappyCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5\n2\n2 3";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  CaringForKindergarten caring_for_kindergarten;
  caring_for_kindergarten.Calculate();
  std::string result = caring_for_kindergarten.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, "Padaeng_i Happy");
}

TEST(CaringForKindergartenTest, CryCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "6\n2\n2 3";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  CaringForKindergarten caring_for_kindergarten;
  caring_for_kindergarten.Calculate();
  std::string result = caring_for_kindergarten.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, "Padaeng_i Cry");
}