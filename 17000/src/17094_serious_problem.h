#ifndef BOJ_17000_SRC_17094_SERIOUS_PROBLEM_H_
#define BOJ_17000_SRC_17094_SERIOUS_PROBLEM_H_

#include <algorithm>
#include <iostream>
#include <string>

class SeriousProblem {
 public:
  void SetInputs() {
    int n;
    std::cin >> n >> input;
  }

  void Calculate() {
    auto count_e = std::count(input.begin(), input.end(), 'e');
    auto count_2 = std::count(input.begin(), input.end(), '2');

    if (count_e > count_2) {
      result = "e";
    } else if (count_e < count_2) {
      result = "2";
    } else {
      result = "yee";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  SeriousProblem serious_problem;
  serious_problem.SetInputs();
  serious_problem.Calculate();
  serious_problem.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17094_SERIOUS_PROBLEM_H_