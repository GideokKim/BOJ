#include "9000/src/9506_sum_of_divisors.h"

#include <gtest/gtest.h>

TEST(SumOfDivisorsTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "6\n12\n28\n-1\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  SumOfDivisors sum_of_divisors;
  sum_of_divisors.Calculate();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output =
      "6 = 1 + 2 + 3\n12 is NOT perfect.\n28 = 1 + 2 + 4 + 7 + 14\n";

  EXPECT_EQ(oss.str(), expected_output);
}