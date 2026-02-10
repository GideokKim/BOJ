#ifndef BOJ_32000_SRC_32326_CONVEYOR_BELT_SUSHI_H_
#define BOJ_32000_SRC_32326_CONVEYOR_BELT_SUSHI_H_

#include <iostream>

class ConveyorBeltSushi {
 public:
  void SetInputs() { std::cin >> r >> g >> b; }

  void Calculate() { result = r * 3 + g * 4 + b * 5; }

  void PrintResult() { std::cout << result; }

 private:
  size_t r, g, b;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ConveyorBeltSushi conveyor_belt_sushi;
  conveyor_belt_sushi.SetInputs();
  conveyor_belt_sushi.Calculate();
  conveyor_belt_sushi.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32326_CONVEYOR_BELT_SUSHI_H_
