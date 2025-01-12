#include "31000/src/31606_fruit.h"

#include <gtest/gtest.h>

TEST(FruitTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2\n4";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Minutes minutes;
  minutes.SetInputs();
  int result = minutes.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 9);
}

TEST(MinutesTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "15\n30";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Minutes minutes;
  minutes.SetInputs();
  int result = minutes.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 48);
}

TEST(MinutesTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "0\n0";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Minutes minutes;
  minutes.SetInputs();
  int result = minutes.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 3);
}
