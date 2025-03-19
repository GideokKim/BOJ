#ifndef BOJ_33000_SRC_33515_THREE_NOTEBOOKS_H_
#define BOJ_33000_SRC_33515_THREE_NOTEBOOKS_H_

#include <iostream>

class ThreeNotebooks {
 public:
  void SetInputs() { std::cin >> t1 >> t2; }

  void Calculate() { result = t1 <= t2 ? t1 : t2; }

  void PrintResult() { std::cout << result; }

 private:
  int t1, t2;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  ThreeNotebooks three_notebooks;
  three_notebooks.SetInputs();
  three_notebooks.Calculate();
  three_notebooks.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33515_THREE_NOTEBOOKS_H_
