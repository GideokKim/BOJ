#ifndef BOJ_20000_SRC_20976_THE_SECOND_LARGEST_INTEGER_H_
#define BOJ_20000_SRC_20976_THE_SECOND_LARGEST_INTEGER_H_

#include <algorithm>
#include <iostream>
#include <vector>

class TheSecondLargestInteger {
 public:
  void SetInputs() {
    numbers.resize(3);
    for (int i = 0; i < 3; i++) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {
    std::sort(numbers.begin(), numbers.end());
    result = numbers[1];
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> numbers;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  TheSecondLargestInteger the_second_largest_integer;
  the_second_largest_integer.SetInputs();
  the_second_largest_integer.Calculate();
  the_second_largest_integer.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_20000_SRC_20976_THE_SECOND_LARGEST_INTEGER_H_
