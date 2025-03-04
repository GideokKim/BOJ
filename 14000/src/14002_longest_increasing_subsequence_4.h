#ifndef BOJ_14000_SRC_14002_LONGEST_INCREASING_SUBSEQUENCE_4_H_
#define BOJ_14000_SRC_14002_LONGEST_INCREASING_SUBSEQUENCE_4_H_

#include <iostream>
#include <set>
#include <vector>

class LongestIncreasingSubsequence4 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    sequence.resize(n);
    subsequences.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> sequence[i];
      subsequences[i].insert(sequence[i]);
    }
    dp.resize(n, 1);
  };

  void Calculate() {
    for (size_t i = 0; i < sequence.size(); ++i) {
      for (size_t j = 0; j < i; ++j) {
        if (sequence[i] > sequence[j]) {
          if (dp[i] < dp[j] + 1) {
            dp[i] = dp[j] + 1;
            subsequences[i].clear();
            subsequences[i].insert(subsequences[j].begin(),
                                   subsequences[j].end());
            subsequences[i].insert(sequence[i]);
          }
        }
      }
    }
    max_index = 0;
    size_t max_length = 0;
    for (size_t i = 0; i < dp.size(); ++i) {
      if (dp[i] > max_length) {
        max_length = dp[i];
        max_index = i;
      }
    }
  }

  void PrintResult() {
    std::cout << dp[max_index] << '\n';
    for (const auto& subsequence : subsequences[max_index]) {
      std::cout << subsequence << ' ';
    }
  };

 private:
  std::vector<int> sequence;
  std::vector<int> dp;
  std::vector<std::set<int>> subsequences;
  int max_index;
};

#ifdef BOJ_SUBMIT
int main() {
  LongestIncreasingSubsequence4 longest_increasing_subsequence_4;
  longest_increasing_subsequence_4.SetInputs();
  longest_increasing_subsequence_4.Calculate();
  longest_increasing_subsequence_4.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14002_LONGEST_INCREASING_SUBSEQUENCE_4_H_
