#ifndef BOJ_25000_SRC_25177_FIND_SEOGANG_HISTORY_H_
#define BOJ_25000_SRC_25177_FIND_SEOGANG_HISTORY_H_

#include <iostream>
#include <vector>

class FindSeogangHistory {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    current_scores.resize(n);
    previous_scores.resize(m);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> current_scores[i];
    }

    for (size_t i = 0; i < m; ++i) {
      std::cin >> previous_scores[i];
    }
  }

  void Calculate() {
    size_t max_num = std::max(n, m);
    result = 0;

    for (size_t idx = 0; idx < max_num; ++idx) {
      long long previous_score = 0;
      long long current_score = 0;

      if (idx < n) {
        current_score = current_scores[idx];
      }

      if (idx < m) {
        previous_score = previous_scores[idx];
      }
      result = std::max(result, previous_score - current_score);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<long long> current_scores;
  std::vector<long long> previous_scores;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  FindSeogangHistory find_seogang_history;
  find_seogang_history.SetInputs();
  find_seogang_history.Calculate();
  find_seogang_history.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25177_FIND_SEOGANG_HISTORY_H_
