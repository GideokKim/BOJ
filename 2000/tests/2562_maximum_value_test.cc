#include "2000/src/2562_maximum_value.h"

#include <gtest/gtest.h>

TEST(MaximumValueTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "3\n29\n38\n12\n57\n74\n40\n85\n61\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  MaximumValue maximum_value;
  maximum_value.SetInputs();
  maximum_value.SearchMaximumValue();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(maximum_value.GetMaximumValue(), 85);
  EXPECT_EQ(maximum_value.GetMaximumIndex(), 8);
}
