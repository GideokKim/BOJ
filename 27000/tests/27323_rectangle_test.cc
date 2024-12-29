#include "27000/src/27323_rectangle.h"

#include <gtest/gtest.h>

TEST(RectangleTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2\n3\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Rectangle rectangle;
  rectangle.SetInputs();
  int result = rectangle.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 6);
}

TEST(RectangleTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "100\n1\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Rectangle rectangle;
  rectangle.SetInputs();
  int result = rectangle.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 100);
}

TEST(RectangleTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "4\n4\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Rectangle rectangle;
  rectangle.SetInputs();
  int result = rectangle.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 16);
}
