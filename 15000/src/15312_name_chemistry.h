#ifndef BOJ_15000_SRC_15312_NAME_CHEMISTRY_H_
#define BOJ_15000_SRC_15312_NAME_CHEMISTRY_H_

#include <iostream>
#include <vector>

class NameChemistry {
 public:
  void SetInputs() {
    score = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2,
             2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

    std::cin >> a >> b;
  }

  void Calculate() {
    std::vector<int> target;
    for (size_t i = 0; i < a.size(); ++i) {
      target.emplace_back(score[a[i] - 'A']);
      target.emplace_back(score[b[i] - 'A']);
    }
    dp.resize(target.size() - 1, std::vector<int>(target.size(), 0));
    dp[0] = target;

    for (size_t i = 1; i < dp.size(); ++i) {
      for (size_t j = i; j < dp[0].size(); ++j) {
        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10;
      }
    }
    result = std::to_string(dp[dp.size() - 1][dp[0].size() - 2]) +
             std::to_string(dp[dp.size() - 1][dp[0].size() - 1]);
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> score;
  std::string a, b;
  std::vector<std::vector<int>> dp;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  NameChemistry name_chemistry;
  name_chemistry.SetInputs();
  name_chemistry.Calculate();
  name_chemistry.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15312_NAME_CHEMISTRY_H_
