#include "4000/src/4597_parity.h"

#include <gtest/gtest.h>

TEST(ParityTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "101e\n010010o\n1e\n000e\n110100101o\n#";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Parity parity;
  parity.Calculate();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "1010\n0100101\n11\n0000\n1101001010\n";

  EXPECT_EQ(oss.str(), expected_output);
}
