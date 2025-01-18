#include "2000/src/2960_sieve_of_eratosthenes.h"

#include <gtest/gtest.h>

TEST(SieveOfEratosthenesTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "7 3";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  SieveOfEratosthenes sieve_of_eratosthenes;
  sieve_of_eratosthenes.SetInputs();
  sieve_of_eratosthenes.Calculate();
  sieve_of_eratosthenes.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "6";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(SieveOfEratosthenesTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "15 12";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  SieveOfEratosthenes sieve_of_eratosthenes;
  sieve_of_eratosthenes.SetInputs();
  sieve_of_eratosthenes.Calculate();
  sieve_of_eratosthenes.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "7";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(SieveOfEratosthenesTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "10 7";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  SieveOfEratosthenes sieve_of_eratosthenes;
  sieve_of_eratosthenes.SetInputs();
  sieve_of_eratosthenes.Calculate();
  sieve_of_eratosthenes.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "9";

  EXPECT_EQ(oss.str(), expected_output);
}