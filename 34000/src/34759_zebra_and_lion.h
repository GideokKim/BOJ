#ifndef BOJ_34000_SRC_34759_ZEBRA_AND_LION_H_
#define BOJ_34000_SRC_34759_ZEBRA_AND_LION_H_

#include <iostream>

class ZebraAndLion {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = 2 * n; }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  ZebraAndLion zebra_and_lion;
  zebra_and_lion.SetInputs();
  zebra_and_lion.Calculate();
  zebra_and_lion.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34759_ZEBRA_AND_LION_H_
