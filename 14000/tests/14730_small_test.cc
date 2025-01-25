#include "14000/src/14730_small.h"

#include <gtest/gtest.h>

TEST(SmallTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "3\n3 3\n2 2\n1 1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Small small;
  small.SetInputs();
  small.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "14";

  EXPECT_EQ(oss.str(), expected_output);
}
