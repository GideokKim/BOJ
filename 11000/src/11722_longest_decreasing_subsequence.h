#ifndef BOJ_11000_SRC_11722_LONGEST_DECREASING_SUBSEQUENCE_H_
#define BOJ_11000_SRC_11722_LONGEST_DECREASING_SUBSEQUENCE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class LongestDecreasingSubsequence {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    sequence.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> sequence[i];
    }
    dp.resize(n, 1);
  };

  void Calculate() {
    for (size_t i = 0; i < sequence.size(); ++i) {
      for (size_t j = 0; j < i; ++j) {
        if (sequence[i] < sequence[j]) {
          dp[i] = std::max(dp[i], dp[j] + 1);
        }
      }
    }
    result = *std::max_element(dp.begin(), dp.end());
  }

  void PrintResult() { std::cout << result; };

 private:
  std::vector<int> sequence;
  std::vector<int> dp;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  LongestDecreasingSubsequence longest_decreasing_subsequence;
  longest_decreasing_subsequence.SetInputs();
  longest_decreasing_subsequence.Calculate();
  longest_decreasing_subsequence.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11722_LONGEST_DECREASING_SUBSEQUENCE_H_
