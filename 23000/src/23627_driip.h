#ifndef BOJ_23000_SRC_23627_DRIIP_H_
#define BOJ_23000_SRC_23627_DRIIP_H_

#include <iostream>
#include <string>

class Driip {
 public:
  void SetInputs() { std::cin >> input_string; }

  void Calculate() {
    result = "not cute";
    if (input_string.size() < 5) {
      return;
    }

    std::string postfix = input_string.substr(input_string.size() - 5, 5);

    if (postfix == "driip") {
      result = "cute";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input_string;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Driip driip;
  driip.SetInputs();
  driip.Calculate();
  driip.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23627_DRIIP_H_
