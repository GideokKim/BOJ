#ifndef BOJ_2000_SRC_2606_VIRUS_H_
#define BOJ_2000_SRC_2606_VIRUS_H_

#include <iostream>
#include <stack>
#include <vector>

class Virus {
 public:
  void SetInputs() {
    size_t computer_count, edge_count;
    std::cin >> computer_count >> edge_count;
    graph.resize(computer_count + 1);
    visited.resize(computer_count + 1, false);
    for (size_t i = 0; i < edge_count; i++) {
      size_t a, b;
      std::cin >> a >> b;
      graph[a].push_back(b);
      graph[b].push_back(a);
    }
    result = 0;
  }

  void Calculate() { dfs(1); }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::vector<size_t>> graph;
  std::vector<bool> visited;
  size_t result;

  void dfs(size_t node) {
    std::stack<size_t> s;
    s.push(node);
    visited[node] = true;
    while (!s.empty()) {
      size_t current_node = s.top();
      s.pop();
      for (size_t i = 0; i < graph[current_node].size(); i++) {
        size_t next_node = graph[current_node][i];
        if (!visited[next_node]) {
          s.push(next_node);
          visited[next_node] = true;
          result++;
        }
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  Virus virus;
  virus.SetInputs();
  virus.Calculate();
  virus.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2606_VIRUS_H_
