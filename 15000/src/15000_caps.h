#ifndef BOJ_15000_SRC_15000_CAPS_H_
#define BOJ_15000_SRC_15000_CAPS_H_

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

class Caps {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
  }

  void PrintResult() { std::cout << input; }

 private:
  std::string input;
};

#ifdef BOJ_SUBMIT
int main() {
  Caps caps;
  caps.SetInputs();
  caps.Calculate();
  caps.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15000_CAPS_H_
