#ifndef BOJ_12000_SRC_12865_ORDINARY_KNAPSACK_H_
#define BOJ_12000_SRC_12865_ORDINARY_KNAPSACK_H_

#include <iostream>
#include <vector>

class OrdinaryKnapsack {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    weights.resize(n);
    values.resize(n);

    for (int i = 0; i < n; ++i) {
      std::cin >> weights[i] >> values[i];
    }
    dp.resize(n + 1, std::vector<size_t>(k + 1, 0));
  }

  void Calculate() {
    for (size_t i = 1; i <= n; ++i) {
      for (size_t j = 1; j <= k; ++j) {
        if (weights[i - 1] <= j) {
          dp[i][j] = std::max(dp[i - 1][j],
                              dp[i - 1][j - weights[i - 1]] + values[i - 1]);
        } else {
          dp[i][j] = dp[i - 1][j];
        }
      }
    }
  }

  void PrintResult() { std::cout << dp[n][k]; }

 private:
  size_t n, k;
  std::vector<size_t> weights;
  std::vector<size_t> values;
  std::vector<std::vector<size_t>> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  OrdinaryKnapsack ordinary_knapsack;
  ordinary_knapsack.SetInputs();
  ordinary_knapsack.Calculate();
  ordinary_knapsack.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_12000_SRC_12865_ORDINARY_KNAPSACK_H_
