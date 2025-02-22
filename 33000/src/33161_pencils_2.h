#ifndef BOJ_33000_SRC_33161_PENCILS_2_H_
#define BOJ_33000_SRC_33161_PENCILS_2_H_

#include <iostream>

class Pencils2 {
 public:
  void SetInputs() { std::cin >> a; }

  void Calculate() { result = a / 5; }

  void PrintResult() { std::cout << result; }

 private:
  int a;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Pencils2 pencils2;
  pencils2.SetInputs();
  pencils2.Calculate();
  pencils2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33161_PENCILS_2_H_
