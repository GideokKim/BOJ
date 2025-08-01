#ifndef BOJ_32000_SRC_32651_WHAT_IS_HUMAN_H_
#define BOJ_32000_SRC_32651_WHAT_IS_HUMAN_H_

#include <iostream>
#include <string>

class WhatIsHuman {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    if (input > 100000) {
      result = "No";
      return;
    }
    result = input % 2024 ? "No" : "Yes";
  }

  void PrintResult() { std::cout << result; }

 private:
  long long input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  WhatIsHuman whatIsHuman;
  whatIsHuman.SetInputs();
  whatIsHuman.Calculate();
  whatIsHuman.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32651_WHAT_IS_HUMAN_H_
