#include "11000/src/11051_binomial_coefficient_2.h"

#include <gtest/gtest.h>

TEST(BinomialCoefficient2Test, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5 2";
  int expected_output = 10;

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  BinomialCoefficient2 binomial_coefficient_2;
  binomial_coefficient_2.SetInputs();
  binomial_coefficient_2.Calculate();
  int result = binomial_coefficient_2.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, expected_output);
}

TEST(BinomialCoefficient2Test, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "1000 1000";
  int expected_output = 1;

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  BinomialCoefficient2 binomial_coefficient_2;
  binomial_coefficient_2.SetInputs();
  binomial_coefficient_2.Calculate();
  int result = binomial_coefficient_2.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, expected_output);
}