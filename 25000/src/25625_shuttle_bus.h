#ifndef BOJ_25000_SRC_25625_SHUTTLE_BUS_H_
#define BOJ_25000_SRC_25625_SHUTTLE_BUS_H_

#include <iostream>

class ShuttleBus {
 public:
  void SetInputs() { std::cin >> x >> y; }

  void Calculate() {
    if (x > y) {
      result = x + y;
    } else {
      result = y - x;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int x, y;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ShuttleBus shuttle_bus;
  shuttle_bus.SetInputs();
  shuttle_bus.Calculate();
  shuttle_bus.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25625_SHUTTLE_BUS_H_
