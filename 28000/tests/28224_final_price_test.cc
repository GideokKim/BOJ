#include "28000/src/28224_final_price.h"

#include <gtest/gtest.h>

TEST(FinalPriceTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "2\n11\n68";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  FinalPrice final_price;
  final_price.SetInputs();
  final_price.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "79";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(FinalPriceTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "4\n110\n-5\n0\n27";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  FinalPrice final_price;
  final_price.SetInputs();
  final_price.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "132";

  EXPECT_EQ(oss.str(), expected_output);
}
