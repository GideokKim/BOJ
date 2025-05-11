#ifndef BOJ_1000_SRC_1504_SPECIFIC_SHORTEST_PATH_H_
#define BOJ_1000_SRC_1504_SPECIFIC_SHORTEST_PATH_H_

#include <iostream>
#include <limits>
#include <queue>
#include <vector>

class SpecificShortestPath {
 public:
  void SetInputs() {
    std::cin >> n >> e;

    graph.resize(n + 1);
    size_t u, v;
    long long w;
    for (size_t i = 0; i < e; ++i) {
      std::cin >> u >> v >> w;
      graph[u].push_back({v, w});
      graph[v].push_back({u, w});
    }
    std::cin >> v1 >> v2;
  }

  void Calculate() {
    result = 0;
    long long distance1 = dijkstra(1, v1, graph);
    long long distance2 = dijkstra(v1, v2, graph);
    long long distance3 = dijkstra(v2, n, graph);
    if (distance1 == std::numeric_limits<long long>::max() ||
        distance2 == std::numeric_limits<long long>::max() ||
        distance3 == std::numeric_limits<long long>::max()) {
      result = -1;
    } else {
      result = distance1 + distance2 + distance3;
    }
    long long distance4 = dijkstra(1, v2, graph);
    long long distance6 = dijkstra(v1, n, graph);
    if (distance4 == std::numeric_limits<long long>::max() ||
        distance2 == std::numeric_limits<long long>::max() ||
        distance6 == std::numeric_limits<long long>::max()) {
      result = -1;
    } else {
      if (result != -1 && result > distance4 + distance2 + distance6) {
        result = distance4 + distance2 + distance6;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, e;
  std::vector<std::vector<std::pair<size_t, long long>>> graph;
  size_t v1, v2;
  long long result;

  long long dijkstra(
      size_t start, size_t end,
      const std::vector<std::vector<std::pair<size_t, long long>>>& graph) {
    std::vector<long long> distance(n + 1,
                                    std::numeric_limits<long long>::max());
    std::priority_queue<std::pair<size_t, long long>,
                        std::vector<std::pair<size_t, long long>>,
                        std::greater<>>
        pq;

    distance[start] = 0;
    pq.push({start, 0});

    while (!pq.empty()) {
      auto [current_node, current_distance] = pq.top();
      pq.pop();

      if (current_distance > distance[current_node]) {
        continue;
      }

      for (const auto& [next_node, next_distance] : graph[current_node]) {
        if (current_distance + next_distance < distance[next_node]) {
          distance[next_node] = current_distance + next_distance;
          pq.push({next_node, distance[next_node]});
        }
      }
    }
    return distance[end];
  }
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SpecificShortestPath specific_shortest_path;
  specific_shortest_path.SetInputs();
  specific_shortest_path.Calculate();
  specific_shortest_path.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1504_SPECIFIC_SHORTEST_PATH_H_