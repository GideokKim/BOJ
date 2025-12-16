#ifndef BOJ_19000_SRC_19572_DROUGHT_SMALL_H_
#define BOJ_19000_SRC_19572_DROUGHT_SMALL_H_

#include <iomanip>
#include <iostream>
#include <vector>

class DroughtSmall {
 public:
  void SetInputs() {
    rain.resize(3);
    std::cin >> rain[0] >> rain[1] >> rain[2];
    results.resize(3);
  }

  void Calculate() {
    is_possible = 1;
    for (size_t i = 0; i < 3; ++i) {
      double target = rain[i] + rain[(i + 1) % 3] - rain[(i + 2) % 3];
      results[i] = target / 2.0;
      if (results[i] <= 0.0) {
        is_possible = -1;
        return;
      }
    }
    double temp = results[1];
    results[1] = results[2];
    results[2] = temp;
  }
  void PrintResult() {
    std::cout << is_possible << "\n";
    std::cout << std::fixed << std::setprecision(1);
    if (is_possible != -1) {
      for (size_t i = 0; i < results.size(); ++i) {
        std::cout << results[i] << " ";
      }
    }
  }

 private:
  std::vector<double> rain;
  int is_possible;
  std::vector<double> results;
};

#ifdef BOJ_SUBMIT
int main() {
  DroughtSmall drought_small;
  drought_small.SetInputs();
  drought_small.Calculate();
  drought_small.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_19000_SRC_19572_DROUGHT_SMALL_H_
