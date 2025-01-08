#include "31000/src/31064_minutes.h"

#include <gtest/gtest.h>

TEST(MinutesTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "8\n30";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Minutes minutes;
  minutes.SetInputs();
  int result = minutes.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 510);
}

TEST(MinutesTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "14\n0";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Minutes minutes;
  minutes.SetInputs();
  int result = minutes.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 840);
}

TEST(MinutesTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "0\n29";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Minutes minutes;
  minutes.SetInputs();
  int result = minutes.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 29);
}

TEST(MinutesTest, SampleCase4) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "23\n59";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Minutes minutes;
  minutes.SetInputs();
  int result = minutes.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 1439);
}