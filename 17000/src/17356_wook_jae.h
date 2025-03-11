#ifndef BOJ_17000_SRC_17356_WOOK_JAE_H_
#define BOJ_17000_SRC_17356_WOOK_JAE_H_

#include <cmath>
#include <iomanip>
#include <iostream>

class WookJae {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = 1 / (1 + std::pow(10, (b - a) / 400.0)); }

  void PrintResult() {
    std::cout << std::fixed << std::setprecision(6) << result;
  }

 private:
  int a, b;
  double result;
};

#ifdef BOJ_SUBMIT
int main() {
  WookJae wook_jae;
  wook_jae.SetInputs();
  wook_jae.Calculate();
  wook_jae.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17356_WOOK_JAE_H_