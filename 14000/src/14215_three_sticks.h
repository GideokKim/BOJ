#ifndef BOJ_14000_SRC_14215_THREE_STICKS_H_
#define BOJ_14000_SRC_14215_THREE_STICKS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class ThreeSticks {
 public:
  void SetInputs() {
    sticks.resize(3, 0);
    for (auto& target : sticks) {
      std::cin >> target;
    }
  }

  void Calculate() {
    std::sort(sticks.begin(), sticks.end());
    if (sticks[0] == sticks[2]) {
      result = 3 * sticks[0];
    } else if (sticks[0] + sticks[1] <= sticks[2]) {
      result = 2 * (sticks[0] + sticks[1]) - 1;
    } else {
      result = sticks[0] + sticks[1] + sticks[2];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> sticks;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  ThreeSticks three_sticks;
  three_sticks.SetInputs();
  three_sticks.Calculate();
  three_sticks.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14215_THREE_STICKS_H_
