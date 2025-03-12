#ifndef BOJ_2000_SRC_2579_STAIR_CLIMBING_H_
#define BOJ_2000_SRC_2579_STAIR_CLIMBING_H_

#include <algorithm>
#include <iostream>
#include <vector>

class StairClimbing {
 public:
  void SetInputs() {
    std::cin >> number_of_stairs;
    stairs.resize(number_of_stairs + 1, 0);
    for (size_t index = 1; index <= number_of_stairs; ++index) {
      std::cin >> stairs[index];
    }
    dp.resize(number_of_stairs + 1, 0);
  }

  void Calculate() {
    dp[1] = stairs[1];
    if (number_of_stairs >= 2) {
      dp[2] = stairs[1] + stairs[2];
    }
    if (number_of_stairs >= 3) {
      dp[3] = std::max(stairs[1] + stairs[3], stairs[2] + stairs[3]);
    }
    for (size_t index = 4; index <= number_of_stairs; ++index) {
      dp[index] = std::max(dp[index - 2] + stairs[index],
                           dp[index - 3] + stairs[index - 1] + stairs[index]);
    }
  }

  void PrintResult() { std::cout << dp[number_of_stairs]; }

 private:
  size_t number_of_stairs;
  std::vector<size_t> stairs;
  std::vector<size_t> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  StairClimbing stair_climbing;
  stair_climbing.SetInputs();
  stair_climbing.Calculate();
  stair_climbing.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2579_STAIR_CLIMBING_H_
