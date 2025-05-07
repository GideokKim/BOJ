#ifndef BOJ_2000_SRC_2468_SAFE_AREA_H_
#define BOJ_2000_SRC_2468_SAFE_AREA_H_

#include <iostream>
#include <vector>

class SafeArea {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    area.resize(n, std::vector<int>(n));
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cin >> area[i][j];
      }
    }
  }

  void Calculate() {
    size_t n = area.size();
    std::vector<std::vector<bool>> visited;
    result = 1;
    for (int height = 1; height < 100; ++height) {
      int count = 0;
      visited.clear();
      visited.resize(n, std::vector<bool>(n, false));
      for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
          if (!visited[i][j] && area[i][j] > height) {
            dfs(i, j, visited, height);
            count++;
          }
        }
      }
      if (count == 0) {
        break;
      }
      result = std::max(result, count);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::vector<int>> area;
  int result;

  void dfs(size_t i, size_t j, std::vector<std::vector<bool>>& visited,
           int height) {
    visited[i][j] = true;
    std::vector<int> dx = {-1, 1, 0, 0};
    std::vector<int> dy = {0, 0, -1, 1};
    for (size_t index = 0; index < 4; ++index) {
      size_t nx = i + dx[index];
      size_t ny = j + dy[index];
      if (nx < 0 || nx >= area.size() || ny < 0 || ny >= area[0].size()) {
        continue;
      }
      if (!visited[nx][ny] && area[nx][ny] > height) {
        dfs(nx, ny, visited, height);
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  SafeArea safe_area;
  safe_area.SetInputs();
  safe_area.Calculate();
  safe_area.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2468_SAFE_AREA_H_
