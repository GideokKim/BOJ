#ifndef BOJ_17000_SRC_17224_WHY_DID_APC_BECOME_SUBTASK_COMPETITION_H_
#define BOJ_17000_SRC_17224_WHY_DID_APC_BECOME_SUBTASK_COMPETITION_H_

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

class WhyDidAPCBecomeSubtaskCompetition {
 public:
  void SetInputs() {
    int n;
    std::cin >> n >> l >> k;
    problems.resize(n);

    for (int i = 0; i < n; ++i) {
      std::cin >> problems[i].first >> problems[i].second;
    }
  }

  void Calculate() {
    std::sort(problems.begin(), problems.end());
    int count = 0;

    for (size_t i = 0; i < problems.size(); ++i) {
      if (problems[i].second <= l) {
        count++;
      }
    }

    if (count >= k) {
      result = 140 * k;
    } else {
      result = 140 * count;

      for (size_t i = 0; i < problems.size(); ++i) {
        if (problems[i].second <= l) {
          problems[i].first = l + 1;
        }
      }
      std::sort(problems.begin(), problems.end());
      for (int i = problems.size() - 1; i >= 0; --i) {
        if (problems[i].first <= l) {
          result += 100;
          count++;
          if (count >= k) {
            break;
          }
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int l;
  int k;
  std::vector<std::pair<int, int>> problems;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  WhyDidAPCBecomeSubtaskCompetition why_did_apc_become_subtask_competition;
  why_did_apc_become_subtask_competition.SetInputs();
  why_did_apc_become_subtask_competition.Calculate();
  why_did_apc_become_subtask_competition.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17224_WHY_DID_APC_BECOME_SUBTASK_COMPETITION_H_