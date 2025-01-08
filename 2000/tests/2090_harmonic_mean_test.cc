#include "2000/src/2090_harmonic_mean.h"

#include <gtest/gtest.h>

TEST(HarmonicMeanTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "3\n4 1 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  HarmonicMean harmonic_mean;
  harmonic_mean.SetInput();
  harmonic_mean.Calculate();
  harmonic_mean.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "4/7";

  EXPECT_EQ(oss.str(), expected_output);
}
