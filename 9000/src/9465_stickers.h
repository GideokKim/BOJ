#ifndef BOJ_9000_SRC_9465_STICKERS_H_
#define BOJ_9000_SRC_9465_STICKERS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Stickers {
 public:
  void SetInputs() { std::cin >> t; }

  void Calculate() {
    for (size_t i = 0; i < t; ++i) {
      size_t n;
      std::cin >> n;
      std::vector<std::vector<int>> stickers(2, std::vector<int>(n));
      for (size_t j = 0; j < 2; ++j) {
        for (size_t k = 0; k < n; ++k) {
          std::cin >> stickers[j][k];
        }
      }
      std::vector<std::vector<int>> dp(2, std::vector<int>(n, 0));
      dp[0][0] = stickers[0][0];
      dp[1][0] = stickers[1][0];
      dp[0][1] = stickers[1][0] + stickers[0][1];
      dp[1][1] = stickers[0][0] + stickers[1][1];
      for (size_t j = 2; j < n; ++j) {
        dp[0][j] =
            std::max(dp[1][j - 1], std::max(dp[0][j - 2], dp[1][j - 2])) +
            stickers[0][j];
        dp[1][j] =
            std::max(dp[0][j - 1], std::max(dp[0][j - 2], dp[1][j - 2])) +
            stickers[1][j];
      }
      result.push_back(std::max(dp[0][n - 1], dp[1][n - 1]));
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < result.size(); ++i) {
      std::cout << result[i] << "\n";
    }
  }

 private:
  size_t t;
  std::vector<int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  Stickers stickers;
  stickers.SetInputs();
  stickers.Calculate();
  stickers.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9465_STICKERS_H_
