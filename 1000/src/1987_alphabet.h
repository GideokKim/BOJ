#ifndef BOJ_1000_SRC_1987_ALPHABET_H_
#define BOJ_1000_SRC_1987_ALPHABET_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Alphabet {
 public:
  void SetInputs() {
    std::cin >> r >> c;
    map.resize(r);
    for (size_t i = 0; i < r; ++i) {
      std::cin >> map[i];
    }
    result = 0;
  }

  void Calculate() { dfs(0, 0, 1 << (map[0][0] - 'A'), 1); }

  void PrintResult() { std::cout << result; }

 private:
  size_t r, c;
  std::vector<std::string> map;
  size_t result;
  std::vector<int> dx = {-1, 0, 0, 1};
  std::vector<int> dy = {0, -1, 1, 0};

  void dfs(int i, int j, int visited, size_t depth) {
    result = std::max(result, depth);
    if (result == 26) {
      return;
    }

    for (size_t index = 0; index < 4; ++index) {
      int nx = i + dx[index];
      int ny = j + dy[index];
      if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
        continue;
      }
      int next_visited = visited | (1 << (map[nx][ny] - 'A'));
      if (next_visited != visited) {
        dfs(nx, ny, next_visited, depth + 1);
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Alphabet alphabet;
  alphabet.SetInputs();
  alphabet.Calculate();
  alphabet.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1987_ALPHABET_H_
