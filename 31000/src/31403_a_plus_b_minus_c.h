#ifndef BOJ_31000_SRC_31403_A_PLUS_B_MINUS_C_H_
#define BOJ_31000_SRC_31403_A_PLUS_B_MINUS_C_H_

#include <iostream>
#include <string>

class APlusBMinusC {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() {
    result1 = a + b - c;
    result2 = std::stoi(std::to_string(a) + std::to_string(b)) - c;
  }

  void PrintResult() { std::cout << result1 << '\n' << result2; }

 private:
  int a, b, c;
  int result1, result2;
};

#ifdef BOJ_SUBMIT
int main() {
  APlusBMinusC a_plus_b_minus_c;
  a_plus_b_minus_c.SetInputs();
  a_plus_b_minus_c.Calculate();
  a_plus_b_minus_c.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31403_A_PLUS_B_MINUS_C_H_
