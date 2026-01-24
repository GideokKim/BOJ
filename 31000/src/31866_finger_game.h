#ifndef BOJ_31000_SRC_31866_FINGER_GAME_H_
#define BOJ_31000_SRC_31866_FINGER_GAME_H_

#include <iostream>
#include <string>

class FingerGame {
 public:
  void SetInputs() { std::cin >> left >> right; }

  void Calculate() {
    result = "=";

    if (left == right) {
      return;
    } else if ((left == 1 || left == 3 || left == 4) &&
               (right == 1 || right == 3 || right == 4)) {
      return;
    }

    if (left == 0 && right == 2) {
      result = ">";
    } else if (left == 2 && right == 5) {
      result = ">";
    } else if (left == 5 && right == 0) {
      result = ">";
    } else if ((left == 0 || left == 2 || left == 5) &&
               (right == 1 || right == 3 || right == 4)) {
      result = ">";
    } else {
      result = "<";
    }
  }
  void PrintResult() { std::cout << result; }

 private:
  int left, right;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FingerGame finger_game;
  finger_game.SetInputs();
  finger_game.Calculate();
  finger_game.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31866_FINGER_GAME_H_
