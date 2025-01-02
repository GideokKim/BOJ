#include "6000/src/6603_lotto.h"

#include <gtest/gtest.h>

TEST(LottoTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input =
      "7 1 2 3 4 5 6 7\n"
      "8 1 2 3 5 8 13 21 34\n"
      "0";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Lotto lotto;
  lotto.SetInputs();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output =
      "1 2 3 4 5 6\n"
      "1 2 3 4 5 7\n"
      "1 2 3 4 6 7\n"
      "1 2 3 5 6 7\n"
      "1 2 4 5 6 7\n"
      "1 3 4 5 6 7\n"
      "2 3 4 5 6 7\n\n"
      "1 2 3 5 8 13\n"
      "1 2 3 5 8 21\n"
      "1 2 3 5 8 34\n"
      "1 2 3 5 13 21\n"
      "1 2 3 5 13 34\n"
      "1 2 3 5 21 34\n"
      "1 2 3 8 13 21\n"
      "1 2 3 8 13 34\n"
      "1 2 3 8 21 34\n"
      "1 2 3 13 21 34\n"
      "1 2 5 8 13 21\n"
      "1 2 5 8 13 34\n"
      "1 2 5 8 21 34\n"
      "1 2 5 13 21 34\n"
      "1 2 8 13 21 34\n"
      "1 3 5 8 13 21\n"
      "1 3 5 8 13 34\n"
      "1 3 5 8 21 34\n"
      "1 3 5 13 21 34\n"
      "1 3 8 13 21 34\n"
      "1 5 8 13 21 34\n"
      "2 3 5 8 13 21\n"
      "2 3 5 8 13 34\n"
      "2 3 5 8 21 34\n"
      "2 3 5 13 21 34\n"
      "2 3 8 13 21 34\n"
      "2 5 8 13 21 34\n"
      "3 5 8 13 21 34\n\n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(LottoTest, MinimumCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "6 1 2 3 4 5 6\n0";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Lotto lotto;
  lotto.SetInputs();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "1 2 3 4 5 6\n\n";
  EXPECT_EQ(oss.str(), expected_output);
}
