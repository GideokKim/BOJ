#include "30000/src/30987_haru_dermatologist.h"

#include <gtest/gtest.h>

TEST(HaruDermatologistTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "0 1\n3 4 2 8 3";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  HaruDermatologist haru_dermatologist;
  haru_dermatologist.SetInputs();
  haru_dermatologist.Calculate();
  haru_dermatologist.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "-2";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(HaruDermatologistTest, SimpleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "-3 3\n-15 -4 5 -2 -5";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  HaruDermatologist haru_dermatologist;
  haru_dermatologist.SetInputs();
  haru_dermatologist.Calculate();
  haru_dermatologist.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "-210";

  EXPECT_EQ(oss.str(), expected_output);
}