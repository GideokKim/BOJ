#include "17000/src/17608_bar.h"

#include <gtest/gtest.h>

TEST(BarTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "6\n6\n9\n7\n6\n4\n6";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Bar bar;
  bar.SetInputs();
  bar.Calculate();
  bar.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "3";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(BarTest, SimpleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "5\n5\n4\n3\n2\n1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Bar bar;
  bar.SetInputs();
  bar.Calculate();
  bar.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "5";

  EXPECT_EQ(oss.str(), expected_output);
}
