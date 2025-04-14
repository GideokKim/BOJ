#ifndef BOJ_10000_SRC_10817_THREE_NUMBERS_H_
#define BOJ_10000_SRC_10817_THREE_NUMBERS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class ThreeNumbers {
 public:
  void SetInputs() {
    numbers.resize(3);
    for (size_t i = 0; i < 3; ++i) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() { std::sort(numbers.begin(), numbers.end()); }

  void PrintResult() { std::cout << numbers[1]; }

 private:
  std::vector<long long> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ThreeNumbers three_numbers;
  three_numbers.SetInputs();
  three_numbers.Calculate();
  three_numbers.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10817_THREE_NUMBERS_H_
