#ifndef BOJ_13000_SRC_13597_TRI_DU_H_
#define BOJ_13000_SRC_13597_TRI_DU_H_

#include <iostream>

class TriDu {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    if (a > b) {
      int temp = a;
      a = b;
      b = temp;
    }
    result = b;
  }

  void PrintResult() { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  TriDu tri_du;
  tri_du.SetInputs();
  tri_du.Calculate();
  tri_du.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13597_TRI_DU_H_
