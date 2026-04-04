#ifndef BOJ_25000_SRC_25784_EASY_TO_SOLVE_EXPRESSIONS_H_
#define BOJ_25000_SRC_25784_EASY_TO_SOLVE_EXPRESSIONS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class EasyToSolveExpressions {
 public:
  void SetInputs() {
    inputs.resize(3);
    std::cin >> inputs[0] >> inputs[1] >> inputs[2];
  }

  void Calculate() {
    result = 3;

    std::sort(inputs.begin(), inputs.end());

    if (inputs[0] + inputs[1] == inputs[2]) {
      result = 1;
    } else if (inputs[0] * inputs[1] == inputs[2]) {
      result = 2;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> inputs;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  EasyToSolveExpressions easy_to_solve_expressions;
  easy_to_solve_expressions.SetInputs();
  easy_to_solve_expressions.Calculate();
  easy_to_solve_expressions.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25784_EASY_TO_SOLVE_EXPRESSIONS_H_
