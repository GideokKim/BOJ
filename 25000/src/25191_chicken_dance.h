#ifndef BOJ_25000_SRC_25191_CHICKEN_DANCE_H_
#define BOJ_25000_SRC_25191_CHICKEN_DANCE_H_

#include <iostream>
#include <vector>

class ChickenDance {
 public:
  void SetInputs() { std::cin >> n >> a >> b; }

  void Calculate() {
    size_t drink = a / 2 + b;
    result = n < drink ? n : drink;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, a, b;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  ChickenDance chicken_dance;
  chicken_dance.SetInputs();
  chicken_dance.Calculate();
  chicken_dance.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25191_CHICKEN_DANCE_H_
