#include "23000/src/23048_coloring_natural_numbers.h"

#include <gtest/gtest.h>

TEST(ColoringNaturalNumbersTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  ColoringNaturalNumbers coloring_natural_numbers;
  coloring_natural_numbers.SetInputs();
  coloring_natural_numbers.GeneratePrimeNumbers();
  coloring_natural_numbers.SetColors();
  int result = coloring_natural_numbers.GetK();
  std::vector<unsigned long> colors = coloring_natural_numbers.GetColors();
  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 4);
  EXPECT_EQ(colors, std::vector<unsigned long>({1, 2, 3, 2, 4}));
}
