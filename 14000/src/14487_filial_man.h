#ifndef BOJ_14000_SRC_14487_FILIAL_MAN_H_
#define BOJ_14000_SRC_14487_FILIAL_MAN_H_

#include <algorithm>
#include <iostream>
#include <vector>

class FilialMan {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    costs.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> costs[i];
    }
  }

  void Calculate() {
    std::sort(costs.begin(), costs.end());

    result = 0;
    for (size_t i = 0; i < costs.size() - 1; ++i) {
      result += costs[i];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> costs;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  FilialMan filial_man;
  filial_man.SetInputs();
  filial_man.Calculate();
  filial_man.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14487_FILIAL_MAN_H_
