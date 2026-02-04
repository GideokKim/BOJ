#ifndef BOJ_23000_SRC_23303_THIS_PROBLEM_IS_D2_H_
#define BOJ_23000_SRC_23303_THIS_PROBLEM_IS_D2_H_

#include <iostream>
#include <string>

class ThisProblemIsD2 {
 public:
  void SetInputs() { std::getline(std::cin, input); }

  void Calculate() {
    result = "unrated";

    if (input.find("D2") != std::string::npos ||
        input.find("d2") != std::string::npos) {
      result = "D2";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  ThisProblemIsD2 this_problem_is_d2;
  this_problem_is_d2.SetInputs();
  this_problem_is_d2.Calculate();
  this_problem_is_d2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23303_THIS_PROBLEM_IS_D2_H_
