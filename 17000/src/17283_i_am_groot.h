#ifndef BOJ_17000_SRC_17283_I_AM_GROOT_H_
#define BOJ_17000_SRC_17283_I_AM_GROOT_H_

#include <iostream>

class IAmGroot {
 public:
  void SetInputs() { std::cin >> l >> r; }

  void Calculate() {
    result = 0;
    l = l * r / 100;
    long long shift = 1;
    while (l > 5) {
      result += (l << shift);
      ++shift;
      l = l * r / 100;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long l, r;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  IAmGroot i_am_groot;
  i_am_groot.SetInputs();
  i_am_groot.Calculate();
  i_am_groot.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17283_I_AM_GROOT_H_