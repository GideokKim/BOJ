#include "28000/src/28702_fizzbuzz.h"

#include <gtest/gtest.h>

TEST(FizzBuzzTest, FizzCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "Fizz\nBuzz\n11";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FizzBuzz fizzbuzz;
  fizzbuzz.SetInputs();
  std::string result = fizzbuzz.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, "Fizz");
}

TEST(FizzBuzzTest, NumberCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "980803\n980804\nFizzBuzz";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FizzBuzz fizzbuzz;
  fizzbuzz.SetInputs();
  std::string result = fizzbuzz.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, "980806");
}

TEST(FizzBuzzTest, BuzzCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2\nFizz\n4";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FizzBuzz fizzbuzz;
  fizzbuzz.SetInputs();
  std::string result = fizzbuzz.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, "Buzz");
}

TEST(FizzBuzzTest, FizzBuzzCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "Fizz\n13\n14";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FizzBuzz fizzbuzz;
  fizzbuzz.SetInputs();
  std::string result = fizzbuzz.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, "FizzBuzz");
}
