#ifndef BOJ_29000_SRC_29725_CHESS_NEWBIE_H_
#define BOJ_29000_SRC_29725_CHESS_NEWBIE_H_

#include <iostream>
#include <string>
#include <vector>

class ChessNewbie {
 public:
  void SetInputs() {
    chess.resize(8);

    for (auto& line : chess) {
      std::cin >> line;
    }
  }

  void Calculate() {
    result = 0;
    for (auto& line : chess) {
      for (auto target : line) {
        if (target == '.' || target == 'K' || target == 'k') {
          continue;
        }
        if (std::islower(target)) {
          switch (target) {
            case 'p':
              result -= 1;
              break;
            case 'n':
              result -= 3;
              break;
            case 'b':
              result -= 3;
              break;
            case 'r':
              result -= 5;
              break;
            case 'q':
              result -= 9;
              break;
          }
        } else {
          switch (target) {
            case 'P':
              result += 1;
              break;
            case 'N':
              result += 3;
              break;
            case 'B':
              result += 3;
              break;
            case 'R':
              result += 5;
              break;
            case 'Q':
              result += 9;
              break;
          }
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> chess;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  ChessNewbie chess_newbie;
  chess_newbie.SetInputs();
  chess_newbie.Calculate();
  chess_newbie.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_29000_SRC_29725_CHESS_NEWBIE_H_
