#include "27000/src/27331_two_digit_number.h"

#include <gtest/gtest.h>

TEST(TwoDigitNumberTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2\n2\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  TwoDigitNumber two_digit_number;
  two_digit_number.SetInputs();
  int result = two_digit_number.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 22);
}

TEST(TwoDigitNumberTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "1\n0\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  TwoDigitNumber two_digit_number;
  two_digit_number.SetInputs();
  int result = two_digit_number.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 10);
}

TEST(TwoDigitNumberTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "1\n9\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  TwoDigitNumber two_digit_number;
  two_digit_number.SetInputs();
  int result = two_digit_number.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 19);
}
