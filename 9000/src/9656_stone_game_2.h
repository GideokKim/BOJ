#ifndef BOJ_9000_SRC_9656_STONE_GAME_2_H_
#define BOJ_9000_SRC_9656_STONE_GAME_2_H_

#include <iostream>
#include <string>

class StoneGame2 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    if (n % 2 == 0) {
      result = "SK";
    } else {
      result = "CY";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  StoneGame2 stone_game_2;
  stone_game_2.SetInputs();
  stone_game_2.Calculate();
  stone_game_2.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9656_STONE_GAME_2_H_
