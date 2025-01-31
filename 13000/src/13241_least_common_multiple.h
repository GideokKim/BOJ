#ifndef BOJ_13000_SRC_13241_LEAST_COMMON_MULTIPLE_H_
#define BOJ_13000_SRC_13241_LEAST_COMMON_MULTIPLE_H_

#include <algorithm>
#include <iostream>

class LeastCommonMultiple {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    result = a * b;
    if (a < b) {
      std::swap(a, b);
    }

    long long gcd = a;
    while (b != 0) {
      long long temp = gcd % b;
      gcd = b;
      b = temp;
    }

    result /= gcd;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long a, b;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  LeastCommonMultiple least_common_multiple;
  least_common_multiple.SetInputs();
  least_common_multiple.Calculate();
  least_common_multiple.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13241_LEAST_COMMON_MULTIPLE_H_
