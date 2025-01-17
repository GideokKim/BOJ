#include "10000/src/10813_change_ball.h"

#include <gtest/gtest.h>

TEST(ChangeBallTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "5 4\n1 2\n3 4\n1 4\n2 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  ChangeBall change_ball;
  change_ball.SetInputs();
  change_ball.CalculateBallNumbers();
  change_ball.PrintBallNumbers();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "3 1 4 2 5 ";

  EXPECT_EQ(oss.str(), expected_output);
}
