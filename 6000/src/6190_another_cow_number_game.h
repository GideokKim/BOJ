#ifndef BOJ_6000_SRC_6190_ANOTHER_COW_NUMBER_GAME_H_
#define BOJ_6000_SRC_6190_ANOTHER_COW_NUMBER_GAME_H_

#include <iostream>

class AnotherCowNumberGame {
 public:
  void SetInputs() { std::cin >> number; }

  void Calculate() {
    score = 0;
    while (number != 1) {
      if (number & 1) {
        number = number + ((number + 1) >> 1);
        score += 2;
      } else {
        number = number >> 1;
        score += 1;
      }
    }
  }

  void PrintResult() { std::cout << score; }

 private:
  int number;
  int score;
};

#ifdef BOJ_SUBMIT
int main() {
  AnotherCowNumberGame another_cow_number_game;
  another_cow_number_game.SetInputs();
  another_cow_number_game.Calculate();
  another_cow_number_game.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_6000_SRC_6190_ANOTHER_COW_NUMBER_GAME_H_
