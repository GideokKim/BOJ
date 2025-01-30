#ifndef BOJ_31000_SRC_31615_DIGIT_H_
#define BOJ_31000_SRC_31615_DIGIT_H_

#include <iostream>
#include <string>

class Digit {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = std::to_string(a + b).size(); }

  void PrintResult() { std::cout << result; }

 private:
  int a, b;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Digit digit;
  digit.SetInputs();
  digit.Calculate();
  digit.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31615_DIGIT_H_