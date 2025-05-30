#ifndef BOJ_5000_SRC_5622_DIAL_H_
#define BOJ_5000_SRC_5622_DIAL_H_

#include <iostream>
#include <string>

class DialProblem {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = 0;
    for (auto& target : input) {
      if (target <= 'C') {
        result += 3;
      } else if (target <= 'F') {
        result += 4;
      } else if (target <= 'I') {
        result += 5;
      } else if (target <= 'L') {
        result += 6;
      } else if (target <= 'O') {
        result += 7;
      } else if (target <= 'S') {
        result += 8;
      } else if (target <= 'V') {
        result += 9;
      } else {
        result += 10;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  DialProblem dial_problem;
  dial_problem.SetInputs();
  dial_problem.Calculate();
  dial_problem.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5622_DIAL_H_
