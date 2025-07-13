#ifndef BOJ_2000_SRC_2947_WOOD_STICKS_H_
#define BOJ_2000_SRC_2947_WOOD_STICKS_H_

#include <iostream>
#include <vector>

class WoodSticks {
 public:
  void SetInputs() {
    sticks.resize(5);
    for (auto& stick : sticks) {
      std::cin >> stick;
    }
    result.emplace_back(1);
    result.emplace_back(2);
    result.emplace_back(3);
    result.emplace_back(4);
    result.emplace_back(5);
  }

  void Calculate() {
    while (true) {
      int count = 0;
      for (size_t i = 0; i < 4; ++i) {
        if (sticks[i] > sticks[i + 1]) {
          int temp = sticks[i];
          sticks[i] = sticks[i + 1];
          sticks[i + 1] = temp;

          for (auto& stick : sticks) {
            std::cout << stick << " ";
          }
          std::cout << "\n";
        }

        for (size_t i = 0; i < 5; ++i) {
          if (result[i] == sticks[i]) {
            ++count;
          } else {
            break;
          }
        }

        if (count == 5) {
          return;
        }
      }
    }
  }

  void PrintResult() {}

 private:
  std::vector<int> sticks;
  std::vector<int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  WoodSticks wood_sticks;
  wood_sticks.SetInputs();
  wood_sticks.Calculate();
  wood_sticks.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2947_WOOD_STICKS_H_
