#ifndef BOJ_11000_SRC_11113_THE_TRAVELING_ORIENTEERER_H_
#define BOJ_11000_SRC_11113_THE_TRAVELING_ORIENTEERER_H_

#include <cmath>
#include <iostream>
#include <vector>

class TheTravelingOrienteerer {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    x_coordinates.resize(n);
    y_coordinates.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> x_coordinates[i] >> y_coordinates[i];
    }
  }

  void Calculate() {
    size_t m, p;
    std::cin >> m;

    for (size_t i = 0; i < m; ++i) {
      std::cin >> p;
      double distance = 0;
      size_t previous_index;
      std::cin >> previous_index;
      for (size_t j = 1; j < p; ++j) {
        size_t current_index;
        std::cin >> current_index;
        distance += std::sqrt(std::pow(x_coordinates[current_index] -
                                           x_coordinates[previous_index],
                                       2) +
                              std::pow(y_coordinates[current_index] -
                                           y_coordinates[previous_index],
                                       2));
        previous_index = current_index;
      }
      results.push_back(static_cast<size_t>(std::ceil(distance - 0.5)));
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << std::endl;
    }
  };

 private:
  std::vector<double> x_coordinates;
  std::vector<double> y_coordinates;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  TheTravelingOrienteerer the_traveling_orienteerer;
  the_traveling_orienteerer.SetInputs();
  the_traveling_orienteerer.Calculate();
  the_traveling_orienteerer.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11113_THE_TRAVELING_ORIENTEERER_H_
