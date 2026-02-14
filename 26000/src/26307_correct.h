#ifndef BOJ_26000_SRC_26307_CORRECT_H_
#define BOJ_26000_SRC_26307_CORRECT_H_

#include <iostream>

class Correct {
 public:
  void SetInputs() { std::cin >> hh >> mm; }

  void Calculate() { result = (hh - 9) * 60 + mm; }

  void PrintResult() { std::cout << result; }

 private:
  size_t hh, mm;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Correct correct;
  correct.SetInputs();
  correct.Calculate();
  correct.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26307_CORRECT_H_
