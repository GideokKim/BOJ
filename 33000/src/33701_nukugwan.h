#ifndef BOJ_33000_SRC_33701_NUKUGWAN_H_
#define BOJ_33000_SRC_33701_NUKUGWAN_H_

#include <iostream>

class Nukugwan {
 public:
  void SetInputs() {}

  void Calculate() {}

  void PrintResult() { std::cout << "nukugwan"; }
};

#ifdef BOJ_SUBMIT
int main() {
  Nukugwan nukugwan;
  nukugwan.SetInputs();
  nukugwan.Calculate();
  nukugwan.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33701_NUKUGWAN_H_
