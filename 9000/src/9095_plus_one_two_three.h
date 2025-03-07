#ifndef BOJ_9000_SRC_9095_PLUS_ONE_TWO_THREE_H_
#define BOJ_9000_SRC_9095_PLUS_ONE_TWO_THREE_H_

#include <iostream>
#include <string>
#include <vector>

class PlusOneTwoThree {
 public:
  void SetInputs() {
    std::cin >> t;
    dp.resize(11, 0);
  }

  void Calculate() {
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (size_t i = 4; i <= 10; i++) {
      dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
  }

  void PrintResult() {
    size_t n;
    for (size_t i = 0; i < t; i++) {
      std::cin >> n;
      std::cout << dp[n] << std::endl;
    }
  }

 private:
  size_t t;
  std::vector<long long> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  PlusOneTwoThree plus_one_two_three;
  plus_one_two_three.SetInputs();
  plus_one_two_three.Calculate();
  plus_one_two_three.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9095_PLUS_ONE_TWO_THREE_H_
