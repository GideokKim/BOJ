#ifndef BOJ_25000_SRC_25238_GAHEE_DEFENCE_RATE_H_
#define BOJ_25000_SRC_25238_GAHEE_DEFENCE_RATE_H_

#include <iostream>

class GaheeDefenceRate {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = a * (100 - b) / 100 >= 100 ? 0 : 1; }

  void PrintResult() { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  GaheeDefenceRate gahee_defence_rate;
  gahee_defence_rate.SetInputs();
  gahee_defence_rate.Calculate();
  gahee_defence_rate.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25238_GAHEE_DEFENCE_RATE_H_
