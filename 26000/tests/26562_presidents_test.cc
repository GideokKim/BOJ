#include "26000/src/26562_presidents.h"

#include <gtest/gtest.h>

TEST(PresidentsTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input =
      "3\nFranklin Grant Jackson\nHamilton Lincoln Washington\nWashington "
      "Washington Washington Franklin Jackson ";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  Presidents presidents;
  presidents.SetInputs();
  presidents.PrintPrices();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "$170\n$16\n$123\n";

  EXPECT_EQ(oss.str(), expected_output);
}
