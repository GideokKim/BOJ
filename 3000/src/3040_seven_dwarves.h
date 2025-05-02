#ifndef BOJ_3000_SRC_3040_SEVEN_DWARVES_H_
#define BOJ_3000_SRC_3040_SEVEN_DWARVES_H_

#include <iostream>
#include <numeric>
#include <vector>

class SevenDwarves {
 public:
  void SetInputs() {
    inputs.resize(9);
    for (size_t i = 0; i < 9; i++) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    int sum = std::accumulate(inputs.begin(), inputs.end(), 0);
    for (size_t i = 0; i < 8; i++) {
      for (size_t j = i + 1; j < 9; j++) {
        if (sum - inputs[i] - inputs[j] == 100) {
          for (size_t k = 0; k < 9; k++) {
            if (k != i && k != j) {
              results.push_back(inputs[k]);
            }
          }
          return;
        }
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); i++) {
      std::cout << results[i] << std::endl;
    }
  }

 private:
  std::vector<int> inputs;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  SevenDwarves seven_dwarves;
  seven_dwarves.SetInputs();
  seven_dwarves.Calculate();
  seven_dwarves.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3040_SEVEN_DWARVES_H_
