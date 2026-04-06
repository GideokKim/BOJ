#ifndef BOJ_32000_SRC_32400_DART_BOARD_H_
#define BOJ_32000_SRC_32400_DART_BOARD_H_

#include <iostream>
#include <string>
#include <vector>

class DartBoard {
 public:
  void SetInputs() {
    board.resize(20);

    for (size_t i = 0; i < board.size(); ++i) {
      std::cin >> board[i];
    }
  }

  void Calculate() {
    int index;
    for (size_t i = 0; i < 20; ++i) {
      if (board[i] == 20) {
        index = static_cast<int>(i);
      }
    }
    size_t alice_score = (board[(index - 1 + 20) % 20] + board[index] +
                          board[(index + 1) % 20]) *
                         20;
    size_t bob_score = 630;

    result = alice_score > bob_score ? "Alice" : "Bob";

    if (alice_score == bob_score) {
      result = "Tie";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> board;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  DartBoard dart_board;
  dart_board.SetInputs();
  dart_board.Calculate();
  dart_board.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32400_DART_BOARD_H_
