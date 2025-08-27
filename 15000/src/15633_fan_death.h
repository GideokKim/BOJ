#ifndef BOJ_15000_SRC_15633_FAN_DEATH_H_
#define BOJ_15000_SRC_15633_FAN_DEATH_H_

#include <iostream>

class FanDeath {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 1;
    for (long long num = 2; num <= n; ++num) {
      if (n % num) {
        continue;
      }
      result += num;
    }
    result *= 5;
    result -= 24;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  FanDeath fan_death;
  fan_death.SetInputs();
  fan_death.Calculate();
  fan_death.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15633_FAN_DEATH_H_
