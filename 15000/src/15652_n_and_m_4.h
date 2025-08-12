#ifndef BOJ_15000_SRC_15652_N_AND_M_4_H_
#define BOJ_15000_SRC_15652_N_AND_M_4_H_

#include <iostream>
#include <vector>

class NAndM4 {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    arr.resize(m, 0);
  }

  void Calculate() {}

  void PrintResult() { dfs(0); }

 private:
  size_t n, m;
  std::vector<size_t> arr;

  void dfs(size_t depth) {
    if (depth == m) {
      for (auto target : arr) {
        std::cout << target << " ";
      }
      std::cout << "\n";
      return;
    }

    for (size_t i = 0; i < n; ++i) {
      if (depth > 0 && arr[depth - 1] > i + 1) {
        continue;
      }
      arr[depth] = i + 1;
      dfs(depth + 1);
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM4 n_and_m_4;
  n_and_m_4.SetInputs();
  n_and_m_4.Calculate();
  n_and_m_4.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15652_N_AND_M_4_H_
