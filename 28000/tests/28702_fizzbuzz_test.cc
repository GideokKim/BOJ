#include "28000/src/28702_fizzbuzz.h"

#include "test_headers/test_helper.h"

class FizzBuzzTest : public IOTestFixture<FizzBuzz> {};

TEST_F(FizzBuzzTest, FizzCase) { RunTest("Fizz\nBuzz\n11", "Fizz"); }

TEST_F(FizzBuzzTest, NumberCase) {
  RunTest("980803\n980804\nFizzBuzz", "980806");
}

TEST_F(FizzBuzzTest, BuzzCase) { RunTest("2\nFizz\n4", "Buzz"); }

TEST_F(FizzBuzzTest, FizzBuzzCase) { RunTest("Fizz\n13\n14", "FizzBuzz"); }
