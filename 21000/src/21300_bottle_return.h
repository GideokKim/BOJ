#ifndef BOJ_21000_SRC_21300_BOTTLE_RETURN_H_
#define BOJ_21000_SRC_21300_BOTTLE_RETURN_H_

#include <iostream>
#include <vector>

class BottleReturn {
 public:
  void SetInputs() {
    bottles.resize(6, 0);
    for (size_t i = 0; i < 6; ++i) {
      std::cin >> bottles[i];
    }
  }

  void Calculate() {
    result = 0;
    for (auto bottle : bottles) {
      result += bottle;
    }

    result *= 5;
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> bottles;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  BottleReturn bottle_return;
  bottle_return.SetInputs();
  bottle_return.Calculate();
  bottle_return.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_21300_BOTTLE_RETURN_H_
