#ifndef BOJ_1000_SRC_1463_MAKE_ONE_H_
#define BOJ_1000_SRC_1463_MAKE_ONE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class MakeOne {
 public:
  void SetInputs() {
    std::cin >> n;
    dp.resize(n + 1, 0);
  }

  void Calculate() {
    for (size_t index = 2; index <= n; ++index) {
      dp[index] = dp[index - 1] + 1;
      if (index % 2 == 0) {
        dp[index] = std::min(dp[index], dp[index / 2] + 1);
      }
      if (index % 3 == 0) {
        dp[index] = std::min(dp[index], dp[index / 3] + 1);
      }
    }
  }

  void PrintResult() { std::cout << dp[n]; }

 private:
  size_t n;
  std::vector<size_t> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  MakeOne make_one;
  make_one.SetInputs();
  make_one.Calculate();
  make_one.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1463_MAKE_ONE_H_
