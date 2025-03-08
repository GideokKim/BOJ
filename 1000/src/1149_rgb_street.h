#ifndef BOJ_1000_SRC_1149_RGB_STREET_H_
#define BOJ_1000_SRC_1149_RGB_STREET_H_

#include <algorithm>
#include <iostream>
#include <vector>

class RgbStreet {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    rgb_street.resize(n, std::vector<int>(3, 0));
    dp.resize(n, std::vector<int>(3, 0));
    for (size_t i = 0; i < n; ++i) {
      std::cin >> rgb_street[i][0] >> rgb_street[i][1] >> rgb_street[i][2];
    }
  }

  void Calculate() {
    dp[0][0] = rgb_street[0][0];
    dp[0][1] = rgb_street[0][1];
    dp[0][2] = rgb_street[0][2];
    for (size_t i = 1; i < dp.size(); ++i) {
      dp[i][0] = std::min(dp[i - 1][1], dp[i - 1][2]) + rgb_street[i][0];
      dp[i][1] = std::min(dp[i - 1][2], dp[i - 1][0]) + rgb_street[i][1];
      dp[i][2] = std::min(dp[i - 1][0], dp[i - 1][1]) + rgb_street[i][2];
    }
  }

  void PrintResult() {
    std::cout << std::min(
        {dp[dp.size() - 1][0], dp[dp.size() - 1][1], dp[dp.size() - 1][2]});
  }

 private:
  std::vector<std::vector<int>> rgb_street;
  std::vector<std::vector<int>> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  RgbStreet rgb_street;
  rgb_street.SetInputs();
  rgb_street.Calculate();
  rgb_street.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1149_RGB_STREET_H_
