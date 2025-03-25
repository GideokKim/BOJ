#ifndef BOJ_2000_SRC_1012_ORGANIC_CABBAGE_H_
#define BOJ_2000_SRC_1012_ORGANIC_CABBAGE_H_

#include <iostream>
#include <stack>
#include <vector>

class OrganicCabbage {
 public:
  void SetInputs() {
    size_t test_case;
    std::cin >> test_case;
    for (size_t case_index = 0; case_index < test_case; ++case_index) {
      size_t m, n, k;
      std::cin >> m >> n >> k;
      std::vector<std::vector<size_t>> map(m, std::vector<size_t>(n, 0));
      std::vector<std::vector<bool>> visited(m, std::vector<bool>(n, false));

      for (size_t i = 0; i < k; ++i) {
        size_t x, y;
        std::cin >> x >> y;
        map[x][y] = 1;
      }

      size_t count = 0;
      for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
          if (map[i][j] == 1 && !visited[i][j]) {
            dfs(i, j, map, visited);
            count++;
          }
        }
      }
      result.push_back(count);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < result.size(); i++) {
      std::cout << result[i] << "\n";
    }
  }

 private:
  size_t n;
  std::vector<size_t> result;

  void dfs(size_t i, size_t j, std::vector<std::vector<size_t>> &map,
           std::vector<std::vector<bool>> &visited) {
    std::stack<std::pair<size_t, size_t>> s;
    s.push({i, j});
    visited[i][j] = true;

    while (!s.empty()) {
      std::pair<size_t, size_t> current_node = s.top();
      s.pop();

      std::vector<int> d_i = {0, 0, -1, 1};
      std::vector<int> d_j = {-1, 1, 0, 0};

      for (size_t i = 0; i < 4; i++) {
        size_t next_i = current_node.first + d_i[i];
        size_t next_j = current_node.second + d_j[i];
        if (next_i >= map.size() || next_j >= map[0].size()) {
          continue;
        }

        if (next_i < 0 || next_j < 0) {
          continue;
        }

        if (!visited[next_i][next_j] && map[next_i][next_j] == 1) {
          s.push({next_i, next_j});
          visited[next_i][next_j] = true;
        }
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  OrganicCabbage organic_cabbage;
  organic_cabbage.SetInputs();
  organic_cabbage.Calculate();
  organic_cabbage.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_1012_ORGANIC_CABBAGE_H_
