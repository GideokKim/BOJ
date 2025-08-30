#ifndef BOJ_17000_SRC_17466_N_FACTORIAL_MOD_P_1_H_
#define BOJ_17000_SRC_17466_N_FACTORIAL_MOD_P_1_H_

#include <iostream>

class NFactorialModP1 {
 public:
  void SetInputs() { std::cin >> n >> p; }

  void Calculate() {
    result = 1;
    for (size_t i = 2; i <= n; ++i) {
      result *= i;
      result %= p;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, p;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  NFactorialModP1 n_factorial_mod_p_1;
  n_factorial_mod_p_1.SetInputs();
  n_factorial_mod_p_1.Calculate();
  n_factorial_mod_p_1.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17466_N_FACTORIAL_MOD_P_1_H_
