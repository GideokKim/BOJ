#ifndef BOJ_5000_SRC_5613_CALCULATOR_PROGRAM_H_
#define BOJ_5000_SRC_5613_CALCULATOR_PROGRAM_H_

#include <iostream>
#include <string>
#include <vector>

class CalculatorProgram {
 public:
  void SetInputs() {
    std::string target;
    while (target != "=") {
      std::cin >> target;
      inputs.emplace_back(target);
    }
  }

  void Calculate() {
    result = std::stoll(inputs[0]);
    for (size_t i = 1; i < inputs.size(); i += 2) {
      auto& target = inputs[i];
      if (target == "=") {
        break;
      }

      if (target == "+") {
        result += std::stoll(inputs[i + 1]);
      } else if (target == "-") {
        result -= std::stoll(inputs[i + 1]);
      } else if (target == "*") {
        result *= std::stoll(inputs[i + 1]);
      } else if (target == "/") {
        result /= std::stoll(inputs[i + 1]);
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  CalculatorProgram calculator_program;
  calculator_program.SetInputs();
  calculator_program.Calculate();
  calculator_program.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5613_CALCULATOR_PROGRAM_H_
