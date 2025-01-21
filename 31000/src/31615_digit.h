#ifndef BOJ_31000_SRC_31615_DIGIT_H_
#define BOJ_31000_SRC_31615_DIGIT_H_

#include <iostream>
#include <string>

class Digit {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void PrintResult() { std::cout << std::to_string(a + b).size(); }

 private:
  int a;
  int b;
};

#ifdef BOJ_SUBMIT
int main() {
  Digit digit;
  digit.SetInputs();
  digit.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31615_DIGIT_H_