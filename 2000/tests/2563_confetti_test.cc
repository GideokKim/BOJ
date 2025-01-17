#include "2000/src/2563_confetti.h"

#include <gtest/gtest.h>

TEST(ConfettiTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "3\n3 7\n15 7\n5 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Confetti confetti;
  confetti.SetInputs();
  confetti.CalculateArea();
  confetti.PrintArea();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "260";

  EXPECT_EQ(oss.str(), expected_output);
}
