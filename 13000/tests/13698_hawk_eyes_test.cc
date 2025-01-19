#include "13000/src/13698_hawk_eyes.h"

#include <gtest/gtest.h>

TEST(HawkEyesTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "AB";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  HawkEyes hawk_eyes;
  hawk_eyes.SetInputs();
  hawk_eyes.Calculate();
  hawk_eyes.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "2\n4";

  EXPECT_EQ(oss.str(), expected_output);
}
