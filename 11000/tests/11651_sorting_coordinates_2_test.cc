#include "11000/src/11651_sorting_coordinates_2.h"

#include <gtest/gtest.h>

TEST(SortingCoordinates2Test, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5\n0 4\n1 2\n1 -1\n2 2\n3 3";
  std::string expected_output = "1 -1\n1 2\n2 2\n3 3\n0 4\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  SortingCoordinates2 sorting_coordinates_2;
  sorting_coordinates_2.SetInputs();
  auto pq = sorting_coordinates_2.GetPQ();
  std::string result = "";
  while (!pq.empty()) {
    result +=
        std::to_string(pq.top().x) + ' ' + std::to_string(pq.top().y) + '\n';
    pq.pop();
  }

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, expected_output);
}
