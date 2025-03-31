#ifndef BOJ_31000_SRC_31610_DROPS_PACKING_H_
#define BOJ_31000_SRC_31610_DROPS_PACKING_H_

#include <iostream>

class DropsPacking {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() { result = a * b + c; }

  void PrintResult() { std::cout << result; }

 private:
  int a, b, c;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  DropsPacking drops_packing;
  drops_packing.SetInputs();
  drops_packing.Calculate();
  drops_packing.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31610_DROPS_PACKING_H_
