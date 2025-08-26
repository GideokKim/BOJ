#ifndef BOJ_15000_SRC_15657_N_AND_M_8_H_
#define BOJ_15000_SRC_15657_N_AND_M_8_H_

#include <algorithm>
#include <iostream>
#include <vector>

class NAndM8 {
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
      if (depth > 0 && arr[depth - 1] > i) {
        continue;
      }
      arr[depth] = i;
      dfs(depth + 1);
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM8 n_and_m_8;
  n_and_m_8.SetInputs();
  n_and_m_8.Calculate();
  n_and_m_8.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15657_N_AND_M_8_H_
