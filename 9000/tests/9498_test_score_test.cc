#include <gtest/gtest.h>

#include "9000/src/9498_test_scores.h"

TEST(SumOfDivisorsTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "100\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  TestScores test_scores;
  test_scores.SetInputs();
  test_scores.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "A";

  EXPECT_EQ(oss.str(), expected_output);
}