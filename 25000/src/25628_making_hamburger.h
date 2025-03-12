#ifndef BOJ_25000_SRC_25628_MAKING_HAMBURGER_H_
#define BOJ_25000_SRC_25628_MAKING_HAMBURGER_H_

#include <iostream>

class MakingHamburger {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = a / 2 < b ? a / 2 : b; }

  void PrintResult() { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  MakingHamburger making_hamburger;
  making_hamburger.SetInputs();
  making_hamburger.Calculate();
  making_hamburger.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25628_MAKING_HAMBURGER_H_
