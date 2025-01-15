#include "24000/src/24078_remainder.h"

#include <gtest/gtest.h>

TEST(RemainderTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "50";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Remainder remainder;
  remainder.SetInputs();
  remainder.PrintRemainder();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "8";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(RemainderTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "42";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Remainder remainder;
  remainder.SetInputs();
  remainder.PrintRemainder();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "0";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(CubeTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "5";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Remainder remainder;
  remainder.SetInputs();
  remainder.PrintRemainder();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "5";

  EXPECT_EQ(oss.str(), expected_output);
}
