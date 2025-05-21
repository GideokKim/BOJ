#ifndef BOJ_14000_SRC_14494_WHAT_IS_DYNAMIC_H_
#define BOJ_14000_SRC_14494_WHAT_IS_DYNAMIC_H_

#include <iostream>
#include <vector>

class WhatIsDynamic {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    dp.resize(n + 1, std::vector<long long>(m + 1, 0));
  }

  void Calculate() {
    if (n == 1 || m == 1) {
      result = 1;
      return;
    }

    dp[2][1] = 1;
    dp[1][2] = 1;
    if (n >= 2 && m >= 2) {
      dp[2][2] = 1;
    }

    for (size_t i = 1; i <= n; ++i) {
      for (size_t j = 1; j <= m; ++j) {
        dp[i][j] += dp[i - 1][j - 1] + dp[i - 1][j];
        dp[i][j] %= 1000000007;
        dp[i][j] += dp[i][j - 1];
        dp[i][j] %= 1000000007;
      }
    }

    result = dp[n][m];
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<std::vector<long long>> dp;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  WhatIsDynamic what_is_dynamic;
  what_is_dynamic.SetInputs();
  what_is_dynamic.Calculate();
  what_is_dynamic.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14494_WHAT_IS_DYNAMIC_H_
