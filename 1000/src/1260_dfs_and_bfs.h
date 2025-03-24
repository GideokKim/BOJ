#ifndef BOJ_1000_SRC_1260_DFS_AND_BFS_H_
#define BOJ_1000_SRC_1260_DFS_AND_BFS_H_

#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

class DfsAndBfs {
 public:
  void SetInputs() {
    size_t n, m;
    std::cin >> n >> m >> v;
    graph.resize(n + 1);
    visited.resize(n + 1, false);

    for (size_t i = 0; i < m; ++i) {
      size_t a, b;
      std::cin >> a >> b;
      graph[a].push_back(b);
      graph[b].push_back(a);
    }

    for (size_t i = 1; i <= n; ++i) {
      std::sort(graph[i].begin(), graph[i].end());
    }
  }

  void Calculate() {
    dfs(v);
    std::fill(visited.begin(), visited.end(), false);
    bfs(v);
  }

  void PrintResult() {
    for (size_t i = 0; i < result_dfs.size(); ++i) {
      std::cout << result_dfs[i] << " ";
    }
    std::cout << "\n";
    for (size_t i = 0; i < result_bfs.size(); ++i) {
      std::cout << result_bfs[i] << " ";
    }
  }

 private:
  size_t v;
  std::vector<std::vector<size_t>> graph;
  std::vector<bool> visited;
  std::vector<size_t> result_dfs;
  std::vector<size_t> result_bfs;

  void dfs(size_t node) {
    std::stack<size_t> s;
    s.push(node);
    visited[node] = true;
    result_dfs.push_back(node);
    while (!s.empty()) {
      size_t current_node = s.top();
      s.pop();
      for (size_t i = 0; i < graph[current_node].size(); ++i) {
        size_t next_node = graph[current_node][i];
        if (!visited[next_node]) {
          s.push(current_node);
          s.push(next_node);
          visited[next_node] = true;
          result_dfs.push_back(next_node);
          break;
        }
      }
    }
  }

  void bfs(size_t node) {
    std::queue<size_t> q;
    q.push(node);
    visited[node] = true;
    result_bfs.push_back(node);
    while (!q.empty()) {
      size_t current_node = q.front();
      q.pop();
      for (size_t i = 0; i < graph[current_node].size(); ++i) {
        size_t next_node = graph[current_node][i];
        if (!visited[next_node]) {
          q.push(next_node);
          visited[next_node] = true;
          result_bfs.push_back(next_node);
        }
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  DfsAndBfs dfs_and_bfs;
  dfs_and_bfs.SetInputs();
  dfs_and_bfs.Calculate();
  dfs_and_bfs.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1260_DFS_AND_BFS_H_
