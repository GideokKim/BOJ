#ifndef BOJ_14000_SRC_14730_SMALL_H_
#define BOJ_14000_SRC_14730_SMALL_H_

#include <iostream>

class Small {
 public:
  void SetInputs() {
    result = 0;
    int degree = 0;
    std::cin >> degree;

    long long coefficient = 0;
    long long x_power = 0;
    for (int i = 0; i < degree; ++i) {
      std::cin >> coefficient >> x_power;
      result += coefficient * x_power;
    }
  }

  void Calculate() {}

  void PrintResult() { std::cout << result; }

 private:
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Small small;
  small.SetInputs();
  small.Calculate();
  small.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14730_SMALL_H_
