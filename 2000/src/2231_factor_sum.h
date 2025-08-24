#ifndef BOJ_2000_SRC_2231_FACTOR_SUM_H_
#define BOJ_2000_SRC_2231_FACTOR_SUM_H_

#include <algorithm>
#include <iostream>
#include <string>

class FactorSum {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    size_t num;
    std::string str_i;
    result = 0;
    for (size_t i = 1; i < n; ++i) {
      num = i;
      str_i = std::to_string(i);
      for (auto& target : str_i) {
        num += static_cast<size_t>(target - '0');
      }
      result = num == n ? i : 0;
      if (result) {
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FactorSum factor_sum;
  factor_sum.SetInputs();
  factor_sum.Calculate();
  factor_sum.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2231_FACTOR_SUM_H_
