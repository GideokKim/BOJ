#include "6000/src/6889_smile_with_similes.h"

#include <gtest/gtest.h>

TEST(LottoTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "3\n2\nEasy\nSmart\nSoft\npie\nrock";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  SmileWithSimiles smile_with_similes;
  smile_with_similes.SetInputs();
  smile_with_similes.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "Easy as pie\nEasy as rock\nSmart as pie\nSmart as rock\nSoft as pie\nSoft as rock\n";
  EXPECT_EQ(oss.str(), expected_output);
}
