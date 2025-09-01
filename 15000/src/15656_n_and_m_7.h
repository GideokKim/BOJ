#ifndef BOJ_15000_SRC_15656_N_AND_M_7_H_
#define BOJ_15000_SRC_15656_N_AND_M_7_H_

#include <algorithm>
#include <iostream>
#include <vector>

class NAndM7 {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    numbers.resize(n, 0);
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

  void dfs(size_t depth) {
    if (depth == m) {
      for (auto target : arr) {
        std::cout << numbers[target] << " ";
      }
      std::cout << "\n";
      return;
    }

    for (size_t i = 0; i < n; ++i) {
      arr[depth] = i;
      dfs(depth + 1);
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM7 n_and_m_7;
  n_and_m_7.SetInputs();
  n_and_m_7.Calculate();
  n_and_m_7.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15656_N_AND_M_7_H_
