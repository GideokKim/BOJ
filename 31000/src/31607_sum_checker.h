#ifndef BOJ_31000_SRC_31607_SUM_CHECKER_H_
#define BOJ_31000_SRC_31607_SUM_CHECKER_H_

#include <iostream>

class SumChecker {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() {
    result = 0;
    if (a + b == c || a + c == b || b + c == a) {
      result = 1;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int a, b, c;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  SumChecker sum_checker;
  sum_checker.SetInputs();
  sum_checker.Calculate();
  sum_checker.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31607_SUM_CHECKER_H_
