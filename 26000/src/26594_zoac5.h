#ifndef BOJ_26000_SRC_26594_ZOAC5_H_
#define BOJ_26000_SRC_26594_ZOAC5_H_

#include <iostream>
#include <string>

class Zoac5 {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = 0;
    char first_char = input[0];
    for (auto target : input) {
      if (target != first_char) {
        return;
      }
      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Zoac5 zoac5;
  zoac5.SetInputs();
  zoac5.Calculate();
  zoac5.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26594_ZOAC5_H_
