#include "10000/src/10798_vertical_reading.h"

#include <gtest/gtest.h>

TEST(VerticalReadingTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "ABCDE\nabcde\n01234\nFGHIJ\nfghij";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  VerticalReading vertical_reading;
  vertical_reading.SetInputs();
  vertical_reading.PrintWords();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "Aa0FfBb1GgCc2HhDd3IiEe4Jj";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(VerticalReadingTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input =
      "AABCDD\n"
      "afzz\n"
      "09121\n"
      "a8EWg6\n"
      "P5h3kx";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  VerticalReading vertical_reading;
  vertical_reading.SetInputs();
  vertical_reading.PrintWords();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "Aa0aPAf985Bz1EhCz2W3D1gkD6x";

  EXPECT_EQ(oss.str(), expected_output);
}
