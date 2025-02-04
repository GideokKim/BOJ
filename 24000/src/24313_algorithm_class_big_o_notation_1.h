#ifndef BOJ_24000_SRC_24313_ALGORITHM_CLASS_BIG_O_NOTATION_1_H_
#define BOJ_24000_SRC_24313_ALGORITHM_CLASS_BIG_O_NOTATION_1_H_

#include <iostream>

class AlgorithmClassBigONotation1 {
 public:
  void SetInputs() { std::cin >> a1 >> a0 >> c >> n0; }

  void Calculate() {
    if (a1 * n0 + a0 <= c * n0 && a1 <= c) {
      result = 1;
    } else {
      result = 0;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int a0, a1;
  int c, n0;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  AlgorithmClassBigONotation1 algorithm_class_big_o_notation_1;
  algorithm_class_big_o_notation_1.SetInputs();
  algorithm_class_big_o_notation_1.Calculate();
  algorithm_class_big_o_notation_1.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24313_ALGORITHM_CLASS_BIG_O_NOTATION_1_H_
