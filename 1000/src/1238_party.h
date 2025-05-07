#ifndef BOJ_1000_SRC_1238_PARTY_H_
#define BOJ_1000_SRC_1238_PARTY_H_

#include <algorithm>
#include <iostream>
#include <limits>
#include <queue>
#include <vector>

class Party {
 public:
  void SetInputs() {
    std::cin >> n >> m >> x;
    graph.resize(n + 1);
    reverse_graph.resize(n + 1);
    for (size_t i = 0; i < m; ++i) {
      int u, v, w;
      std::cin >> u >> v >> w;
      graph[u].push_back({v, w});
      reverse_graph[v].push_back({u, w});
    }
  }

  void Calculate() {
    std::vector<int> dist_to_home(n + 1, std::numeric_limits<int>::max());
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>,
                        std::greater<>>
        pq;

    dist_to_home[x] = 0;
    pq.push({0, x});

    while (!pq.empty()) {
      auto [current_cost, current_node] = pq.top();
      pq.pop();

      if (current_cost > dist_to_home[current_node]) {
        continue;
      }

      for (const auto& [next_node, next_cost] : graph[current_node]) {
        if (dist_to_home[next_node] > current_cost + next_cost) {
          dist_to_home[next_node] = current_cost + next_cost;
          pq.push({dist_to_home[next_node], next_node});
        }
      }
    }

    std::vector<int> dist_to_party(n + 1, std::numeric_limits<int>::max());
    dist_to_party[x] = 0;
    pq.push({0, x});

    while (!pq.empty()) {
      auto [current_cost, current_node] = pq.top();
      pq.pop();

      if (current_cost > dist_to_party[current_node]) {
        continue;
      }

      for (const auto& [next_node, next_cost] : reverse_graph[current_node]) {
        if (dist_to_party[next_node] > current_cost + next_cost) {
          dist_to_party[next_node] = current_cost + next_cost;
          pq.push({dist_to_party[next_node], next_node});
        }
      }
    }

    result = 0;
    for (size_t i = 1; i <= n; ++i) {
      result = std::max(result, dist_to_home[i] + dist_to_party[i]);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m, x;
  std::vector<std::vector<std::pair<int, int>>> graph;
  std::vector<std::vector<std::pair<int, int>>> reverse_graph;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Party party;
  party.SetInputs();
  party.Calculate();
  party.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1238_PARTY_H_
