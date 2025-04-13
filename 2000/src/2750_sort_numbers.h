#ifndef BOJ_2000_SRC_2750_SORT_NUMBERS_H_
#define BOJ_2000_SRC_2750_SORT_NUMBERS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class SortNumbers {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(n);
    for (int i = 0; i < n; i++) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() { std::sort(numbers.begin(), numbers.end()); }

  void PrintResult() {
    for (int i = 0; i < numbers.size(); i++) {
      std::cout << numbers[i] << '\n';
    }
  }

 private:
  std::vector<int> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  SortNumbers sort_numbers;
  sort_numbers.SetInputs();
  sort_numbers.Calculate();
  sort_numbers.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2750_SORT_NUMBERS_H_
