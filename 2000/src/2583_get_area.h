#ifndef BOJ_2000_SRC_2583_GET_AREA_H_
#define BOJ_2000_SRC_2583_GET_AREA_H_

#include <algorithm>
#include <iostream>
#include <vector>

class GetArea {
 public:
  void SetInputs() {
    std::cin >> m >> n >> k;
    map.resize(m, std::vector<bool>(n, true));
    visited.resize(m, std::vector<bool>(n, false));

    for (size_t index = 0; index < k; ++index) {
      size_t x1, y1, x2, y2;
      std::cin >> y1 >> x1 >> y2 >> x2;
      for (size_t x = x1; x < x2; ++x) {
        for (size_t y = y1; y < y2; ++y) {
          map[x][y] = false;
        }
      }
    }

    dx.resize(4, 0);
    dy.resize(4, 0);
    dx[0] = -1;
    dx[3] = 1;
    dy[1] = -1;
    dy[2] = 1;
  }

  void Calculate() {
    for (int i = 0; i < static_cast<int>(m); ++i) {
      for (int j = 0; j < static_cast<int>(n); ++j) {
        if (!visited[i][j] && map[i][j]) {
          size_t count = 0;
          dfs(i, j, count);
          results.push_back(count);
        }
      }
    }
    std::sort(results.begin(), results.end());
  }

  void PrintResult() {
    std::cout << results.size() << "\n";
    for (auto target : results) {
      std::cout << target << " ";
    }
  }

 private:
  size_t m, n, k;
  std::vector<std::vector<bool>> map;
  std::vector<std::vector<bool>> visited;
  std::vector<int> dx;
  std::vector<int> dy;
  std::vector<size_t> results;

  void dfs(int i, int j, size_t& count) {
    visited[i][j] = true;
    ++count;

    for (size_t index = 0; index < 4; ++index) {
      int nx = i + dx[index];
      int ny = j + dy[index];

      if (nx < 0 || ny < 0 || nx >= static_cast<int>(m) ||
          ny >= static_cast<int>(n)) {
        continue;
      }

      if (!visited[nx][ny] && map[nx][ny]) {
        dfs(nx, ny, count);
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  GetArea get_area;
  get_area.SetInputs();
  get_area.Calculate();
  get_area.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2583_GET_AREA_H_
