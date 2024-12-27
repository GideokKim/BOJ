#include "2000/src/2745_base_conversion.h"

#include <gtest/gtest.h>

TEST(BaseConversionTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "ZZZZZ 36\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  BaseConversion base_conversion;
  base_conversion.SetInputs();
  int result = base_conversion.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 60466175);
}

TEST(BaseConversionTest, Base10Case) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "1234 10\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  BaseConversion base_conversion;
  base_conversion.SetInputs();
  int result = base_conversion.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 1234);
}

TEST(BaseConversionTest, Base16Case) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "FF 16\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  BaseConversion base_conversion;
  base_conversion.SetInputs();
  int result = base_conversion.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 255);
}
