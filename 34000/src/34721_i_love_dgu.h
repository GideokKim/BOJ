#ifndef BOJ_34000_SRC_34721_I_LOVE_DGU_H_
#define BOJ_34000_SRC_34721_I_LOVE_DGU_H_

#include <iostream>

class ILoveDgu {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < n; ++i) {
      std::cout << "I love DGU\n";
    }
  }

 private:
  size_t n;
};

#ifdef BOJ_SUBMIT
int main() {
  ILoveDgu i_love_dgu;
  i_love_dgu.SetInputs();
  i_love_dgu.Calculate();
  i_love_dgu.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34721_I_LOVE_DGU_H_
