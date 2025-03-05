#ifndef BOJ_24000_SRC_24228_CHOPSTICKS_H_
#define BOJ_24000_SRC_24228_CHOPSTICKS_H_

#include <iostream>

class Chopsticks {
 public:
  void SetInputs() { std::cin >> n >> r; }

  void Calculate() { result = n + 2 * r - 1; }

  void PrintResult() const { std::cout << result; }

 private:
  long long n, r;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Chopsticks chopsticks;
  chopsticks.SetInputs();
  chopsticks.Calculate();
  chopsticks.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24228_CHOPSTICKS_H_
