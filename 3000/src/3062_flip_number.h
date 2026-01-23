#ifndef BOJ_3000_SRC_3062_FLIP_NUMBER_H_
#define BOJ_3000_SRC_3062_FLIP_NUMBER_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class FlipNumber {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    inputs.resize(t);
    for (size_t i = 0; i < t; ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    results.resize(inputs.size(), "YES");
    for (size_t index = 0; index < inputs.size(); ++index) {
      auto input = inputs[index];
      size_t target_number = std::stoul(input);
      std::reverse(input.begin(), input.end());
      target_number += std::stoul(input);
      std::string target = std::to_string(target_number);
      for (size_t i = 0; i < target.size() / 2; ++i) {
        if (target[i] != target[target.size() - 1 - i]) {
          results[index] = "NO";
          break;
        }
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::string> inputs;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  FlipNumber flip_number;
  flip_number.SetInputs();
  flip_number.Calculate();
  flip_number.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3062_FLIP_NUMBER_H_
