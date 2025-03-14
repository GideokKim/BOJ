#ifndef BOJ_32000_SRC_32437_FRACTIONS_ARE_BETTER_WHEN_CONTINUED_H_
#define BOJ_32000_SRC_32437_FRACTIONS_ARE_BETTER_WHEN_CONTINUED_H_

#include <iostream>
#include <vector>

class FractionsAreBetterWhenContinued {
 public:
  void SetInputs() {
    std::cin >> n;
    dp.resize(n + 1, 0);
  }

  void Calculate() {
    dp[0] = 1;
    dp[1] = 1;
    for (size_t index = 2; index <= n; ++index) {
      dp[index] = dp[index - 1] + dp[index - 2];
    }
  }

  void PrintResult() { std::cout << dp[n]; }

 private:
  size_t n;
  std::vector<long long> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FractionsAreBetterWhenContinued fractions_are_better_when_continued;
  fractions_are_better_when_continued.SetInputs();
  fractions_are_better_when_continued.Calculate();
  fractions_are_better_when_continued.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32437_FRACTIONS_ARE_BETTER_WHEN_CONTINUED_H_
