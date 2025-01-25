#include "26000/src/26517_continuous.h"

#include <gtest/gtest.h>

TEST(ContinuousTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "2\n6 2 5 4";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Continuous continuous;
  continuous.SetInputs();
  continuous.Calculate();
  continuous.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "Yes 14";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(ContinuousTest, SimpleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "-7\n-9 -6 -7 -8";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Continuous continuous;
  continuous.SetInputs();
  continuous.Calculate();
  continuous.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "No";

  EXPECT_EQ(oss.str(), expected_output);
}
