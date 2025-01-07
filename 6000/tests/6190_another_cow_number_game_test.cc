#include "6000/src/6190_another_cow_number_game.h"

#include <gtest/gtest.h>

TEST(AnotherCowNumberGameTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "112";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  AnotherCowNumberGame another_cow_number_game;
  another_cow_number_game.SetInputs();
  another_cow_number_game.Calculate();
  another_cow_number_game.PrintScore();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "20\n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(AnotherCowNumberGameTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  AnotherCowNumberGame another_cow_number_game;
  another_cow_number_game.SetInputs();
  another_cow_number_game.Calculate();
  another_cow_number_game.PrintScore();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "0\n";

  EXPECT_EQ(oss.str(), expected_output);
}
