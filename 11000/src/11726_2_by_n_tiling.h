#ifndef BOJ_11000_SRC_11726_2_BY_N_TILING_H_
#define BOJ_11000_SRC_11726_2_BY_N_TILING_H_

#include <iostream>
#include <vector>

class TwoByNTiling {
 public:
  void SetInputs() {
    std::cin >> n;
    dp.resize(n + 1, 0);
  };

  void Calculate() {
    dp[0] = 1;
    dp[1] = 1;
    for (size_t i = 2; i <= n; ++i) {
      dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    result = dp[n];
  }

  void PrintResult() { std::cout << result; };

 private:
  size_t n;
  std::vector<size_t> dp;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  TwoByNTiling two_by_n_tiling;
  two_by_n_tiling.SetInputs();
  two_by_n_tiling.Calculate();
  two_by_n_tiling.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11726_2_BY_N_TILING_H_
