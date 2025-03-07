#ifndef BOJ_11000_SRC_11054_LONGEST_BITONIC_SUBSEQUENCE_H_
#define BOJ_11000_SRC_11054_LONGEST_BITONIC_SUBSEQUENCE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class LongestBitonicSubsequence {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    sequence.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> sequence[i];
    }
    dp.resize(n, 1);
    dp_reverse.resize(n, 1);
  };

  void Calculate() {
    for (size_t i = 0; i < sequence.size(); ++i) {
      for (size_t j = 0; j < i; ++j) {
        if (sequence[i] > sequence[j]) {
          dp[i] = std::max(dp[i], dp[j] + 1);
        }
      }
    }

    for (int i = sequence.size() - 1; i >= 0; --i) {
      for (int j = sequence.size() - 1; j > i; --j) {
        if (sequence[i] > sequence[j]) {
          dp_reverse[i] = std::max(dp_reverse[i], dp_reverse[j] + 1);
        }
      }
    }

    result = 0;
    for (size_t i = 0; i < sequence.size(); ++i) {
      result = std::max(result, dp[i] + dp_reverse[i] - 1);
    }
  }

  void PrintResult() { std::cout << result; };

 private:
  std::vector<int> sequence;
  std::vector<int> dp;
  std::vector<int> dp_reverse;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  LongestBitonicSubsequence longest_bitonic_subsequence;
  longest_bitonic_subsequence.SetInputs();
  longest_bitonic_subsequence.Calculate();
  longest_bitonic_subsequence.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11054_LONGEST_BITONIC_SUBSEQUENCE_H_
