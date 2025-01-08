#include "3000/src/3276_icons.h"

#include <gtest/gtest.h>

TEST(IconsTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Icons icons;
  icons.SetInputs();
  icons.Calculate();
  icons.PrintOptimizedRowAndColumn();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "1 2\n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(IconsTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "5";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Icons icons;
  icons.SetInputs();
  icons.Calculate();
  icons.PrintOptimizedRowAndColumn();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "2 3\n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(IconsTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "14";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Icons icons;
  icons.SetInputs();
  icons.Calculate();
  icons.PrintOptimizedRowAndColumn();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "3 5\n";

  EXPECT_EQ(oss.str(), expected_output);
}