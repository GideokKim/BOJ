#ifndef BOJ_33000_SRC_33169_MONEY_ON_ME_H_
#define BOJ_33000_SRC_33169_MONEY_ON_ME_H_

#include <iostream>

class MoneyOnMe {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void PrintResult() { std::cout << a * 1000 + b * 10000; }

 private:
  int a;
  int b;
};

#ifdef BOJ_SUBMIT
int main() {
  MoneyOnMe money_on_me;
  money_on_me.SetInputs();
  money_on_me.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33169_MONEY_ON_ME_H_