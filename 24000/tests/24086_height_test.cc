#include "24000/src/24086_height.h"

#include <gtest/gtest.h>

TEST(HeightTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "150\n155";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Height height;
  height.SetInputs();
  height.CalculateHeight();
  height.PrintHeight();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "5";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(HeightTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "100\n101";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Height height;
  height.SetInputs();
  height.CalculateHeight();
  height.PrintHeight();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "1";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(HeightTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "100\n200";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Height height;
  height.SetInputs();
  height.CalculateHeight();
  height.PrintHeight();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "100";

  EXPECT_EQ(oss.str(), expected_output);
}
