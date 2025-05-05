#ifndef BOJ_11000_SRC_11725_FIND_PARENT_OF_TREE_H_
#define BOJ_11000_SRC_11725_FIND_PARENT_OF_TREE_H_

#include <iostream>
#include <stack>
#include <vector>

class FindParentOfTree {
 public:
  void SetInputs() {
    std::cin >> n;
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    parent.resize(n + 1, 0);

    size_t u, v;
    for (size_t i = 0; i < n - 1; ++i) {
      std::cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u);
    }
  };

  void Calculate() {
    std::stack<int> stack;
    stack.push(1);
    visited[1] = true;
    while (!stack.empty()) {
      int current = stack.top();
      stack.pop();
      for (int next : graph[current]) {
        if (!visited[next]) {
          visited[next] = true;
          parent[next] = current;
          stack.push(next);
        }
      }
    }
  }

  void PrintResult() {
    for (size_t i = 2; i <= n; ++i) {
      std::cout << parent[i] << '\n';
    }
  };

 private:
  size_t n;
  std::vector<std::vector<int>> graph;
  std::vector<bool> visited;
  std::vector<int> parent;
};

#ifdef BOJ_SUBMIT
int main() {
  FindParentOfTree find_parent_of_tree;
  find_parent_of_tree.SetInputs();
  find_parent_of_tree.Calculate();
  find_parent_of_tree.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11725_FIND_PARENT_OF_TREE_H_
