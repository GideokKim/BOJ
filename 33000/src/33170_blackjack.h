#ifndef BOJ_33000_SRC_33170_BLACKJACK_H_
#define BOJ_33000_SRC_33170_BLACKJACK_H_

#include <iostream>

class Blackjack {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() {
    result = a + b + c <= 21 ? 1 : 0;
  }

  void PrintResult() { std::cout << result; }

 private:
  int a, b, c;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Blackjack blackjack;
  blackjack.SetInputs();
  blackjack.Calculate();
  blackjack.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33170_BLACKJACK_H_