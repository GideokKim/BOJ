#ifndef BOJ_17000_SRC_17286_YUMI_H_
#define BOJ_17000_SRC_17286_YUMI_H_

#include <cmath>
#include <iostream>
#include <vector>

class Yumi {
 public:
  void SetInputs() {
    coordinates.resize(4);
    for (size_t i = 0; i < 4; ++i) {
      std::cin >> coordinates[i].first >> coordinates[i].second;
    }
  }

  void Calculate() {
    std::vector<double> yumi_to_target_distances;
    for (size_t i = 1; i < 4; ++i) {
      auto x = coordinates[i].first - coordinates[0].first;
      auto y = coordinates[i].second - coordinates[0].second;
      yumi_to_target_distances.push_back(std::sqrt(x * x + y * y));
    }

    std::vector<double> target_to_target_distances;
    auto x = coordinates[3].first - coordinates[2].first;
    auto y = coordinates[3].second - coordinates[2].second;
    target_to_target_distances.push_back(std::sqrt(x * x + y * y));
    x = coordinates[3].first - coordinates[1].first;
    y = coordinates[3].second - coordinates[1].second;
    target_to_target_distances.push_back(std::sqrt(x * x + y * y));
    x = coordinates[2].first - coordinates[1].first;
    y = coordinates[2].second - coordinates[1].second;
    target_to_target_distances.push_back(std::sqrt(x * x + y * y));

    double result3 =
        yumi_to_target_distances[0] + target_to_target_distances[0] +
        std::min(target_to_target_distances[1], target_to_target_distances[2]);
    double result2 =
        yumi_to_target_distances[1] + target_to_target_distances[1] +
        std::min(target_to_target_distances[0], target_to_target_distances[2]);
    result3 = std::min(result3, result2);
    result2 =
        yumi_to_target_distances[2] + target_to_target_distances[2] +
        std::min(target_to_target_distances[0], target_to_target_distances[1]);
    result3 = std::min(result3, result2);
    result = static_cast<int>(result3);
  }

  void PrintResult() { std::cout << result; }

 private:
  int result;
  std::vector<std::pair<double, double>> coordinates;
};

#ifdef BOJ_SUBMIT
int main() {
  Yumi yumi;
  yumi.SetInputs();
  yumi.Calculate();
  yumi.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17286_YUMI_H_