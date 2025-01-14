#include "33000/src/33165_footrace.h"

#include <gtest/gtest.h>

TEST(FootraceTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5\n3";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Footrace footrace;
  footrace.SetInputs();
  int result = footrace.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 15);
}

TEST(FootraceTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2\n4";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Footrace footrace;
  footrace.SetInputs();
  int result = footrace.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 8);
}
