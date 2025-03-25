#ifndef BOJ_2000_SRC_2178_SEARCH_MAZE_H_
#define BOJ_2000_SRC_2178_SEARCH_MAZE_H_

#include <iostream>
#include <queue>
#include <string>
#include <vector>

class SearchMaze {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    maze.resize(n, std::vector<int>(m));
    visited.resize(n, std::vector<bool>(m, false));
    for (size_t i = 0; i < n; i++) {
      std::string numbers;
      std::cin >> numbers;
      for (size_t j = 0; j < m; j++) {
        maze[i][j] = numbers[j] - '0';
      }
    }
    distance.resize(n, std::vector<int>(m, 0));
  }

  void Calculate() { bfs(0, 0); }

  void PrintResult() { std::cout << distance[n - 1][m - 1]; }

 private:
  size_t n, m;
  std::vector<std::vector<int>> maze;
  std::vector<std::vector<bool>> visited;
  std::vector<std::vector<int>> distance;

  void bfs(size_t x, size_t y) {
    std::queue<std::pair<size_t, size_t>> q;
    q.push({x, y});
    visited[x][y] = true;
    distance[x][y] = 1;

    while (!q.empty()) {
      size_t x = q.front().first;
      size_t y = q.front().second;
      q.pop();
      int dist = distance[x][y];

      if (x == n - 1 && y == m - 1) {
        break;
      }

      std::vector<int> dx = {-1, 1, 0, 0};
      std::vector<int> dy = {0, 0, -1, 1};

      for (size_t i = 0; i < 4; i++) {
        size_t nx = x + dx[i];
        size_t ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
          continue;
        }

        if (maze[nx][ny] == 0 || visited[nx][ny]) {
          continue;
        }

        visited[nx][ny] = true;
        q.push({nx, ny});
        distance[nx][ny] = dist + 1;
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  SearchMaze search_maze;
  search_maze.SetInputs();
  search_maze.Calculate();
  search_maze.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2178_SEARCH_MAZE_H_
