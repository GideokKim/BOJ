#ifndef BOJ_23000_SRC_23795_GAMBLING_SHOULD_BE_FUN_H_
#define BOJ_23000_SRC_23795_GAMBLING_SHOULD_BE_FUN_H_

#include <iostream>

class GamblingShouldBeFun {
 public:
  void SetInputs() {}

  void Calculate() {
    result = 0;

    long long number = 0;
    while (number != -1) {
      std::cin >> number;
      if (number == -1) {
        break;
      }
      result += number;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  GamblingShouldBeFun gambling_should_be_fun;
  gambling_should_be_fun.SetInputs();
  gambling_should_be_fun.Calculate();
  gambling_should_be_fun.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23795_GAMBLING_SHOULD_BE_FUN_H_
