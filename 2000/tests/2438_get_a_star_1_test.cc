#include "2000/src/2438_get_a_star_1.h"

#include <gtest/gtest.h>

TEST(GetStar1Test, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  GetStar1 get_star_1;
  get_star_1.SetInputs();
  get_star_1.GenerateStar1();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(get_star_1.GetStar(), "*\n**\n***\n****\n*****\n");
}
