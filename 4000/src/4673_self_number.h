#ifndef BOJ_4000_SRC_4673_SELF_NUMBER_H_
#define BOJ_4000_SRC_4673_SELF_NUMBER_H_

#include <algorithm>
#include <iostream>
#include <vector>

class SelfNumber {
 public:
  void SetInputs() {
    std::cin >> n;
    is_self_number.resize(n + 1, true);
  }

  void Calculate() {
    for (size_t i = 1; i <= n; i++) {
      size_t next = i + sumOfDigits(i);
      if (next <= n) {
        is_self_number[next] = false;
      }
    }
  }

  void PrintResult() {
    for (size_t i = 1; i <= n; i++) {
      if (is_self_number[i]) {
        std::cout << i << "\n";
      }
    }
  }

 private:
  size_t n;
  std::vector<bool> is_self_number;

  size_t sumOfDigits(size_t number) {
    size_t sum = 0;
    while (number > 0) {
      sum += number % 10;
      number /= 10;
    }
    return sum;
  }
};

#ifdef BOJ_SUBMIT

int main() {
  SelfNumber self_number;
  self_number.SetInputs();
  self_number.Calculate();
  self_number.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4673_SELF_NUMBER_H_
