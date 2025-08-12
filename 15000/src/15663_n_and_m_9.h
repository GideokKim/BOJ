#ifndef BOJ_15000_SRC_15663_N_AND_M_9_H_
#define BOJ_15000_SRC_15663_N_AND_M_9_H_

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

class NAndM9 {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    numbers.resize(n, 0);
    visited.resize(n, false);
    arr.resize(m, 0);

    for (auto& number : numbers) {
      std::cin >> number;
    }
  }

  void Calculate() {
    std::sort(numbers.begin(), numbers.end());
    dfs(0);
  }

  void PrintResult() {
    for (auto& result : results) {
      for (auto target : result) {
        std::cout << target << " ";
      }
      std::cout << "\n";
    }
  }

 private:
  size_t n, m;
  std::vector<size_t> arr;
  std::vector<size_t> numbers;
  std::vector<bool> visited;
  std::set<std::vector<size_t>> results;

  void dfs(size_t depth) {
    if (depth == m) {
      results.insert(arr);
      return;
    }

    for (size_t i = 0; i < n; ++i) {
      if (!visited[i]) {
        visited[i] = true;
        arr[depth] = numbers[i];
        dfs(depth + 1);
        visited[i] = false;
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM9 n_and_m_9;
  n_and_m_9.SetInputs();
  n_and_m_9.Calculate();
  n_and_m_9.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15663_N_AND_M_9_H_
