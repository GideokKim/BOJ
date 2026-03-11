#ifndef BOJ_31000_SRC_31495_WHAT_IS_THIS_CODE_H_
#define BOJ_31000_SRC_31495_WHAT_IS_THIS_CODE_H_

#include <iostream>
#include <string>

class WhatIsThisCode {
 public:
  void SetInputs() { std::getline(std::cin, input); }

  void Calculate() {
    result = "CE";
    if (input.size() <= 2) {
      return;
    }

    if (input[0] == '"' && input.back() == '"') {
      result = input.substr(1, input.size() - 2);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  WhatIsThisCode whatIsThisCode;
  whatIsThisCode.SetInputs();
  whatIsThisCode.Calculate();
  whatIsThisCode.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31495_WHAT_IS_THIS_CODE_H_
