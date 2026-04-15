#ifndef BOJ_32000_SRC_32801_GENERALIZED_FIZZBUZZ_H_
#define BOJ_32000_SRC_32801_GENERALIZED_FIZZBUZZ_H_

#include <iostream>

class GeneralizedFizzBuzz {
 public:
  void SetInputs() { std::cin >> n >> a >> b; }

  void Calculate() {
    fizz = 0;
    buzz = 0;
    fizzbuzz = 0;

    for (size_t i = 1; i <= n; ++i) {
      if (i % a == 0 && i % b == 0) {
        ++fizzbuzz;
      } else if (i % a == 0) {
        ++fizz;
      } else if (i % b == 0) {
        ++buzz;
      }
    }
  }

  void PrintResult() { std::cout << fizz << " " << buzz << " " << fizzbuzz; }

 private:
  size_t n, a, b;
  size_t fizz, buzz, fizzbuzz;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  GeneralizedFizzBuzz generalized_fizzbuzz;
  generalized_fizzbuzz.SetInputs();
  generalized_fizzbuzz.Calculate();
  generalized_fizzbuzz.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32801_GENERALIZED_FIZZBUZZ_H_
