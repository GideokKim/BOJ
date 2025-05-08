#ifndef BOJ_4000_SRC_4963_NUMBER_OF_ISLAND_H_
#define BOJ_4000_SRC_4963_NUMBER_OF_ISLAND_H_

#include <iostream>
#include <vector>

class NumberOfIsland {
 public:
  void SetInputs() {
    while (std::cin >> w >> h) {
      if (w * h == 0) {
        break;
      }
      std::vector<std::vector<bool>> map(h, std::vector<bool>(w, false));
      for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
          bool is_land = false;
          std::cin >> is_land;
          map[i][j] = is_land;
        }
      }

      std::vector<std::vector<bool>> visited(h, std::vector<bool>(w, false));
      size_t count = 0;
      for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
          if (!visited[i][j] && map[i][j]) {
            dfs(i, j, visited, map);
            count++;
          }
        }
      }
      std::cout << count << "\n";
    }
  }

  void Calculate() {}

  void PrintResult() {}

 private:
  int w, h;
  void dfs(size_t i, size_t j, std::vector<std::vector<bool>>& visited,
           const std::vector<std::vector<bool>>& map) {
    visited[i][j] = true;
    std::vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
    std::vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (size_t index = 0; index < 8; ++index) {
      int nx = i + dx[index];
      int ny = j + dy[index];
      if (nx < 0 || ny < 0 || nx >= h || ny >= w) {
        continue;
      }

      if (!visited[nx][ny] && map[nx][ny]) {
        dfs(nx, ny, visited, map);
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NumberOfIsland number_of_island;
  number_of_island.SetInputs();
  number_of_island.Calculate();
  number_of_island.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4963_NUMBER_OF_ISLAND_H_
