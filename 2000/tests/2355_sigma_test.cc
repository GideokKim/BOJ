#include "2000/src/2355_sigma.h"

#include <gtest/gtest.h>

TEST(SigmaTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "1 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Sigma sigma;
  sigma.SetInput();
  sigma.PrintSigma();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "3";

  EXPECT_EQ(oss.str(), expected_output);
}
