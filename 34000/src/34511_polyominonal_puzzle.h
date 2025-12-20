#ifndef BOJ_34000_SRC_34511_POLYOMINONAL_PUZZLE_H_
#define BOJ_34000_SRC_34511_POLYOMINONAL_PUZZLE_H_

#include <iostream>
#include <string>
#include <vector>

class PolyominonalPuzzle {
 public:
  void SetInputs() {
    std::cin >> n >> m;

    puzzle.resize(n);
    for (auto& line : puzzle) {
      std::cin >> line;
    }
  }

  void Calculate() {
    result = 0;
    for (size_t y_index = 0; y_index < n; ++y_index) {
      for (size_t x_index = 0; x_index < m - 1; ++x_index) {
        std::string target = puzzle[y_index].substr(x_index, 2);
        if (target == "XY" || target == "YX") {
          ++result;
        }

        if (y_index != n - 1) {
          if (puzzle[y_index][x_index] == 'X' &&
              puzzle[y_index + 1][x_index] == 'Y') {
            ++result;
          } else if (puzzle[y_index][x_index] == 'Y' &&
                     puzzle[y_index + 1][x_index] == 'X') {
            ++result;
          }

          if (x_index == m - 2) {
            if (puzzle[y_index][x_index + 1] == 'X' &&
                puzzle[y_index + 1][x_index + 1] == 'Y') {
              ++result;
            } else if (puzzle[y_index][x_index + 1] == 'Y' &&
                       puzzle[y_index + 1][x_index + 1] == 'X') {
              ++result;
            }
          }
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<std::string> puzzle;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  PolyominonalPuzzle polyominonal_puzzle;
  polyominonal_puzzle.SetInputs();
  polyominonal_puzzle.Calculate();
  polyominonal_puzzle.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34511_POLYOMINONAL_PUZZLE_H_
