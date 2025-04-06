#ifndef BOJ_11000_SRC_11657_TIME_MACHINE_H_
#define BOJ_11000_SRC_11657_TIME_MACHINE_H_

#include <iostream>
#include <limits>
#include <vector>

class TimeMachine {
 public:
  void SetInputs() {
    size_t m;
    std::cin >> n >> m;
    dist.resize(n + 1, std::numeric_limits<long long>::max());
    graph.resize(n + 1);
    result = 0;

    for (size_t i = 0; i < m; ++i) {
      size_t a, b;
      long long c;
      std::cin >> a >> b >> c;
      graph[a].push_back({b, c});
    }
  };

  void Calculate() {
    size_t start = 1;
    dist[start] = 0;

    for (size_t i = 1; i < n; ++i) {
      for (size_t u = start; u <= n; ++u) {
        for (auto [v, w] : graph[u]) {
          if (dist[u] != std::numeric_limits<long long>::max() &&
              dist[v] > dist[u] + w) {
            dist[v] = dist[u] + w;
          }
        }
      }
    }

    for (size_t u = start; u <= n; ++u) {
      for (auto [v, w] : graph[u]) {
        if (dist[u] != std::numeric_limits<long long>::max() &&
            dist[v] > dist[u] + w) {
          result = -1;
        }
      }
    }
  }

  void PrintResult() {
    if (result == -1) {
      std::cout << -1 << '\n';
    } else {
      for (size_t i = 2; i <= n; ++i) {
        if (dist[i] == std::numeric_limits<long long>::max()) {
          std::cout << -1 << '\n';
        } else {
          std::cout << dist[i] << '\n';
        }
      }
    }
  };

 private:
  size_t n;
  std::vector<std::vector<std::pair<size_t, long long>>> graph;
  std::vector<long long> dist;
  long long result = -1;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  TimeMachine time_machine;
  time_machine.SetInputs();
  time_machine.Calculate();
  time_machine.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11657_TIME_MACHINE_H_
