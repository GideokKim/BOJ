#ifndef BOJ_21000_SRC_21598_SCICOMLOVE_H_
#define BOJ_21000_SRC_21598_SCICOMLOVE_H_

#include <iostream>

class SciComLove {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < n; ++i) {
      std::cout << "SciComLove" << "\n";
    }
  }

 private:
  size_t n;
};

#ifdef BOJ_SUBMIT
int main() {
  SciComLove scicom_love;
  scicom_love.SetInputs();
  scicom_love.Calculate();
  scicom_love.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_21598_SCICOMLOVE_H_
