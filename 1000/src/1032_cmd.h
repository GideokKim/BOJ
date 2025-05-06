#ifndef BOJ_1000_SRC_1032_CMD_H_
#define BOJ_1000_SRC_1032_CMD_H_

#include <iostream>
#include <string>
#include <vector>

class Cmd {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    inputs.resize(n);
    for (size_t i = 0; i < n; i++) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    result = inputs[0];
    for (size_t index = 1; index < inputs.size(); index++) {
      for (size_t i = 0; i < inputs[index].size(); i++) {
        if (result[i] != inputs[index][i]) {
          result[i] = '?';
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  std::string result;
};

#ifdef BOJ_SUBMIT

int main() {
  Cmd cmd;
  cmd.SetInputs();
  cmd.Calculate();
  cmd.PrintResult();

  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1032_CMD_H_
