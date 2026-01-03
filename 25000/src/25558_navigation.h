#ifndef BOJ_25000_SRC_25558_NAVIGATION_H_
#define BOJ_25000_SRC_25558_NAVIGATION_H_

#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

class Navigation {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> sx >> sy >> ex >> ey;
    middle_x.resize(n);
    middle_y.resize(n);

    for (size_t i = 0; i < n; ++i) {
      size_t m;
      std::cin >> m;
      std::vector<long long> target_x, target_y;
      target_x.resize(m);
      target_y.resize(m);

      for (size_t j = 0; j < m; ++j) {
        std::cin >> target_x[j] >> target_y[j];
      }

      middle_x[i] = target_x;
      middle_y[i] = target_y;
    }
  }

  void Calculate() {
    long long distance = std::numeric_limits<long long>::max();
    result = 0;
    for (size_t i = 0; i < middle_x.size(); ++i) {
      long long previous_x = sx;
      long long previous_y = sy;
      auto& target_x = middle_x[i];
      auto& target_y = middle_y[i];

      long long current_x, current_y, current_distance;
      current_distance = 0;
      for (size_t j = 0; j < target_x.size(); ++j) {
        current_x = target_x[j];
        current_y = target_y[j];
        current_distance +=
            std::abs(current_x - previous_x) + std::abs(current_y - previous_y);
        previous_x = current_x;
        previous_y = current_y;
      }
      current_distance += std::abs(ex - previous_x) + std::abs(ey - previous_y);
      if (current_distance < distance) {
        distance = current_distance;
        result = i;
      }
    }
    result += 1;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long sx, sy, ex, ey;
  std::vector<std::vector<long long>> middle_x;
  std::vector<std::vector<long long>> middle_y;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Navigation navigation;
  navigation.SetInputs();
  navigation.Calculate();
  navigation.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25558_NAVIGATION_H_
