#ifndef BOJ_13000_SRC_13301_TILE_DECORATION_H_
#define BOJ_13000_SRC_13301_TILE_DECORATION_H_

#include <iostream>
#include <vector>

class TileDecoration {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    dp.resize(n + 1, 1);
    if (n == 1) {
      result = 4;
      return;
    }
    for (size_t i = 2; i <= n; ++i) {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    result = dp[n - 1] * 4 + dp[n - 2] * 2;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<size_t> dp;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  TileDecoration tile_decoration;
  tile_decoration.SetInputs();
  tile_decoration.Calculate();
  tile_decoration.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13301_TILE_DECORATION_H_
