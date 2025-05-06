#ifndef BOJ_10000_SRC_10026_RED_GREEN_BLINDFOLDNESS_H_
#define BOJ_10000_SRC_10026_RED_GREEN_BLINDFOLDNESS_H_

#include <iostream>
#include <vector>

class RedGreenBlindness {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    grid.resize(n, std::vector<int>(n, 0));
    visited.resize(n, std::vector<bool>(n, false));
    for (size_t i = 0; i < n; i++) {
      std::string row;
      std::cin >> row;
      for (size_t j = 0; j < n; j++) {
        if (row[j] == 'G') {
          grid[i][j] = 2;
        } else if (row[j] == 'B') {
          grid[i][j] = 1;
        }
      }
    }
  }

  void Calculate() {
    result1 = 0;
    result2 = 0;
    bool is_blind = false;
    for (size_t i = 0; i < grid.size(); i++) {
      for (size_t j = 0; j < grid[0].size(); j++) {
        if (!visited[i][j]) {
          dfs(i, j, is_blind);
          result1++;
        }
      }
    }
    is_blind = true;
    visited.clear();
    visited.resize(grid.size(), std::vector<bool>(grid[0].size(), false));
    for (size_t i = 0; i < grid.size(); i++) {
      for (size_t j = 0; j < grid[0].size(); j++) {
        if (!visited[i][j]) {
          dfs(i, j, is_blind);
          result2++;
        }
      }
    }
  }

  void PrintResult() { std::cout << result1 << " " << result2; }

 private:
  std::vector<std::vector<int>> grid;
  std::vector<std::vector<bool>> visited;
  size_t result1, result2;

  void dfs(size_t i, size_t j, bool is_blind) {
    visited[i][j] = true;
    std::vector<int> di = {0, 0, 1, -1};
    std::vector<int> dj = {1, -1, 0, 0};

    for (size_t k = 0; k < 4; k++) {
      int ni = i + di[k];
      int nj = j + dj[k];
      if (ni < 0 || ni >= grid.size() || nj < 0 || nj >= grid[0].size()) {
        continue;
      }
      if (visited[ni][nj]) {
        continue;
      }
      if (is_blind) {
        if (grid[ni][nj] % 2 != grid[i][j] % 2) {
          continue;
        }
      } else {
        if (grid[ni][nj] != grid[i][j]) {
          continue;
        }
      }
      dfs(ni, nj, is_blind);
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  RedGreenBlindness redGreenBlindness;
  redGreenBlindness.SetInputs();
  redGreenBlindness.Calculate();
  redGreenBlindness.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10026_RED_GREEN_BLINDFOLDNESS_H_
