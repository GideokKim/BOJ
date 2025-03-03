#ifndef BOJ_31000_SRC_31746_SCICOMLOVE_H_
#define BOJ_31000_SRC_31746_SCICOMLOVE_H_

#include <iostream>
#include <vector>

class SciComLove {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    if (n % 2) {
      result = "evoLmoCicS";
    } else {
      result = "SciComLove";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string result;
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

#endif  // BOJ_31000_SRC_31746_SCICOMLOVE_H_
