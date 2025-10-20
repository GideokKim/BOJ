#ifndef BOJ_2000_SRC_2693_NTH_LARGEST_NUMBER_H_
#define BOJ_2000_SRC_2693_NTH_LARGEST_NUMBER_H_

#include <algorithm>
#include <iostream>
#include <vector>

class NthLargestNumber {
 public:
  void SetInputs() {
    std::cin >> t;
    inputs.resize(t);
    results.resize(t);
    for (size_t i = 0; i < t; i++) {
      std::vector<size_t> input(10);
      for (size_t idx = 0; idx < 10; ++idx) {
        std::cin >> input[idx];
      }
      inputs[i] = input;
      std::sort(inputs[i].begin(), inputs[i].end());
    }
  }

  void Calculate() {
    for (size_t i = 0; i < t; ++i) {
      results[i] = inputs[i][7];
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  size_t t;
  std::vector<std::vector<size_t>> inputs;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  NthLargestNumber nth_largest_number;
  nth_largest_number.SetInputs();
  nth_largest_number.Calculate();
  nth_largest_number.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2693_NTH_LARGEST_NUMBER_H_
