#ifndef BOJ_31000_SRC_31561_CLOCK_TOWER_H_
#define BOJ_31000_SRC_31561_CLOCK_TOWER_H_

#include <iostream>

class ClockTower {
 public:
  void SetInputs() { std::cin >> m; }

  void Calculate() {
    std::cout.precision(1);
    std::cout << std::fixed;

    result = m <= 30 ? static_cast<double>(m) / 2.0 : 15.0;

    m -= 30;

    if (m > 0) {
      result += static_cast<double>(m) * 3.0 / 2.0;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int m;
  double result;
};

#ifdef BOJ_SUBMIT
int main() {
  ClockTower clockTower;
  clockTower.SetInputs();
  clockTower.Calculate();
  clockTower.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31561_CLOCK_TOWER_H_
