#ifndef BOJ_27000_SRC_27433_FACTORIAL_2_H_
#define BOJ_27000_SRC_27433_FACTORIAL_2_H_

#include <iostream>

class Factorial2 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 1;
    if (n == 0) {
      return;
    }

    for (unsigned long long i = 1; i <= n; i++) {
      result *= i;
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  unsigned long long n;
  unsigned long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Factorial2 factorial2;
  factorial2.SetInputs();
  factorial2.Calculate();
  factorial2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27433_FACTORIAL_2_H_
