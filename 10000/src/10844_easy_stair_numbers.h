#ifndef BOJ_10000_SRC_10844_EASY_STAIR_NUMBERS_H_
#define BOJ_10000_SRC_10844_EASY_STAIR_NUMBERS_H_

#include <iostream>
#include <vector>

class EasyStairNumbers {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    dp.resize(n + 1, std::vector<size_t>(10, 0));
    result = 0;

    for (size_t i = 1; i <= 9; ++i) {
      dp[1][i] = 1;
    }

    for (size_t i = 2; i <= n; ++i) {
      for (size_t j = 0; j <= 9; ++j) {
        if (j == 0) {
          dp[i][j] = dp[i - 1][j + 1];
        } else if (j == 9) {
          dp[i][j] = dp[i - 1][j - 1];
        } else {
          dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
        }
      }
    }

    for (size_t i = 0; i <= 9; ++i) {
      result += dp[n][i];
      result %= 1000000000;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<std::vector<size_t>> dp;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  EasyStairNumbers easy_stair_numbers;
  easy_stair_numbers.SetInputs();
  easy_stair_numbers.Calculate();
  easy_stair_numbers.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10844_EASY_STAIR_NUMBERS_H_
