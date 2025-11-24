#ifndef BOJ_27000_SRC_27982_CUBES_H_
#define BOJ_27000_SRC_27982_CUBES_H_

#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

class Cubes {
 public:
  void SetInputs() {
    std::cin >> n >> m;

    for (long long i = 0; i < m; ++i) {
      long long t1, t2, t3;
      std::cin >> t1 >> t2 >> t3;

      inputs.emplace_back(std::make_tuple(t1, t2, t3));
    }
  }

  void Calculate() {
    result = 0;

    std::vector<std::vector<long long>> indice = {
        {1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1}};
    for (auto& target : inputs) {
      long long x, y, z;
      std::tie(x, y, z) = target;

      if (x > n || x < 1) {
        continue;
      }
      if (y > n || y < 1) {
        continue;
      }
      if (z > n || z < 1) {
        continue;
      }

      bool is_satisfied = true;
      for (auto& index : indice) {
        auto eleemnt =
            std::make_tuple(x + index[0], y + index[1], z + index[2]);
        if (std::find(inputs.begin(), inputs.end(), eleemnt) == inputs.end()) {
          is_satisfied = false;
          break;
        }
      }

      if (is_satisfied) {
        ++result;
      }
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  long long n, m;
  std::vector<std::tuple<long long, long long, long long>> inputs;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Cubes cubes;
  cubes.SetInputs();
  cubes.Calculate();
  cubes.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27982_CUBES_H_
