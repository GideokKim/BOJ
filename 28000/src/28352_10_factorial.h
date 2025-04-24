#ifndef BOJ_28000_SRC_28352_10_FACTORIAL_H_
#define BOJ_28000_SRC_28352_10_FACTORIAL_H_

#include <iostream>

class Factorial {
 public:
  void SetInputs() {
    std::cin >> n;
    std::cin.ignore();
  }

  void Calculate() {
    result = 6;
    for (size_t i = 11; i <= n; ++i) {
      result *= i;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Factorial factorial;
  factorial.SetInputs();
  factorial.Calculate();
  factorial.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28352_10_FACTORIAL_H_
