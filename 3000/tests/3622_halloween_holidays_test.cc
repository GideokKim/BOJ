#include "3000/src/3622_halloween_holidays.h"

#include <gtest/gtest.h>

TEST(HalloweenHolidaysTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "2 1 5 3 6";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  HalloweenHolidays halloween_holidays;
  halloween_holidays.SetInputs();
  halloween_holidays.Calculate();
  halloween_holidays.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "Yes\n";

  EXPECT_EQ(oss.str(), expected_output);
}
