#ifndef BOJ_2000_SRC_2752_THREE_NUMBER_SORTING_H_
#define BOJ_2000_SRC_2752_THREE_NUMBER_SORTING_H_

#include <algorithm>
#include <iostream>
#include <vector>

class ThreeNumberSorting {
 public:
  void SetInputs() {
    numbers.resize(3);
    for (int i = 0; i < 3; i++) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() { std::sort(numbers.begin(), numbers.end()); }

  void PrintResult() {
    for (int i = 0; i < 3; i++) {
      std::cout << numbers[i] << ' ';
    }
  }

 private:
  std::vector<int> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  ThreeNumberSorting three_number_sorting;
  three_number_sorting.SetInputs();
  three_number_sorting.Calculate();
  three_number_sorting.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2752_THREE_NUMBER_SORTING_H_
