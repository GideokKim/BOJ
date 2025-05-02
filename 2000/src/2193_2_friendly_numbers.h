#ifndef BOJ_2000_SRC_2193_2_FRIENDLY_NUMBERS_H_
#define BOJ_2000_SRC_2193_2_FRIENDLY_NUMBERS_H_

#include <iostream>
#include <vector>

class FriendlyNumbers {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    if (n == 1 || n == 2) {
      result = 1;
      return;
    }
    size_t prev = 1;
    size_t current = 1;
    for (size_t i = 3; i <= n; i++) {
      size_t temp = current;
      current = prev + current;
      prev = temp;
    }
    result = current;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  FriendlyNumbers friendly_numbers;
  friendly_numbers.SetInputs();
  friendly_numbers.Calculate();
  friendly_numbers.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2193_2_FRIENDLY_NUMBERS_H_
