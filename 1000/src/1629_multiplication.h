#ifndef BOJ_1000_SRC_1629_MULTIPLICATION_H_
#define BOJ_1000_SRC_1629_MULTIPLICATION_H_

#include <iostream>
class Multiplication {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() {
    result = 1;
    while (b > 0) {
      if (b % 2 == 1) {
        result = (result * a) % c;
      }
      a = (a * a) % c;
      b /= 2;
    }
    result = result % c;
  }

  void PrintResult() { std::cout << result; }

 private:
  unsigned long long a, b, c;
  unsigned long long result;
};

#ifdef BOJ_SUBMIT

int main() {
  Multiplication multiplication;
  multiplication.SetInputs();
  multiplication.Calculate();
  multiplication.PrintResult();

  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1629_MULTIPLICATION_H_
