#ifndef BOJ_14000_SRC_14579_ADD_AND_MUL_H_
#define BOJ_14000_SRC_14579_ADD_AND_MUL_H_

#include <iostream>

class AddAndMul {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    result = 1;
    long long sum;
    for (long long num = a; num <= b; ++num) {
      sum = (num * (num + 1) / 2) % 14579;
      result = (result * sum) % 14579;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long a, b;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  AddAndMul add_and_mul;
  add_and_mul.SetInputs();
  add_and_mul.Calculate();
  add_and_mul.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14579_ADD_AND_MUL_H_
