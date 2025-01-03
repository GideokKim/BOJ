#include "11000/src/11005_base_conversion_2.h"

#include <gtest/gtest.h>

TEST(BaseConversion2Test, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "60466175 36";
  std::string expected_output = "ZZZZZ";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  BaseConversion2 base_conversion_2;
  base_conversion_2.SetInputs();
  base_conversion_2.Convert();
  std::string result = base_conversion_2.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, expected_output);
}

TEST(BaseConversion2Test, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "35 2";
  std::string expected_output = "100011";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  BaseConversion2 base_conversion_2;
  base_conversion_2.SetInputs();
  base_conversion_2.Convert();
  std::string result = base_conversion_2.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, expected_output);
}