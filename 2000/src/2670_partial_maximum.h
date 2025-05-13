#ifndef BOJ_2000_SRC_2670_PARTIAL_MAXIMUM_H_
#define BOJ_2000_SRC_2670_PARTIAL_MAXIMUM_H_

#include <algorithm>
#include <iostream>
#include <vector>

class PartialMaximum {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(n);
    for (size_t i = 0; i < n; i++) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {
    max_num = numbers[0];
    double current_num = numbers[0];
    for (size_t start = 1; start < numbers.size(); ++start) {
      current_num = std::max(current_num * numbers[start], numbers[start]);
      max_num = std::max(max_num, current_num);
    }
  }

  void PrintResult() {
    std::cout << std::fixed;
    std::cout.precision(3);
    std::cout << max_num;
  }

 private:
  std::vector<double> numbers;
  double max_num;
};

#ifdef BOJ_SUBMIT
int main() {
  PartialMaximum partial_maximum;
  partial_maximum.SetInputs();
  partial_maximum.Calculate();
  partial_maximum.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2670_PARTIAL_MAXIMUM_H_
