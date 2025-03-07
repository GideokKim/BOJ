#ifndef BOJ_1000_SRC_1912_CONTINUEOUS_SUM_H_
#define BOJ_1000_SRC_1912_CONTINUEOUS_SUM_H_

#include <algorithm>
#include <iostream>
#include <vector>

class ContinuousSum {
 public:
  void SetInputs() {
    std::cin >> n;
    dp.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> dp[i];
    }
  }

  void Calculate() {
    max = *std::max_element(dp.begin(), dp.end());
    for (size_t index = 1; index < n; ++index) {
      dp[index] = std::max(dp[index], dp[index - 1] + dp[index]);
      max = std::max(max, dp[index]);
    }
  }

  void PrintResult() { std::cout << max; }

 private:
  size_t n;
  std::vector<long long> dp;
  long long max;
};

#ifdef BOJ_SUBMIT
int main() {
  ContinuousSum continuous_sum;
  continuous_sum.SetInputs();
  continuous_sum.Calculate();
  continuous_sum.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1912_CONTINUEOUS_SUM_H_
