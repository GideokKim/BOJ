#ifndef BOJ_15000_SRC_15649_N_AND_M_1_H_
#define BOJ_15000_SRC_15649_N_AND_M_1_H_

#include <iostream>
#include <vector>

class NAndM1 {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    visited.resize(n, false);
    arr.resize(m, 0);
  }

  void Calculate() {}

  void PrintResult() { dfs(0); }

 private:
  size_t n, m;
  std::vector<size_t> arr;
  std::vector<bool> visited;

  void dfs(size_t depth) {
    if (depth == m) {
      for (auto target : arr) {
        std::cout << target << " ";
      }
      std::cout << "\n";
      return;
    }

    for (size_t i = 0; i < n; ++i) {
      if (!visited[i]) {
        visited[i] = true;
        arr[depth] = i + 1;
        dfs(depth + 1);
        visited[i] = false;
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM1 n_and_m_1;
  n_and_m_1.SetInputs();
  n_and_m_1.Calculate();
  n_and_m_1.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15649_N_AND_M_1_H_
