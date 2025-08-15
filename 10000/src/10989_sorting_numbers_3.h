#ifndef BOJ_10000_SRC_10989_SORTING_NUMBERS_3_H_
#define BOJ_10000_SRC_10989_SORTING_NUMBERS_3_H_

#include <iostream>
#include <vector>

class SortingNumbers3 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(10001, 0);

    size_t index;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> index;
      ++numbers[index];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t index = 1; index < 10001; ++index) {
      for (size_t i = 0; i < numbers[index]; ++i) {
        std::cout << index << "\n";
      }
    }
  }

 private:
  std::vector<int> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SortingNumbers3 sorting_numbers_3;
  sorting_numbers_3.SetInputs();
  sorting_numbers_3.Calculate();
  sorting_numbers_3.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10989_SORTING_NUMBERS_3_H_
