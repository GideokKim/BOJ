#ifndef BOJ_15000_SRC_15651_N_AND_M_3_H_
#define BOJ_15000_SRC_15651_N_AND_M_3_H_

#include <iostream>
#include <vector>

class NAndM3 {
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
      arr[depth] = i + 1;
      dfs(depth + 1);
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM3 n_and_m_3;
  n_and_m_3.SetInputs();
  n_and_m_3.Calculate();
  n_and_m_3.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15651_N_AND_M_3_H_
