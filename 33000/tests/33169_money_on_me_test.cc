#include "33000/src/33169_money_on_me.h"

#include <gtest/gtest.h>

TEST(MoneyOnMeTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "11\n1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  MoneyOnMe money_on_me;
  money_on_me.SetInputs();
  money_on_me.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "21000";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(MoneyOnMeTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "7\n2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  MoneyOnMe money_on_me;
  money_on_me.SetInputs();
  money_on_me.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "27000";

  EXPECT_EQ(oss.str(), expected_output);
}
