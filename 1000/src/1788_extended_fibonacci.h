#ifndef BOJ_1000_SRC_1788_EXTENDED_FIBONACCI_H_
#define BOJ_1000_SRC_1788_EXTENDED_FIBONACCI_H_

#include <iostream>
#include <vector>

class ExtendedFibonacci {
 public:
  void SetInputs() {
    std::cin >> n;
    mode_num = 1000000000;
  }

  void Calculate() {
    if (n == 0 || n == 1) {
      result = n;
      return;
    } else if (n > 1) {
      dp.resize(n + 1, 0);
      dp[1] = 1;
      for (size_t i = 2; i <= n; ++i) {
        dp[i] = dp[i - 2] + dp[i - 1];
        dp[i] %= mode_num;
      }
      result = dp[n];
    } else {
      n = -n;

      dp.resize(n + 1, 0);
      dp[1] = 1;
      for (size_t i = 2; i <= n; ++i) {
        dp[i] = dp[i - 2] - dp[i - 1];
        dp[i] %= mode_num;
      }
      result = dp[n];
    }
  }

  void PrintResult() {
    if (result == 0) {
      std::cout << "0\n" << result;
    } else if (result > 0) {
      std::cout << "1\n" << result;
    } else {
      std::cout << "-1\n" << -result;
    }
  }

 private:
  long long n;
  std::vector<long long> dp;
  long long mode_num;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ExtendedFibonacci extended_fibonacci;
  extended_fibonacci.SetInputs();
  extended_fibonacci.Calculate();
  extended_fibonacci.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1788_EXTENDED_FIBONACCI_H_
