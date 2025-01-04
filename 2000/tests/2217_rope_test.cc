#include "2000/src/2217_rope.h"

#include <gtest/gtest.h>

TEST(RopeTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2\n10\n15\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Rope rope;
  rope.SetInputs();
  rope.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(rope.GetMaxWeight(), 20);
}
