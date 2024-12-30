#include <gtest/gtest.h>

#include "2000/src/2903_planina.h"

TEST(PlaninaTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "1\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Planina planina;
  planina.SetInputs();
  int result = planina.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 9);
}

TEST(PlaninaTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Planina planina;
  planina.SetInputs();
  int result = planina.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 25);
}

TEST(PlaninaTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Planina planina;
  planina.SetInputs();
  int result = planina.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 1089);
}
