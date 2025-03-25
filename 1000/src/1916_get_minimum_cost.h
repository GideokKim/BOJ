#ifndef BOJ_1000_SRC_1916_GET_MINIMUM_COST_H_
#define BOJ_1000_SRC_1916_GET_MINIMUM_COST_H_

#include <iostream>
#include <limits>
#include <queue>
#include <vector>

class GetMinimumCost {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    graph.resize(n + 1);
    dist.resize(n + 1, std::numeric_limits<size_t>::max());

    size_t u, v, w;
    for (size_t i = 0; i < m; ++i) {
      std::cin >> u >> v >> w;
      graph[u].push_back({v, w});
    }
    std::cin >> start >> end;
  }

  void Calculate() { Dijkstra(start); }

  void PrintResult() { std::cout << dist[end]; }

 private:
  size_t n, m;
  std::vector<std::vector<std::pair<size_t, size_t>>> graph;
  std::vector<size_t> dist;
  size_t start, end;

  void Dijkstra(size_t start) {
    std::priority_queue<std::pair<size_t, size_t>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
      size_t cost = -pq.top().first;
      size_t current = pq.top().second;
      pq.pop();

      if (dist[current] < cost) continue;

      for (const auto& [next, next_cost] : graph[current]) {
        if (dist[next] > dist[current] + next_cost) {
          dist[next] = dist[current] + next_cost;
          pq.push({-dist[next], next});
        }
      }
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  GetMinimumCost get_minimum_cost;
  get_minimum_cost.SetInputs();
  get_minimum_cost.Calculate();
  get_minimum_cost.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1916_GET_MINIMUM_COST_H_
