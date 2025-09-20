#ifndef BOJ_11000_SRC_11665_CUBIC_INTERSECTION_H_
#define BOJ_11000_SRC_11665_CUBIC_INTERSECTION_H_

#include <iostream>
#include <vector>

class CubicIntersection {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;

    cubic_coordinate.resize(n, std::vector<long long>(6, 0));
    for (size_t i = 0; i < n; ++i) {
      std::cin >> cubic_coordinate[i][0] >> cubic_coordinate[i][1] >>
          cubic_coordinate[i][2] >> cubic_coordinate[i][3] >>
          cubic_coordinate[i][4] >> cubic_coordinate[i][5];
    }
  }

  void Calculate() {
    std::vector<long long> min_coordinate(3, 0);
    std::vector<long long> max_coordinate(3, 1001);
    for (const auto& cubic : cubic_coordinate) {
      for (size_t i = 0; i < cubic.size(); ++i) {
        if (i < 3) {
          if (cubic[i] > min_coordinate[i]) {
            min_coordinate[i] = cubic[i];
          }
        } else {
          if (cubic[i] < max_coordinate[i - 3]) {
            max_coordinate[i - 3] = cubic[i];
          }
        }
      }
    }
    result = 1;
    for (size_t i = 0; i < 3; ++i) {
      if (max_coordinate[i] - min_coordinate[i] < 0) {
        result = 0;
        return;
      }
      result *= (max_coordinate[i] - min_coordinate[i]);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::vector<long long>> cubic_coordinate;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  CubicIntersection cubic_intersection;
  cubic_intersection.SetInputs();
  cubic_intersection.Calculate();
  cubic_intersection.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11665_CUBIC_INTERSECTION_H_
