#include "27000/src/27327_hour.h"

#include <gtest/gtest.h>

TEST(HourTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "3\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Hour hour;
  hour.SetInputs();
  int result = hour.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 72);
}

TEST(HourTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "100\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Hour hour;
  hour.SetInputs();
  int result = hour.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 2400);
}
