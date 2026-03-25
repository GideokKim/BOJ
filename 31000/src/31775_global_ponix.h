#ifndef BOJ_31000_SRC_31775_GLOBAL_PONIX_H_
#define BOJ_31000_SRC_31775_GLOBAL_PONIX_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class GlobalPonix {
 public:
  void SetInputs() {
    string_inputs.resize(3);
    for (auto& string_input : string_inputs) {
      std::cin >> string_input;
    }
  }

  void Calculate() {
    std::sort(string_inputs.begin(), string_inputs.end());
    result = "GLOBAL";
    if (string_inputs[0][0] != 'k' || string_inputs[1][0] != 'l' ||
        string_inputs[2][0] != 'p') {
      result = "PONIX";
      return;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> string_inputs;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  GlobalPonix global_ponix;
  global_ponix.SetInputs();
  global_ponix.Calculate();
  global_ponix.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31775_GLOBAL_PONIX_H_
