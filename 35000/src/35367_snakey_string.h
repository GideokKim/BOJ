#ifndef BOJ_35000_SRC_35367_SNAKEY_STRING_H_
#define BOJ_35000_SRC_35367_SNAKEY_STRING_H_

#include <iostream>
#include <string>
#include <vector>

class SnakeyString {
 public:
  void SetInputs() {
    size_t r, c;
    std::cin >> r >> c;

    grid.resize(r);

    for (auto& target : grid) {
      std::cin >> target;
    }
  }

  void Calculate() {
    for (size_t j = 0; j < grid[0].size(); ++j) {
      for (size_t i = 0; i < grid.size(); ++i) {
        if (grid[i][j] != '.') {
          result += grid[i][j];
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> grid;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  SnakeyString snakey_string;
  snakey_string.SetInputs();
  snakey_string.Calculate();
  snakey_string.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_35000_SRC_35367_SNAKEY_STRING_H_
