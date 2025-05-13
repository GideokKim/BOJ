#ifndef BOJ_2000_SRC_2644_GET_DEGREE_OF_KINSHIP_H_
#define BOJ_2000_SRC_2644_GET_DEGREE_OF_KINSHIP_H_

#include <iostream>
#include <vector>

class GetDegreeOfKinship {
 public:
  void SetInputs() {
    size_t m;
    std::cin >> n >> start >> end >> m;
    graph.resize(n + 1);
    visited.resize(n + 1, false);

    size_t x, y;
    for (size_t i = 0; i < m; i++) {
      std::cin >> x >> y;
      graph[x].push_back(y);
      graph[y].push_back(x);
    }
  }

  void Calculate() {
    result = 0;
    long long count = 0;
    dfs(start, end, count);
    if (result == 0) {
      result = -1;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, start, end;
  std::vector<std::vector<size_t>> graph;
  std::vector<bool> visited;
  long long result;

  void dfs(size_t i, size_t end, long long& count) {
    visited[i] = true;
    for (auto target : graph[i]) {
      if (target == end) {
        ++count;
        result = count;
        return;
      }

      if (!visited[target]) {
        dfs(target, end, ++count);
        --count;
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  GetDegreeOfKinship get_degree_of_kinship;
  get_degree_of_kinship.SetInputs();
  get_degree_of_kinship.Calculate();
  get_degree_of_kinship.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2644_GET_DEGREE_OF_KINSHIP_H_
