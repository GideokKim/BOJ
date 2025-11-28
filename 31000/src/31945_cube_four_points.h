#ifndef BOJ_31000_SRC_31945_CUBE_FOUR_POINTS_H_
#define BOJ_31000_SRC_31945_CUBE_FOUR_POINTS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class CubeFourPoints {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    point_list.resize(t);

    std::vector<size_t> target;
    target.resize(4);
    for (size_t i = 0; i < t; ++i) {
      for (size_t j = 0; j < 4; ++j) {
        std::cin >> target[j];
      }
      std::sort(target.begin(), target.end());
      point_list[i] = target;
    }
  }

  void Calculate() {
    std::vector<std::vector<size_t>> answers = {{0, 1, 2, 3}, {0, 1, 4, 5},
                                                {2, 3, 6, 7}, {4, 5, 6, 7},
                                                {0, 2, 4, 6}, {1, 3, 5, 7}};

    for (size_t i = 0; i < point_list.size(); ++i) {
      auto& target = point_list[i];
      std::string result = "NO";
      for (auto& answer : answers) {
        size_t count = 0;
        for (size_t index = 0; index < 4; ++index) {
          if (answer[index] == target[index]) {
            ++count;
          }
        }

        if (count == 4) {
          result = "YES";
          break;
        }
      }
      results.push_back(result);
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::vector<size_t>> point_list;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  CubeFourPoints cube_four_points;
  cube_four_points.SetInputs();
  cube_four_points.Calculate();
  cube_four_points.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31945_CUBE_FOUR_POINTS_H_
