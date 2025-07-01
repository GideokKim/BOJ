#ifndef BOJ_25000_SRC_25375_VERY_SIMPLE_PROBLEM_H_
#define BOJ_25000_SRC_25375_VERY_SIMPLE_PROBLEM_H_

#include <iostream>
#include <utility>
#include <vector>

class VerySimpleProblem {
 public:
  void SetInputs() {
    size_t q;
    std::cin >> q;
    problems.resize(q, std::pair<long long, long long>(0, 0));
    results.resize(q, 0);
    for (size_t i = 0; i < q; ++i) {
      std::cin >> problems[i].first >> problems[i].second;
    }
  }

  void Calculate() {
    for (size_t i = 0; i < problems.size(); ++i) {
      if (problems[i].second % problems[i].first == 0) {
        long long result = problems[i].second / problems[i].first;
        if (result > 1) {
          results[i] = 1;
        }
      }
    }
  }

  void PrintResult() {
    for (auto target : results) {
      std::cout << target << "\n";
    }
  }

 private:
  std::vector<std::pair<long long, long long>> problems;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  VerySimpleProblem very_simple_problem;
  very_simple_problem.SetInputs();
  very_simple_problem.Calculate();
  very_simple_problem.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25375_VERY_SIMPLE_PROBLEM_H_