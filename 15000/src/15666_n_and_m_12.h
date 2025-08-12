#ifndef BOJ_15000_SRC_15666_N_AND_M_12_H_
#define BOJ_15000_SRC_15666_N_AND_M_12_H_

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

class NAndM12 {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    numbers.resize(n, 0);
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
  std::set<std::vector<size_t>> results;

  void dfs(size_t depth) {
    if (depth == m) {
      results.insert(arr);
      return;
    }

    for (size_t i = 0; i < n; ++i) {
      if (depth > 0 && arr[depth - 1] > numbers[i]) {
        continue;
      }
      arr[depth] = numbers[i];
      dfs(depth + 1);
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM12 n_and_m_12;
  n_and_m_12.SetInputs();
  n_and_m_12.Calculate();
  n_and_m_12.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15666_N_AND_M_12_H_
