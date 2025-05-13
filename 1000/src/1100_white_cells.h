#ifndef BOJ_1000_SRC_1100_WHITE_CELLS_H_
#define BOJ_1000_SRC_1100_WHITE_CELLS_H_

#include <iostream>
#include <vector>

class WhiteCells {
 public:
  void SetInputs() {
    chess.resize(8);
    for (size_t i = 0; i < 8; ++i) {
      std::cin >> chess[i];
    }
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < chess.size(); ++i) {
      size_t start = i % 2;
      for (size_t index = start; index < chess[i].size(); index += 2) {
        if (chess[i][index] == 'F') {
          ++result;
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> chess;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  WhiteCells white_cells;
  white_cells.SetInputs();
  white_cells.Calculate();
  white_cells.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1100_WHITE_CELLS_H_
