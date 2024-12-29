#include "mathematics/combinatorics/src/combination.h"

#include <gtest/gtest.h>

namespace boj::mathematics::combinatorics {

TEST(CombinationTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "4 2\n1 2 3 4\n";
  std::vector<std::vector<int>> expected_output = {{1, 2}, {1, 3}, {1, 4},
                                                   {2, 3}, {2, 4}, {3, 4}};

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Combination combination;
  combination.SetInputs();
  combination.GenerateCombinations(0, 0);

  std::cin.rdbuf(orig_cin);
  std::vector<std::vector<int>> result = combination.GetResult();
  EXPECT_EQ(result.size(), expected_output.size());
  EXPECT_EQ(result, expected_output);
}
}  // namespace boj::mathematics::combinatorics