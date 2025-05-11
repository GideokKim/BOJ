#ifndef BOJ_9000_SRC_9507_GENERATIONS_OF_TRIBBLES_H_
#define BOJ_9000_SRC_9507_GENERATIONS_OF_TRIBBLES_H_

#include <algorithm>
#include <iostream>
#include <vector>

class GenerationsOfTribbles {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    inputs.resize(t);
    dp.resize(68, 0);
    for (size_t i = 0; i < t; ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    size_t max_num = *std::max_element(inputs.begin(), inputs.end());

    for (size_t i = 4; i <= max_num; ++i) {
      dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }
  }

  void PrintResult() {
    for (auto target : inputs) {
      std::cout << dp[target] << "\n";
    }
  }

 private:
  std::vector<size_t> inputs;
  std::vector<size_t> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  GenerationsOfTribbles generations_of_tribbles;
  generations_of_tribbles.SetInputs();
  generations_of_tribbles.Calculate();
  generations_of_tribbles.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9507_GENERATIONS_OF_TRIBBLES_H_
