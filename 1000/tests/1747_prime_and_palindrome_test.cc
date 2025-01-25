#include "1000/src/1747_prime_and_palindrome.h"

#include <gtest/gtest.h>

TEST(PrimeAndPalindromeTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "31";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());
  oss.str("");  // Clear the output stream buffer

  PrimeAndPalindrome prime_and_palindrome;
  prime_and_palindrome.SetInput();
  prime_and_palindrome.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "101";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(PrimeAndPalindromeTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());
  oss.str("");  // Clear the output stream buffer

  PrimeAndPalindrome prime_and_palindrome;
  prime_and_palindrome.SetInput();
  prime_and_palindrome.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "2";

  EXPECT_EQ(oss.str(), expected_output);
}
