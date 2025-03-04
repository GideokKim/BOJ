#ifndef BOJ_9000_SRC_9063_EARTH_H_
#define BOJ_9000_SRC_9063_EARTH_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Earth {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    x_coordinates.resize(n);
    y_coordinates.resize(n);
    for (size_t i = 0; i < n; i++) {
      std::cin >> x_coordinates[i] >> y_coordinates[i];
    }
  }

  void Calculate() {
    long long min_x = *std::min_element(x_coordinates.begin(), x_coordinates.end());
    long long max_x = *std::max_element(x_coordinates.begin(), x_coordinates.end());
    long long min_y = *std::min_element(y_coordinates.begin(), y_coordinates.end());
    long long max_y = *std::max_element(y_coordinates.begin(), y_coordinates.end());
    result = (max_x - min_x) * (max_y - min_y);
  }

  void PrintResult() {
    std::cout << result;
  }

 private:
  std::vector<long long> x_coordinates;
  std::vector<long long> y_coordinates;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Earth earth;
  earth.SetInputs();
  earth.Calculate();
  earth.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9063_EARTH_H_
