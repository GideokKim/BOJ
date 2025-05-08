#ifndef BOJ_5000_SRC_5972_PACKAGE_DELEVERY_H_
#define BOJ_5000_SRC_5972_PACKAGE_DELEVERY_H_

#include <algorithm>
#include <iostream>
#include <limits>
#include <queue>
#include <vector>

class PackageDelevery {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    graph.resize(n + 1);
    for (size_t index = 0; index < m; ++index) {
      size_t u, v, c;
      std::cin >> u >> v >> c;
      graph[u].push_back({v, c});
      graph[v].push_back({u, c});
    }
  }

  void Calculate() {
    std::vector<size_t> distances(n + 1, std::numeric_limits<size_t>::max());
    std::priority_queue<std::pair<size_t, size_t>> pq;
    distances[1] = 0;
    pq.push({1, 0});

    while (!pq.empty()) {
      auto [current_node, current_cost] = pq.top();
      pq.pop();

      if (current_cost > distances[current_node]) {
        continue;
      }

      for (auto [next_node, next_cost] : graph[current_node]) {
        if (distances[next_node] > current_cost + next_cost) {
          distances[next_node] = current_cost + next_cost;
          pq.push({next_node, distances[next_node]});
        }
      }
    }
    result = distances[n];
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<std::vector<std::pair<size_t, size_t>>> graph;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  PackageDelevery package_delevery;
  package_delevery.SetInputs();
  package_delevery.Calculate();
  package_delevery.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5972_PACKAGE_DELEVERY_H_
