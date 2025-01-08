#include "6000/src/6840_who_is_in_the_middle.h"

#include <gtest/gtest.h>

TEST(LottoTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "10\n5\n8";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  WhoIsInTheMiddle who_is_in_the_middle;
  who_is_in_the_middle.SetInputs();
  who_is_in_the_middle.PrintMiddle();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "8\n";
  EXPECT_EQ(oss.str(), expected_output);
}
