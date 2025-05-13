#ifndef BOJ_14000_SRC_14003_LONGEST_INCREASING_SUBSEQUENCE_5_H_
#define BOJ_14000_SRC_14003_LONGEST_INCREASING_SUBSEQUENCE_5_H_

#include <algorithm>
#include <iostream>
#include <vector>

class LongestIncreasingSubsequence5 {
 public:
  void SetInputs() {
    std::cin >> n;
    std::cin.ignore();

    numbers.resize(n);
    lis.reserve(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> numbers[i];
    }
    pos.resize(n);
  };

  void Calculate() {
    for (size_t i = 0; i < n; ++i) {
      auto it = std::lower_bound(lis.begin(), lis.end(), numbers[i]);
      if (it == lis.end()) {
        lis.push_back(numbers[i]);
      } else {
        *it = numbers[i];
      }
      pos[i] = static_cast<long long>(it - lis.begin());
    }

    long long current = static_cast<long long>(n) - 1;
    long long lis_index = static_cast<long long>(lis.size()) - 1;
    while (current >= 0 && lis_index >= 0) {
      if (pos[current] == lis_index) {
        lis[lis_index] = numbers[current];
        --lis_index;
      }
      --current;
    }
  }

  void PrintResult() {
    std::cout << lis.size() << '\n';
    for (auto target : lis) {
      std::cout << target << " ";
    }
  };

 private:
  size_t n;
  std::vector<long long> numbers;
  std::vector<long long> lis;
  std::vector<long long> pos;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  LongestIncreasingSubsequence5 longest_increasing_subsequence_5;
  longest_increasing_subsequence_5.SetInputs();
  longest_increasing_subsequence_5.Calculate();
  longest_increasing_subsequence_5.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14003_LONGEST_INCREASING_SUBSEQUENCE_5_H_
