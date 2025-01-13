#include "27000/src/27866_words_and_strings.h"

#include <gtest/gtest.h>

TEST(WordsAndStringsTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "Sprout\n3";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  WordsAndStrings words_and_strings;
  words_and_strings.SetInputs();
  char result = words_and_strings.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 'r');
}

TEST(WordsAndStringsTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "shiftpsh\n6";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  WordsAndStrings words_and_strings;
  words_and_strings.SetInputs();
  char result = words_and_strings.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 'p');
}

TEST(WordsAndStringsTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "Baekjoon\n4";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  WordsAndStrings words_and_strings;
  words_and_strings.SetInputs();
  char result = words_and_strings.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 'k');
}
