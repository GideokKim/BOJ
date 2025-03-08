#ifndef BOJ_26000_SRC_26082_WARBOY_H_
#define BOJ_26000_SRC_26082_WARBOY_H_

#include <iostream>

class Warboy {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() { result = b / a * c * 3; }

  void PrintResult() { std::cout << result; }

 private:
  int a, b, c;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Warboy warboy;
  warboy.SetInputs();
  warboy.Calculate();
  warboy.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26082_WARBOY_H_
