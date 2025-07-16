#ifndef BOJ_31000_SRC_31868_WATERMELON_GAME_H_
#define BOJ_31000_SRC_31868_WATERMELON_GAME_H_

#include <iostream>

class WatermelonGame {
 public:
  void SetInputs() { std::cin >> n >> k; }

  void Calculate() { result = k >> (n - 1); }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, k;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  WatermelonGame watermelon_game;
  watermelon_game.SetInputs();
  watermelon_game.Calculate();
  watermelon_game.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31868_WATERMELON_GAME_H_
