#ifndef BOJ_32000_SRC_32978_GALRIC_H_
#define BOJ_32000_SRC_32978_GALRIC_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Galric {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    ingradients.resize(n);
    used_ingradients.resize(n - 1);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> ingradients[i];
    }
    for (size_t i = 0; i < n - 1; ++i) {
      std::cin >> used_ingradients[i];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < ingradients.size(); ++i) {
      if (std::find(used_ingradients.begin(), used_ingradients.end(),
                    ingradients[i]) == used_ingradients.end()) {
        std::cout << ingradients[i];
        return;
      }
    }
  }

 private:
  std::vector<std::string> ingradients;
  std::vector<std::string> used_ingradients;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Galric galric;
  galric.SetInputs();
  galric.Calculate();
  galric.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32978_GALRIC_H_
