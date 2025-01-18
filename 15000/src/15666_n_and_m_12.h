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
    current_combination.resize(m);

    int number;
    std::set<int> numbers_set;
    for (int i = 0; i < n; i++) {
      std::cin >> number;
      numbers_set.insert(number);
    }
    std::copy(numbers_set.begin(), numbers_set.end(),
              std::back_inserter(numbers));
    n = numbers.size();
  }

  void GenerateCombinations(int index, int depth) {
    if (depth == m) {
      std::sort(current_combination.begin(), current_combination.end());
      result.insert(current_combination);
      return;
    }
    for (int i = index; i < n; i++) {
      current_combination[depth] = numbers[i];
      GenerateCombinations(i + 1, depth + 1);
    }
  }

  void PrintResult() {
    for (const auto& combination : result) {
      for (int num : combination) {
        std::cout << num << " ";
      }
      std::cout << "\n";
    }
  }

 private:
  int n;
  int m;
  std::vector<int> numbers;
  std::set<std::vector<int>> result;
  std::vector<int> current_combination;
};

#ifdef BOJ_SUBMIT
int main() {
  NAndM12 n_and_m_12;
  n_and_m_12.SetInputs();
  n_and_m_12.GenerateCombinations(0, 0);
  n_and_m_12.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15666_N_AND_M_12_H_
