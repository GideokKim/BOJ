#ifndef BOJ_1000_SRC_1236_GUARD_CASTLE_H_
#define BOJ_1000_SRC_1236_GUARD_CASTLE_H_

#include <iostream>
#include <string>
#include <vector>

class GuardCastle {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    inputs.resize(n);

    for (auto& line : inputs) {
      std::cin >> line;
    }
  }

  void Calculate() {
    std::vector<int> rows(n, 1);
    std::vector<int> cols(m, 1);

    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < m; ++j) {
        if (inputs[i][j] != '.') {
          rows[i] = 0;
          cols[j] = 0;
        }
      }
    }

    size_t rows_sum = 0;
    for (auto target : rows) {
      rows_sum += target;
    }

    size_t cols_sum = 0;
    for (auto target : cols) {
      cols_sum += target;
    }

    result = rows_sum > cols_sum ? rows_sum : cols_sum;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<std::string> inputs;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  GuardCastle guard_castle;
  guard_castle.SetInputs();
  guard_castle.Calculate();
  guard_castle.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1236_GUARD_CASTLE_H_
