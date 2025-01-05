#include "24000/src/24082_cube.h"

#include <gtest/gtest.h>

TEST(CubeTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "4";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Cube cube;
  cube.SetInputs();
  cube.CalculateCube();
  size_t result = cube.GetCube();
  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 64);
}

TEST(CubeTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Cube cube;
  cube.SetInputs();
  cube.CalculateCube();
  size_t result = cube.GetCube();
  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 1);
}

TEST(CubeTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "999";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Cube cube;
  cube.SetInputs();
  cube.CalculateCube();
  size_t result = cube.GetCube();
  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 997002999);
}
