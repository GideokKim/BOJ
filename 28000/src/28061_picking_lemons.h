#ifndef BOJ_28000_SRC_28061_PICKING_LEMONS_H_
#define BOJ_28000_SRC_28061_PICKING_LEMONS_H_

#include <iostream>
#include <vector>

class PickingLemons {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    trees.resize(n);

    for (auto& tree : trees) {
      std::cin >> tree;
    }
  }

  void Calculate() {
    long long steps = static_cast<long long>(trees.size());
    result = -1;

    long long lemons;
    for (const auto target : trees) {
      lemons = target - steps;
      result = result > lemons ? result : lemons;
      --steps;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> trees;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  PickingLemons pickingLemons;
  pickingLemons.SetInputs();
  pickingLemons.Calculate();
  pickingLemons.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28061_PICKING_LEMONS_H_
