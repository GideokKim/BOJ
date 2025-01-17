#include "10000/src/10807_counting.h"

#include <gtest/gtest.h>

TEST(CountingTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "11\n1 4 1 2 4 2 4 2 3 4 4\n2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Counting counting;
  counting.SetInputs();
  counting.CalculateCount();
  counting.PrintCount();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "3";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(CountingTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "11\n1 4 1 2 4 2 4 2 3 4 4\n5";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Counting counting;
  counting.SetInputs();
  counting.CalculateCount();
  counting.PrintCount();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "0";

  EXPECT_EQ(oss.str(), expected_output);
}