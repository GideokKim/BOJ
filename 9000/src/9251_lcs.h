#ifndef BOJ_9000_SRC_9251_LCS_H_
#define BOJ_9000_SRC_9251_LCS_H_

#include <iostream>
#include <string>
#include <vector>

class LCS {
 public:
  void SetInputs() { std::cin >> first_string >> second_string; }

  void Calculate() {
    dp.resize(first_string.size() + 1,
              std::vector<int>(second_string.size() + 1, 0));
    for (size_t i = 1; i <= first_string.size(); ++i) {
      for (size_t j = 1; j <= second_string.size(); ++j) {
        if (first_string[i - 1] == second_string[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
        } else {
          dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
        }
      }
    }
  }

  void PrintResult() {
    std::cout << dp[first_string.size()][second_string.size()];
  }

 private:
  std::string first_string;
  std::string second_string;
  std::vector<std::vector<int>> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  LCS lcs;
  lcs.SetInputs();
  lcs.Calculate();
  lcs.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9251_LCS_H_
