#ifndef BOJ_21000_SRC_22113_CY_AND_BUS_H_
#define BOJ_21000_SRC_22113_CY_AND_BUS_H_

#include <iostream>
#include <vector>

class CyAndBus {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    bus_list.resize(m);
    for (size_t j = 0; j < m; ++j) {
      std::cin >> bus_list[j];
    }
    cost_list.resize(n, std::vector<size_t>(n));

    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cin >> cost_list[i][j];
      }
    }
  }

  void Calculate() {
    result = 0;
    for (size_t index = 0; index < m - 1; ++index) {
      result += cost_list[bus_list[index] - 1][bus_list[index + 1] - 1];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<size_t> bus_list;
  std::vector<std::vector<size_t>> cost_list;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  CyAndBus cy_and_bus;
  cy_and_bus.SetInputs();
  cy_and_bus.Calculate();
  cy_and_bus.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_22113_CY_AND_BUS_H_
