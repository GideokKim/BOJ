#ifndef BOJ_3000_SRC_3041_N_PUZZLE_H_
#define BOJ_3000_SRC_3041_N_PUZZLE_H_

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

class Npuzzle {
 public:
  void SetInputs() {
    inputs.resize(4);
    for (size_t i = 0; i < 4; i++) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < 4; ++i) {
      for (size_t j = 0; j < 4; ++j) {
        auto input = inputs[i][j];

        if (input == '.') {
          continue;
        }

        // 각 문자가 있어야 할 목표 위치 계산
        int char_index = input - 'A';
        int target_row = char_index / 4;
        int target_col = char_index % 4;

        // 맨하탄 거리 계산
        int distance = std::abs(static_cast<int>(i) - target_row) +
                       std::abs(static_cast<int>(j) - target_col);
        result += distance;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Npuzzle npuzzle;
  npuzzle.SetInputs();
  npuzzle.Calculate();
  npuzzle.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3041_N_PUZZLE_H_
