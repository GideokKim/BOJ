#ifndef BOJ_11000_SRC_11724_NUMBER_OF_CONNECTED_COMPONENTS_H_
#define BOJ_11000_SRC_11724_NUMBER_OF_CONNECTED_COMPONENTS_H_

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

class NumberOfConnectedComponents {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    graph.resize(n + 1);
    visited.resize(n + 1, false);

    size_t u, v;
    for (size_t i = 0; i < m; ++i) {
      std::cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u);
    }
  };

  void Calculate() {
    result = 0;
    for (size_t i = 1; i <= n; ++i) {
      if (!visited[i]) {
        dfs(i);
        result++;
      }
    }
  }

  void PrintResult() { std::cout << result; };

 private:
  size_t n, m;
  std::vector<std::vector<int>> graph;
  std::vector<bool> visited;
  int result;

  void dfs(size_t node) {
    std::stack<int> stack;
    stack.push(node);

    while (!stack.empty()) {
      size_t current = stack.top();
      visited[current] = true;
      stack.pop();

      for (size_t i = 0; i < graph[current].size(); ++i) {
        size_t next = graph[current][i];
        if (!visited[next]) {
          stack.push(next);
        }
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  NumberOfConnectedComponents number_of_connected_components;
  number_of_connected_components.SetInputs();
  number_of_connected_components.Calculate();
  number_of_connected_components.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11724_NUMBER_OF_CONNECTED_COMPONENTS_H_
