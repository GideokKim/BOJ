#include "10000/src/10773_zero.h"

#include <gtest/gtest.h>

TEST(AccountBookTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "4\n3\n0\n4\n0\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  AccountBook account_book;
  account_book.SetInputs();
  account_book.CalculateSum();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(account_book.GetSum(), 0);
}

TEST(AccountBookTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "10\n1\n3\n5\n4\n0\n0\n7\n0\n0\n6\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  AccountBook account_book;
  account_book.SetInputs();
  account_book.CalculateSum();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(account_book.GetSum(), 7);
}

TEST(AccountBookTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::string input = "1000000\n";
  for (int i = 0; i < 1000000; ++i) {
    input += "1\n";
  }

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  AccountBook account_book;
  account_book.SetInputs();
  account_book.CalculateSum();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(account_book.GetSum(), 1000000);
}
