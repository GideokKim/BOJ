#ifndef BOJ_5000_SRC_5582_LCS_H_
#define BOJ_5000_SRC_5582_LCS_H_

#include <iostream>
#include <string>
#include <vector>

class LCS {
 public:
  void SetInputs() { std::cin >> str1 >> str2; }

  void Calculate() {
    max_length = 0;
    dp.resize(str1.size() + 1, std::vector<size_t>(str2.size() + 1, 0));
    for (size_t i = 1; i <= str1.size(); ++i) {
      for (size_t j = 1; j <= str2.size(); ++j) {
        if (str1[i - 1] == str2[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
        }
        max_length = std::max(max_length, dp[i][j]);
      }
    }
  }

  void PrintResult() { std::cout << max_length; }

 private:
  std::string str1, str2;
  std::vector<std::vector<size_t>> dp;
  size_t max_length;
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

#endif  // BOJ_5000_SRC_5582_LCS_H_
