#include "19000/src/19602_dog_treats.h"

#include <gtest/gtest.h>

TEST(DogTreatsTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "3\n1\n0";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  DogTreats dog_treats;
  dog_treats.SetInputs();
  dog_treats.Calculate();
  dog_treats.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "sad";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(DogTreatsTest, SimpleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "3\n2\n1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  DogTreats dog_treats;
  dog_treats.SetInputs();
  dog_treats.Calculate();
  dog_treats.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "happy";

  EXPECT_EQ(oss.str(), expected_output);
}
