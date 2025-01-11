#include "1000/src/1932_integer_triangle.h"

#include <gtest/gtest.h>

TEST(SumOfDivisorsTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "5\n7\n3 8\n8 1 0\n2 7 4 4\n4 5 2 6 5";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  IntegerTriangle integer_triangle;
  integer_triangle.SetInputs();
  integer_triangle.Calculate();
  integer_triangle.PrintMaxResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "30";

  EXPECT_EQ(oss.str(), expected_output);
}