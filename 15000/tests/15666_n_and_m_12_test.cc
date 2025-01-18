#include "15000/src/15666_n_and_m_12.h"

#include <gtest/gtest.h>

TEST(NAndM12Test, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "3 1\n4 4 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  NAndM12 n_and_m_12;
  n_and_m_12.SetInputs();
  n_and_m_12.GenerateCombinations(0, 0);
  n_and_m_12.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "2 \n4 \n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(NAndM12Test, SimpleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "4 2\n9 7 9 1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  NAndM12 n_and_m_12;
  n_and_m_12.SetInputs();
  n_and_m_12.GenerateCombinations(0, 0);
  n_and_m_12.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "1 7 \n1 9 \n7 9 \n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(NAndM12Test, SimpleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "4 4\n1 1 2 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  NAndM12 n_and_m_12;
  n_and_m_12.SetInputs();
  n_and_m_12.GenerateCombinations(0, 0);
  n_and_m_12.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output =
      "1 1 1 1 \n1 1 1 2 \n1 1 2 2 \n1 2 2 2 \n2 2 2 2 \n";

  EXPECT_EQ(oss.str(), expected_output);
}
