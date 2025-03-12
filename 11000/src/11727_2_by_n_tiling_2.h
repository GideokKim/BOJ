#ifndef BOJ_11000_SRC_11727_2_BY_N_TILING_2_H_
#define BOJ_11000_SRC_11727_2_BY_N_TILING_2_H_

#include <iostream>
#include <vector>

class TwoByNTiling2 {
 public:
  void SetInputs() {
    std::cin >> n;
    dp.resize(n + 1, 0);
  };

  void Calculate() {
    dp[0] = 1;
    dp[1] = 1;
    for (size_t i = 2; i <= n; ++i) {
      dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
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
  TwoByNTiling2 two_by_n_tiling_2;
  two_by_n_tiling_2.SetInputs();
  two_by_n_tiling_2.Calculate();
  two_by_n_tiling_2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11727_2_BY_N_TILING_2_H_
