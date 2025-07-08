#ifndef BOJ_24000_SRC_24075_CALCULATION_H_
#define BOJ_24000_SRC_24075_CALCULATION_H_

#include <iostream>

class Calculation {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    min = a - b;
    max = a + b;
    if (min > max) {
      int temp = min;
      min = max;
      max = temp;
    }
  }

  void PrintResult() const { std::cout << max << "\n" << min; }

 private:
  int a, b;
  int min, max;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Calculation calculation;
  calculation.SetInputs();
  calculation.Calculate();
  calculation.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24075_CALCULATION_H_
