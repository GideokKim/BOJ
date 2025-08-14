#ifndef BOJ_9000_SRC_9663_N_QUEEN_H_
#define BOJ_9000_SRC_9663_N_QUEEN_H_

#include <algorithm>
#include <iostream>
#include <vector>

class NQueen {
 public:
  void SetInputs() {
    std::cin >> n;
    queen.resize(n, -1);
  }

  void Calculate() {
    result = 0;
    dfs(0);
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n;
  long long result;
  std::vector<long long> queen;

  void dfs(long long col) {
    if (col == n) {
      ++result;
      return;
    }

    for (long long row = 0; row < n; ++row) {
      if (IsPossible(col, row)) {
        queen[col] = row;
        dfs(col + 1);
        queen[col] = -1;
      }
    }
  }

  bool IsPossible(long long col, long long row) {
    for (long long i = 0; i < col; ++i) {
      if (queen[i] == row || std::abs(col - i) == std::abs(row - queen[i])) {
        return false;
      }
    }

    return true;
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NQueen n_queen;
  n_queen.SetInputs();
  n_queen.Calculate();
  n_queen.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9663_N_QUEEN_H_
