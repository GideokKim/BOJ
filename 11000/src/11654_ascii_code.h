#ifndef BOJ_11000_SRC_11654_ASCII_CODE_H_
#define BOJ_11000_SRC_11654_ASCII_CODE_H_

#include <iostream>

class AsciiCode {
 public:
  void SetInputs() { std::cin >> code; }

  void Calculate() { result = static_cast<int>(code); }

  void PrintResult() { std::cout << result; }

 private:
  char code;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  AsciiCode ascii_code;
  ascii_code.SetInputs();
  ascii_code.Calculate();
  ascii_code.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11654_ASCII_CODE_H_
