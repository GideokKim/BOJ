#ifndef BOJ_15000_SRC_15654_N_AND_M_5_H_
#define BOJ_15000_SRC_15654_N_AND_M_5_H_

#include <algorithm>
#include <iostream>
#include <vector>

class NAndM5 {
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

  void Calculate() { std::sort(numbers.begin(), numbers.end()); }

  void PrintResult() { dfs(0); }

 private:
  size_t n, m;
  std::vector<size_t> arr;
  std::vector<size_t> numbers;
  std::vector<bool> visited;

  void dfs(size_t depth) {
    if (depth == m) {
      for (auto target : arr) {
        std::cout << numbers[target] << " ";
      }
      std::cout << "\n";
      return;
    }

    for (size_t i = 0; i < n; ++i) {
      if (!visited[i]) {
        visited[i] = true;
        arr[depth] = i;
        dfs(depth + 1);
        visited[i] = false;
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM5 n_and_m_5;
  n_and_m_5.SetInputs();
  n_and_m_5.Calculate();
  n_and_m_5.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15654_N_AND_M_5_H_
