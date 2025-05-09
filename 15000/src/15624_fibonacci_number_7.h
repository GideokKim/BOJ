#ifndef BOJ_15000_SRC_15624_FIBONACCI_NUMBER_7_H_
#define BOJ_15000_SRC_15624_FIBONACCI_NUMBER_7_H_

#include <iostream>
#include <vector>

class FibonacciNumber7 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    dp.resize(n + 1, 0);
  }

  void Calculate() {
    dp[1] = 1;
    for (size_t num = 2; num <= dp.size() - 1; ++num) {
      dp[num] = dp[num - 1] + dp[num - 2];
      dp[num] %= 1000000007;
    }
  }

  void PrintResult() { std::cout << dp[dp.size() - 1]; }

 private:
  std::vector<size_t> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  FibonacciNumber7 fibonacci_number_7;
  fibonacci_number_7.SetInputs();
  fibonacci_number_7.Calculate();
  fibonacci_number_7.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15624_FIBONACCI_NUMBER_7_H_
