#ifndef BOJ_1000_SRC_1629_MULTIPLICATION_H_
#define BOJ_1000_SRC_1629_MULTIPLICATION_H_

class Multiplication {
 public:
  Multiplication(unsigned long long input_A, unsigned long long input_B,
                 unsigned long long input_C)
      : A(input_A), B(input_B), C(input_C) {}

  unsigned long long Calculate() {
    unsigned long long result = 1;
    while (B > 0) {
      if (B % 2 == 1) {
        result = (result * A) % C;
      }
      A = (A * A) % C;
      B /= 2;
    }
    return result;
  }

 private:
  unsigned long long A;
  unsigned long long B;
  unsigned long long C;
};

#ifdef BOJ_SUBMIT
#include <iostream>

int main() {
  unsigned long long A, B, C;
  std::cin >> A >> B >> C;

  Multiplication multiplication(A, B, C);

  unsigned long long result = multiplication.Calculate();
  std::cout << result << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1629_MULTIPLICATION_H_
