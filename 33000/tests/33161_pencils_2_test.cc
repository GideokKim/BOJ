#include "33000/src/33161_pencils_2.h"

#include <gtest/gtest.h>

TEST(Pencils2Test, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "9";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Pencils2 pencils2;
  pencils2.SetInputs();
  int result = pencils2.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 1);
}

TEST(Pencils2Test, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "10";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Pencils2 pencils2;
  pencils2.SetInputs();
  int result = pencils2.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 2);
}

TEST(Pencils2Test, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "3";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Pencils2 pencils2;
  pencils2.SetInputs();
  int result = pencils2.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 0);
}

TEST(Pencils2Test, SampleCase4) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "100";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Pencils2 pencils2;
  pencils2.SetInputs();
  int result = pencils2.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 20);
}
