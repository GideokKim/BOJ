#ifndef BOJ_14000_SRC_14606_PIZZA_SMALL_H_
#define BOJ_14000_SRC_14606_PIZZA_SMALL_H_

#include <iostream>
#include <vector>

class PizzaSmall {
 public:
  void SetInputs() {
    std::cin >> n;
    dp.resize(n + 1, 0);
  }

  void Calculate() {
    dp[1] = 0;
    dp[2] = 1;
    for (long long num = 3; num <= n; ++num) {
      dp[num] = num / 2;

      if (num % 2) {
        dp[num] *= num / 2 + 1;
        dp[num] += dp[num / 2];
        dp[num] += dp[num / 2 + 1];
      } else {
        dp[num] *= num / 2;
        dp[num] += 2 * dp[num / 2];
      }
    }
  }

  void PrintResult() { std::cout << dp[n]; }

 private:
  long long n;
  std::vector<long long> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  PizzaSmall pizza_small;
  pizza_small.SetInputs();
  pizza_small.Calculate();
  pizza_small.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14606_PIZZA_SMALL_H_
