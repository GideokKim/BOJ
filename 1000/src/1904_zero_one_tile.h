#ifndef BOJ_1000_SRC_1904_ZERO_ONE_TILE_H_
#define BOJ_1000_SRC_1904_ZERO_ONE_TILE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class ZeroOneTile {
 public:
  void SetInputs() {
    std::cin >> n;
    dp.resize(n + 1, 0);
  }

  void Calculate() {
    dp[0] = 1;
    dp[1] = 1;
    for (size_t index = 2; index <= n; ++index) {
      dp[index] = (dp[index - 1] + dp[index - 2]) % 15746;
    }
  }

  void PrintResult() { std::cout << dp[n]; }

 private:
  size_t n;
  std::vector<size_t> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  ZeroOneTile zero_one_tile;
  zero_one_tile.SetInputs();
  zero_one_tile.Calculate();
  zero_one_tile.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1904_ZERO_ONE_TILE_H_
