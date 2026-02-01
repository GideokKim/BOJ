#ifndef BOJ_2000_SRC_2484_FOUR_DICES_H_
#define BOJ_2000_SRC_2484_FOUR_DICES_H_

#include <iostream>
#include <vector>

class FourDices {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    dices.resize(n, std::vector<int>(7, 0));
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < 4; ++j) {
        size_t index;
        std::cin >> index;
        ++dices[i][index];
      }
    }
  }

  void Calculate() {
    result = 0;
    for (const auto& dice : dices) {
      int max = 0;
      int max_index = 0;
      int min = 5;
      for (size_t i = 1; i < 7; ++i) {
        if (max < dice[i]) {
          max = dice[i];
          max_index = static_cast<int>(i);
        }
        if (dice[i] && min > dice[i]) {
          min = dice[i];
        }
      }

      int reward;
      if (max == 4) {
        reward = 50000 + max_index * 5000;
      } else if (max == 3) {
        reward = 10000 + max_index * 1000;
      } else if (max == 2) {
        int bonus;
        if (min == 2) {
          reward = 2000;
          bonus = 500;
        } else {
          reward = 1000;
          bonus = 100;
        }
        for (size_t i = 1; i < 7; ++i) {
          if (dice[i] == 2) {
            reward += static_cast<int>(i) * bonus;
          }
        }
      } else {
        for (size_t i = 6; i > 0; --i) {
          if (dice[i] == 1) {
            reward = static_cast<int>(i) * 100;
            break;
          }
        }
      }
      result = result < reward ? reward : result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::vector<int>> dices;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  FourDices four_dices;
  four_dices.SetInputs();
  four_dices.Calculate();
  four_dices.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2484_FOUR_DICES_H_
