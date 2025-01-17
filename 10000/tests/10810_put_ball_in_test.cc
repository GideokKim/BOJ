#include "10000/src/10810_put_ball_in.h"

#include <gtest/gtest.h>

TEST(PutBallInTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "5 4\n1 2 3\n3 4 4\n1 4 1\n2 2 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  PutBallIn put_ball_in;
  put_ball_in.SetInputs();
  put_ball_in.CalculateBallNumbers();
  put_ball_in.PrintBallNumbers();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "1 2 1 1 0 ";

  EXPECT_EQ(oss.str(), expected_output);
}
