#include "1000/src/1259_palindrome_numbers.h"

#include <gtest/gtest.h>

TEST(PalindromeNumbersTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "121\n1231\n12421\n0";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  PalindromeNumbers palindrome_numbers;
  palindrome_numbers.Calculate();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "yes\nno\nyes\n";

  EXPECT_EQ(oss.str(), expected_output);
}
