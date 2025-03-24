#ifndef BOJ_2000_SRC_2667_STICK_NUMBER_H_
#define BOJ_2000_SRC_2667_STICK_NUMBER_H_

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

class StickNumber {
 public:
  void SetInputs() {
    std::cin >> n;
    map.resize(n, std::vector<size_t>(n));
    visited.resize(n, std::vector<bool>(n, false));
    std::string number;
    for (size_t i = 0; i < n; i++) {
      std::cin >> number;
      for (size_t j = 0; j < n; j++) {
        map[i][j] = number[j] - '0';
      }
    }
  }

  void Calculate() {
    for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j < n; j++) {
        if (map[i][j] == 1 && !visited[i][j]) {
          dfs(i, j);
        }
      }
    }
    std::sort(result.begin(), result.end());
  }

  void PrintResult() {
    std::cout << result.size() << "\n";
    for (size_t i = 0; i < result.size(); i++) {
      std::cout << result[i] << "\n";
    }
  }

 private:
  size_t n;
  std::vector<std::vector<size_t>> map;
  std::vector<std::vector<bool>> visited;
  std::vector<size_t> result;

  void dfs(size_t i, size_t j) {
    std::stack<std::pair<size_t, size_t>> s;
    s.push({i, j});
    visited[i][j] = true;
    size_t count = 1;

    while (!s.empty()) {
      std::pair<size_t, size_t> current_node = s.top();
      s.pop();

      std::vector<int> d_i = {0, 0, -1, 1};
      std::vector<int> d_j = {-1, 1, 0, 0};

      for (size_t i = 0; i < 4; i++) {
        size_t next_i = current_node.first + d_i[i];
        size_t next_j = current_node.second + d_j[i];
        if (next_i >= n || next_j >= n) {
          continue;
        }

        if (next_i < 0 || next_j < 0) {
          continue;
        }

        if (!visited[next_i][next_j] && map[next_i][next_j] == 1) {
          s.push({next_i, next_j});
          visited[next_i][next_j] = true;
          count++;
        }
      }
    }

    if (count > 0) {
      result.push_back(count);
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  StickNumber stick_number;
  stick_number.SetInputs();
  stick_number.Calculate();
  stick_number.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2667_STICK_NUMBER_H_
