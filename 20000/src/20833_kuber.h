#ifndef BOJ_20000_SRC_20833_KUBER_H_
#define BOJ_20000_SRC_20833_KUBER_H_

#include <iostream>

class Kuber {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = n * (n + 1) / 2;
    result *= result;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Kuber kuber;
  kuber.SetInputs();
  kuber.Calculate();
  kuber.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_20000_SRC_20833_KUBER_H_
