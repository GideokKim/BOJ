#ifndef BOJ_31000_SRC_31668_SPECIAL_EGGPLANT_H_
#define BOJ_31000_SRC_31668_SPECIAL_EGGPLANT_H_

#include <iostream>

class SpecialEggplant {
 public:
  void SetInputs() { std::cin >> n >> m >> k; }

  void Calculate() { result = m / n * k; }

  void PrintResult() { std::cout << result; }

 private:
  long long n, m, k;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  SpecialEggplant special_eggplant;
  special_eggplant.SetInputs();
  special_eggplant.Calculate();
  special_eggplant.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31668_SPECIAL_EGGPLANT_H_