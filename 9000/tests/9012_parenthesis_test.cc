#include "9000/src/9012_parenthesis.h"

#include <gtest/gtest.h>

TEST(ParenthesisTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input =
      "6\n"
      "(())())\n"
      "(((()())()\n"
      "(()())((()))\n"
      "((()()(()))(((())))()\n"
      "()()()()(()()())()\n"
      "(()((())()(";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Parenthesis parenthesis;
  parenthesis.SetInputs();
  parenthesis.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "NO\nNO\nYES\nNO\nYES\nNO\n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(ParenthesisTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input =
      "3\n"
      "((\n"
      "))\n"
      "())(()";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Parenthesis parenthesis;
  parenthesis.SetInputs();
  parenthesis.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "NO\nNO\nNO\n";

  EXPECT_EQ(oss.str(), expected_output);
}