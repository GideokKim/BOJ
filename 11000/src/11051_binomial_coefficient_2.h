#ifndef BOJ_11000_SRC_11051_BINOMIAL_COEFFICIENT_2_H_
#define BOJ_11000_SRC_11051_BINOMIAL_COEFFICIENT_2_H_

#include <iostream>
#include <vector>

class BinomialCoefficient2 {
 public:
  void SetInputs() { std::cin >> N >> K; };

  void Calculate() {
    dp.resize(N + 1, std::vector<unsigned long long>(K + 1, 0));
    for (int i = 0; i <= N; ++i) {
      dp[i][0] = 1;
    }
    for (int i = 1; i <= N; ++i) {
      for (int j = 1; j <= K; ++j) {
        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
      }
    }
    result = dp[N][K];
  }

  void PrintResult() { std::cout << result; };

 private:
  int N;
  int K;
  std::vector<std::vector<unsigned long long>> dp;
  unsigned long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  BinomialCoefficient2 binomial_coefficient_2;
  binomial_coefficient_2.SetInputs();
  binomial_coefficient_2.Calculate();
  binomial_coefficient_2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11051_BINOMIAL_COEFFICIENT_2_H_
