#ifndef BOJ_24000_SRC_24078_REMAINDER_H_
#define BOJ_24000_SRC_24078_REMAINDER_H_

#include <iostream>

class Remainder {
 public:
  void SetInputs() { std::cin >> x; }

  void Calculate() {}

  void PrintResult() const { std::cout << x % 21; }

 private:
  size_t x;
};

#ifdef BOJ_SUBMIT
int main() {
  Remainder remainder;
  remainder.SetInputs();
  remainder.Calculate();
  remainder.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24078_REMAINDER_H_
